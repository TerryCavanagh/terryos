#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_Uniform
#include <openfl/display3D/_Program3D/Uniform.h>
#endif
#ifndef INCLUDED_openfl_display3D__Program3D_UniformMap
#include <openfl/display3D/_Program3D/UniformMap.h>
#endif
namespace openfl{
namespace display3D{
namespace _Program3D{

Void UniformMap_obj::__construct(Array< ::Dynamic > list)
{
HX_STACK_FRAME("openfl.display3D._Program3D.UniformMap","new",0xd35cedd9,"openfl.display3D._Program3D.UniformMap.new","openfl/display3D/Program3D.hx",515,0x0a985b04)
HX_STACK_THIS(this)
HX_STACK_ARG(list,"list")
{
	HX_STACK_LINE(517)
	this->__uniforms = list;

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::openfl::display3D::_Program3D::Uniform a,::openfl::display3D::_Program3D::Uniform b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display3D/Program3D.hx",519,0x0a985b04)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(521)
			int tmp = a->regIndex;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(521)
			int tmp1 = b->regIndex;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(521)
			int tmp2 = ::Reflect_obj::compare(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(521)
			return tmp2;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(519)
	this->__uniforms->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(525)
	int total = (int)0;		HX_STACK_VAR(total,"total");
	HX_STACK_LINE(527)
	{
		HX_STACK_LINE(527)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(527)
		Array< ::Dynamic > _g1 = this->__uniforms;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(527)
		while((true)){
			HX_STACK_LINE(527)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(527)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(527)
			if ((tmp1)){
				HX_STACK_LINE(527)
				break;
			}
			HX_STACK_LINE(527)
			::openfl::display3D::_Program3D::Uniform tmp2 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(527)
			::openfl::display3D::_Program3D::Uniform uniform = tmp2;		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(527)
			++(_g);
			HX_STACK_LINE(529)
			int tmp3 = (uniform->regIndex + uniform->regCount);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(529)
			int tmp4 = total;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(529)
			bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(529)
			if ((tmp5)){
				HX_STACK_LINE(531)
				int tmp6 = (uniform->regIndex + uniform->regCount);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(531)
				total = tmp6;
			}
		}
	}
	HX_STACK_LINE(537)
	::openfl::_Vector::ObjectVector tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(537)
	{
		HX_STACK_LINE(537)
		bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
		HX_STACK_LINE(537)
		::openfl::_Vector::ObjectVector tmp1 = ::openfl::_Vector::ObjectVector_obj::__new(total,fixed,null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(537)
		::openfl::_Vector::ObjectVector tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(537)
		tmp = tmp2;
	}
	HX_STACK_LINE(537)
	this->__registerLookup = tmp;
	HX_STACK_LINE(539)
	{
		HX_STACK_LINE(539)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(539)
		Array< ::Dynamic > _g1 = this->__uniforms;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(539)
		while((true)){
			HX_STACK_LINE(539)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(539)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(539)
			if ((tmp2)){
				HX_STACK_LINE(539)
				break;
			}
			HX_STACK_LINE(539)
			::openfl::display3D::_Program3D::Uniform tmp3 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(539)
			::openfl::display3D::_Program3D::Uniform uniform = tmp3;		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(539)
			++(_g);
			HX_STACK_LINE(541)
			{
				HX_STACK_LINE(541)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(541)
				int _g2 = uniform->regCount;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(541)
				while((true)){
					HX_STACK_LINE(541)
					bool tmp4 = (_g3 < _g2);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(541)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(541)
					if ((tmp5)){
						HX_STACK_LINE(541)
						break;
					}
					HX_STACK_LINE(541)
					int tmp6 = (_g3)++;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(541)
					int i = tmp6;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(543)
					::openfl::_Vector::ObjectVector tmp7 = this->__registerLookup;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(543)
					int tmp8 = (uniform->regIndex + i);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(543)
					::openfl::display3D::_Program3D::Uniform tmp9 = uniform;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(543)
					::openfl::display3D::_Program3D::Uniform tmp10 = tmp7->set(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(543)
					tmp10;
				}
			}
		}
	}
	HX_STACK_LINE(549)
	bool tmp1 = this->__allDirty = true;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(549)
	this->__anyDirty = tmp1;
}
;
	return null();
}

//UniformMap_obj::~UniformMap_obj() { }

Dynamic UniformMap_obj::__CreateEmpty() { return  new UniformMap_obj; }
hx::ObjectPtr< UniformMap_obj > UniformMap_obj::__new(Array< ::Dynamic > list)
{  hx::ObjectPtr< UniformMap_obj > _result_ = new UniformMap_obj();
	_result_->__construct(list);
	return _result_;}

Dynamic UniformMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< UniformMap_obj > _result_ = new UniformMap_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void UniformMap_obj::flush( ){
{
		HX_STACK_FRAME("openfl.display3D._Program3D.UniformMap","flush",0x8041907d,"openfl.display3D._Program3D.UniformMap.flush","openfl/display3D/Program3D.hx",554,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(556)
		bool tmp = this->__anyDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(556)
		if ((tmp)){
			HX_STACK_LINE(558)
			{
				HX_STACK_LINE(558)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(558)
				Array< ::Dynamic > _g1 = this->__uniforms;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(558)
				while((true)){
					HX_STACK_LINE(558)
					bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(558)
					bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(558)
					if ((tmp2)){
						HX_STACK_LINE(558)
						break;
					}
					HX_STACK_LINE(558)
					::openfl::display3D::_Program3D::Uniform tmp3 = _g1->__get(_g).StaticCast< ::openfl::display3D::_Program3D::Uniform >();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(558)
					::openfl::display3D::_Program3D::Uniform uniform = tmp3;		HX_STACK_VAR(uniform,"uniform");
					HX_STACK_LINE(558)
					++(_g);
					HX_STACK_LINE(560)
					bool tmp4 = this->__allDirty;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(560)
					bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(560)
					bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(560)
					if ((tmp5)){
						HX_STACK_LINE(560)
						tmp6 = uniform->isDirty;
					}
					else{
						HX_STACK_LINE(560)
						tmp6 = true;
					}
					HX_STACK_LINE(560)
					if ((tmp6)){
						HX_STACK_LINE(562)
						uniform->flush();
						HX_STACK_LINE(563)
						uniform->isDirty = false;
					}
				}
			}
			HX_STACK_LINE(569)
			bool tmp1 = this->__allDirty = false;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(569)
			this->__anyDirty = tmp1;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,flush,(void))

Void UniformMap_obj::markAllDirty( ){
{
		HX_STACK_FRAME("openfl.display3D._Program3D.UniformMap","markAllDirty",0xa1dc4bc5,"openfl.display3D._Program3D.UniformMap.markAllDirty","openfl/display3D/Program3D.hx",576,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_LINE(578)
		this->__allDirty = true;
		HX_STACK_LINE(579)
		this->__anyDirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(UniformMap_obj,markAllDirty,(void))

Void UniformMap_obj::markDirty( int start,int count){
{
		HX_STACK_FRAME("openfl.display3D._Program3D.UniformMap","markDirty",0x0c852efe,"openfl.display3D._Program3D.UniformMap.markDirty","openfl/display3D/Program3D.hx",584,0x0a985b04)
		HX_STACK_THIS(this)
		HX_STACK_ARG(start,"start")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(586)
		bool tmp = this->__allDirty;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(586)
		if ((tmp)){
			HX_STACK_LINE(588)
			return null();
		}
		HX_STACK_LINE(592)
		int tmp1 = (start + count);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		int end = tmp1;		HX_STACK_VAR(end,"end");
		HX_STACK_LINE(594)
		int tmp2 = end;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(594)
		::openfl::_Vector::ObjectVector tmp3 = this->__registerLookup;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(594)
		int tmp4 = tmp3->get_length();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(594)
		bool tmp5 = (tmp2 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(594)
		if ((tmp5)){
			HX_STACK_LINE(596)
			::openfl::_Vector::ObjectVector tmp6 = this->__registerLookup;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(596)
			int tmp7 = tmp6->get_length();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(596)
			end = tmp7;
		}
		HX_STACK_LINE(600)
		int index = start;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(602)
		while((true)){
			HX_STACK_LINE(602)
			bool tmp6 = (index < end);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(602)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(602)
			if ((tmp7)){
				HX_STACK_LINE(602)
				break;
			}
			HX_STACK_LINE(604)
			::openfl::_Vector::ObjectVector tmp8 = this->__registerLookup;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(604)
			int tmp9 = index;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(604)
			::openfl::display3D::_Program3D::Uniform tmp10 = tmp8->get(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(604)
			::openfl::display3D::_Program3D::Uniform uniform = tmp10;		HX_STACK_VAR(uniform,"uniform");
			HX_STACK_LINE(606)
			bool tmp11 = (uniform != null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(606)
			if ((tmp11)){
				HX_STACK_LINE(608)
				uniform->isDirty = true;
				HX_STACK_LINE(609)
				this->__anyDirty = true;
				HX_STACK_LINE(611)
				int tmp12 = (uniform->regIndex + uniform->regCount);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(611)
				index = tmp12;
			}
			else{
				HX_STACK_LINE(615)
				(index)++;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(UniformMap_obj,markDirty,(void))


UniformMap_obj::UniformMap_obj()
{
}

void UniformMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(UniformMap);
	HX_MARK_MEMBER_NAME(__allDirty,"__allDirty");
	HX_MARK_MEMBER_NAME(__anyDirty,"__anyDirty");
	HX_MARK_MEMBER_NAME(__registerLookup,"__registerLookup");
	HX_MARK_MEMBER_NAME(__uniforms,"__uniforms");
	HX_MARK_END_CLASS();
}

void UniformMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__allDirty,"__allDirty");
	HX_VISIT_MEMBER_NAME(__anyDirty,"__anyDirty");
	HX_VISIT_MEMBER_NAME(__registerLookup,"__registerLookup");
	HX_VISIT_MEMBER_NAME(__uniforms,"__uniforms");
}

Dynamic UniformMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"markDirty") ) { return markDirty_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { return __allDirty; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { return __anyDirty; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { return __uniforms; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"markAllDirty") ) { return markAllDirty_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { return __registerLookup; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic UniformMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"__allDirty") ) { __allDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__anyDirty") ) { __anyDirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uniforms") ) { __uniforms=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__registerLookup") ) { __registerLookup=inValue.Cast< ::openfl::_Vector::ObjectVector >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void UniformMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"));
	outFields->push(HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"));
	outFields->push(HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"));
	outFields->push(HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(UniformMap_obj,__allDirty),HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75")},
	{hx::fsBool,(int)offsetof(UniformMap_obj,__anyDirty),HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb")},
	{hx::fsObject /*::openfl::_Vector::ObjectVector*/ ,(int)offsetof(UniformMap_obj,__registerLookup),HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(UniformMap_obj,__uniforms),HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("__allDirty","\x51","\x82","\xec","\x75"),
	HX_HCSTRING("__anyDirty","\xa6","\x20","\xbb","\xfb"),
	HX_HCSTRING("__registerLookup","\x5d","\xb4","\x36","\x5c"),
	HX_HCSTRING("__uniforms","\xdf","\x3f","\x8d","\xa5"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("markAllDirty","\x5e","\x60","\x3e","\x4b"),
	HX_HCSTRING("markDirty","\xc5","\x30","\xa3","\x36"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(UniformMap_obj::__mClass,"__mClass");
};

#endif

hx::Class UniformMap_obj::__mClass;

void UniformMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Program3D.UniformMap","\x67","\x0d","\x51","\x34");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< UniformMap_obj >;
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
} // end namespace display3D
} // end namespace _Program3D
