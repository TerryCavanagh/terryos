#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxegon_Scene
#include <haxegon/Scene.h>
#endif
#ifndef INCLUDED_openfl_errors_ArgumentError
#include <openfl/errors/ArgumentError.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
namespace haxegon{

Void Scene_obj::__construct()
{
	return null();
}

//Scene_obj::~Scene_obj() { }

Dynamic Scene_obj::__CreateEmpty() { return  new Scene_obj; }
hx::ObjectPtr< Scene_obj > Scene_obj::__new()
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Dynamic Scene_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Scene_obj > _result_ = new Scene_obj();
	_result_->__construct();
	return _result_;}

Void Scene_obj::init( ){
{
		HX_STACK_FRAME("haxegon.Scene","init",0xb6162260,"haxegon.Scene.init","haxegon/Scene.hx",8,0x6f0d3761)
		HX_STACK_LINE(9)
		::haxegon::Scene_obj::scenelist = Dynamic( Array_obj<Dynamic>::__new() );
		HX_STACK_LINE(10)
		::haxegon::Scene_obj::currentscene = (int)0;
		HX_STACK_LINE(18)
		::Main tmp = ::Type_obj::createInstance(hx::ClassOf< ::Main >(),cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		::haxegon::Scene_obj::scenelist->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,init,(void))

Void Scene_obj::update( ){
{
		HX_STACK_FRAME("haxegon.Scene","update",0xf164e159,"haxegon.Scene.update","haxegon/Scene.hx",22,0x6f0d3761)
		HX_STACK_LINE(23)
		int tmp = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(23)
		Dynamic tmp1 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(23)
		::haxegon::Scene_obj::callscenemethod(tmp1,HX_HCSTRING("update","\x09","\x86","\x05","\x87"));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,update,(void))

Void Scene_obj::callscenemethod( Dynamic scene,::String method){
{
		HX_STACK_FRAME("haxegon.Scene","callscenemethod",0x6b8a1bff,"haxegon.Scene.callscenemethod","haxegon/Scene.hx",26,0x6f0d3761)
		HX_STACK_ARG(scene,"scene")
		HX_STACK_ARG(method,"method")
		HX_STACK_LINE(27)
		int tmp = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(27)
		Dynamic tmp1 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(27)
		::String tmp2 = method;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(27)
		Dynamic tmp3 = ::Reflect_obj::field(tmp1,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(27)
		Dynamic instanceFunc = tmp3;		HX_STACK_VAR(instanceFunc,"instanceFunc");
		HX_STACK_LINE(28)
		bool tmp4 = (instanceFunc != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(28)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(28)
		if ((tmp4)){
			HX_STACK_LINE(28)
			Dynamic tmp6 = instanceFunc;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(28)
			Dynamic tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(28)
			tmp5 = ::Reflect_obj::isFunction(tmp7);
		}
		else{
			HX_STACK_LINE(28)
			tmp5 = false;
		}
		HX_STACK_LINE(28)
		if ((tmp5)){
			HX_STACK_LINE(29)
			try
			{
			HX_STACK_CATCHABLE(::openfl::errors::ArgumentError, 0);
			{
				HX_STACK_LINE(30)
				int tmp6 = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(30)
				Dynamic tmp7 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(30)
				Dynamic tmp8 = instanceFunc;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(30)
				::Reflect_obj::callMethod(tmp7,tmp8,cpp::ArrayBase_obj::__new());
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::openfl::errors::ArgumentError >() ){
					HX_STACK_BEGIN_CATCH
					::openfl::errors::ArgumentError e = __e;{
						HX_STACK_LINE(32)
						Dynamic tmp6 = scene;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(32)
						::String tmp7 = ::Type_obj::getClassName(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(32)
						::String tmp8 = (HX_HCSTRING("ERROR: Couldn't call ","\x0a","\xd4","\xd4","\x24") + tmp7);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(32)
						::String tmp9 = (tmp8 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(32)
						::String tmp10 = method;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(32)
						::String tmp11 = (tmp9 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(32)
						::String tmp12 = (tmp11 + HX_HCSTRING("() without any arguments.","\xe3","\xb4","\x4b","\x0d"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(32)
						HX_STACK_DO_THROW(tmp12);
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
			HX_STACK_LINE(34)
			return null();
		}
		HX_STACK_LINE(38)
		int tmp6 = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(38)
		Dynamic tmp7 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		::hx::Class tmp8 = ::Type_obj::getClass(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		::String tmp9 = method;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(38)
		Dynamic tmp10 = ::Reflect_obj::field(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(38)
		Dynamic classFunc = tmp10;		HX_STACK_VAR(classFunc,"classFunc");
		HX_STACK_LINE(39)
		bool tmp11 = (classFunc != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(39)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(39)
		if ((tmp11)){
			HX_STACK_LINE(39)
			Dynamic tmp13 = classFunc;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(39)
			Dynamic tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(39)
			tmp12 = ::Reflect_obj::isFunction(tmp14);
		}
		else{
			HX_STACK_LINE(39)
			tmp12 = false;
		}
		HX_STACK_LINE(39)
		if ((tmp12)){
			HX_STACK_LINE(40)
			try
			{
			HX_STACK_CATCHABLE(::openfl::errors::ArgumentError, 0);
			{
				HX_STACK_LINE(41)
				int tmp13 = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(41)
				Dynamic tmp14 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(41)
				Dynamic tmp15 = classFunc;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(41)
				::Reflect_obj::callMethod(tmp14,tmp15,cpp::ArrayBase_obj::__new());
			}
			}
			catch(Dynamic __e){
				if (__e.IsClass< ::openfl::errors::ArgumentError >() ){
					HX_STACK_BEGIN_CATCH
					::openfl::errors::ArgumentError e = __e;{
						HX_STACK_LINE(43)
						Dynamic tmp13 = scene;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(43)
						::String tmp14 = ::Type_obj::getClassName(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(43)
						::String tmp15 = (HX_HCSTRING("ERROR: Couldn't call ","\x0a","\xd4","\xd4","\x24") + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(43)
						::String tmp16 = (tmp15 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(43)
						::String tmp17 = method;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(43)
						::String tmp18 = (tmp16 + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(43)
						::String tmp19 = (tmp18 + HX_HCSTRING("() without any arguments.","\xe3","\xb4","\x4b","\x0d"));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(43)
						HX_STACK_DO_THROW(tmp19);
					}
				}
				else {
				    HX_STACK_DO_THROW(__e);
				}
			}
			HX_STACK_LINE(45)
			return null();
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Scene_obj,callscenemethod,(void))

int Scene_obj::findscene( ::hx::Class findscene){
	HX_STACK_FRAME("haxegon.Scene","findscene",0x4ae83123,"haxegon.Scene.findscene","haxegon/Scene.hx",51,0x6f0d3761)
	HX_STACK_ARG(findscene,"findscene")
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(52)
		int tmp = ::haxegon::Scene_obj::scenelist->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(52)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(52)
		while((true)){
			HX_STACK_LINE(52)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(52)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(52)
			if ((tmp2)){
				HX_STACK_LINE(52)
				break;
			}
			HX_STACK_LINE(52)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(52)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(53)
			::hx::Class tmp4 = findscene;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(53)
			Dynamic tmp5 = ::haxegon::Scene_obj::scenelist->__GetItem(i);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(53)
			::hx::Class tmp6 = ::Type_obj::getClass(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(53)
			bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(53)
			if ((tmp7)){
				HX_STACK_LINE(54)
				int tmp8 = i;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(54)
				return tmp8;
			}
		}
	}
	HX_STACK_LINE(65)
	::hx::Class tmp = findscene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(65)
	Dynamic tmp1 = ::Type_obj::createInstance(tmp,cpp::ArrayBase_obj::__new());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(65)
	::haxegon::Scene_obj::scenelist->__Field(HX_HCSTRING("push","\xda","\x11","\x61","\x4a"), hx::paccDynamic )(tmp1);
	HX_STACK_LINE(68)
	int tmp2 = ::haxegon::Scene_obj::scenelist->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic );		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(68)
	int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(68)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,findscene,return )

Dynamic Scene_obj::change( ::hx::Class newscene){
	HX_STACK_FRAME("haxegon.Scene","change",0x21d1ecc0,"haxegon.Scene.change","haxegon/Scene.hx",71,0x6f0d3761)
	HX_STACK_ARG(newscene,"newscene")
	HX_STACK_LINE(72)
	::hx::Class tmp = newscene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(72)
	int tmp1 = ::haxegon::Scene_obj::findscene(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(72)
	::haxegon::Scene_obj::currentscene = tmp1;
	HX_STACK_LINE(73)
	int tmp2 = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(73)
	Dynamic tmp3 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(73)
	::haxegon::Scene_obj::callscenemethod(tmp3,HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"));
	HX_STACK_LINE(74)
	int tmp4 = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(74)
	Dynamic tmp5 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(74)
	Dynamic tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(74)
	return tmp6;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,change,return )

Dynamic Scene_obj::get( ::hx::Class newscene){
	HX_STACK_FRAME("haxegon.Scene","get",0xfc37f346,"haxegon.Scene.get","haxegon/Scene.hx",77,0x6f0d3761)
	HX_STACK_ARG(newscene,"newscene")
	HX_STACK_LINE(78)
	::hx::Class tmp = newscene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(78)
	int tmp1 = ::haxegon::Scene_obj::findscene(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(78)
	Dynamic tmp2 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(78)
	Dynamic tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(78)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Scene_obj,get,return )

::String Scene_obj::getcurrentscene( ){
	HX_STACK_FRAME("haxegon.Scene","getcurrentscene",0xe92b12b9,"haxegon.Scene.getcurrentscene","haxegon/Scene.hx",81,0x6f0d3761)
	HX_STACK_LINE(82)
	int tmp = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	Dynamic tmp1 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	::hx::Class tmp2 = ::Type_obj::getClass(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(82)
	::String tmp3 = ::Type_obj::getClassName(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(82)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getcurrentscene,return )

Dynamic Scene_obj::getcurrentsceneclass( ){
	HX_STACK_FRAME("haxegon.Scene","getcurrentsceneclass",0xa7d1e6df,"haxegon.Scene.getcurrentsceneclass","haxegon/Scene.hx",85,0x6f0d3761)
	HX_STACK_LINE(86)
	int tmp = ::haxegon::Scene_obj::currentscene;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(86)
	Dynamic tmp1 = ::haxegon::Scene_obj::scenelist->__GetItem(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(86)
	Dynamic tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(86)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Scene_obj,getcurrentsceneclass,return )

cpp::ArrayBase Scene_obj::scenelist;

int Scene_obj::currentscene;


Scene_obj::Scene_obj()
{
}

bool Scene_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { outValue = get_dyn(); return true;  }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { outValue = update_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"change") ) { outValue = change_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"findscene") ) { outValue = findscene_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"scenelist") ) { outValue = scenelist; return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentscene") ) { outValue = currentscene; return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"callscenemethod") ) { outValue = callscenemethod_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getcurrentscene") ) { outValue = getcurrentscene_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getcurrentsceneclass") ) { outValue = getcurrentsceneclass_dyn(); return true;  }
	}
	return false;
}

bool Scene_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"scenelist") ) { scenelist=ioValue.Cast< cpp::ArrayBase >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentscene") ) { currentscene=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(void *) &Scene_obj::scenelist,HX_HCSTRING("scenelist","\xaa","\x8b","\x59","\xb3")},
	{hx::fsInt,(void *) &Scene_obj::currentscene,HX_HCSTRING("currentscene","\x73","\x4e","\xb0","\x2c")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Scene_obj::scenelist,"scenelist");
	HX_MARK_MEMBER_NAME(Scene_obj::currentscene,"currentscene");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Scene_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Scene_obj::scenelist,"scenelist");
	HX_VISIT_MEMBER_NAME(Scene_obj::currentscene,"currentscene");
};

#endif

hx::Class Scene_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("init","\x10","\x3b","\xbb","\x45"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("callscenemethod","\x4f","\x61","\xe7","\x09"),
	HX_HCSTRING("findscene","\x73","\x9a","\x9b","\xd4"),
	HX_HCSTRING("change","\x70","\x91","\x72","\xb7"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("getcurrentscene","\x09","\x58","\x88","\x87"),
	HX_HCSTRING("getcurrentsceneclass","\x8f","\x5f","\xc7","\x74"),
	HX_HCSTRING("scenelist","\xaa","\x8b","\x59","\xb3"),
	HX_HCSTRING("currentscene","\x73","\x4e","\xb0","\x2c"),
	::String(null()) };

void Scene_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.Scene","\x1e","\xbb","\x02","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Scene_obj::__GetStatic;
	__mClass->mSetStaticField = &Scene_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Scene_obj >;
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
