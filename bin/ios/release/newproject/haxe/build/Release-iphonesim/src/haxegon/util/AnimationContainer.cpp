#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxegon_Gfx
#include <haxegon/Gfx.h>
#endif
#ifndef INCLUDED_haxegon_util_AnimationContainer
#include <haxegon/util/AnimationContainer.h>
#endif
namespace haxegon{
namespace util{

Void AnimationContainer_obj::__construct(::String _animationname,::String _tileset,int _startframe,int _endframe,int _delayperframe)
{
HX_STACK_FRAME("haxegon.util.AnimationContainer","new",0x202fbf8d,"haxegon.util.AnimationContainer.new","haxegon/util/AnimationContainer.hx",5,0xa4fa3823)
HX_STACK_THIS(this)
HX_STACK_ARG(_animationname,"_animationname")
HX_STACK_ARG(_tileset,"_tileset")
HX_STACK_ARG(_startframe,"_startframe")
HX_STACK_ARG(_endframe,"_endframe")
HX_STACK_ARG(_delayperframe,"_delayperframe")
{
	HX_STACK_LINE(6)
	this->name = _animationname;
	HX_STACK_LINE(7)
	this->tileset = _tileset;
	HX_STACK_LINE(8)
	::haxe::ds::StringMap tmp = ::haxegon::Gfx_obj::tilesetindex;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(8)
	::String tmp1 = this->tileset;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(8)
	Dynamic tmp2 = tmp->get(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(8)
	this->tilesetnum = tmp2;
	HX_STACK_LINE(9)
	this->startframe = _startframe;
	HX_STACK_LINE(10)
	this->endframe = _endframe;
	HX_STACK_LINE(11)
	this->delayperframe = _delayperframe;
	HX_STACK_LINE(13)
	this->reset();
}
;
	return null();
}

//AnimationContainer_obj::~AnimationContainer_obj() { }

Dynamic AnimationContainer_obj::__CreateEmpty() { return  new AnimationContainer_obj; }
hx::ObjectPtr< AnimationContainer_obj > AnimationContainer_obj::__new(::String _animationname,::String _tileset,int _startframe,int _endframe,int _delayperframe)
{  hx::ObjectPtr< AnimationContainer_obj > _result_ = new AnimationContainer_obj();
	_result_->__construct(_animationname,_tileset,_startframe,_endframe,_delayperframe);
	return _result_;}

Dynamic AnimationContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AnimationContainer_obj > _result_ = new AnimationContainer_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _result_;}

Void AnimationContainer_obj::update( ){
{
		HX_STACK_FRAME("haxegon.util.AnimationContainer","update",0x99c790fc,"haxegon.util.AnimationContainer.update","haxegon/util/AnimationContainer.hx",16,0xa4fa3823)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		(this->timethisframe)++;
		HX_STACK_LINE(18)
		int tmp = this->timethisframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(18)
		int tmp1 = this->delayperframe;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(18)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(18)
		if ((tmp2)){
			HX_STACK_LINE(19)
			this->timethisframe = (int)0;
			HX_STACK_LINE(20)
			(this->currentframe)++;
			HX_STACK_LINE(21)
			int tmp3 = this->currentframe;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(21)
			int tmp4 = this->endframe;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(21)
			bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(21)
			if ((tmp5)){
				HX_STACK_LINE(22)
				int tmp6 = this->startframe;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(22)
				this->currentframe = tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationContainer_obj,update,(void))

Void AnimationContainer_obj::reset( ){
{
		HX_STACK_FRAME("haxegon.util.AnimationContainer","reset",0xa8e01e3c,"haxegon.util.AnimationContainer.reset","haxegon/util/AnimationContainer.hx",27,0xa4fa3823)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		this->timethisframe = (int)0;
		HX_STACK_LINE(29)
		int tmp = this->startframe;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(29)
		this->currentframe = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AnimationContainer_obj,reset,(void))


AnimationContainer_obj::AnimationContainer_obj()
{
}

void AnimationContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AnimationContainer);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileset,"tileset");
	HX_MARK_MEMBER_NAME(tilesetnum,"tilesetnum");
	HX_MARK_MEMBER_NAME(startframe,"startframe");
	HX_MARK_MEMBER_NAME(endframe,"endframe");
	HX_MARK_MEMBER_NAME(delayperframe,"delayperframe");
	HX_MARK_MEMBER_NAME(timethisframe,"timethisframe");
	HX_MARK_MEMBER_NAME(currentframe,"currentframe");
	HX_MARK_END_CLASS();
}

void AnimationContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileset,"tileset");
	HX_VISIT_MEMBER_NAME(tilesetnum,"tilesetnum");
	HX_VISIT_MEMBER_NAME(startframe,"startframe");
	HX_VISIT_MEMBER_NAME(endframe,"endframe");
	HX_VISIT_MEMBER_NAME(delayperframe,"delayperframe");
	HX_VISIT_MEMBER_NAME(timethisframe,"timethisframe");
	HX_VISIT_MEMBER_NAME(currentframe,"currentframe");
}

Dynamic AnimationContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { return tileset; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endframe") ) { return endframe; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesetnum") ) { return tilesetnum; }
		if (HX_FIELD_EQ(inName,"startframe") ) { return startframe; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentframe") ) { return currentframe; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"delayperframe") ) { return delayperframe; }
		if (HX_FIELD_EQ(inName,"timethisframe") ) { return timethisframe; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AnimationContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"tileset") ) { tileset=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"endframe") ) { endframe=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tilesetnum") ) { tilesetnum=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"startframe") ) { startframe=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"currentframe") ) { currentframe=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"delayperframe") ) { delayperframe=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"timethisframe") ) { timethisframe=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AnimationContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"));
	outFields->push(HX_HCSTRING("tilesetnum","\x92","\x15","\x86","\x9f"));
	outFields->push(HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f"));
	outFields->push(HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71"));
	outFields->push(HX_HCSTRING("delayperframe","\xb3","\xf4","\x1a","\x27"));
	outFields->push(HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30"));
	outFields->push(HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(AnimationContainer_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsString,(int)offsetof(AnimationContainer_obj,tileset),HX_HCSTRING("tileset","\x34","\x81","\x93","\x45")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,tilesetnum),HX_HCSTRING("tilesetnum","\x92","\x15","\x86","\x9f")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,startframe),HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,endframe),HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,delayperframe),HX_HCSTRING("delayperframe","\xb3","\xf4","\x1a","\x27")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,timethisframe),HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30")},
	{hx::fsInt,(int)offsetof(AnimationContainer_obj,currentframe),HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("tileset","\x34","\x81","\x93","\x45"),
	HX_HCSTRING("tilesetnum","\x92","\x15","\x86","\x9f"),
	HX_HCSTRING("startframe","\x8b","\xe0","\x6c","\x8f"),
	HX_HCSTRING("endframe","\x72","\x9a","\x53","\x71"),
	HX_HCSTRING("delayperframe","\xb3","\xf4","\x1a","\x27"),
	HX_HCSTRING("timethisframe","\x62","\x67","\x8f","\x30"),
	HX_HCSTRING("currentframe","\x54","\xed","\x61","\xba"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AnimationContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AnimationContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class AnimationContainer_obj::__mClass;

void AnimationContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxegon.util.AnimationContainer","\x1b","\xf5","\x03","\x8c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AnimationContainer_obj >;
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
