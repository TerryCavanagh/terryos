#include <hxcpp.h>

#ifndef INCLUDED_InterpExtended
#include <InterpExtended.h>
#endif
#ifndef INCLUDED_Script
#include <Script.h>
#endif
#ifndef INCLUDED_TerryOSGfx
#include <TerryOSGfx.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Data
#include <haxegon/Data.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_S
#include <haxegon/S.h>
#endif
#ifndef INCLUDED_hscript_Interp
#include <hscript/Interp.h>
#endif
#ifndef INCLUDED_hscript_Parser
#include <hscript/Parser.h>
#endif
#ifndef INCLUDED_lime_AssetLibrary
#include <lime/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif

Void Script_obj::__construct()
{
	return null();
}

//Script_obj::~Script_obj() { }

Dynamic Script_obj::__CreateEmpty() { return  new Script_obj; }
hx::ObjectPtr< Script_obj > Script_obj::__new()
{  hx::ObjectPtr< Script_obj > _result_ = new Script_obj();
	_result_->__construct();
	return _result_;}

Dynamic Script_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Script_obj > _result_ = new Script_obj();
	_result_->__construct();
	return _result_;}

Void Script_obj::init( ){
{
		HX_STACK_FRAME("Script","init",0xdf0e6c33,"Script.init","Script.hx",8,0xcc7fed73)
		HX_STACK_LINE(9)
		::Script_obj::runningscript = false;
		HX_STACK_LINE(10)
		::Script_obj::scriptdelay = (int)0;
		HX_STACK_LINE(11)
		::Script_obj::returnvalue = null();
		HX_STACK_LINE(12)
		::Script_obj::stopping = false;
		HX_STACK_LINE(13)
		::Script_obj::savedprogram = Array_obj< ::String >::__new().Add(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		HX_STACK_LINE(14)
		::Script_obj::activescript = HX_HCSTRING("","\x00","\x00","\x00","\x00");
		HX_STACK_LINE(16)
		::hscript::Parser tmp = ::hscript::Parser_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(16)
		::Script_obj::parser = tmp;
		HX_STACK_LINE(17)
		::hscript::Parser tmp1 = ::Script_obj::parser;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(17)
		tmp1->allowTypes = false;
		HX_STACK_LINE(18)
		::InterpExtended tmp2 = ::InterpExtended_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		::Script_obj::interpreter = tmp2;
		HX_STACK_LINE(20)
		::Script_obj::loadapps();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Script_obj,init,(void))

Void Script_obj::loadapps( ){
{
		HX_STACK_FRAME("Script","loadapps",0xce7fb47b,"Script.loadapps","Script.hx",23,0xcc7fed73)
		HX_STACK_LINE(24)
		::haxe::ds::StringMap tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			::haxe::ds::StringMap tmp1 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(24)
			::haxe::ds::StringMap tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(24)
			tmp = tmp2;
		}
		HX_STACK_LINE(24)
		::Script_obj::applist = tmp;
		HX_STACK_LINE(25)
		{
			HX_STACK_LINE(25)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(25)
			::lime::AssetLibrary tmp1 = ::openfl::Assets_obj::getLibrary(HX_HCSTRING("default","\xc1","\xd8","\xc3","\x9b"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(25)
			Array< ::String > _g1 = tmp1->list(HX_HCSTRING("TEXT","\xad","\x94","\xba","\x37"));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(25)
			while((true)){
				HX_STACK_LINE(25)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(25)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(25)
				if ((tmp3)){
					HX_STACK_LINE(25)
					break;
				}
				HX_STACK_LINE(25)
				::String tmp4 = _g1->__get(_g);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(25)
				::String t = tmp4;		HX_STACK_VAR(t,"t");
				HX_STACK_LINE(25)
				++(_g);
				HX_STACK_LINE(26)
				int tmp5 = t.indexOf(HX_HCSTRING("data/apps/","\x58","\xd2","\x0e","\xa6"),null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(26)
				bool tmp6 = (tmp5 != (int)-1);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(26)
				if ((tmp6)){
					HX_STACK_LINE(27)
					::String tmp7 = t;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(27)
					::String tmp8 = ::haxegon::S_obj::getlastbranch(tmp7,HX_HCSTRING("/","\x2f","\x00","\x00","\x00"));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(27)
					::String tmp9 = ::haxegon::S_obj::getroot(tmp8,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(27)
					::String filename = tmp9;		HX_STACK_VAR(filename,"filename");
					HX_STACK_LINE(28)
					::String tmp10 = t;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(28)
					::String tmp11 = ::haxegon::S_obj::getroot(tmp10,HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(28)
					::String tmp12 = tmp11.substr((int)10,null());		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(28)
					::String tmp13 = ::haxegon::Data_obj::loadtext(tmp12)->join(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(28)
					::String tmp14 = ::haxegon::S_obj::replacechar(tmp13,HX_HCSTRING("\r","\x0d","\x00","\x00","\x00"),null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(28)
					::String filecontents = tmp14;		HX_STACK_VAR(filecontents,"filecontents");
					HX_STACK_LINE(29)
					::haxe::ds::StringMap tmp15 = ::Script_obj::applist;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(29)
					::String tmp16 = filename;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(29)
					::String tmp17 = filecontents;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(29)
					tmp15->set(tmp16,tmp17);
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Script_obj,loadapps,(void))

bool Script_obj::loadscript( ::String scriptname){
	HX_STACK_FRAME("Script","loadscript",0xecb43614,"Script.loadscript","Script.hx",34,0xcc7fed73)
	HX_STACK_ARG(scriptname,"scriptname")
	HX_STACK_LINE(35)
	::haxe::ds::StringMap tmp = ::Script_obj::applist;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(35)
	::String tmp1 = scriptname;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	::String tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(35)
	::Script_obj::activescript = tmp2;
	HX_STACK_LINE(36)
	::Script_obj::returnvalue = null();
	HX_STACK_LINE(37)
	::InterpExtended tmp3 = ::InterpExtended_obj::__new();		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(37)
	::Script_obj::interpreter = tmp3;
	HX_STACK_LINE(40)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(41)
		::hscript::Parser tmp4 = ::Script_obj::parser;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::String tmp5 = ::Script_obj::activescript;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		Dynamic tmp6 = tmp4->parseString(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		::Script_obj::parsedscript = tmp6;
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(43)
				HX_STACK_DO_THROW(HX_HCSTRING("Critical: error in cutscene script.","\xab","\xcc","\x56","\xd6"));
				HX_STACK_LINE(44)
				return false;
			}
		}
	}
	HX_STACK_LINE(47)
	bool tmp4 = ::Script_obj::beginparsedscript();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(47)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,loadscript,return )

bool Script_obj::beginparsedscript( ){
	HX_STACK_FRAME("Script","beginparsedscript",0x26217642,"Script.beginparsedscript","Script.hx",50,0xcc7fed73)
	HX_STACK_LINE(51)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(52)
		::hscript::Interp tmp = ::Script_obj::interpreter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		Dynamic tmp1 = ::Script_obj::parsedscript;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(52)
		tmp->execute(tmp1);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(54)
				HX_STACK_DO_THROW(HX_HCSTRING("Critical error","\xa7","\xb9","\x08","\x47"));
				HX_STACK_LINE(55)
				return false;
			}
		}
	}
	HX_STACK_LINE(58)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Script_obj,beginparsedscript,return )

Void Script_obj::runapp( ::String scriptname){
{
		HX_STACK_FRAME("Script","runapp",0x34ec7619,"Script.runapp","Script.hx",61,0xcc7fed73)
		HX_STACK_ARG(scriptname,"scriptname")
		HX_STACK_LINE(62)
		::String tmp = scriptname;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(62)
		::Script_obj::loadscript(tmp);
		HX_STACK_LINE(64)
		::Script_obj::resetvariables();
		HX_STACK_LINE(66)
		Dynamic tmp1 = ::Script_obj::initfunction;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(66)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(66)
		if ((tmp2)){
			HX_STACK_LINE(67)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(68)
				::Script_obj::initfunction();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(70)
						HX_STACK_DO_THROW(HX_HCSTRING("Critical: error in cutscene script.","\xab","\xcc","\x56","\xd6"));
					}
				}
			}
		}
		HX_STACK_LINE(75)
		::Script_obj::stopping = false;
		HX_STACK_LINE(76)
		::Script_obj::runningscript = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Script_obj,runapp,(void))

Void Script_obj::update( ){
{
		HX_STACK_FRAME("Script","update",0x806185ec,"Script.update","Script.hx",79,0xcc7fed73)
		HX_STACK_LINE(80)
		bool tmp = ::Script_obj::runningscript;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(80)
		if ((tmp)){
			HX_STACK_LINE(81)
			try
			{
			HX_STACK_CATCHABLE(Dynamic, 0);
			{
				HX_STACK_LINE(82)
				::Script_obj::updatefunction();
			}
			}
			catch(Dynamic __e){
				{
					HX_STACK_BEGIN_CATCH
					Dynamic e = __e;{
						HX_STACK_LINE(85)
						HX_STACK_DO_THROW(HX_HCSTRING("Critical error.","\xa7","\xb8","\x99","\xe0"));
					}
				}
			}
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Script_obj,update,(void))

Void Script_obj::resetvariables( ){
{
		HX_STACK_FRAME("Script","resetvariables",0x0b0381eb,"Script.resetvariables","Script.hx",90,0xcc7fed73)
		HX_STACK_LINE(91)
		::hscript::Interp tmp = ::Script_obj::interpreter;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(91)
		Dynamic tmp1 = tmp->variables->get(HX_HCSTRING("new","\x60","\xd0","\x53","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(91)
		::Script_obj::initfunction = tmp1;
		HX_STACK_LINE(92)
		::hscript::Interp tmp2 = ::Script_obj::interpreter;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(92)
		Dynamic tmp3 = tmp2->variables->get(HX_HCSTRING("update","\x09","\x86","\x05","\x87"));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(92)
		::Script_obj::updatefunction = tmp3;
		HX_STACK_LINE(95)
		::hscript::Interp tmp4 = ::Script_obj::interpreter;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		Dynamic tmp5 = ::TerryOSGfx_obj::fillbox_dyn();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(95)
		tmp4->variables->set(HX_HCSTRING("fillbox","\x68","\xa3","\xfa","\x03"),tmp5);
		HX_STACK_LINE(96)
		::hscript::Interp tmp6 = ::Script_obj::interpreter;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(96)
		Dynamic tmp7 = ::TerryOSGfx_obj::fillcircle_dyn();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(96)
		tmp6->variables->set(HX_HCSTRING("fillcircle","\xd3","\x84","\x13","\x25"),tmp7);
		HX_STACK_LINE(97)
		::hscript::Interp tmp8 = ::Script_obj::interpreter;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(97)
		int tmp9 = ::haxegon::Gfx_obj::screenwidth;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(97)
		tmp8->variables->set(HX_HCSTRING("screenwidth","\x1a","\x93","\xba","\xee"),tmp9);
		HX_STACK_LINE(98)
		::hscript::Interp tmp10 = ::Script_obj::interpreter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(98)
		int tmp11 = ::haxegon::Gfx_obj::screenheight;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(98)
		tmp10->variables->set(HX_HCSTRING("screenheight","\x53","\x9c","\xd5","\xaa"),tmp11);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Script_obj,resetvariables,(void))

bool Script_obj::runningscript;

int Script_obj::scriptdelay;

bool Script_obj::stopping;

Array< ::String > Script_obj::savedprogram;

::String Script_obj::activescript;

::haxe::ds::StringMap Script_obj::applist;

Dynamic Script_obj::parsedscript;

::hscript::Parser Script_obj::parser;

::hscript::Interp Script_obj::interpreter;

Dynamic Script_obj::returnvalue;

Dynamic Script_obj::initfunction;

Dynamic Script_obj::updatefunction;


Script_obj::Script_obj()
{
}

bool Script_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"runapp") ) { outValue = runapp_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"parser") ) { outValue = parser; return true;  }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"applist") ) { outValue = applist; return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadapps") ) { outValue = loadapps_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"stopping") ) { outValue = stopping; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"loadscript") ) { outValue = loadscript_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scriptdelay") ) { outValue = scriptdelay; return true;  }
		if (HX_FIELD_EQ(inName,"interpreter") ) { outValue = interpreter; return true;  }
		if (HX_FIELD_EQ(inName,"returnvalue") ) { outValue = returnvalue; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"savedprogram") ) { outValue = savedprogram; return true;  }
		if (HX_FIELD_EQ(inName,"activescript") ) { outValue = activescript; return true;  }
		if (HX_FIELD_EQ(inName,"parsedscript") ) { outValue = parsedscript; return true;  }
		if (HX_FIELD_EQ(inName,"initfunction") ) { outValue = initfunction; return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"runningscript") ) { outValue = runningscript; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"resetvariables") ) { outValue = resetvariables_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"updatefunction") ) { outValue = updatefunction; return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"beginparsedscript") ) { outValue = beginparsedscript_dyn(); return true;  }
	}
	return false;
}

bool Script_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"parser") ) { parser=ioValue.Cast< ::hscript::Parser >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"applist") ) { applist=ioValue.Cast< ::haxe::ds::StringMap >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stopping") ) { stopping=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"scriptdelay") ) { scriptdelay=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"interpreter") ) { interpreter=ioValue.Cast< ::hscript::Interp >(); return true; }
		if (HX_FIELD_EQ(inName,"returnvalue") ) { returnvalue=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"savedprogram") ) { savedprogram=ioValue.Cast< Array< ::String > >(); return true; }
		if (HX_FIELD_EQ(inName,"activescript") ) { activescript=ioValue.Cast< ::String >(); return true; }
		if (HX_FIELD_EQ(inName,"parsedscript") ) { parsedscript=ioValue.Cast< Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"initfunction") ) { initfunction=ioValue.Cast< Dynamic >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"runningscript") ) { runningscript=ioValue.Cast< bool >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatefunction") ) { updatefunction=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Script_obj::runningscript,HX_HCSTRING("runningscript","\x4a","\xc5","\xfa","\x36")},
	{hx::fsInt,(void *) &Script_obj::scriptdelay,HX_HCSTRING("scriptdelay","\x98","\xc1","\xd8","\x0f")},
	{hx::fsBool,(void *) &Script_obj::stopping,HX_HCSTRING("stopping","\x74","\x0b","\x39","\xb2")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &Script_obj::savedprogram,HX_HCSTRING("savedprogram","\xdd","\x6e","\x84","\x84")},
	{hx::fsString,(void *) &Script_obj::activescript,HX_HCSTRING("activescript","\x51","\x28","\xe7","\x72")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(void *) &Script_obj::applist,HX_HCSTRING("applist","\x7f","\x7d","\x2e","\x4e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Script_obj::parsedscript,HX_HCSTRING("parsedscript","\x9c","\xdd","\x4b","\x12")},
	{hx::fsObject /*::hscript::Parser*/ ,(void *) &Script_obj::parser,HX_HCSTRING("parser","\xdf","\x9c","\x88","\xed")},
	{hx::fsObject /*::hscript::Interp*/ ,(void *) &Script_obj::interpreter,HX_HCSTRING("interpreter","\xba","\x71","\xd4","\xd4")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Script_obj::returnvalue,HX_HCSTRING("returnvalue","\xc1","\xdc","\x67","\xab")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Script_obj::initfunction,HX_HCSTRING("initfunction","\x28","\x76","\x57","\xdf")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Script_obj::updatefunction,HX_HCSTRING("updatefunction","\x21","\xe2","\xca","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Script_obj::runningscript,"runningscript");
	HX_MARK_MEMBER_NAME(Script_obj::scriptdelay,"scriptdelay");
	HX_MARK_MEMBER_NAME(Script_obj::stopping,"stopping");
	HX_MARK_MEMBER_NAME(Script_obj::savedprogram,"savedprogram");
	HX_MARK_MEMBER_NAME(Script_obj::activescript,"activescript");
	HX_MARK_MEMBER_NAME(Script_obj::applist,"applist");
	HX_MARK_MEMBER_NAME(Script_obj::parsedscript,"parsedscript");
	HX_MARK_MEMBER_NAME(Script_obj::parser,"parser");
	HX_MARK_MEMBER_NAME(Script_obj::interpreter,"interpreter");
	HX_MARK_MEMBER_NAME(Script_obj::returnvalue,"returnvalue");
	HX_MARK_MEMBER_NAME(Script_obj::initfunction,"initfunction");
	HX_MARK_MEMBER_NAME(Script_obj::updatefunction,"updatefunction");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Script_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Script_obj::runningscript,"runningscript");
	HX_VISIT_MEMBER_NAME(Script_obj::scriptdelay,"scriptdelay");
	HX_VISIT_MEMBER_NAME(Script_obj::stopping,"stopping");
	HX_VISIT_MEMBER_NAME(Script_obj::savedprogram,"savedprogram");
	HX_VISIT_MEMBER_NAME(Script_obj::activescript,"activescript");
	HX_VISIT_MEMBER_NAME(Script_obj::applist,"applist");
	HX_VISIT_MEMBER_NAME(Script_obj::parsedscript,"parsedscript");
	HX_VISIT_MEMBER_NAME(Script_obj::parser,"parser");
	HX_VISIT_MEMBER_NAME(Script_obj::interpreter,"interpreter");
	HX_VISIT_MEMBER_NAME(Script_obj::returnvalue,"returnvalue");
	HX_VISIT_MEMBER_NAME(Script_obj::initfunction,"initfunction");
	HX_VISIT_MEMBER_NAME(Script_obj::updatefunction,"updatefunction");
};

#endif

hx::Class Script_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("loadapps","\xd8","\xb5","\x39","\xc6"),
	HX_HCSTRING("loadscript","\xb1","\x08","\xf7","\xc7"),
	HX_HCSTRING("beginparsedscript","\x45","\xe1","\xac","\x8c"),
	HX_HCSTRING("runapp","\x36","\x76","\x90","\x3b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("resetvariables","\x08","\x67","\x00","\x3b"),
	HX_HCSTRING("runningscript","\x4a","\xc5","\xfa","\x36"),
	HX_HCSTRING("scriptdelay","\x98","\xc1","\xd8","\x0f"),
	HX_HCSTRING("stopping","\x74","\x0b","\x39","\xb2"),
	HX_HCSTRING("savedprogram","\xdd","\x6e","\x84","\x84"),
	HX_HCSTRING("activescript","\x51","\x28","\xe7","\x72"),
	HX_HCSTRING("applist","\x7f","\x7d","\x2e","\x4e"),
	HX_HCSTRING("parsedscript","\x9c","\xdd","\x4b","\x12"),
	HX_HCSTRING("parser","\xdf","\x9c","\x88","\xed"),
	HX_HCSTRING("interpreter","\xba","\x71","\xd4","\xd4"),
	HX_HCSTRING("returnvalue","\xc1","\xdc","\x67","\xab"),
	HX_HCSTRING("initfunction","\x28","\x76","\x57","\xdf"),
	HX_HCSTRING("updatefunction","\x21","\xe2","\xca","\x6f"),
	::String(null()) };

void Script_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Script","\x2b","\xc2","\xf4","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Script_obj::__GetStatic;
	__mClass->mSetStaticField = &Script_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Script_obj >;
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

