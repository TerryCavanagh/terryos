#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg
#include <openfl/_internal/stage3D/_AGALConverter/DestReg.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void DestReg_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestReg","new",0x5dc81b95,"openfl._internal.stage3D._AGALConverter.DestReg.new","openfl/_internal/stage3D/AGALConverter.hx",35,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//DestReg_obj::~DestReg_obj() { }

Dynamic DestReg_obj::__CreateEmpty() { return  new DestReg_obj; }
hx::ObjectPtr< DestReg_obj > DestReg_obj::__new()
{  hx::ObjectPtr< DestReg_obj > _result_ = new DestReg_obj();
	_result_->__construct();
	return _result_;}

Dynamic DestReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DestReg_obj > _result_ = new DestReg_obj();
	_result_->__construct();
	return _result_;}

::String DestReg_obj::GetWriteMask( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestReg","GetWriteMask",0x1d084440,"openfl._internal.stage3D._AGALConverter.DestReg.GetWriteMask","openfl/_internal/stage3D/AGALConverter.hx",49,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(50)
	::String str = HX_HCSTRING(".","\x2e","\x00","\x00","\x00");		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(51)
	int tmp = this->mask;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(51)
	int tmp1 = (int(tmp) & int((int)1));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(51)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(51)
	if ((tmp2)){
		HX_STACK_LINE(51)
		hx::AddEq(str,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(52)
	int tmp3 = this->mask;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	int tmp4 = (int(tmp3) & int((int)2));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	bool tmp5 = (tmp4 != (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(52)
	if ((tmp5)){
		HX_STACK_LINE(52)
		hx::AddEq(str,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(53)
	int tmp6 = this->mask;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(53)
	int tmp7 = (int(tmp6) & int((int)4));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(53)
	bool tmp8 = (tmp7 != (int)0);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(53)
	if ((tmp8)){
		HX_STACK_LINE(53)
		hx::AddEq(str,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(54)
	int tmp9 = this->mask;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(54)
	int tmp10 = (int(tmp9) & int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(54)
	bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(54)
	if ((tmp11)){
		HX_STACK_LINE(54)
		hx::AddEq(str,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(55)
	::String tmp12 = str;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(55)
	return tmp12;
}


HX_DEFINE_DYNAMIC_FUNC0(DestReg_obj,GetWriteMask,return )

::String DestReg_obj::ToGLSL( hx::Null< bool >  __o_useMask){
bool useMask = __o_useMask.Default(true);
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestReg","ToGLSL",0xe7b1b104,"openfl._internal.stage3D._AGALConverter.DestReg.ToGLSL","openfl/_internal/stage3D/AGALConverter.hx",59,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(useMask,"useMask")
{
		HX_STACK_LINE(60)
		::String str;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(61)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(61)
		bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(61)
		if ((tmp1)){
			HX_STACK_LINE(62)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp2 = this->programType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(62)
			bool tmp3 = (tmp2 == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(62)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(62)
			if ((tmp3)){
				HX_STACK_LINE(62)
				tmp4 = HX_HCSTRING("gl_Position","\x63","\x0d","\x2a","\xe5");
			}
			else{
				HX_STACK_LINE(62)
				tmp4 = HX_HCSTRING("gl_FragColor","\xd7","\x68","\xe4","\x21");
			}
			HX_STACK_LINE(62)
			str = tmp4;
		}
		else{
			HX_STACK_LINE(65)
			int tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(65)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = this->programType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(65)
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(65)
			int tmp5 = this->n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(65)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(65)
			str = tmp6;
		}
		HX_STACK_LINE(68)
		bool tmp2 = useMask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(68)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(68)
		if ((tmp2)){
			HX_STACK_LINE(68)
			int tmp4 = this->mask;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(68)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(68)
			tmp3 = (tmp5 != (int)15);
		}
		else{
			HX_STACK_LINE(68)
			tmp3 = false;
		}
		HX_STACK_LINE(68)
		if ((tmp3)){
			HX_STACK_LINE(69)
			::String tmp4 = this->GetWriteMask();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(69)
			hx::AddEq(str,tmp4);
		}
		HX_STACK_LINE(71)
		::String tmp4 = str;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(71)
		return tmp4;
	}
}


HX_DEFINE_DYNAMIC_FUNC1(DestReg_obj,ToGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::DestReg DestReg_obj::Parse( int v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.DestReg","Parse",0x2c084288,"openfl._internal.stage3D._AGALConverter.DestReg.Parse","openfl/_internal/stage3D/AGALConverter.hx",39,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_LINE(40)
	::openfl::_internal::stage3D::_AGALConverter::DestReg tmp = ::openfl::_internal::stage3D::_AGALConverter::DestReg_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(40)
	::openfl::_internal::stage3D::_AGALConverter::DestReg dr = tmp;		HX_STACK_VAR(dr,"dr");
	HX_STACK_LINE(41)
	dr->programType = programType;
	HX_STACK_LINE(42)
	int tmp1 = (int(v) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(42)
	int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(42)
	int tmp3 = (int(tmp2) & int((int)15));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(42)
	dr->type = tmp3;
	HX_STACK_LINE(43)
	int tmp4 = (int(v) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(43)
	int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(43)
	int tmp6 = (int(tmp5) & int((int)15));		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(43)
	dr->mask = tmp6;
	HX_STACK_LINE(44)
	int tmp7 = (int(v) & int((int)65535));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(44)
	dr->n = tmp7;
	HX_STACK_LINE(45)
	::openfl::_internal::stage3D::_AGALConverter::DestReg tmp8 = dr;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(45)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DestReg_obj,Parse,return )


DestReg_obj::DestReg_obj()
{
}

void DestReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestReg);
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_END_CLASS();
}

void DestReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(n,"n");
}

Dynamic DestReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		if (HX_FIELD_EQ(inName,"mask") ) { return mask; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ToGLSL") ) { return ToGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"GetWriteMask") ) { return GetWriteMask_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool DestReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
	}
	return false;
}

Dynamic DestReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DestReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(DestReg_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(DestReg_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(DestReg_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsInt,(int)offsetof(DestReg_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("GetWriteMask","\x15","\x1e","\x73","\x28"),
	HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DestReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DestReg_obj::__mClass,"__mClass");
};

#endif

hx::Class DestReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	::String(null()) };

void DestReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.DestReg","\x23","\xad","\x2b","\xd4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DestReg_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DestReg_obj >;
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
} // end namespace _AGALConverter
