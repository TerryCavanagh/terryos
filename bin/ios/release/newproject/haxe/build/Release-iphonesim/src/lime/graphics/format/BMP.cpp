#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
namespace lime{
namespace graphics{
namespace format{

Void BMP_obj::__construct()
{
	return null();
}

//BMP_obj::~BMP_obj() { }

Dynamic BMP_obj::__CreateEmpty() { return  new BMP_obj; }
hx::ObjectPtr< BMP_obj > BMP_obj::__new()
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

Dynamic BMP_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BMP_obj > _result_ = new BMP_obj();
	_result_->__construct();
	return _result_;}

::haxe::io::Bytes BMP_obj::encode( ::lime::graphics::Image image,::lime::graphics::format::BMPType type){
	HX_STACK_FRAME("lime.graphics.format.BMP","encode",0xdcae556c,"lime.graphics.format.BMP.encode","lime/graphics/format/BMP.hx",12,0xe68a6e47)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(14)
	bool tmp = image->get_premultiplied();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(14)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(14)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(14)
	if ((tmp1)){
		HX_STACK_LINE(14)
		int tmp3 = image->get_format();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(14)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(14)
		tmp2 = (tmp4 != (int)0);
	}
	else{
		HX_STACK_LINE(14)
		tmp2 = true;
	}
	HX_STACK_LINE(14)
	if ((tmp2)){
		HX_STACK_LINE(18)
		::lime::graphics::Image tmp3 = image->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(18)
		image = tmp3;
		HX_STACK_LINE(19)
		image->set_premultiplied(false);
		HX_STACK_LINE(20)
		image->set_format((int)0);
	}
	HX_STACK_LINE(24)
	bool tmp3 = (type == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(24)
	if ((tmp3)){
		HX_STACK_LINE(26)
		type = ::lime::graphics::format::BMPType_obj::RGB;
	}
	HX_STACK_LINE(30)
	int fileHeaderLength = (int)14;		HX_STACK_VAR(fileHeaderLength,"fileHeaderLength");
	HX_STACK_LINE(31)
	int infoHeaderLength = (int)40;		HX_STACK_VAR(infoHeaderLength,"infoHeaderLength");
	HX_STACK_LINE(32)
	int tmp4 = (image->width * image->height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(32)
	int tmp5 = (tmp4 * (int)4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(32)
	int pixelValuesLength = tmp5;		HX_STACK_VAR(pixelValuesLength,"pixelValuesLength");
	HX_STACK_LINE(34)
	bool tmp6 = (type != null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(34)
	if ((tmp6)){
		HX_STACK_LINE(34)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(38)
				infoHeaderLength = (int)108;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(42)
				fileHeaderLength = (int)0;
				HX_STACK_LINE(43)
				int tmp7 = (image->width * image->height);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(43)
				hx::AddEq(pixelValuesLength,tmp7);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(47)
				int tmp7 = (image->width * (int)3);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(47)
				int tmp8 = (image->width * (int)3);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(47)
				int tmp9 = hx::Mod(tmp8,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(47)
				int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(47)
				int tmp11 = (image->height * (int)3);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(47)
				int tmp12 = (tmp10 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(47)
				int tmp13 = (image->height * (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(47)
				int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(47)
				pixelValuesLength = tmp14;
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(53)
	int tmp7 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	int tmp8 = pixelValuesLength;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	int tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(53)
	::haxe::io::Bytes tmp10 = ::haxe::io::Bytes_obj::alloc(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(53)
	::haxe::io::Bytes data = tmp10;		HX_STACK_VAR(data,"data");
	HX_STACK_LINE(54)
	int position = (int)0;		HX_STACK_VAR(position,"position");
	HX_STACK_LINE(56)
	bool tmp11 = (fileHeaderLength > (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(56)
	if ((tmp11)){
		HX_STACK_LINE(58)
		{
			HX_STACK_LINE(58)
			int tmp12 = (position)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(58)
			int pos = tmp12;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(58)
			data->b[pos] = (int)66;
		}
		HX_STACK_LINE(59)
		{
			HX_STACK_LINE(59)
			int tmp12 = (position)++;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(59)
			int pos = tmp12;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(59)
			data->b[pos] = (int)77;
		}
		HX_STACK_LINE(60)
		{
			HX_STACK_LINE(60)
			int v = data->length;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				data->b[position] = tmp12;
			}
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				int tmp13 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				data->b[tmp12] = tmp13;
			}
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				int tmp13 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				data->b[tmp12] = tmp13;
			}
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(60)
				int tmp13 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(60)
				data->b[tmp12] = tmp13;
			}
		}
		HX_STACK_LINE(60)
		hx::AddEq(position,(int)4);
		HX_STACK_LINE(61)
		{
			HX_STACK_LINE(61)
			data->b[position] = (int)0;
			HX_STACK_LINE(61)
			{
				HX_STACK_LINE(61)
				int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(61)
				int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(61)
				data->b[tmp12] = tmp13;
			}
		}
		HX_STACK_LINE(61)
		hx::AddEq(position,(int)2);
		HX_STACK_LINE(62)
		{
			HX_STACK_LINE(62)
			data->b[position] = (int)0;
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(62)
				int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(62)
				data->b[tmp12] = tmp13;
			}
		}
		HX_STACK_LINE(62)
		hx::AddEq(position,(int)2);
		HX_STACK_LINE(63)
		{
			HX_STACK_LINE(63)
			int tmp12 = (fileHeaderLength + infoHeaderLength);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(63)
			int v = tmp12;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int tmp13 = v;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				data->b[position] = tmp13;
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int tmp13 = (position + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int tmp13 = (position + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int tmp13 = (position + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(63)
				int tmp14 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(63)
				data->b[tmp13] = tmp14;
			}
		}
		HX_STACK_LINE(63)
		hx::AddEq(position,(int)4);
	}
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp12 = infoHeaderLength;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			data->b[position] = tmp12;
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			int tmp13 = (int(infoHeaderLength) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			int tmp13 = (int(infoHeaderLength) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(67)
		{
			HX_STACK_LINE(67)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(67)
			int tmp13 = hx::UShr(infoHeaderLength,(int)24);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(67)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(67)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		int v = image->width;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int tmp12 = v;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			data->b[position] = tmp12;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			int tmp13 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			int tmp13 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(68)
		{
			HX_STACK_LINE(68)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(68)
			int tmp13 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(68)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(68)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(69)
	{
		HX_STACK_LINE(69)
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::ICO);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(69)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(69)
		if ((tmp12)){
			HX_STACK_LINE(69)
			tmp13 = (image->height * (int)2);
		}
		else{
			HX_STACK_LINE(69)
			tmp13 = image->height;
		}
		HX_STACK_LINE(69)
		int v = tmp13;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			data->b[position] = tmp14;
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp14 = (position + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			int tmp15 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			data->b[tmp14] = tmp15;
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp14 = (position + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			int tmp15 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			data->b[tmp14] = tmp15;
		}
		HX_STACK_LINE(69)
		{
			HX_STACK_LINE(69)
			int tmp14 = (position + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(69)
			int tmp15 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(69)
			data->b[tmp14] = tmp15;
		}
	}
	HX_STACK_LINE(69)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(70)
	{
		HX_STACK_LINE(70)
		data->b[position] = (int)1;
		HX_STACK_LINE(70)
		{
			HX_STACK_LINE(70)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(70)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(70)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(70)
	hx::AddEq(position,(int)2);
	HX_STACK_LINE(71)
	{
		HX_STACK_LINE(71)
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::RGB);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(71)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(71)
		if ((tmp12)){
			HX_STACK_LINE(71)
			tmp13 = (int)24;
		}
		else{
			HX_STACK_LINE(71)
			tmp13 = (int)32;
		}
		HX_STACK_LINE(71)
		int v = tmp13;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			data->b[position] = tmp14;
		}
		HX_STACK_LINE(71)
		{
			HX_STACK_LINE(71)
			int tmp14 = (position + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(71)
			int tmp15 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(71)
			data->b[tmp14] = tmp15;
		}
	}
	HX_STACK_LINE(71)
	hx::AddEq(position,(int)2);
	HX_STACK_LINE(72)
	{
		HX_STACK_LINE(72)
		bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(72)
		int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(72)
		if ((tmp12)){
			HX_STACK_LINE(72)
			tmp13 = (int)3;
		}
		else{
			HX_STACK_LINE(72)
			tmp13 = (int)0;
		}
		HX_STACK_LINE(72)
		int v = tmp13;		HX_STACK_VAR(v,"v");
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int tmp14 = v;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			data->b[position] = tmp14;
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int tmp14 = (position + (int)1);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			int tmp15 = (int(v) >> int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			data->b[tmp14] = tmp15;
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int tmp14 = (position + (int)2);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			int tmp15 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			data->b[tmp14] = tmp15;
		}
		HX_STACK_LINE(72)
		{
			HX_STACK_LINE(72)
			int tmp14 = (position + (int)3);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(72)
			int tmp15 = hx::UShr(v,(int)24);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(72)
			data->b[tmp14] = tmp15;
		}
	}
	HX_STACK_LINE(72)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int tmp12 = pixelValuesLength;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			data->b[position] = tmp12;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			int tmp13 = (int(pixelValuesLength) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			int tmp13 = (int(pixelValuesLength) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(73)
		{
			HX_STACK_LINE(73)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(73)
			int tmp13 = hx::UShr(pixelValuesLength,(int)24);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(73)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(73)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(74)
	{
		HX_STACK_LINE(74)
		data->b[position] = (int)11824;
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			int tmp13 = (int)46;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(74)
		{
			HX_STACK_LINE(74)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(74)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(74)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(74)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(75)
	{
		HX_STACK_LINE(75)
		data->b[position] = (int)11824;
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			int tmp13 = (int)46;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(75)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(75)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(75)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		data->b[position] = (int)0;
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(76)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(76)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(76)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		data->b[position] = (int)0;
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int tmp12 = (position + (int)1);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int tmp12 = (position + (int)2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			data->b[tmp12] = tmp13;
		}
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int tmp12 = (position + (int)3);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(77)
			int tmp13 = (int)0;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(77)
			data->b[tmp12] = tmp13;
		}
	}
	HX_STACK_LINE(77)
	hx::AddEq(position,(int)4);
	HX_STACK_LINE(79)
	bool tmp12 = (type == ::lime::graphics::format::BMPType_obj::BITFIELD);		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(79)
	if ((tmp12)){
		HX_STACK_LINE(81)
		{
			HX_STACK_LINE(81)
			data->b[position] = (int)16711680;
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				int tmp13 = (position + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				int tmp14 = (int)65280;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				int tmp13 = (position + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				int tmp14 = (int)255;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(81)
			{
				HX_STACK_LINE(81)
				int tmp13 = (position + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(81)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(81)
				data->b[tmp13] = tmp14;
			}
		}
		HX_STACK_LINE(81)
		hx::AddEq(position,(int)4);
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			data->b[position] = (int)65280;
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int tmp13 = (position + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				int tmp14 = (int)255;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int tmp13 = (position + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				int tmp13 = (position + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(82)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(82)
				data->b[tmp13] = tmp14;
			}
		}
		HX_STACK_LINE(82)
		hx::AddEq(position,(int)4);
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			data->b[position] = (int)255;
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int tmp13 = (position + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int tmp13 = (position + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(83)
			{
				HX_STACK_LINE(83)
				int tmp13 = (position + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(83)
				int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(83)
				data->b[tmp13] = tmp14;
			}
		}
		HX_STACK_LINE(83)
		hx::AddEq(position,(int)4);
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			data->b[position] = (int)-16777216;
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int tmp13 = (position + (int)1);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				int tmp14 = (int)-65536;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(84)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int tmp13 = (position + (int)2);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				int tmp14 = (int)-256;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(84)
				data->b[tmp13] = tmp14;
			}
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				int tmp13 = (position + (int)3);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(84)
				int tmp14 = (int)255;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(84)
				data->b[tmp13] = tmp14;
			}
		}
		HX_STACK_LINE(84)
		hx::AddEq(position,(int)4);
		HX_STACK_LINE(86)
		{
			HX_STACK_LINE(86)
			int tmp13 = (position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(86)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(86)
			data->b[pos] = (int)32;
		}
		HX_STACK_LINE(87)
		{
			HX_STACK_LINE(87)
			int tmp13 = (position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(87)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(87)
			data->b[pos] = (int)110;
		}
		HX_STACK_LINE(88)
		{
			HX_STACK_LINE(88)
			int tmp13 = (position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(88)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(88)
			data->b[pos] = (int)105;
		}
		HX_STACK_LINE(89)
		{
			HX_STACK_LINE(89)
			int tmp13 = (position)++;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(89)
			int pos = tmp13;		HX_STACK_VAR(pos,"pos");
			HX_STACK_LINE(89)
			data->b[pos] = (int)87;
		}
		HX_STACK_LINE(91)
		{
			HX_STACK_LINE(91)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(91)
			while((true)){
				HX_STACK_LINE(91)
				bool tmp13 = (_g < (int)48);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(91)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(91)
				if ((tmp14)){
					HX_STACK_LINE(91)
					break;
				}
				HX_STACK_LINE(91)
				int tmp15 = (_g)++;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(91)
				int i = tmp15;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(93)
				{
					HX_STACK_LINE(93)
					int tmp16 = (position)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(93)
					int pos = tmp16;		HX_STACK_VAR(pos,"pos");
					HX_STACK_LINE(93)
					data->b[pos] = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(99)
	::lime::math::Rectangle tmp13 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(99)
	::haxe::io::Bytes tmp14 = image->getPixels(tmp13,(int)1);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(99)
	::haxe::io::Bytes pixels = tmp14;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(100)
	int readPosition = (int)0;		HX_STACK_VAR(readPosition,"readPosition");
	HX_STACK_LINE(101)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(101)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(101)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(101)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(103)
	bool tmp15 = (type != null());		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(103)
	if ((tmp15)){
		HX_STACK_LINE(103)
		switch( (int)(type->__Index())){
			case (int)1: {
				HX_STACK_LINE(107)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(107)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(107)
				while((true)){
					HX_STACK_LINE(107)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(107)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(107)
					if ((tmp17)){
						HX_STACK_LINE(107)
						break;
					}
					HX_STACK_LINE(107)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(107)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(109)
					int tmp19 = (image->height - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(109)
					int tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(109)
					int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(109)
					int tmp22 = (tmp21 * (int)4);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(109)
					int tmp23 = image->width;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(109)
					int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(109)
					readPosition = tmp24;
					HX_STACK_LINE(111)
					{
						HX_STACK_LINE(111)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(111)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(111)
						while((true)){
							HX_STACK_LINE(111)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(111)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(111)
							if ((tmp26)){
								HX_STACK_LINE(111)
								break;
							}
							HX_STACK_LINE(111)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(111)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(113)
							int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(113)
							{
								HX_STACK_LINE(113)
								int tmp29 = (readPosition)++;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(113)
								int pos = tmp29;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(113)
								tmp28 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(113)
							a = tmp28;
							HX_STACK_LINE(114)
							int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(114)
							{
								HX_STACK_LINE(114)
								int tmp30 = (readPosition)++;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(114)
								int pos = tmp30;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(114)
								tmp29 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(114)
							r = tmp29;
							HX_STACK_LINE(115)
							int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(115)
							{
								HX_STACK_LINE(115)
								int tmp31 = (readPosition)++;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(115)
								int pos = tmp31;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(115)
								tmp30 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(115)
							g = tmp30;
							HX_STACK_LINE(116)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(116)
							{
								HX_STACK_LINE(116)
								int tmp32 = (readPosition)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(116)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(116)
								tmp31 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(116)
							b = tmp31;
							HX_STACK_LINE(118)
							{
								HX_STACK_LINE(118)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(118)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(118)
								int tmp33 = b;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(118)
								data->b[pos] = tmp33;
							}
							HX_STACK_LINE(119)
							{
								HX_STACK_LINE(119)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(119)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(119)
								int tmp33 = g;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(119)
								data->b[pos] = tmp33;
							}
							HX_STACK_LINE(120)
							{
								HX_STACK_LINE(120)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(120)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(120)
								int tmp33 = r;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(120)
								data->b[pos] = tmp33;
							}
							HX_STACK_LINE(121)
							{
								HX_STACK_LINE(121)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(121)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(121)
								int tmp33 = a;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(121)
								data->b[pos] = tmp33;
							}
						}
					}
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(129)
				int tmp16 = (image->width * image->height);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(129)
				::haxe::io::Bytes tmp17 = ::haxe::io::Bytes_obj::alloc(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(129)
				::haxe::io::Bytes andMask = tmp17;		HX_STACK_VAR(andMask,"andMask");
				HX_STACK_LINE(130)
				int maskPosition = (int)0;		HX_STACK_VAR(maskPosition,"maskPosition");
				HX_STACK_LINE(132)
				{
					HX_STACK_LINE(132)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(132)
					int _g = image->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(132)
					while((true)){
						HX_STACK_LINE(132)
						bool tmp18 = (_g1 < _g);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(132)
						bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(132)
						if ((tmp19)){
							HX_STACK_LINE(132)
							break;
						}
						HX_STACK_LINE(132)
						int tmp20 = (_g1)++;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(132)
						int y = tmp20;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(134)
						int tmp21 = (image->height - (int)1);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(134)
						int tmp22 = y;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(134)
						int tmp23 = (tmp21 - tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(134)
						int tmp24 = (tmp23 * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(134)
						int tmp25 = image->width;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(134)
						int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(134)
						readPosition = tmp26;
						HX_STACK_LINE(136)
						{
							HX_STACK_LINE(136)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(136)
							int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(136)
							while((true)){
								HX_STACK_LINE(136)
								bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(136)
								bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(136)
								if ((tmp28)){
									HX_STACK_LINE(136)
									break;
								}
								HX_STACK_LINE(136)
								int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(136)
								int x = tmp29;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(138)
								int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(138)
								{
									HX_STACK_LINE(138)
									int tmp31 = (readPosition)++;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(138)
									int pos = tmp31;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(138)
									tmp30 = pixels->b->__get(pos);
								}
								HX_STACK_LINE(138)
								a = tmp30;
								HX_STACK_LINE(139)
								int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(139)
								{
									HX_STACK_LINE(139)
									int tmp32 = (readPosition)++;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(139)
									int pos = tmp32;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(139)
									tmp31 = pixels->b->__get(pos);
								}
								HX_STACK_LINE(139)
								r = tmp31;
								HX_STACK_LINE(140)
								int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(140)
								{
									HX_STACK_LINE(140)
									int tmp33 = (readPosition)++;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(140)
									int pos = tmp33;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(140)
									tmp32 = pixels->b->__get(pos);
								}
								HX_STACK_LINE(140)
								g = tmp32;
								HX_STACK_LINE(141)
								int tmp33;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(141)
								{
									HX_STACK_LINE(141)
									int tmp34 = (readPosition)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(141)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(141)
									tmp33 = pixels->b->__get(pos);
								}
								HX_STACK_LINE(141)
								b = tmp33;
								HX_STACK_LINE(143)
								{
									HX_STACK_LINE(143)
									int tmp34 = (position)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(143)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(143)
									int tmp35 = b;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(143)
									data->b[pos] = tmp35;
								}
								HX_STACK_LINE(144)
								{
									HX_STACK_LINE(144)
									int tmp34 = (position)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(144)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(144)
									int tmp35 = g;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(144)
									data->b[pos] = tmp35;
								}
								HX_STACK_LINE(145)
								{
									HX_STACK_LINE(145)
									int tmp34 = (position)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(145)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(145)
									int tmp35 = r;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(145)
									data->b[pos] = tmp35;
								}
								HX_STACK_LINE(146)
								{
									HX_STACK_LINE(146)
									int tmp34 = (position)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(146)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(146)
									int tmp35 = a;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(146)
									data->b[pos] = tmp35;
								}
								HX_STACK_LINE(154)
								{
									HX_STACK_LINE(154)
									int tmp34 = (maskPosition)++;		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(154)
									int pos = tmp34;		HX_STACK_VAR(pos,"pos");
									HX_STACK_LINE(154)
									andMask->b[pos] = (int)0;
								}
							}
						}
					}
				}
				HX_STACK_LINE(162)
				int tmp18 = position;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(162)
				::haxe::io::Bytes tmp19 = andMask;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(162)
				int tmp20 = (image->width * image->height);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(162)
				data->blit(tmp18,tmp19,(int)0,tmp20);
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(166)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(166)
				int _g = image->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(166)
				while((true)){
					HX_STACK_LINE(166)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(166)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(166)
					if ((tmp17)){
						HX_STACK_LINE(166)
						break;
					}
					HX_STACK_LINE(166)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(166)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(168)
					int tmp19 = (image->height - (int)1);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(168)
					int tmp20 = y;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(168)
					int tmp21 = (tmp19 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(168)
					int tmp22 = (tmp21 * (int)4);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(168)
					int tmp23 = image->width;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(168)
					int tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(168)
					readPosition = tmp24;
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(170)
						int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(170)
						while((true)){
							HX_STACK_LINE(170)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(170)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(170)
							if ((tmp26)){
								HX_STACK_LINE(170)
								break;
							}
							HX_STACK_LINE(170)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(170)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(172)
							int tmp28;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(172)
							{
								HX_STACK_LINE(172)
								int tmp29 = (readPosition)++;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(172)
								int pos = tmp29;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(172)
								tmp28 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(172)
							a = tmp28;
							HX_STACK_LINE(173)
							int tmp29;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(173)
							{
								HX_STACK_LINE(173)
								int tmp30 = (readPosition)++;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(173)
								int pos = tmp30;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(173)
								tmp29 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(173)
							r = tmp29;
							HX_STACK_LINE(174)
							int tmp30;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(174)
							{
								HX_STACK_LINE(174)
								int tmp31 = (readPosition)++;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(174)
								int pos = tmp31;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(174)
								tmp30 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(174)
							g = tmp30;
							HX_STACK_LINE(175)
							int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(175)
							{
								HX_STACK_LINE(175)
								int tmp32 = (readPosition)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(175)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(175)
								tmp31 = pixels->b->__get(pos);
							}
							HX_STACK_LINE(175)
							b = tmp31;
							HX_STACK_LINE(177)
							{
								HX_STACK_LINE(177)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(177)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(177)
								int tmp33 = b;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(177)
								data->b[pos] = tmp33;
							}
							HX_STACK_LINE(178)
							{
								HX_STACK_LINE(178)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(178)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(178)
								int tmp33 = g;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(178)
								data->b[pos] = tmp33;
							}
							HX_STACK_LINE(179)
							{
								HX_STACK_LINE(179)
								int tmp32 = (position)++;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(179)
								int pos = tmp32;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(179)
								int tmp33 = r;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(179)
								data->b[pos] = tmp33;
							}
						}
					}
					HX_STACK_LINE(183)
					{
						HX_STACK_LINE(183)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(183)
						int tmp25 = (image->width * (int)3);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(183)
						int tmp26 = hx::Mod(tmp25,(int)4);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(183)
						int _g2 = tmp26;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(183)
						while((true)){
							HX_STACK_LINE(183)
							bool tmp27 = (_g3 < _g2);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(183)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(183)
							if ((tmp28)){
								HX_STACK_LINE(183)
								break;
							}
							HX_STACK_LINE(183)
							int tmp29 = (_g3)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(183)
							int i = tmp29;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(185)
							{
								HX_STACK_LINE(185)
								int tmp30 = (position)++;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(185)
								int pos = tmp30;		HX_STACK_VAR(pos,"pos");
								HX_STACK_LINE(185)
								data->b[pos] = (int)0;
							}
						}
					}
				}
			}
			;break;
			default: {
			}
		}
	}
	else{
	}
	HX_STACK_LINE(195)
	::haxe::io::Bytes tmp16 = data;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(195)
	return tmp16;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BMP_obj,encode,return )


BMP_obj::BMP_obj()
{
}

bool BMP_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BMP_obj::__mClass,"__mClass");
};

#endif

hx::Class BMP_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	::String(null()) };

void BMP_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.format.BMP","\x58","\xee","\xa1","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMP_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< BMP_obj >;
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

} // end namespace lime
} // end namespace graphics
} // end namespace format
