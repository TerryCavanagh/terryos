#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
namespace openfl{
namespace display{

Void Stage3D_obj::__construct()
{
HX_STACK_FRAME("openfl.display.Stage3D","new",0x52647737,"openfl.display.Stage3D.new","openfl/display/Stage3D.hx",46,0x37141b9b)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(48)
	super::__construct(null());
	HX_STACK_LINE(50)
	this->set_x((int)0);
	HX_STACK_LINE(51)
	this->set_y((int)0);
	HX_STACK_LINE(53)
	this->visible = true;
}
;
	return null();
}

//Stage3D_obj::~Stage3D_obj() { }

Dynamic Stage3D_obj::__CreateEmpty() { return  new Stage3D_obj; }
hx::ObjectPtr< Stage3D_obj > Stage3D_obj::__new()
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Dynamic Stage3D_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Stage3D_obj > _result_ = new Stage3D_obj();
	_result_->__construct();
	return _result_;}

Void Stage3D_obj::requestContext3D( Dynamic __o_context3DRenderMode,Dynamic __o_profile){
Dynamic context3DRenderMode = __o_context3DRenderMode.Default(0);
Dynamic profile = __o_profile.Default(0);
	HX_STACK_FRAME("openfl.display.Stage3D","requestContext3D",0x80c219da,"openfl.display.Stage3D.requestContext3D","openfl/display/Stage3D.hx",60,0x37141b9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(context3DRenderMode,"context3DRenderMode")
	HX_STACK_ARG(profile,"profile")
{
		HX_STACK_LINE(60)
		this->__contextRequested = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,requestContext3D,(void))

Void Stage3D_obj::requestContext3DMatchingProfiles( ::openfl::_Vector::ObjectVector profiles){
{
		HX_STACK_FRAME("openfl.display.Stage3D","requestContext3DMatchingProfiles",0x5b5ae301,"openfl.display.Stage3D.requestContext3DMatchingProfiles","openfl/display/Stage3D.hx",67,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(profiles,"profiles")
		HX_STACK_LINE(67)
		this->requestContext3D(null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,requestContext3DMatchingProfiles,(void))

Void Stage3D_obj::__createContext( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage3D","__createContext",0x1987b48a,"openfl.display.Stage3D.__createContext","openfl/display/Stage3D.hx",72,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,__createContext,(void))

Void Stage3D_obj::__renderDOM( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage3D","__renderDOM",0x9069cb83,"openfl.display.Stage3D.__renderDOM","openfl/display/Stage3D.hx",79,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(81)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(81)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(81)
		if ((tmp1)){
			HX_STACK_LINE(81)
			return null();
		}
		HX_STACK_LINE(83)
		bool tmp2 = this->__contextRequested;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp2)){
			HX_STACK_LINE(85)
			::openfl::display3D::Context3D tmp3 = this->context3D;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			if ((tmp4)){
			}
			HX_STACK_LINE(145)
			this->__contextRequested = false;
		}
		HX_STACK_LINE(149)
		::openfl::display3D::Context3D tmp3 = this->context3D;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(149)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(149)
		if ((tmp4)){
			HX_STACK_LINE(151)
			this->__resetContext3DStates();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderDOM,(void))

Void Stage3D_obj::__renderGL( ::openfl::display::Stage stage,::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.Stage3D","__renderGL",0x25621024,"openfl.display.Stage3D.__renderGL","openfl/display/Stage3D.hx",159,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(161)
		bool tmp = this->visible;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(161)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(161)
		if ((tmp1)){
			HX_STACK_LINE(161)
			return null();
		}
		HX_STACK_LINE(163)
		bool tmp2 = this->__contextRequested;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(163)
		if ((tmp2)){
			HX_STACK_LINE(165)
			::openfl::display3D::Context3D tmp3 = this->context3D;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(165)
			bool tmp4 = (tmp3 == null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(165)
			if ((tmp4)){
				HX_STACK_LINE(167)
				::openfl::display3D::Context3D tmp5 = ::openfl::display3D::Context3D_obj::__new(hx::ObjectPtr<OBJ_>(this),renderSession);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(167)
				this->context3D = tmp5;
				HX_STACK_LINE(168)
				::openfl::events::Event tmp6 = ::openfl::events::Event_obj::__new(HX_HCSTRING("context3DCreate","\x7c","\xbf","\x59","\x7b"),null(),null());		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(168)
				this->dispatchEvent(tmp6);
			}
			HX_STACK_LINE(172)
			this->__contextRequested = false;
		}
		HX_STACK_LINE(176)
		::openfl::display3D::Context3D tmp3 = this->context3D;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(176)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(176)
		if ((tmp4)){
			HX_STACK_LINE(178)
			this->__resetContext3DStates();
			HX_STACK_LINE(179)
			Dynamic();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__renderGL,(void))

Void Stage3D_obj::__resize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.Stage3D","__resize",0x193af2dd,"openfl.display.Stage3D.__resize","openfl/display/Stage3D.hx",186,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Stage3D_obj,__resize,(void))

Void Stage3D_obj::__resetContext3DStates( ){
{
		HX_STACK_FRAME("openfl.display.Stage3D","__resetContext3DStates",0x6c934f5c,"openfl.display.Stage3D.__resetContext3DStates","openfl/display/Stage3D.hx",200,0x37141b9b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(203)
		::openfl::display3D::Context3D tmp = this->context3D;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(203)
		tmp->__updateBlendFactors();
		HX_STACK_LINE(205)
		::openfl::display3D::Context3D tmp1 = this->context3D;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(205)
		tmp1->__updateBackbufferViewport();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Stage3D_obj,__resetContext3DStates,(void))

Float Stage3D_obj::set_x( Float value){
	HX_STACK_FRAME("openfl.display.Stage3D","set_x",0xeed8e5f2,"openfl.display.Stage3D.set_x","openfl/display/Stage3D.hx",210,0x37141b9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(212)
	this->x = value;
	HX_STACK_LINE(214)
	::openfl::display3D::Context3D tmp = this->context3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(214)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(214)
	if ((tmp1)){
		HX_STACK_LINE(216)
		::openfl::display3D::Context3D tmp2 = this->context3D;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(216)
		tmp2->__updateBackbufferViewport();
	}
	HX_STACK_LINE(220)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_x,return )

Float Stage3D_obj::set_y( Float value){
	HX_STACK_FRAME("openfl.display.Stage3D","set_y",0xeed8e5f3,"openfl.display.Stage3D.set_y","openfl/display/Stage3D.hx",225,0x37141b9b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(227)
	this->y = value;
	HX_STACK_LINE(229)
	::openfl::display3D::Context3D tmp = this->context3D;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(229)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(229)
	if ((tmp1)){
		HX_STACK_LINE(231)
		::openfl::display3D::Context3D tmp2 = this->context3D;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(231)
		tmp2->__updateBackbufferViewport();
	}
	HX_STACK_LINE(235)
	Float tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(235)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Stage3D_obj,set_y,return )


Stage3D_obj::Stage3D_obj()
{
}

void Stage3D_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Stage3D);
	HX_MARK_MEMBER_NAME(context3D,"context3D");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(__contextRequested,"__contextRequested");
	::openfl::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Stage3D_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(context3D,"context3D");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(__contextRequested,"__contextRequested");
	::openfl::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Stage3D_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"set_x") ) { return set_x_dyn(); }
		if (HX_FIELD_EQ(inName,"set_y") ) { return set_y_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { return context3D; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__createContext") ) { return __createContext_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"requestContext3D") ) { return requestContext3D_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { return __contextRequested; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__resetContext3DStates") ) { return __resetContext3DStates_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"requestContext3DMatchingProfiles") ) { return requestContext3DMatchingProfiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Stage3D_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { if (inCallProp == hx::paccAlways) return set_x(inValue);x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { if (inCallProp == hx::paccAlways) return set_y(inValue);y=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"context3D") ) { context3D=inValue.Cast< ::openfl::display3D::Context3D >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__contextRequested") ) { __contextRequested=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Stage3D_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"));
	outFields->push(HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display3D::Context3D*/ ,(int)offsetof(Stage3D_obj,context3D),HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,visible),HX_HCSTRING("visible","\x72","\x78","\x24","\xa3")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Stage3D_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{hx::fsBool,(int)offsetof(Stage3D_obj,__contextRequested),HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("context3D","\x60","\x5c","\xfc","\x16"),
	HX_HCSTRING("visible","\x72","\x78","\x24","\xa3"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("__contextRequested","\x9f","\x10","\x4e","\x81"),
	HX_HCSTRING("requestContext3D","\x11","\x7b","\x31","\xf9"),
	HX_HCSTRING("requestContext3DMatchingProfiles","\x38","\x62","\xbe","\x66"),
	HX_HCSTRING("__createContext","\x33","\xa7","\x6c","\x89"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__resetContext3DStates","\xd3","\xf3","\x5d","\xf3"),
	HX_HCSTRING("set_x","\x5b","\x9b","\x2f","\x7a"),
	HX_HCSTRING("set_y","\x5c","\x9b","\x2f","\x7a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Stage3D_obj::__mClass,"__mClass");
};

#endif

hx::Class Stage3D_obj::__mClass;

void Stage3D_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Stage3D","\xc5","\x0f","\x85","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Stage3D_obj >;
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
} // end namespace display
