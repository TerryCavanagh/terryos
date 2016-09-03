#include <hxcpp.h>

#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceReg
#include <openfl/_internal/stage3D/_AGALConverter/SourceReg.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

Void SourceReg_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceReg","new",0x07d6407c,"openfl._internal.stage3D._AGALConverter.SourceReg.new","openfl/_internal/stage3D/AGALConverter.hx",87,0x0a35cc61)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//SourceReg_obj::~SourceReg_obj() { }

Dynamic SourceReg_obj::__CreateEmpty() { return  new SourceReg_obj; }
hx::ObjectPtr< SourceReg_obj > SourceReg_obj::__new()
{  hx::ObjectPtr< SourceReg_obj > _result_ = new SourceReg_obj();
	_result_->__construct();
	return _result_;}

Dynamic SourceReg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SourceReg_obj > _result_ = new SourceReg_obj();
	_result_->__construct();
	return _result_;}

::String SourceReg_obj::ToGLSL( hx::Null< bool >  __o_emitSwizzle,hx::Null< int >  __o_offset){
bool emitSwizzle = __o_emitSwizzle.Default(true);
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceReg","ToGLSL",0xdec2567d,"openfl._internal.stage3D._AGALConverter.SourceReg.ToGLSL","openfl/_internal/stage3D/AGALConverter.hx",105,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(emitSwizzle,"emitSwizzle")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(106)
		int tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(106)
		bool tmp1 = (tmp == (int)3);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(106)
		if ((tmp1)){
			HX_STACK_LINE(107)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp2 = this->programType;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(107)
			bool tmp3 = (tmp2 == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(107)
			::String tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(107)
			if ((tmp3)){
				HX_STACK_LINE(107)
				tmp4 = HX_HCSTRING("gl_Position","\x63","\x0d","\x2a","\xe5");
			}
			else{
				HX_STACK_LINE(107)
				tmp4 = HX_HCSTRING("gl_FragColor","\xd7","\x68","\xe4","\x21");
			}
			HX_STACK_LINE(107)
			return tmp4;
		}
		HX_STACK_LINE(111)
		int tmp2 = this->s;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		bool tmp3 = (tmp2 == (int)228);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		if ((tmp3)){
			HX_STACK_LINE(111)
			int tmp5 = this->sourceMask;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(111)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(111)
			tmp4 = (tmp6 == (int)15);
		}
		else{
			HX_STACK_LINE(111)
			tmp4 = false;
		}
		HX_STACK_LINE(111)
		bool fullxyzw = tmp4;		HX_STACK_VAR(fullxyzw,"fullxyzw");
		HX_STACK_LINE(113)
		::String swizzle = HX_HCSTRING("","\x00","\x00","\x00","\x00");		HX_STACK_VAR(swizzle,"swizzle");
		HX_STACK_LINE(114)
		int tmp5 = this->type;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(114)
		bool tmp6 = (tmp5 != (int)5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(114)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(114)
		if ((tmp6)){
			HX_STACK_LINE(114)
			bool tmp8 = fullxyzw;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(114)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(114)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(114)
			tmp7 = false;
		}
		HX_STACK_LINE(114)
		if ((tmp7)){
			HX_STACK_LINE(115)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(115)
			while((true)){
				HX_STACK_LINE(115)
				bool tmp8 = (_g < (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(115)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(115)
				if ((tmp9)){
					HX_STACK_LINE(115)
					break;
				}
				HX_STACK_LINE(115)
				int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(115)
				int i = tmp10;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(118)
				int tmp11 = this->sourceMask;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(118)
				int tmp12 = (int((int)1) << int(i));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(118)
				int tmp13 = (int(tmp11) & int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(118)
				bool tmp14 = (tmp13 != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(118)
				if ((tmp14)){
					HX_STACK_LINE(119)
					int tmp15 = this->s;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(119)
					int tmp16 = (i * (int)2);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(119)
					int tmp17 = (int(tmp15) >> int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(119)
					int tmp18 = (int(tmp17) & int((int)3));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(119)
					int _g1 = tmp18;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(119)
					int tmp19 = _g1;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(119)
					switch( (int)(tmp19)){
						case (int)0: {
							HX_STACK_LINE(121)
							hx::AddEq(swizzle,HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(124)
							hx::AddEq(swizzle,HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(127)
							hx::AddEq(swizzle,HX_HCSTRING("z","\x7a","\x00","\x00","\x00"));
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(130)
							hx::AddEq(swizzle,HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
						}
						;break;
					}
				}
			}
		}
		HX_STACK_LINE(137)
		int tmp8 = this->type;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(137)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp9 = this->programType;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(137)
		::String tmp10 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp8,tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(137)
		::String str = tmp10;		HX_STACK_VAR(str,"str");
		HX_STACK_LINE(138)
		int tmp11 = this->d;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(138)
		bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(138)
		if ((tmp12)){
			HX_STACK_LINE(140)
			int tmp13 = this->n;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(140)
			int tmp14 = offset;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(140)
			int tmp15 = (tmp13 + tmp14);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(140)
			hx::AddEq(str,tmp15);
		}
		else{
			HX_STACK_LINE(143)
			int tmp13 = this->o;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(143)
			hx::AddEq(str,tmp13);
			HX_STACK_LINE(144)
			Dynamic tmp14 = HX_HCSTRING("x","\x78","\x00","\x00","\x00").charCodeAt((int)0);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(144)
			int tmp15 = this->q;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(144)
			int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(144)
			::String tmp17 = ::String::fromCharCode(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(144)
			::String indexComponent = tmp17;		HX_STACK_VAR(indexComponent,"indexComponent");
			HX_STACK_LINE(145)
			int tmp18 = this->itype;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(145)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp19 = this->programType;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(145)
			::String tmp20 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp18,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(145)
			int tmp21 = this->n;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(145)
			::String tmp22 = (tmp20 + tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(145)
			::String tmp23 = (tmp22 + HX_HCSTRING(".","\x2e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(145)
			::String tmp24 = indexComponent;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(145)
			::String tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(145)
			::String indexRegister = tmp25;		HX_STACK_VAR(indexRegister,"indexRegister");
			HX_STACK_LINE(146)
			::String tmp26 = (HX_HCSTRING("[ int(","\x3e","\xaa","\x07","\x15") + indexRegister);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(146)
			::String tmp27 = (tmp26 + HX_HCSTRING(") +","\x74","\x38","\x1f","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(146)
			int tmp28 = offset;		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(146)
			::String tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(146)
			::String tmp30 = (tmp29 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(146)
			hx::AddEq(str,tmp30);
		}
		HX_STACK_LINE(149)
		bool tmp13 = emitSwizzle;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(149)
		bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(149)
		if ((tmp13)){
			HX_STACK_LINE(149)
			tmp14 = (swizzle != HX_HCSTRING("","\x00","\x00","\x00","\x00"));
		}
		else{
			HX_STACK_LINE(149)
			tmp14 = false;
		}
		HX_STACK_LINE(149)
		if ((tmp14)){
			HX_STACK_LINE(150)
			::String tmp15 = (HX_HCSTRING(".","\x2e","\x00","\x00","\x00") + swizzle);		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(150)
			hx::AddEq(str,tmp15);
		}
		HX_STACK_LINE(153)
		::String tmp15 = str;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(153)
		return tmp15;
	}
}


HX_DEFINE_DYNAMIC_FUNC2(SourceReg_obj,ToGLSL,return )

::openfl::_internal::stage3D::_AGALConverter::SourceReg SourceReg_obj::Parse( cpp::Int64Struct v,::openfl::_internal::stage3D::_AGALConverter::ProgramType programType,int sourceMask){
	HX_STACK_FRAME("openfl._internal.stage3D._AGALConverter.SourceReg","Parse",0x1196af2f,"openfl._internal.stage3D._AGALConverter.SourceReg.Parse","openfl/_internal/stage3D/AGALConverter.hx",90,0x0a35cc61)
	HX_STACK_ARG(v,"v")
	HX_STACK_ARG(programType,"programType")
	HX_STACK_ARG(sourceMask,"sourceMask")
	HX_STACK_LINE(91)
	::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp = ::openfl::_internal::stage3D::_AGALConverter::SourceReg_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(91)
	::openfl::_internal::stage3D::_AGALConverter::SourceReg sr = tmp;		HX_STACK_VAR(sr,"sr");
	HX_STACK_LINE(92)
	sr->programType = programType;
	HX_STACK_LINE(93)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(93)
	{
		HX_STACK_LINE(93)
		cpp::Int64Struct tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(93)
		{
			HX_STACK_LINE(93)
			cpp::Int64Struct a = ((v) >> ((int)63));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(93)
			cpp::Int64Struct tmp3 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)1);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(93)
			cpp::Int64Struct b = tmp3;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(93)
			tmp2 = ((a) & (b));
		}
		HX_STACK_LINE(93)
		cpp::Int64Struct this1 = tmp2;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(93)
		tmp1 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(93)
	sr->d = tmp1;
	HX_STACK_LINE(94)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		cpp::Int64Struct tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(94)
		{
			HX_STACK_LINE(94)
			cpp::Int64Struct a = ((v) >> ((int)48));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(94)
			cpp::Int64Struct tmp4 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(94)
			cpp::Int64Struct b = tmp4;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(94)
			tmp3 = ((a) & (b));
		}
		HX_STACK_LINE(94)
		cpp::Int64Struct this1 = tmp3;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(94)
		tmp2 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(94)
	sr->q = tmp2;
	HX_STACK_LINE(95)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		cpp::Int64Struct tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(95)
		{
			HX_STACK_LINE(95)
			cpp::Int64Struct a = ((v) >> ((int)40));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(95)
			cpp::Int64Struct tmp5 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(95)
			cpp::Int64Struct b = tmp5;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(95)
			tmp4 = ((a) & (b));
		}
		HX_STACK_LINE(95)
		cpp::Int64Struct this1 = tmp4;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(95)
		tmp3 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(95)
	sr->itype = tmp3;
	HX_STACK_LINE(96)
	int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		cpp::Int64Struct tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(96)
		{
			HX_STACK_LINE(96)
			cpp::Int64Struct a = ((v) >> ((int)32));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(96)
			cpp::Int64Struct tmp6 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)15);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(96)
			cpp::Int64Struct b = tmp6;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(96)
			tmp5 = ((a) & (b));
		}
		HX_STACK_LINE(96)
		cpp::Int64Struct this1 = tmp5;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(96)
		tmp4 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(96)
	sr->type = tmp4;
	HX_STACK_LINE(97)
	int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		cpp::Int64Struct tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(97)
		{
			HX_STACK_LINE(97)
			cpp::Int64Struct a = ((v) >> ((int)24));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(97)
			cpp::Int64Struct tmp7 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			cpp::Int64Struct b = tmp7;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(97)
			tmp6 = ((a) & (b));
		}
		HX_STACK_LINE(97)
		cpp::Int64Struct this1 = tmp6;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(97)
		tmp5 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(97)
	sr->s = tmp5;
	HX_STACK_LINE(98)
	int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		cpp::Int64Struct tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(98)
		{
			HX_STACK_LINE(98)
			cpp::Int64Struct a = ((v) >> ((int)16));		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(98)
			cpp::Int64Struct tmp8 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)255);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(98)
			cpp::Int64Struct b = tmp8;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(98)
			tmp7 = ((a) & (b));
		}
		HX_STACK_LINE(98)
		cpp::Int64Struct this1 = tmp7;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(98)
		tmp6 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(98)
	sr->o = tmp6;
	HX_STACK_LINE(99)
	int tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		cpp::Int64Struct tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			cpp::Int64Struct tmp9 = ::haxe::_Int64::Int64_Impl__obj::ofInt((int)65535);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(99)
			cpp::Int64Struct b = tmp9;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(99)
			tmp8 = ((v) & (b));
		}
		HX_STACK_LINE(99)
		cpp::Int64Struct this1 = tmp8;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(99)
		tmp7 = (int)((this1)&0xffffffff);
	}
	HX_STACK_LINE(99)
	sr->n = tmp7;
	HX_STACK_LINE(100)
	sr->sourceMask = sourceMask;
	HX_STACK_LINE(101)
	::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp8 = sr;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(101)
	return tmp8;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(SourceReg_obj,Parse,return )


SourceReg_obj::SourceReg_obj()
{
}

void SourceReg_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SourceReg);
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(q,"q");
	HX_MARK_MEMBER_NAME(itype,"itype");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(o,"o");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(sourceMask,"sourceMask");
	HX_MARK_END_CLASS();
}

void SourceReg_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(q,"q");
	HX_VISIT_MEMBER_NAME(itype,"itype");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(o,"o");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(sourceMask,"sourceMask");
}

Dynamic SourceReg_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { return d; }
		if (HX_FIELD_EQ(inName,"q") ) { return q; }
		if (HX_FIELD_EQ(inName,"s") ) { return s; }
		if (HX_FIELD_EQ(inName,"o") ) { return o; }
		if (HX_FIELD_EQ(inName,"n") ) { return n; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { return itype; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"ToGLSL") ) { return ToGLSL_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { return sourceMask; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return programType; }
	}
	return super::__Field(inName,inCallProp);
}

bool SourceReg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"Parse") ) { outValue = Parse_dyn(); return true;  }
	}
	return false;
}

Dynamic SourceReg_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"q") ) { q=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"o") ) { o=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"itype") ) { itype=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceMask") ) { sourceMask=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast< ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SourceReg_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("q","\x71","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("o","\x6f","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SourceReg_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,q),HX_HCSTRING("q","\x71","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,itype),HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,o),HX_HCSTRING("o","\x6f","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SourceReg_obj,sourceMask),HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("q","\x71","\x00","\x00","\x00"),
	HX_HCSTRING("itype","\xa3","\xdb","\x1b","\xc2"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("o","\x6f","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("sourceMask","\x67","\x27","\xba","\x70"),
	HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SourceReg_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SourceReg_obj::__mClass,"__mClass");
};

#endif

hx::Class SourceReg_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("Parse","\x13","\x00","\x83","\x50"),
	::String(null()) };

void SourceReg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SourceReg","\x8a","\x92","\x9d","\xe0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SourceReg_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SourceReg_obj >;
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
