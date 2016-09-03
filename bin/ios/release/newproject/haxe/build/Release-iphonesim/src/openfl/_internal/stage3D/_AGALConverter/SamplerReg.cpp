#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerReg
#include <openfl/_internal/stage3D/_AGALConverter/SamplerReg.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SamplerReg_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerReg","new",0xa1112b2d,"openfl._internal.stage3D._AGALConverter.SamplerReg.new","openfl/_internal/stage3D/AGALConverter.hx",170,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SamplerReg_obj::~SamplerReg_obj() { }

Dynamic SamplerReg_obj::__CreateEmpty() { return  new SamplerReg_obj; }
hx::ObjectPtr< SamplerReg_obj > SamplerReg_obj::__new()
{  hx::ObjectPtr< SamplerReg_obj > _result_ = new SamplerReg_obj();
	_result_->__construct();
	return _result_;}

Dynamic SamplerReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SamplerReg_obj > _result_ = new SamplerReg_obj();
	_result_->__construct();
	return _result_;}

::String SamplerReg_obj::ToGLSL( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerReg","ToGLSL",0x66b4706c,"openfl._internal.stage3D._AGALConverter.SamplerReg.ToGLSL","openfl/_internal/stage3D/AGALConverter.hx",189,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(190)
	int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(190)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp1 = this->programType;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(190)
	::String tmp2 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(190)
	int tmp3 = this->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(190)
	::String tmp4 = (tmp2 + tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(190)
	::String str = tmp4;		HX_STACK_VAR(str,"str");
	HX_STACK_LINE(191)
	::String tmp5 = str;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(191)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerReg_obj,ToGLSL,return )

::openfl::_internal::stage3D::SamplerState SamplerReg_obj::ToSamplerState( ){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerReg","ToSamplerState",0xe45fa477,"openfl._internal.stage3D._AGALConverter.SamplerReg.ToSamplerState","openfl/_internal/stage3D/AGALConverter.hx",195,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_LINE(196)
	int magFilter = (int)0;		HX_STACK_VAR(magFilter,"magFilter");
	HX_STACK_LINE(197)
	int minFilter = (int)0;		HX_STACK_VAR(minFilter,"minFilter");
	HX_STACK_LINE(198)
	int wrapModeS = (int)0;		HX_STACK_VAR(wrapModeS,"wrapModeS");
	HX_STACK_LINE(199)
	int wrapModeT = (int)0;		HX_STACK_VAR(wrapModeT,"wrapModeT");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int tmp = this->f;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(202)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(202)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(205)
				magFilter = (int)9728;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(208)
				magFilter = (int)9729;
			}
			;break;
			default: {
				HX_STACK_LINE(211)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(211)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(215)
	{
		HX_STACK_LINE(215)
		int tmp = this->m;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(215)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(215)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(215)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(219)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(219)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(219)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(219)
				if ((tmp3)){
					HX_STACK_LINE(219)
					tmp4 = (int)9728;
				}
				else{
					HX_STACK_LINE(219)
					tmp4 = (int)9729;
				}
				HX_STACK_LINE(219)
				minFilter = tmp4;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(223)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(223)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(223)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(223)
				if ((tmp3)){
					HX_STACK_LINE(223)
					tmp4 = (int)9986;
				}
				else{
					HX_STACK_LINE(223)
					tmp4 = (int)9984;
				}
				HX_STACK_LINE(223)
				minFilter = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(227)
				int tmp2 = this->f;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(227)
				bool tmp3 = (tmp2 != (int)0);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(227)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(227)
				if ((tmp3)){
					HX_STACK_LINE(227)
					tmp4 = (int)9987;
				}
				else{
					HX_STACK_LINE(227)
					tmp4 = (int)9985;
				}
				HX_STACK_LINE(227)
				minFilter = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(230)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(230)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(234)
	{
		HX_STACK_LINE(234)
		int tmp = this->w;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(234)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(234)
		int tmp1 = _g;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(234)
		switch( (int)(tmp1)){
			case (int)0: {
				HX_STACK_LINE(237)
				wrapModeS = (int)33071;
				HX_STACK_LINE(238)
				wrapModeT = (int)33071;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(241)
				wrapModeS = (int)10497;
				HX_STACK_LINE(242)
				wrapModeT = (int)10497;
			}
			;break;
			default: {
				HX_STACK_LINE(245)
				::openfl::errors::IllegalOperationError tmp2 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(245)
				HX_STACK_DO_THROW(tmp2);
			}
		}
	}
	HX_STACK_LINE(249)
	int tmp = this->b;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(249)
	int tmp1 = (int(tmp) << int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(249)
	int tmp2 = (int(tmp1) >> int((int)24));		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(249)
	Float tmp3 = (Float(tmp2) / Float(((Float)8.0)));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(249)
	Float lodBias = tmp3;		HX_STACK_VAR(lodBias,"lodBias");
	HX_STACK_LINE(251)
	Float maxAniso = ((Float)0.0);		HX_STACK_VAR(maxAniso,"maxAniso");
	HX_STACK_LINE(252)
	::openfl::_internal::stage3D::SamplerState tmp4 = ::openfl::_internal::stage3D::SamplerState_obj::__new(minFilter,magFilter,wrapModeS,wrapModeT,lodBias,maxAniso);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(252)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(SamplerReg_obj,ToSamplerState,return )

::openfl::_internal::stage3D::_AGALConverter::SamplerReg SamplerReg_obj::Parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SamplerReg","Parse",0x9f666820,"openfl._internal.stage3D._AGALConverter.SamplerReg.Parse","openfl/_internal/stage3D/AGALConverter.hx",173,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_LINE(174)
	::openfl::_internal::stage3D::_AGALConverter::SamplerReg tmp = ::openfl::_internal::stage3D::_AGALConverter::SamplerReg_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(174)
	::openfl::_internal::stage3D::_AGALConverter::SamplerReg sr = tmp;		HX_STACK_VAR(sr,"sr");
	HX_STACK_LINE(175)
	sr->programType = programType;
	HX_STACK_LINE(176)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(176)
	{
		HX_STACK_LINE(176)
		cpp::Int64Struct tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(176)
		{
			HX_STACK_LINE(176)
			cpp::Int64Struct a = ((v) >> ((int)60));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(176)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			cpp::Int64Struct b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(176)
			tmp2 = ((a) & (b));
		}
		HX_STACK_LINE(176)
		cpp::Int64Struct this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(176)
		tmp1 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(176)
	sr->f = tmp1;
	HX_STACK_LINE(177)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(177)
	{
		HX_STACK_LINE(177)
		cpp::Int64Struct tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			cpp::Int64Struct a = ((v) >> ((int)56));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(177)
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(177)
			cpp::Int64Struct b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(177)
			tmp3 = ((a) & (b));
		}
		HX_STACK_LINE(177)
		cpp::Int64Struct this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(177)
		tmp2 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(177)
	sr->m = tmp2;
	HX_STACK_LINE(178)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		cpp::Int64Struct tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(178)
		{
			HX_STACK_LINE(178)
			cpp::Int64Struct a = ((v) >> ((int)52));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(178)
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(178)
			cpp::Int64Struct b = tmp5;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(178)
			tmp4 = ((a) & (b));
		}
		HX_STACK_LINE(178)
		cpp::Int64Struct this1 = tmp4;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(178)
		tmp3 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(178)
	sr->w = tmp3;
	HX_STACK_LINE(179)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(179)
	{
		HX_STACK_LINE(179)
		cpp::Int64Struct tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		{
			HX_STACK_LINE(179)
			cpp::Int64Struct a = ((v) >> ((int)48));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(179)
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(179)
			cpp::Int64Struct b = tmp6;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(179)
			tmp5 = ((a) & (b));
		}
		HX_STACK_LINE(179)
		cpp::Int64Struct this1 = tmp5;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(179)
		tmp4 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(179)
	sr->s = tmp4;
	HX_STACK_LINE(180)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(180)
	{
		HX_STACK_LINE(180)
		cpp::Int64Struct tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(180)
		{
			HX_STACK_LINE(180)
			cpp::Int64Struct a = ((v) >> ((int)44));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(180)
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(180)
			cpp::Int64Struct b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(180)
			tmp6 = ((a) & (b));
		}
		HX_STACK_LINE(180)
		cpp::Int64Struct this1 = tmp6;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(180)
		tmp5 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(180)
	sr->d = tmp5;
	HX_STACK_LINE(181)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(181)
	{
		HX_STACK_LINE(181)
		cpp::Int64Struct tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(181)
		{
			HX_STACK_LINE(181)
			cpp::Int64Struct a = ((v) >> ((int)40));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(181)
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(181)
			cpp::Int64Struct b = tmp8;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(181)
			tmp7 = ((a) & (b));
		}
		HX_STACK_LINE(181)
		cpp::Int64Struct this1 = tmp7;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(181)
		tmp6 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(181)
	sr->t = tmp6;
	HX_STACK_LINE(182)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(182)
	{
		HX_STACK_LINE(182)
		cpp::Int64Struct tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(182)
		{
			HX_STACK_LINE(182)
			cpp::Int64Struct a = ((v) >> ((int)32));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(182)
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(182)
			cpp::Int64Struct b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(182)
			tmp8 = ((a) & (b));
		}
		HX_STACK_LINE(182)
		cpp::Int64Struct this1 = tmp8;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(182)
		tmp7 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(182)
	sr->type = tmp7;
	HX_STACK_LINE(183)
	int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(183)
	{
		HX_STACK_LINE(183)
		cpp::Int64Struct tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(183)
		{
			HX_STACK_LINE(183)
			cpp::Int64Struct a = ((v) >> ((int)16));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(183)
			cpp::Int64Struct tmp10 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(183)
			cpp::Int64Struct b = tmp10;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(183)
			tmp9 = ((a) & (b));
		}
		HX_STACK_LINE(183)
		cpp::Int64Struct this1 = tmp9;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(183)
		tmp8 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(183)
	sr->b = tmp8;
	HX_STACK_LINE(184)
	int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(184)
	{
		HX_STACK_LINE(184)
		cpp::Int64Struct tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(184)
		{
			HX_STACK_LINE(184)
			cpp::Int64Struct tmp11 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(184)
			cpp::Int64Struct b = tmp11;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(184)
			tmp10 = ((v) & (b));
		}
		HX_STACK_LINE(184)
		cpp::Int64Struct this1 = tmp10;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(184)
		tmp9 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(184)
	sr->n = tmp9;
	HX_STACK_LINE(185)
	::openfl::_internal::stage3D::_AGALConverter::SamplerReg tmp10 = sr;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(185)
	return tmp10;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerReg_obj,Parse,return )


SamplerReg_obj::SamplerReg_obj()
{
}

void SamplerReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerReg);
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_END_CLASS();
}

void SamplerReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(w,"w");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(n,"n");
}

Dynamic SamplerReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { return f; }
		if (HX_FIELD_EQ(inName,"m") ) { return m; }
		if (HX_FIELD_EQ(inName,"w") ) { return w; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"t") ) { return t; }
		if (HX_FIELD_EQ(inName,"b") ) { return b; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ToGLSL") ) { return ToGLSL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ToSamplerState") ) { return ToSamplerState_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SamplerReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SamplerReg_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerReg_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"),
	HX_HCSTRING("ToSamplerState","\x24","\xf6","\x27","\xa3"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerReg_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	::String(null()) };

void SamplerReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SamplerReg","\xbb","\x10","\x9f","\xb1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerReg_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerReg_obj >;
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
