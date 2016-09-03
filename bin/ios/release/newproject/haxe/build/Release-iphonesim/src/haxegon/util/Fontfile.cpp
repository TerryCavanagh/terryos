#include <hxcpp.h>

#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_haxegon_bitmapFont_BitmapFont
#include <haxegon/bitmapFont/BitmapFont.h>
#endif
#ifndef INCLUDED_haxegon_util_Fontfile
#include <haxegon/util/Fontfile.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_text_Font
#include <openfl/text/Font.h>
#endif
namespace haxegon{
namespace util{

Void Fontfile_obj::__construct(::String _file)
{
HX_STACK_FRAME("haxegon.util.Fontfile","new",0x115d5f3b,"haxegon.util.Fontfile.new","haxegon/util/Fontfile.hx",9,0x8c86e035)
HX_STACK_THIS(this)
HX_STACK_ARG(_file,"_file")
{
	HX_STACK_LINE(10)
	::String tmp = (HX_HCSTRING("data/fonts/","\x70","\x04","\xfa","\x11") + _file);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(10)
	::String tmp1 = (tmp + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(10)
	::String tmp2 = _file;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(10)
	::String tmp3 = (tmp1 + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(10)
	::String tmp4 = (tmp3 + HX_HCSTRING(".fnt","\xbe","\x96","\xb5","\x1e"));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(10)
	bool tmp5 = ::openfl::Assets_obj::exists(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(10)
	if ((tmp5)){
		HX_STACK_LINE(11)
		this->type = HX_HCSTRING("bitmap","\xef","\x0f","\x0c","\xf1");
		HX_STACK_LINE(12)
		::String tmp6 = (HX_HCSTRING("data/fonts/","\x70","\x04","\xfa","\x11") + _file);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(12)
		::String tmp7 = (tmp6 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(12)
		::String tmp8 = _file;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(12)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(12)
		::String tmp10 = (tmp9 + HX_HCSTRING(".fnt","\xbe","\x96","\xb5","\x1e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(12)
		::String tmp11 = ::openfl::Assets_obj::getText(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(12)
		::Xml tmp12 = ::Xml_obj::parse(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(12)
		this->fontxml = tmp12;
		HX_STACK_LINE(13)
		::String tmp13 = (HX_HCSTRING("data/fonts/","\x70","\x04","\xfa","\x11") + _file);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(13)
		::String tmp14 = (tmp13 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(13)
		::String tmp15 = _file;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(13)
		::String tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(13)
		::String tmp17 = (tmp16 + HX_HCSTRING("_0.png","\xac","\x4c","\xe0","\xbd"));		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(13)
		::openfl::display::BitmapData tmp18 = ::openfl::Assets_obj::getBitmapData(tmp17,null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(13)
		::openfl::display::BitmapData tempfontimage = tmp18;		HX_STACK_VAR(tempfontimage,"tempfontimage");
		HX_STACK_LINE(14)
		::openfl::display::BitmapData tmp19 = ::openfl::display::BitmapData_obj::__new(tempfontimage->width,tempfontimage->height,true,(int)0);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(14)
		this->fontimage = tmp19;
		HX_STACK_LINE(15)
		{
			HX_STACK_LINE(15)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(15)
			int _g = tempfontimage->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			while((true)){
				HX_STACK_LINE(15)
				bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(15)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(15)
				if ((tmp21)){
					HX_STACK_LINE(15)
					break;
				}
				HX_STACK_LINE(15)
				int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(15)
				int j = tmp22;		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(16)
				{
					HX_STACK_LINE(16)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(16)
					int _g2 = tempfontimage->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(16)
					while((true)){
						HX_STACK_LINE(16)
						bool tmp23 = (_g3 < _g2);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(16)
						bool tmp24 = !(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(16)
						if ((tmp24)){
							HX_STACK_LINE(16)
							break;
						}
						HX_STACK_LINE(16)
						int tmp25 = (_g3)++;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(16)
						int i = tmp25;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(17)
						int tmp26 = i;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(17)
						int tmp27 = j;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(17)
						int tmp28 = tempfontimage->getPixel(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(17)
						int cpixel = tmp28;		HX_STACK_VAR(cpixel,"cpixel");
						HX_STACK_LINE(18)
						bool tmp29 = (cpixel != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(18)
						bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(18)
						if ((tmp29)){
							HX_STACK_LINE(18)
							tmp30 = (cpixel != (int)0);
						}
						else{
							HX_STACK_LINE(18)
							tmp30 = false;
						}
						HX_STACK_LINE(18)
						if ((tmp30)){
							HX_STACK_LINE(19)
							::openfl::display::BitmapData tmp31 = this->fontimage;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(19)
							int tmp32 = i;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(19)
							int tmp33 = j;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(19)
							tmp31->setPixel32(tmp32,tmp33,(int)-1);
						}
					}
				}
			}
		}
		HX_STACK_LINE(24)
		::openfl::display::BitmapData tmp20 = this->fontimage;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(24)
		::Xml tmp21 = this->fontxml;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(24)
		::haxegon::bitmapFont::BitmapFont tmp22 = ::haxegon::bitmapFont::BitmapFont_obj::fromAngelCode(tmp20,tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(24)
		this->bitmapfont = tmp22;
		HX_STACK_LINE(25)
		this->_typename = _file;
	}
	else{
		HX_STACK_LINE(27)
		this->type = HX_HCSTRING("ttf","\xe6","\x6a","\x58","\x00");
		HX_STACK_LINE(28)
		::String tmp6 = (HX_HCSTRING("data/fonts/","\x70","\x04","\xfa","\x11") + _file);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(28)
		::String tmp7 = (tmp6 + HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(28)
		::String tmp8 = _file;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(28)
		::String tmp9 = (tmp7 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(28)
		::String tmp10 = (tmp9 + HX_HCSTRING(".ttf","\x78","\x3b","\xc0","\x1e"));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(28)
		this->filename = tmp10;
		HX_STACK_LINE(29)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(30)
			::String tmp11 = this->filename;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(30)
			::openfl::text::Font tmp12 = ::openfl::Assets_obj::getFont(tmp11,null());		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(30)
			this->font = tmp12;
			HX_STACK_LINE(31)
			::openfl::text::Font tmp13 = this->font;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(31)
			this->_typename = tmp13->name;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(33)
					::String tmp11 = (HX_HCSTRING("ERROR: Cannot set font to \"","\xc1","\x01","\x19","\x8a") + _file);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(33)
					::String tmp12 = (tmp11 + HX_HCSTRING("\", no TTF or Bitmap Font found.","\xa6","\x55","\xf4","\x68"));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(33)
					HX_STACK_DO_THROW(tmp12);
				}
			}
		}
	}
}
;
	return null();
}

//Fontfile_obj::~Fontfile_obj() { }

Dynamic Fontfile_obj::__CreateEmpty() { return  new Fontfile_obj; }
hx::ObjectPtr< Fontfile_obj > Fontfile_obj::__new(::String _file)
{  hx::ObjectPtr< Fontfile_obj > _result_ = new Fontfile_obj();
	_result_->__construct(_file);
	return _result_;}

Dynamic Fontfile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Fontfile_obj > _result_ = new Fontfile_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}


Fontfile_obj::Fontfile_obj()
{
}

void Fontfile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Fontfile);
	HX_MARK_MEMBER_NAME(_typename,"typename");
	HX_MARK_MEMBER_NAME(bitmapfont,"bitmapfont");
	HX_MARK_MEMBER_NAME(fontxml,"fontxml");
	HX_MARK_MEMBER_NAME(fontimage,"fontimage");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(filename,"filename");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void Fontfile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_typename,"typename");
	HX_VISIT_MEMBER_NAME(bitmapfont,"bitmapfont");
	HX_VISIT_MEMBER_NAME(fontxml,"fontxml");
	HX_VISIT_MEMBER_NAME(fontimage,"fontimage");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(filename,"filename");
	HX_VISIT_MEMBER_NAME(type,"type");
}

Dynamic Fontfile_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return font; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fontxml") ) { return fontxml; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"typename") ) { return _typename; }
		if (HX_FIELD_EQ(inName,"filename") ) { return filename; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontimage") ) { return fontimage; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapfont") ) { return bitmapfont; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Fontfile_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast< ::openfl::text::Font >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fontxml") ) { fontxml=inValue.Cast< ::Xml >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"typename") ) { _typename=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filename") ) { filename=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontimage") ) { fontimage=inValue.Cast< ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapfont") ) { bitmapfont=inValue.Cast< ::haxegon::bitmapFont::BitmapFont >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Fontfile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("typename","\x05","\x4a","\xf1","\xca"));
	outFields->push(HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"));
	outFields->push(HX_HCSTRING("fontxml","\x68","\x5b","\x46","\x96"));
	outFields->push(HX_HCSTRING("fontimage","\x2c","\x53","\x17","\xd6"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Fontfile_obj,_typename),HX_HCSTRING("typename","\x05","\x4a","\xf1","\xca")},
	{hx::fsObject /*::haxegon::bitmapFont::BitmapFont*/ ,(int)offsetof(Fontfile_obj,bitmapfont),HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a")},
	{hx::fsObject /*::Xml*/ ,(int)offsetof(Fontfile_obj,fontxml),HX_HCSTRING("fontxml","\x68","\x5b","\x46","\x96")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Fontfile_obj,fontimage),HX_HCSTRING("fontimage","\x2c","\x53","\x17","\xd6")},
	{hx::fsObject /*::openfl::text::Font*/ ,(int)offsetof(Fontfile_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsString,(int)offsetof(Fontfile_obj,filename),HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77")},
	{hx::fsString,(int)offsetof(Fontfile_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("typename","\x05","\x4a","\xf1","\xca"),
	HX_HCSTRING("bitmapfont","\x3e","\x91","\x44","\x4a"),
	HX_HCSTRING("fontxml","\x68","\x5b","\x46","\x96"),
	HX_HCSTRING("fontimage","\x2c","\x53","\x17","\xd6"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("filename","\xc7","\x2e","\x6a","\x77"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Fontfile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Fontfile_obj::__mClass,"__mClass");
};

#endif

hx::Class Fontfile_obj::__mClass;

void Fontfile_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.util.Fontfile","\xc9","\xa5","\x60","\xe9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Fontfile_obj >;
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
} // end namespace util
