#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif
namespace openfl{
namespace ui{

Void Mouse_obj::__construct()
{
	return null();
}

//Mouse_obj::~Mouse_obj() { }

Dynamic Mouse_obj::__CreateEmpty() { return  new Mouse_obj; }
hx::ObjectPtr< Mouse_obj > Mouse_obj::__new()
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Mouse_obj > _result_ = new Mouse_obj();
	_result_->__construct();
	return _result_;}

bool Mouse_obj::supportsCursor;

bool Mouse_obj::supportsNativeCursor;

::String Mouse_obj::__cursor;

Void Mouse_obj::hide( ){
{
		HX_STACK_FRAME("openfl.ui.Mouse","hide",0x974c7e47,"openfl.ui.Mouse.hide","openfl/ui/Mouse.hx",22,0xeac39ff5)
		HX_STACK_LINE(22)
		::lime::ui::Mouse_obj::hide();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

Void Mouse_obj::show( ){
{
		HX_STACK_FRAME("openfl.ui.Mouse","show",0x9e911e82,"openfl.ui.Mouse.show","openfl/ui/Mouse.hx",29,0xeac39ff5)
		HX_STACK_LINE(29)
		::lime::ui::Mouse_obj::show();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

::String Mouse_obj::get_cursor( ){
	HX_STACK_FRAME("openfl.ui.Mouse","get_cursor",0xfdb1b9e4,"openfl.ui.Mouse.get_cursor","openfl/ui/Mouse.hx",41,0xeac39ff5)
	HX_STACK_LINE(43)
	::String tmp = ::openfl::ui::Mouse_obj::__cursor;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(43)
	return tmp;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::String Mouse_obj::set_cursor( ::String value){
	HX_STACK_FRAME("openfl.ui.Mouse","set_cursor",0x012f5858,"openfl.ui.Mouse.set_cursor","openfl/ui/Mouse.hx",48,0xeac39ff5)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(50)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(50)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("arrow","\xc9","\x79","\x8f","\x25"))){
		HX_STACK_LINE(52)
		::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW);
	}
	else if (  ( _switch_1==HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"))){
		HX_STACK_LINE(53)
		::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::POINTER);
	}
	else if (  ( _switch_1==HX_HCSTRING("hand","\x6f","\x2b","\x08","\x45"))){
		HX_STACK_LINE(54)
		::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::MOVE);
	}
	else if (  ( _switch_1==HX_HCSTRING("ibeam","\x58","\xca","\x26","\xb6"))){
		HX_STACK_LINE(55)
		::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::TEXT);
	}
	else  {
	}
;
;
	HX_STACK_LINE(60)
	::String tmp1 = ::openfl::ui::Mouse_obj::__cursor = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(60)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = get_cursor(); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { outValue = __cursor; return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { outValue = supportsCursor; return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { outValue = supportsNativeCursor; return true;  }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways)  ioValue = set_cursor(ioValue); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { __cursor=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { supportsCursor=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { supportsNativeCursor=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Mouse_obj::supportsCursor,HX_HCSTRING("supportsCursor","\x7a","\x7f","\x2c","\xd6")},
	{hx::fsBool,(void *) &Mouse_obj::supportsNativeCursor,HX_HCSTRING("supportsNativeCursor","\x71","\x9b","\x97","\xa2")},
	{hx::fsString,(void *) &Mouse_obj::__cursor,HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::__cursor,"__cursor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::__cursor,"__cursor");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("supportsCursor","\x7a","\x7f","\x2c","\xd6"),
	HX_HCSTRING("supportsNativeCursor","\x71","\x9b","\x97","\xa2"),
	HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	::String(null()) };

void Mouse_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.Mouse","\x09","\x85","\xe4","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
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

void Mouse_obj::__boot()
{
	supportsCursor= false;
	supportsNativeCursor= false;
	__cursor= HX_HCSTRING("auto","\x6f","\xdf","\x76","\x40");
}

} // end namespace openfl
} // end namespace ui
