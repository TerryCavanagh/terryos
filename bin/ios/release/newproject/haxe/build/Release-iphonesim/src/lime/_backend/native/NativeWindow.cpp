#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_Event_Void_Void
#include <lime/app/Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
namespace lime{
namespace _backend{
namespace native{

Void NativeWindow_obj::__construct(::lime::ui::Window parent)
{
HX_STACK_FRAME("lime._backend.native.NativeWindow","new",0x5ec523d0,"lime._backend.native.NativeWindow.new","lime/_backend/native/NativeWindow.hx",31,0x34b7ce9f)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(31)
	this->parent = parent;
}
;
	return null();
}

//NativeWindow_obj::~NativeWindow_obj() { }

Dynamic NativeWindow_obj::__CreateEmpty() { return  new NativeWindow_obj; }
hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new(::lime::ui::Window parent)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(parent);
	return _result_;}

Dynamic NativeWindow_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< NativeWindow_obj > _result_ = new NativeWindow_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void NativeWindow_obj::alert( ::String message,::String title){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","alert",0xfd8f66cc,"lime._backend.native.NativeWindow.alert","lime/_backend/native/NativeWindow.hx",36,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(title,"title")
		HX_STACK_LINE(38)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(38)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(38)
		if ((tmp1)){
			HX_STACK_LINE(41)
			::lime::_backend::native::NativeWindow_obj::cffi_lime_window_alert.call(hx::DynamicPtr(this->handle),message,title);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,alert,(void))

Void NativeWindow_obj::close( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","close",0x24642728,"lime._backend.native.NativeWindow.close","lime/_backend/native/NativeWindow.hx",49,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(51)
		bool tmp = this->closing;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(51)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(51)
		if ((tmp1)){
			HX_STACK_LINE(53)
			this->closing = true;
			HX_STACK_LINE(54)
			::lime::ui::Window tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(54)
			tmp2->onClose->dispatch();
		}
		HX_STACK_LINE(58)
		::lime::ui::Window tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(58)
		bool tmp3 = tmp2->onClose->canceled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(58)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(58)
		if ((tmp4)){
			HX_STACK_LINE(60)
			Dynamic tmp5 = this->handle;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(60)
			bool tmp6 = (tmp5 != null());		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(60)
			if ((tmp6)){
				HX_STACK_LINE(63)
				::lime::_backend::native::NativeWindow_obj::cffi_lime_window_close.call(hx::DynamicPtr(this->handle));
				HX_STACK_LINE(65)
				this->handle = null();
			}
		}
		else{
			HX_STACK_LINE(71)
			this->closing = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

Void NativeWindow_obj::create( ::lime::app::Application application){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","create",0x20fbd98c,"lime._backend.native.NativeWindow.create","lime/_backend/native/NativeWindow.hx",78,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(application,"application")
		HX_STACK_LINE(80)
		::String title = HX_HCSTRING("Lime Application","\xc5","\xb5","\x9d","\xec");		HX_STACK_VAR(title,"title");
		HX_STACK_LINE(81)
		int flags = (int)0;		HX_STACK_VAR(flags,"flags");
		HX_STACK_LINE(83)
		::lime::ui::Window tmp = this->parent;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(83)
		Dynamic tmp1 = tmp->config;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(83)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(83)
		if ((tmp2)){
			HX_STACK_LINE(85)
			::lime::ui::Window tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(85)
			Dynamic tmp4 = tmp3->config;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(85)
			bool tmp5 = ::Reflect_obj::hasField(tmp4,HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(85)
			if ((tmp5)){
				HX_STACK_LINE(87)
				::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(87)
				Dynamic tmp7 = tmp6->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(87)
				bool tmp8 = (tmp7 >= (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(87)
				if ((tmp8)){
					HX_STACK_LINE(89)
					hx::OrEq(flags,(int)96);
				}
				else{
					HX_STACK_LINE(91)
					::lime::ui::Window tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(91)
					Dynamic tmp10 = tmp9->config->__Field(HX_HCSTRING("antialiasing","\xf4","\x16","\xb3","\x48"), hx::paccDynamic );		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(91)
					bool tmp11 = (tmp10 >= (int)2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(91)
					if ((tmp11)){
						HX_STACK_LINE(93)
						hx::OrEq(flags,(int)32);
					}
				}
			}
			HX_STACK_LINE(99)
			::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(99)
			Dynamic tmp7 = tmp6->config;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(99)
			Dynamic tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(99)
			bool tmp9 = ::Reflect_obj::hasField(tmp8,HX_HCSTRING("allowHighDPI","\x92","\x07","\xa2","\xb4"));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(99)
			if ((tmp9)){
				HX_STACK_LINE(99)
				::lime::ui::Window tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(99)
				::lime::ui::Window tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(99)
				tmp10 = tmp12->config->__Field(HX_HCSTRING("allowHighDPI","\x92","\x07","\xa2","\xb4"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(99)
				tmp10 = false;
			}
			HX_STACK_LINE(99)
			if ((tmp10)){
				HX_STACK_LINE(99)
				hx::OrEq(flags,(int)2048);
			}
			HX_STACK_LINE(100)
			::lime::ui::Window tmp11 = this->parent;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(100)
			Dynamic tmp12 = tmp11->config;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(100)
			Dynamic tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(100)
			bool tmp14 = ::Reflect_obj::hasField(tmp13,HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(100)
			bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(100)
			if ((tmp14)){
				HX_STACK_LINE(100)
				::lime::ui::Window tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(100)
				::lime::ui::Window tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(100)
				tmp15 = tmp17->config->__Field(HX_HCSTRING("borderless","\x45","\x46","\x71","\x17"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(100)
				tmp15 = false;
			}
			HX_STACK_LINE(100)
			if ((tmp15)){
				HX_STACK_LINE(100)
				hx::OrEq(flags,(int)2);
			}
			HX_STACK_LINE(101)
			::lime::ui::Window tmp16 = this->parent;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(101)
			Dynamic tmp17 = tmp16->config;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(101)
			Dynamic tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(101)
			bool tmp19 = ::Reflect_obj::hasField(tmp18,HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(101)
			bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(101)
			if ((tmp19)){
				HX_STACK_LINE(101)
				::lime::ui::Window tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(101)
				::lime::ui::Window tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(101)
				tmp20 = tmp22->config->__Field(HX_HCSTRING("depthBuffer","\x63","\x46","\x9e","\x52"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(101)
				tmp20 = false;
			}
			HX_STACK_LINE(101)
			if ((tmp20)){
				HX_STACK_LINE(101)
				hx::OrEq(flags,(int)512);
			}
			HX_STACK_LINE(102)
			::lime::ui::Window tmp21 = this->parent;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(102)
			Dynamic tmp22 = tmp21->config;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(102)
			Dynamic tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(102)
			bool tmp24 = ::Reflect_obj::hasField(tmp23,HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"));		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(102)
			bool tmp25;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(102)
			if ((tmp24)){
				HX_STACK_LINE(102)
				::lime::ui::Window tmp26 = this->parent;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(102)
				::lime::ui::Window tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(102)
				tmp25 = tmp27->config->__Field(HX_HCSTRING("fullscreen","\x3b","\x3a","\xb4","\xf9"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(102)
				tmp25 = false;
			}
			HX_STACK_LINE(102)
			if ((tmp25)){
				HX_STACK_LINE(102)
				hx::OrEq(flags,(int)1);
			}
			HX_STACK_LINE(103)
			::lime::ui::Window tmp26 = this->parent;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(103)
			Dynamic tmp27 = tmp26->config;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(103)
			Dynamic tmp28 = tmp27;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(103)
			bool tmp29 = ::Reflect_obj::hasField(tmp28,HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"));		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(103)
			bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(103)
			if ((tmp29)){
				HX_STACK_LINE(103)
				::lime::ui::Window tmp31 = this->parent;		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(103)
				::lime::ui::Window tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(103)
				tmp30 = tmp32->config->__Field(HX_HCSTRING("hardware","\xa8","\xe2","\xd3","\x75"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(103)
				tmp30 = false;
			}
			HX_STACK_LINE(103)
			if ((tmp30)){
				HX_STACK_LINE(103)
				hx::OrEq(flags,(int)8);
			}
			HX_STACK_LINE(104)
			::lime::ui::Window tmp31 = this->parent;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(104)
			Dynamic tmp32 = tmp31->config;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(104)
			Dynamic tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(104)
			bool tmp34 = ::Reflect_obj::hasField(tmp33,HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"));		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(104)
			bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(104)
			if ((tmp34)){
				HX_STACK_LINE(104)
				::lime::ui::Window tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(104)
				::lime::ui::Window tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(104)
				tmp35 = tmp37->config->__Field(HX_HCSTRING("hidden","\x6a","\xff","\x95","\x4c"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(104)
				tmp35 = false;
			}
			HX_STACK_LINE(104)
			if ((tmp35)){
				HX_STACK_LINE(104)
				hx::OrEq(flags,(int)4096);
			}
			HX_STACK_LINE(105)
			::lime::ui::Window tmp36 = this->parent;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(105)
			Dynamic tmp37 = tmp36->config;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(105)
			Dynamic tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(105)
			bool tmp39 = ::Reflect_obj::hasField(tmp38,HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"));		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(105)
			bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(105)
			if ((tmp39)){
				HX_STACK_LINE(105)
				::lime::ui::Window tmp41 = this->parent;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(105)
				::lime::ui::Window tmp42 = tmp41;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(105)
				tmp40 = tmp42->config->__Field(HX_HCSTRING("maximized","\x18","\x0e","\xe1","\xfe"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(105)
				tmp40 = false;
			}
			HX_STACK_LINE(105)
			if ((tmp40)){
				HX_STACK_LINE(105)
				hx::OrEq(flags,(int)16384);
			}
			HX_STACK_LINE(106)
			::lime::ui::Window tmp41 = this->parent;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(106)
			Dynamic tmp42 = tmp41->config;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(106)
			Dynamic tmp43 = tmp42;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(106)
			bool tmp44 = ::Reflect_obj::hasField(tmp43,HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"));		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(106)
			bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(106)
			if ((tmp44)){
				HX_STACK_LINE(106)
				::lime::ui::Window tmp46 = this->parent;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(106)
				::lime::ui::Window tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(106)
				tmp45 = tmp47->config->__Field(HX_HCSTRING("minimized","\x86","\xfb","\x9d","\x28"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(106)
				tmp45 = false;
			}
			HX_STACK_LINE(106)
			if ((tmp45)){
				HX_STACK_LINE(106)
				hx::OrEq(flags,(int)8192);
			}
			HX_STACK_LINE(107)
			::lime::ui::Window tmp46 = this->parent;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(107)
			Dynamic tmp47 = tmp46->config;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(107)
			Dynamic tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(107)
			bool tmp49 = ::Reflect_obj::hasField(tmp48,HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"));		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(107)
			bool tmp50;		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(107)
			if ((tmp49)){
				HX_STACK_LINE(107)
				::lime::ui::Window tmp51 = this->parent;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(107)
				::lime::ui::Window tmp52 = tmp51;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(107)
				tmp50 = tmp52->config->__Field(HX_HCSTRING("resizable","\x6b","\x37","\x50","\xa9"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(107)
				tmp50 = false;
			}
			HX_STACK_LINE(107)
			if ((tmp50)){
				HX_STACK_LINE(107)
				hx::OrEq(flags,(int)4);
			}
			HX_STACK_LINE(108)
			::lime::ui::Window tmp51 = this->parent;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(108)
			Dynamic tmp52 = tmp51->config;		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(108)
			Dynamic tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(108)
			bool tmp54 = ::Reflect_obj::hasField(tmp53,HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"));		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(108)
			bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(108)
			if ((tmp54)){
				HX_STACK_LINE(108)
				::lime::ui::Window tmp56 = this->parent;		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(108)
				::lime::ui::Window tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(108)
				tmp55 = tmp57->config->__Field(HX_HCSTRING("stencilBuffer","\x1c","\x94","\x39","\x31"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(108)
				tmp55 = false;
			}
			HX_STACK_LINE(108)
			if ((tmp55)){
				HX_STACK_LINE(108)
				hx::OrEq(flags,(int)1024);
			}
			HX_STACK_LINE(109)
			::lime::ui::Window tmp56 = this->parent;		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(109)
			Dynamic tmp57 = tmp56->config;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(109)
			Dynamic tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(109)
			bool tmp59 = ::Reflect_obj::hasField(tmp58,HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"));		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(109)
			bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(109)
			if ((tmp59)){
				HX_STACK_LINE(109)
				::lime::ui::Window tmp61 = this->parent;		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(109)
				::lime::ui::Window tmp62 = tmp61;		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(109)
				tmp60 = tmp62->config->__Field(HX_HCSTRING("vsync","\xd1","\x2d","\xa8","\x3d"), hx::paccDynamic );
			}
			else{
				HX_STACK_LINE(109)
				tmp60 = false;
			}
			HX_STACK_LINE(109)
			if ((tmp60)){
				HX_STACK_LINE(109)
				hx::OrEq(flags,(int)16);
			}
			HX_STACK_LINE(111)
			::lime::ui::Window tmp61 = this->parent;		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(111)
			Dynamic tmp62 = tmp61->config;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(111)
			bool tmp63 = ::Reflect_obj::hasField(tmp62,HX_HCSTRING("title","\x98","\x15","\x3b","\x10"));		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(111)
			if ((tmp63)){
				HX_STACK_LINE(113)
				::lime::ui::Window tmp64 = this->parent;		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(113)
				::String tmp65 = tmp64->config->__Field(HX_HCSTRING("title","\x98","\x15","\x3b","\x10"), hx::paccDynamic );		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(113)
				title = tmp65;
			}
		}
		HX_STACK_LINE(120)
		this->handle = ((Dynamic)(::lime::_backend::native::NativeWindow_obj::cffi_lime_window_create.call(hx::DynamicPtr(application->backend->handle),this->parent->__width,this->parent->__height,flags,title)));
		HX_STACK_LINE(122)
		Dynamic tmp3 = this->handle;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		if ((tmp4)){
			HX_STACK_LINE(124)
			::lime::ui::Window tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(124)
			tmp5->__width = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(this->handle));
			HX_STACK_LINE(125)
			::lime::ui::Window tmp6 = this->parent;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(125)
			tmp6->__height = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(this->handle));
			HX_STACK_LINE(126)
			::lime::ui::Window tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(126)
			tmp7->__x = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(this->handle));
			HX_STACK_LINE(127)
			::lime::ui::Window tmp8 = this->parent;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(127)
			tmp8->__y = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(this->handle));
			HX_STACK_LINE(128)
			::lime::ui::Window tmp9 = this->parent;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(128)
			tmp9->id = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_id.call(hx::DynamicPtr(this->handle));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,create,(void))

Void NativeWindow_obj::focus( ){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","focus",0xe08a6f48,"lime._backend.native.NativeWindow.focus","lime/_backend/native/NativeWindow.hx",136,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(138)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(138)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(138)
		if ((tmp1)){
			HX_STACK_LINE(141)
			::lime::_backend::native::NativeWindow_obj::cffi_lime_window_focus.call(hx::DynamicPtr(this->handle));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,focus,(void))

::lime::_system::Display NativeWindow_obj::getDisplay( ){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","getDisplay",0x2d6caadc,"lime._backend.native.NativeWindow.getDisplay","lime/_backend/native/NativeWindow.hx",149,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(151)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(151)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(151)
	if ((tmp1)){
		HX_STACK_LINE(153)
		int index = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_display.call(hx::DynamicPtr(this->handle));		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(155)
		bool tmp2 = (index > (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		if ((tmp2)){
			HX_STACK_LINE(157)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(157)
			::lime::_system::Display tmp4 = ::lime::_system::System_obj::getDisplay(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(157)
			return tmp4;
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

bool NativeWindow_obj::getEnableTextEvents( ){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","getEnableTextEvents",0x8c63802f,"lime._backend.native.NativeWindow.getEnableTextEvents","lime/_backend/native/NativeWindow.hx",168,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(173)
		return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_enable_text_events.call(hx::DynamicPtr(this->handle));
	}
	HX_STACK_LINE(178)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getEnableTextEvents,return )

Void NativeWindow_obj::move( int x,int y){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","move",0x8d1891a1,"lime._backend.native.NativeWindow.move","lime/_backend/native/NativeWindow.hx",183,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(185)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(185)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(185)
		if ((tmp1)){
			HX_STACK_LINE(188)
			::lime::_backend::native::NativeWindow_obj::cffi_lime_window_move.call(hx::DynamicPtr(this->handle),x,y);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

Void NativeWindow_obj::resize( int width,int height){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","resize",0xad67cc84,"lime._backend.native.NativeWindow.resize","lime/_backend/native/NativeWindow.hx",196,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(198)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(198)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(198)
		if ((tmp1)){
			HX_STACK_LINE(201)
			::lime::_backend::native::NativeWindow_obj::cffi_lime_window_resize.call(hx::DynamicPtr(this->handle),width,height);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

bool NativeWindow_obj::setBorderless( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setBorderless",0x6caf83f7,"lime._backend.native.NativeWindow.setBorderless","lime/_backend/native/NativeWindow.hx",209,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(211)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(211)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(211)
	if ((tmp1)){
		HX_STACK_LINE(214)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),value);
	}
	HX_STACK_LINE(219)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(219)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setBorderless,return )

bool NativeWindow_obj::setEnableTextEvents( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setEnableTextEvents",0xc900733b,"lime._backend.native.NativeWindow.setEnableTextEvents","lime/_backend/native/NativeWindow.hx",223,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(225)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(225)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(225)
	if ((tmp1)){
		HX_STACK_LINE(228)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_enable_text_events.call(hx::DynamicPtr(this->handle),value);
	}
	HX_STACK_LINE(233)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(233)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setEnableTextEvents,return )

bool NativeWindow_obj::setFullscreen( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setFullscreen",0x4ef277ed,"lime._backend.native.NativeWindow.setFullscreen","lime/_backend/native/NativeWindow.hx",238,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(240)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(240)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(240)
	if ((tmp1)){
		HX_STACK_LINE(243)
		value = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_fullscreen.call(hx::DynamicPtr(this->handle),value);
		HX_STACK_LINE(246)
		::lime::ui::Window tmp2 = this->parent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(246)
		tmp2->__width = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(247)
		::lime::ui::Window tmp3 = this->parent;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(247)
		tmp3->__height = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(248)
		::lime::ui::Window tmp4 = this->parent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(248)
		tmp4->__x = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(249)
		::lime::ui::Window tmp5 = this->parent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(249)
		tmp5->__y = ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(this->handle));
		HX_STACK_LINE(251)
		bool tmp6 = value;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(251)
		if ((tmp6)){
			HX_STACK_LINE(253)
			::lime::ui::Window tmp7 = this->parent;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(253)
			tmp7->onFullscreen->dispatch();
		}
	}
	HX_STACK_LINE(259)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(259)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

Void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","setIcon",0xb52ef3ab,"lime._backend.native.NativeWindow.setIcon","lime/_backend/native/NativeWindow.hx",264,0x34b7ce9f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(266)
		Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(266)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(266)
		if ((tmp1)){
			HX_STACK_LINE(269)
			::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_icon.call(hx::DynamicPtr(this->handle),hx::DynamicPtr(image->buffer));
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMaximized( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setMaximized",0x34118ca6,"lime._backend.native.NativeWindow.setMaximized","lime/_backend/native/NativeWindow.hx",277,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(279)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(279)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(279)
	if ((tmp1)){
		HX_STACK_LINE(282)
		return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_maximized.call(hx::DynamicPtr(this->handle),value);
	}
	HX_STACK_LINE(287)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(287)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMaximized,return )

bool NativeWindow_obj::setMinimized( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setMinimized",0x5dce7a14,"lime._backend.native.NativeWindow.setMinimized","lime/_backend/native/NativeWindow.hx",292,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(294)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(294)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(294)
	if ((tmp1)){
		HX_STACK_LINE(297)
		return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_minimized.call(hx::DynamicPtr(this->handle),value);
	}
	HX_STACK_LINE(302)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(302)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

bool NativeWindow_obj::setResizable( bool value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setResizable",0xde80b5f9,"lime._backend.native.NativeWindow.setResizable","lime/_backend/native/NativeWindow.hx",307,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(309)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(309)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(309)
	if ((tmp1)){
		HX_STACK_LINE(312)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_resizable.call(hx::DynamicPtr(this->handle),value);
		HX_STACK_LINE(316)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),!(this->parent->__borderless));
		HX_STACK_LINE(317)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(this->handle),this->parent->__borderless);
	}
	HX_STACK_LINE(322)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(322)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setResizable,return )

::String NativeWindow_obj::setTitle( ::String value){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","setTitle",0x2d49b526,"lime._backend.native.NativeWindow.setTitle","lime/_backend/native/NativeWindow.hx",326,0x34b7ce9f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(328)
	Dynamic tmp = this->handle;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(328)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(328)
	if ((tmp1)){
		HX_STACK_LINE(331)
		return ((Dynamic)(::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_title.call(hx::DynamicPtr(this->handle),value)));
	}
	HX_STACK_LINE(336)
	::String tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(336)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )

Void NativeWindow_obj::lime_window_alert( Dynamic handle,::String message,::String title){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_alert",0xe6f530a7,"lime._backend.native.NativeWindow.lime_window_alert","lime/_backend/native/NativeWindow.hx",342,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(message,"message")
		HX_STACK_ARG(title,"title")
		HX_STACK_LINE(342)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_alert.call(hx::DynamicPtr(handle),message,title);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeWindow_obj,lime_window_alert,(void))

Void NativeWindow_obj::lime_window_close( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_close",0x0dc9f103,"lime._backend.native.NativeWindow.lime_window_close","lime/_backend/native/NativeWindow.hx",343,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(343)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_close.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_close,(void))

Dynamic NativeWindow_obj::lime_window_create( Dynamic application,int width,int height,int flags,::String title){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_create",0x70a6af51,"lime._backend.native.NativeWindow.lime_window_create","lime/_backend/native/NativeWindow.hx",344,0x34b7ce9f)
	HX_STACK_ARG(application,"application")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_ARG(flags,"flags")
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(344)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_create.call(hx::DynamicPtr(application),width,height,flags,title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(NativeWindow_obj,lime_window_create,return )

Void NativeWindow_obj::lime_window_focus( Dynamic handle){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_focus",0xc9f03923,"lime._backend.native.NativeWindow.lime_window_focus","lime/_backend/native/NativeWindow.hx",345,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_LINE(345)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_focus.call(hx::DynamicPtr(handle));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_focus,(void))

int NativeWindow_obj::lime_window_get_display( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_display",0xf79dede4,"lime._backend.native.NativeWindow.lime_window_get_display","lime/_backend/native/NativeWindow.hx",346,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(346)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_display.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_display,return )

bool NativeWindow_obj::lime_window_get_enable_text_events( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_enable_text_events",0x611f444d,"lime._backend.native.NativeWindow.lime_window_get_enable_text_events","lime/_backend/native/NativeWindow.hx",347,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(347)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_enable_text_events.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_enable_text_events,return )

int NativeWindow_obj::lime_window_get_height( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_height",0x49be0e85,"lime._backend.native.NativeWindow.lime_window_get_height","lime/_backend/native/NativeWindow.hx",348,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(348)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_height.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_height,return )

int NativeWindow_obj::lime_window_get_id( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_id",0x97c73b79,"lime._backend.native.NativeWindow.lime_window_get_id","lime/_backend/native/NativeWindow.hx",349,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(349)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_id.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_id,return )

int NativeWindow_obj::lime_window_get_width( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_width",0xa160ed28,"lime._backend.native.NativeWindow.lime_window_get_width","lime/_backend/native/NativeWindow.hx",350,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(350)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_width.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_width,return )

int NativeWindow_obj::lime_window_get_x( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_x",0x56c77e9a,"lime._backend.native.NativeWindow.lime_window_get_x","lime/_backend/native/NativeWindow.hx",351,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(351)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_x.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_x,return )

int NativeWindow_obj::lime_window_get_y( Dynamic handle){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_get_y",0x56c77e9b,"lime._backend.native.NativeWindow.lime_window_get_y","lime/_backend/native/NativeWindow.hx",352,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_LINE(352)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_get_y.call(hx::DynamicPtr(handle));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,lime_window_get_y,return )

Void NativeWindow_obj::lime_window_move( Dynamic handle,int x,int y){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_move",0x582ffc26,"lime._backend.native.NativeWindow.lime_window_move","lime/_backend/native/NativeWindow.hx",353,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(353)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_move.call(hx::DynamicPtr(handle),x,y);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeWindow_obj,lime_window_move,(void))

Void NativeWindow_obj::lime_window_resize( Dynamic handle,int width,int height){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_resize",0xfd12a249,"lime._backend.native.NativeWindow.lime_window_resize","lime/_backend/native/NativeWindow.hx",354,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(354)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_resize.call(hx::DynamicPtr(handle),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(NativeWindow_obj,lime_window_resize,(void))

bool NativeWindow_obj::lime_window_set_borderless( Dynamic handle,bool borderless){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_borderless",0x80cddc57,"lime._backend.native.NativeWindow.lime_window_set_borderless","lime/_backend/native/NativeWindow.hx",355,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(borderless,"borderless")
	HX_STACK_LINE(355)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_borderless.call(hx::DynamicPtr(handle),borderless);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_borderless,return )

Void NativeWindow_obj::lime_window_set_enable_text_events( Dynamic handle,bool enabled){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_enable_text_events",0x94cac0c1,"lime._backend.native.NativeWindow.lime_window_set_enable_text_events","lime/_backend/native/NativeWindow.hx",356,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(enabled,"enabled")
		HX_STACK_LINE(356)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_enable_text_events.call(hx::DynamicPtr(handle),enabled);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_enable_text_events,(void))

bool NativeWindow_obj::lime_window_set_fullscreen( Dynamic handle,bool fullscreen){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_fullscreen",0x6310d04d,"lime._backend.native.NativeWindow.lime_window_set_fullscreen","lime/_backend/native/NativeWindow.hx",357,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(fullscreen,"fullscreen")
	HX_STACK_LINE(357)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_fullscreen.call(hx::DynamicPtr(handle),fullscreen);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_fullscreen,return )

Void NativeWindow_obj::lime_window_set_icon( Dynamic handle,Dynamic buffer){
{
		HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_icon",0x3304c40b,"lime._backend.native.NativeWindow.lime_window_set_icon","lime/_backend/native/NativeWindow.hx",358,0x34b7ce9f)
		HX_STACK_ARG(handle,"handle")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(358)
		::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_icon.call(hx::DynamicPtr(handle),hx::DynamicPtr(buffer));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_icon,(void))

bool NativeWindow_obj::lime_window_set_maximized( Dynamic handle,bool maximized){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_maximized",0x0f6c6046,"lime._backend.native.NativeWindow.lime_window_set_maximized","lime/_backend/native/NativeWindow.hx",359,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(maximized,"maximized")
	HX_STACK_LINE(359)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_maximized.call(hx::DynamicPtr(handle),maximized);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_maximized,return )

bool NativeWindow_obj::lime_window_set_minimized( Dynamic handle,bool minimized){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_minimized",0x39294db4,"lime._backend.native.NativeWindow.lime_window_set_minimized","lime/_backend/native/NativeWindow.hx",360,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(minimized,"minimized")
	HX_STACK_LINE(360)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_minimized.call(hx::DynamicPtr(handle),minimized);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_minimized,return )

bool NativeWindow_obj::lime_window_set_resizable( Dynamic handle,bool resizable){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_resizable",0xb9db8999,"lime._backend.native.NativeWindow.lime_window_set_resizable","lime/_backend/native/NativeWindow.hx",361,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(resizable,"resizable")
	HX_STACK_LINE(361)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_resizable.call(hx::DynamicPtr(handle),resizable);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_resizable,return )

Dynamic NativeWindow_obj::lime_window_set_title( Dynamic handle,::String title){
	HX_STACK_FRAME("lime._backend.native.NativeWindow","lime_window_set_title",0xca8a38c6,"lime._backend.native.NativeWindow.lime_window_set_title","lime/_backend/native/NativeWindow.hx",362,0x34b7ce9f)
	HX_STACK_ARG(handle,"handle")
	HX_STACK_ARG(title,"title")
	HX_STACK_LINE(362)
	return ::lime::_backend::native::NativeWindow_obj::cffi_lime_window_set_title.call(hx::DynamicPtr(handle),title);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,lime_window_set_title,return )

::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > NativeWindow_obj::cffi_lime_window_alert;

::cpp::Function< void ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_close;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > NativeWindow_obj::cffi_lime_window_create;

::cpp::Function< void ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_focus;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_display;

::cpp::Function< bool ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_enable_text_events;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_height;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_id;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_width;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_x;

::cpp::Function< int ( ::hx::Object * ) > NativeWindow_obj::cffi_lime_window_get_y;

::cpp::Function< void ( ::hx::Object * ,int ,int ) > NativeWindow_obj::cffi_lime_window_move;

::cpp::Function< void ( ::hx::Object * ,int ,int ) > NativeWindow_obj::cffi_lime_window_resize;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_borderless;

::cpp::Function< void ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_enable_text_events;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_fullscreen;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > NativeWindow_obj::cffi_lime_window_set_icon;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_maximized;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_minimized;

::cpp::Function< bool ( ::hx::Object * ,bool ) > NativeWindow_obj::cffi_lime_window_set_resizable;

::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > NativeWindow_obj::cffi_lime_window_set_title;


NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(closing,"closing");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(closing,"closing");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

Dynamic NativeWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return move_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alert") ) { return alert_dyn(); }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"focus") ) { return focus_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return handle; }
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { return closing; }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return setIcon_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return setTitle_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return getDisplay_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMaximized") ) { return setMaximized_dyn(); }
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return setMinimized_dyn(); }
		if (HX_FIELD_EQ(inName,"setResizable") ) { return setResizable_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBorderless") ) { return setBorderless_dyn(); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return setFullscreen_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getEnableTextEvents") ) { return getEnableTextEvents_dyn(); }
		if (HX_FIELD_EQ(inName,"setEnableTextEvents") ) { return setEnableTextEvents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool NativeWindow_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_window_move") ) { outValue = lime_window_move_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_window_alert") ) { outValue = lime_window_alert_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_close") ) { outValue = lime_window_close_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_focus") ) { outValue = lime_window_focus_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_x") ) { outValue = lime_window_get_x_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_y") ) { outValue = lime_window_get_y_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_window_create") ) { outValue = lime_window_create_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_get_id") ) { outValue = lime_window_get_id_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_resize") ) { outValue = lime_window_resize_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_window_set_icon") ) { outValue = lime_window_set_icon_dyn(); return true;  }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_window_get_width") ) { outValue = lime_window_get_width_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_title") ) { outValue = lime_window_set_title_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_move") ) { outValue = cffi_lime_window_move; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"lime_window_get_height") ) { outValue = lime_window_get_height_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_alert") ) { outValue = cffi_lime_window_alert; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_close") ) { outValue = cffi_lime_window_close; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_focus") ) { outValue = cffi_lime_window_focus; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_x") ) { outValue = cffi_lime_window_get_x; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_y") ) { outValue = cffi_lime_window_get_y; return true;  }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_window_get_display") ) { outValue = lime_window_get_display_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_create") ) { outValue = cffi_lime_window_create; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_id") ) { outValue = cffi_lime_window_get_id; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_resize") ) { outValue = cffi_lime_window_resize; return true;  }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"lime_window_set_maximized") ) { outValue = lime_window_set_maximized_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_minimized") ) { outValue = lime_window_set_minimized_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_resizable") ) { outValue = lime_window_set_resizable_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_icon") ) { outValue = cffi_lime_window_set_icon; return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_window_set_borderless") ) { outValue = lime_window_set_borderless_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_fullscreen") ) { outValue = lime_window_set_fullscreen_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_width") ) { outValue = cffi_lime_window_get_width; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_title") ) { outValue = cffi_lime_window_set_title; return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_height") ) { outValue = cffi_lime_window_get_height; return true;  }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display") ) { outValue = cffi_lime_window_get_display; return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_maximized") ) { outValue = cffi_lime_window_set_maximized; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_minimized") ) { outValue = cffi_lime_window_set_minimized; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_resizable") ) { outValue = cffi_lime_window_set_resizable; return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_borderless") ) { outValue = cffi_lime_window_set_borderless; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_fullscreen") ) { outValue = cffi_lime_window_set_fullscreen; return true;  }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"lime_window_get_enable_text_events") ) { outValue = lime_window_get_enable_text_events_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_window_set_enable_text_events") ) { outValue = lime_window_set_enable_text_events_dyn(); return true;  }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_enable_text_events") ) { outValue = cffi_lime_window_get_enable_text_events; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_enable_text_events") ) { outValue = cffi_lime_window_set_enable_text_events; return true;  }
	}
	return false;
}

Dynamic NativeWindow_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { closing=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NativeWindow_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_move") ) { cffi_lime_window_move=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_alert") ) { cffi_lime_window_alert=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_close") ) { cffi_lime_window_close=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_focus") ) { cffi_lime_window_focus=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_x") ) { cffi_lime_window_get_x=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_y") ) { cffi_lime_window_get_y=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_create") ) { cffi_lime_window_create=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_id") ) { cffi_lime_window_get_id=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_resize") ) { cffi_lime_window_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_icon") ) { cffi_lime_window_set_icon=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_width") ) { cffi_lime_window_get_width=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_title") ) { cffi_lime_window_set_title=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) > >(); return true; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_height") ) { cffi_lime_window_get_height=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_display") ) { cffi_lime_window_get_display=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ) > >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_maximized") ) { cffi_lime_window_set_maximized=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_minimized") ) { cffi_lime_window_set_minimized=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_resizable") ) { cffi_lime_window_set_resizable=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_borderless") ) { cffi_lime_window_set_borderless=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_fullscreen") ) { cffi_lime_window_set_fullscreen=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ,bool ) > >(); return true; }
		break;
	case 39:
		if (HX_FIELD_EQ(inName,"cffi_lime_window_get_enable_text_events") ) { cffi_lime_window_get_enable_text_events=ioValue.Cast< ::cpp::Function< bool ( ::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_window_set_enable_text_events") ) { cffi_lime_window_set_enable_text_events=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,bool ) > >(); return true; }
	}
	return false;
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeWindow_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsBool,(int)offsetof(NativeWindow_obj,closing),HX_HCSTRING("closing","\xf5","\xde","\x25","\x79")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(NativeWindow_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::String ,::String ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_alert,HX_HCSTRING("cffi_lime_window_alert","\x1e","\xde","\x00","\xa8")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_close,HX_HCSTRING("cffi_lime_window_close","\x7a","\x9e","\xd5","\xce")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_create,HX_HCSTRING("cffi_lime_window_create","\xfa","\xc9","\xd2","\x99")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_focus,HX_HCSTRING("cffi_lime_window_focus","\x9a","\xe6","\xfb","\x8a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_display,HX_HCSTRING("cffi_lime_window_get_display","\x9b","\x8e","\xa3","\xe8")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_enable_text_events,HX_HCSTRING("cffi_lime_window_get_enable_text_events","\xf6","\x00","\x95","\xd8")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_height,HX_HCSTRING("cffi_lime_window_get_height","\xae","\x31","\xb7","\x32")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_id,HX_HCSTRING("cffi_lime_window_get_id","\x22","\x56","\xf3","\xc0")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_width,HX_HCSTRING("cffi_lime_window_get_width","\x1f","\x22","\xf6","\x1a")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_x,HX_HCSTRING("cffi_lime_window_get_x","\x11","\x2c","\xd3","\x17")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_get_y,HX_HCSTRING("cffi_lime_window_get_y","\x12","\x2c","\xd3","\x17")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_move,HX_HCSTRING("cffi_lime_window_move","\x8f","\xea","\x74","\x73")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_resize,HX_HCSTRING("cffi_lime_window_resize","\xf2","\xbc","\x3e","\x26")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_borderless,HX_HCSTRING("cffi_lime_window_set_borderless","\x00","\x48","\x02","\x7c")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_enable_text_events,HX_HCSTRING("cffi_lime_window_set_enable_text_events","\x6a","\x7d","\x40","\x0c")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_fullscreen,HX_HCSTRING("cffi_lime_window_set_fullscreen","\xf6","\x3b","\x45","\x5e")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_icon,HX_HCSTRING("cffi_lime_window_set_icon","\xf4","\x9a","\x6b","\x13")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_maximized,HX_HCSTRING("cffi_lime_window_set_maximized","\xbd","\xdc","\xa4","\x85")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_minimized,HX_HCSTRING("cffi_lime_window_set_minimized","\x2b","\xca","\x61","\xaf")},
	{hx::fsObject /*::cpp::Function< bool ( ::hx::Object * ,bool ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_resizable,HX_HCSTRING("cffi_lime_window_set_resizable","\x10","\x06","\x14","\x30")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >*/ ,(void *) &NativeWindow_obj::cffi_lime_window_set_title,HX_HCSTRING("cffi_lime_window_set_title","\xbd","\x6d","\x1f","\x44")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("alert","\x5c","\x57","\x8e","\x21"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getEnableTextEvents","\xbf","\x4c","\x30","\x24"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setBorderless","\x87","\x84","\xe9","\xb8"),
	HX_HCSTRING("setEnableTextEvents","\xcb","\x3f","\xcd","\x60"),
	HX_HCSTRING("setFullscreen","\x7d","\x78","\x2c","\x9b"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setMaximized","\x16","\xce","\x30","\x23"),
	HX_HCSTRING("setMinimized","\x84","\xbb","\xed","\x4c"),
	HX_HCSTRING("setResizable","\x69","\xf7","\x9f","\xcd"),
	HX_HCSTRING("setTitle","\x96","\x7e","\x6f","\x1e"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_alert,"cffi_lime_window_alert");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_close,"cffi_lime_window_close");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_create,"cffi_lime_window_create");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_focus,"cffi_lime_window_focus");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_display,"cffi_lime_window_get_display");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_enable_text_events,"cffi_lime_window_get_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_height,"cffi_lime_window_get_height");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_id,"cffi_lime_window_get_id");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_width,"cffi_lime_window_get_width");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_x,"cffi_lime_window_get_x");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_y,"cffi_lime_window_get_y");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_move,"cffi_lime_window_move");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_resize,"cffi_lime_window_resize");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_borderless,"cffi_lime_window_set_borderless");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_enable_text_events,"cffi_lime_window_set_enable_text_events");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_fullscreen,"cffi_lime_window_set_fullscreen");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_icon,"cffi_lime_window_set_icon");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_maximized,"cffi_lime_window_set_maximized");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_minimized,"cffi_lime_window_set_minimized");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_resizable,"cffi_lime_window_set_resizable");
	HX_MARK_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_title,"cffi_lime_window_set_title");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_alert,"cffi_lime_window_alert");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_close,"cffi_lime_window_close");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_create,"cffi_lime_window_create");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_focus,"cffi_lime_window_focus");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_display,"cffi_lime_window_get_display");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_enable_text_events,"cffi_lime_window_get_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_height,"cffi_lime_window_get_height");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_id,"cffi_lime_window_get_id");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_width,"cffi_lime_window_get_width");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_x,"cffi_lime_window_get_x");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_get_y,"cffi_lime_window_get_y");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_move,"cffi_lime_window_move");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_resize,"cffi_lime_window_resize");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_borderless,"cffi_lime_window_set_borderless");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_enable_text_events,"cffi_lime_window_set_enable_text_events");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_fullscreen,"cffi_lime_window_set_fullscreen");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_icon,"cffi_lime_window_set_icon");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_maximized,"cffi_lime_window_set_maximized");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_minimized,"cffi_lime_window_set_minimized");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_resizable,"cffi_lime_window_set_resizable");
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::cffi_lime_window_set_title,"cffi_lime_window_set_title");
};

#endif

hx::Class NativeWindow_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("lime_window_alert","\x37","\xb9","\xe2","\xc1"),
	HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),
	HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),
	HX_HCSTRING("lime_window_focus","\xb3","\xc1","\xdd","\xa4"),
	HX_HCSTRING("lime_window_get_display","\x74","\x42","\x74","\x0d"),
	HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),
	HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),
	HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),
	HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),
	HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),
	HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),
	HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),
	HX_HCSTRING("lime_window_set_borderless","\xc7","\xc1","\xd2","\x19"),
	HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),
	HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),
	HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),
	HX_HCSTRING("lime_window_set_maximized","\xd6","\xf8","\xec","\x06"),
	HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),
	HX_HCSTRING("lime_window_set_resizable","\x29","\x22","\x5c","\xb1"),
	HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),
	HX_HCSTRING("cffi_lime_window_alert","\x1e","\xde","\x00","\xa8"),
	HX_HCSTRING("cffi_lime_window_close","\x7a","\x9e","\xd5","\xce"),
	HX_HCSTRING("cffi_lime_window_create","\xfa","\xc9","\xd2","\x99"),
	HX_HCSTRING("cffi_lime_window_focus","\x9a","\xe6","\xfb","\x8a"),
	HX_HCSTRING("cffi_lime_window_get_display","\x9b","\x8e","\xa3","\xe8"),
	HX_HCSTRING("cffi_lime_window_get_enable_text_events","\xf6","\x00","\x95","\xd8"),
	HX_HCSTRING("cffi_lime_window_get_height","\xae","\x31","\xb7","\x32"),
	HX_HCSTRING("cffi_lime_window_get_id","\x22","\x56","\xf3","\xc0"),
	HX_HCSTRING("cffi_lime_window_get_width","\x1f","\x22","\xf6","\x1a"),
	HX_HCSTRING("cffi_lime_window_get_x","\x11","\x2c","\xd3","\x17"),
	HX_HCSTRING("cffi_lime_window_get_y","\x12","\x2c","\xd3","\x17"),
	HX_HCSTRING("cffi_lime_window_move","\x8f","\xea","\x74","\x73"),
	HX_HCSTRING("cffi_lime_window_resize","\xf2","\xbc","\x3e","\x26"),
	HX_HCSTRING("cffi_lime_window_set_borderless","\x00","\x48","\x02","\x7c"),
	HX_HCSTRING("cffi_lime_window_set_enable_text_events","\x6a","\x7d","\x40","\x0c"),
	HX_HCSTRING("cffi_lime_window_set_fullscreen","\xf6","\x3b","\x45","\x5e"),
	HX_HCSTRING("cffi_lime_window_set_icon","\xf4","\x9a","\x6b","\x13"),
	HX_HCSTRING("cffi_lime_window_set_maximized","\xbd","\xdc","\xa4","\x85"),
	HX_HCSTRING("cffi_lime_window_set_minimized","\x2b","\xca","\x61","\xaf"),
	HX_HCSTRING("cffi_lime_window_set_resizable","\x10","\x06","\x14","\x30"),
	HX_HCSTRING("cffi_lime_window_set_title","\xbd","\x6d","\x1f","\x44"),
	::String(null()) };

void NativeWindow_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeWindow","\xde","\x3b","\x5b","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NativeWindow_obj::__GetStatic;
	__mClass->mSetStaticField = &NativeWindow_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeWindow_obj >;
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

void NativeWindow_obj::__boot()
{
	cffi_lime_window_alert= ::cpp::Function< void ( ::hx::Object * ,::String ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_alert","\x37","\xb9","\xe2","\xc1"),HX_HCSTRING("ossv","\xc7","\x56","\xb6","\x49"),false));
	cffi_lime_window_close= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_close","\x93","\x79","\xb7","\xe8"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_window_create= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ,int ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_create","\xc1","\xa4","\x90","\x25"),HX_HCSTRING("oiiiso","\x96","\x6e","\x67","\x1c"),false));
	cffi_lime_window_focus= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_focus","\xb3","\xc1","\xdd","\xa4"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_window_get_display= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_display","\x74","\x42","\x74","\x0d"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_enable_text_events= ::cpp::Function< bool ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_enable_text_events","\xbd","\x19","\xaf","\xda"),HX_HCSTRING("ob","\x13","\x61","\x00","\x00"),false));
	cffi_lime_window_get_height= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_height","\xf5","\x7b","\x27","\xd0"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_id= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_id","\xe9","\x30","\xb1","\x4c"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_width= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_width","\xb8","\xfd","\x65","\x5f"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_x= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_x","\x2a","\x07","\xb5","\x31"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_get_y= ::cpp::Function< int ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_get_y","\x2b","\x07","\xb5","\x31"),HX_HCSTRING("oi","\x1a","\x61","\x00","\x00"),false));
	cffi_lime_window_move= ::cpp::Function< void ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_move","\x96","\xb5","\x64","\x4b"),HX_HCSTRING("oiiv","\x87","\xb7","\xae","\x49"),false));
	cffi_lime_window_resize= ::cpp::Function< void ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_resize","\xb9","\x97","\xfc","\xb1"),HX_HCSTRING("oiiv","\x87","\xb7","\xae","\x49"),false));
	cffi_lime_window_set_borderless= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_borderless","\xc7","\xc1","\xd2","\x19"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_enable_text_events= ::cpp::Function< void ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_enable_text_events","\x31","\x96","\x5a","\x0e"),HX_HCSTRING("obv","\x03","\x90","\x54","\x00"),false));
	cffi_lime_window_set_fullscreen= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_fullscreen","\xbd","\xb5","\x15","\xfc"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_icon= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_icon","\x7b","\xf5","\x6a","\x6e"),HX_HCSTRING("oov","\x56","\x9b","\x54","\x00"),false));
	cffi_lime_window_set_maximized= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_maximized","\xd6","\xf8","\xec","\x06"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_minimized= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_minimized","\x44","\xe6","\xa9","\x30"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_resizable= ::cpp::Function< bool ( ::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_resizable","\x29","\x22","\x5c","\xb1"),HX_HCSTRING("obb","\xef","\x8f","\x54","\x00"),false));
	cffi_lime_window_set_title= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,::String ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_window_set_title","\x56","\x49","\x8f","\x88"),HX_HCSTRING("oso","\xcb","\x9e","\x54","\x00"),false));
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
