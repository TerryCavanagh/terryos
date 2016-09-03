#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void SamplerState_obj::__construct(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso)
{
HX_STACK_FRAME("openfl._internal.stage3D.SamplerState","new",0xfe112c0a,"openfl._internal.stage3D.SamplerState.new","openfl/_internal/stage3D/SamplerState.hx",15,0xf2d288c3)
HX_STACK_THIS(this)
HX_STACK_ARG(minFilter,"minFilter")
HX_STACK_ARG(magFilter,"magFilter")
HX_STACK_ARG(wrapModeS,"wrapModeS")
HX_STACK_ARG(wrapModeT,"wrapModeT")
HX_STACK_ARG(__o_lodBias,"lodBias")
HX_STACK_ARG(__o_maxAniso,"maxAniso")
Float lodBias = __o_lodBias.Default(((Float)0.0));
Float maxAniso = __o_maxAniso.Default(((Float)0.0));
{
	HX_STACK_LINE(17)
	this->minFilter = minFilter;
	HX_STACK_LINE(18)
	this->magFilter = magFilter;
	HX_STACK_LINE(19)
	this->wrapModeS = wrapModeS;
	HX_STACK_LINE(20)
	this->wrapModeT = wrapModeT;
	HX_STACK_LINE(21)
	this->lodBias = lodBias;
	HX_STACK_LINE(22)
	this->maxAniso = maxAniso;
}
;
	return null();
}

//SamplerState_obj::~SamplerState_obj() { }

Dynamic SamplerState_obj::__CreateEmpty() { return  new SamplerState_obj; }
hx::ObjectPtr< SamplerState_obj > SamplerState_obj::__new(int minFilter,int magFilter,int wrapModeS,int wrapModeT,hx::Null< Float >  __o_lodBias,hx::Null< Float >  __o_maxAniso)
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct(minFilter,magFilter,wrapModeS,wrapModeT,__o_lodBias,__o_maxAniso);
	return _result_;}

Dynamic SamplerState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerState_obj > _result_ = new SamplerState_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _result_;}

bool SamplerState_obj::equals( ::openfl::_internal::stage3D::SamplerState other){
	HX_STACK_FRAME("openfl._internal.stage3D.SamplerState","equals",0xcd1eb8d5,"openfl._internal.stage3D.SamplerState.equals","openfl/_internal/stage3D/SamplerState.hx",27,0xf2d288c3)
	HX_STACK_THIS(this)
	HX_STACK_ARG(other,"other")
	HX_STACK_LINE(29)
	bool tmp = (hx::ObjectPtr<OBJ_>(this) == other);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(29)
	if ((tmp)){
		HX_STACK_LINE(31)
		return true;
	}
	HX_STACK_LINE(35)
	bool tmp1 = (other == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(35)
	if ((tmp1)){
		HX_STACK_LINE(37)
		return false;
	}
	HX_STACK_LINE(41)
	int tmp2 = this->minFilter;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(41)
	int tmp3 = other->minFilter;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(41)
	bool tmp4 = (tmp2 == tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(41)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(41)
	if ((tmp5)){
		HX_STACK_LINE(42)
		int tmp7 = this->magFilter;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(42)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(42)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(42)
		int tmp10 = other->magFilter;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(42)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(41)
		tmp6 = false;
	}
	HX_STACK_LINE(41)
	bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(41)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(41)
	if ((tmp7)){
		HX_STACK_LINE(43)
		int tmp9 = this->wrapModeS;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(43)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(43)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(43)
		int tmp12 = other->wrapModeS;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(43)
		tmp8 = (tmp11 == tmp12);
	}
	else{
		HX_STACK_LINE(41)
		tmp8 = false;
	}
	HX_STACK_LINE(41)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(41)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(41)
	if ((tmp9)){
		HX_STACK_LINE(44)
		int tmp11 = this->wrapModeT;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(44)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(44)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(44)
		int tmp14 = other->wrapModeT;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(44)
		tmp10 = (tmp13 == tmp14);
	}
	else{
		HX_STACK_LINE(41)
		tmp10 = false;
	}
	HX_STACK_LINE(41)
	bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(41)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(41)
	if ((tmp11)){
		HX_STACK_LINE(45)
		Float tmp13 = this->lodBias;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(45)
		Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(45)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(45)
		Float tmp16 = other->lodBias;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(45)
		tmp12 = (tmp15 == tmp16);
	}
	else{
		HX_STACK_LINE(41)
		tmp12 = false;
	}
	HX_STACK_LINE(41)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(41)
	if ((tmp12)){
		HX_STACK_LINE(46)
		Float tmp14 = this->maxAniso;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(46)
		Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(46)
		Float tmp16 = other->maxAniso;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(46)
		tmp13 = (tmp15 == tmp16);
	}
	else{
		HX_STACK_LINE(41)
		tmp13 = false;
	}
	HX_STACK_LINE(41)
	return tmp13;
}


HX_DEFINE_DYNAMIC_FUNC1(SamplerState_obj,equals,return )


SamplerState_obj::SamplerState_obj()
{
}

Dynamic SamplerState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { return lodBias; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { return maxAniso; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { return magFilter; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { return minFilter; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { return wrapModeS; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { return wrapModeT; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SamplerState_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"lodBias") ) { lodBias=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"maxAniso") ) { maxAniso=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"magFilter") ) { magFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"minFilter") ) { minFilter=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeS") ) { wrapModeS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"wrapModeT") ) { wrapModeT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"));
	outFields->push(HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"));
	outFields->push(HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"));
	outFields->push(HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"));
	outFields->push(HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"));
	outFields->push(HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(SamplerState_obj,lodBias),HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,magFilter),HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1")},
	{hx::fsFloat,(int)offsetof(SamplerState_obj,maxAniso),HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,minFilter),HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeS),HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf")},
	{hx::fsInt,(int)offsetof(SamplerState_obj,wrapModeT),HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("lodBias","\x9a","\x3f","\xad","\xac"),
	HX_HCSTRING("magFilter","\xab","\x4e","\xd3","\xf1"),
	HX_HCSTRING("maxAniso","\x34","\x21","\x01","\xcd"),
	HX_HCSTRING("minFilter","\xea","\x1e","\x7d","\xde"),
	HX_HCSTRING("wrapModeS","\x66","\x9d","\xce","\xaf"),
	HX_HCSTRING("wrapModeT","\x67","\x9d","\xce","\xaf"),
	HX_HCSTRING("equals","\x3f","\xee","\xf2","\xbf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerState_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerState_obj::__mClass;

void SamplerState_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.SamplerState","\x18","\x1f","\xbc","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerState_obj >;
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
} // end namespace stage3D
