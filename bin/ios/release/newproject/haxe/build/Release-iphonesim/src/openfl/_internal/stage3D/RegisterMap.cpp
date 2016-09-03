#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg
#include <openfl/_internal/stage3D/_AGALConverter/DestReg.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterMapEntry
#include <openfl/_internal/stage3D/_AGALConverter/RegisterMapEntry.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_RegisterUsage
#include <openfl/_internal/stage3D/_AGALConverter/RegisterUsage.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerReg
#include <openfl/_internal/stage3D/_AGALConverter/SamplerReg.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SourceReg
#include <openfl/_internal/stage3D/_AGALConverter/SourceReg.h>
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

Void RegisterMap_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","new",0xb81e399c,"openfl._internal.stage3D.RegisterMap.new","openfl/_internal/stage3D/AGALConverter.hx",277,0x0a35cc61)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(448)
	this->mEntries = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//RegisterMap_obj::~RegisterMap_obj() { }

Dynamic RegisterMap_obj::__CreateEmpty() { return  new RegisterMap_obj; }
hx::ObjectPtr< RegisterMap_obj > RegisterMap_obj::__new()
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

Dynamic RegisterMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< RegisterMap_obj > _result_ = new RegisterMap_obj();
	_result_->__construct();
	return _result_;}

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::GetUsage( int type,::String name,int number){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","GetUsage",0x25fac60f,"openfl._internal.stage3D.RegisterMap.GetUsage","openfl/_internal/stage3D/AGALConverter.hx",285,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(name,"name")
	HX_STACK_ARG(number,"number")
	HX_STACK_LINE(286)
	{
		HX_STACK_LINE(286)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(286)
		Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(286)
		while((true)){
			HX_STACK_LINE(286)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(286)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(286)
			if ((tmp1)){
				HX_STACK_LINE(286)
				break;
			}
			HX_STACK_LINE(286)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(286)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(286)
			++(_g);
			HX_STACK_LINE(287)
			bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(287)
			bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(287)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(287)
			if ((tmp4)){
				HX_STACK_LINE(287)
				tmp5 = (entry->name == name);
			}
			else{
				HX_STACK_LINE(287)
				tmp5 = false;
			}
			HX_STACK_LINE(287)
			bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(287)
			if ((tmp5)){
				HX_STACK_LINE(287)
				tmp6 = (entry->number == number);
			}
			else{
				HX_STACK_LINE(287)
				tmp6 = false;
			}
			HX_STACK_LINE(287)
			if ((tmp6)){
				HX_STACK_LINE(288)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp7 = entry->usage;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(288)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(291)
	return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Unused;
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,GetUsage,return )

::openfl::_internal::stage3D::_AGALConverter::RegisterUsage RegisterMap_obj::GetRegisterUsage( ::openfl::_internal::stage3D::_AGALConverter::SourceReg sr){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","GetRegisterUsage",0x8d7b26ac,"openfl._internal.stage3D.RegisterMap.GetRegisterUsage","openfl/_internal/stage3D/AGALConverter.hx",295,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_LINE(296)
	bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(296)
	if ((tmp)){
		HX_STACK_LINE(297)
		return ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array;
	}
	HX_STACK_LINE(299)
	int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(299)
	::String tmp2 = sr->ToGLSL(false,null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(299)
	int tmp3 = sr->n;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(299)
	::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp4 = this->GetUsage(tmp1,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(299)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,GetRegisterUsage,return )

Void RegisterMap_obj::AddSR( ::openfl::_internal::stage3D::_AGALConverter::SourceReg sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage,hx::Null< int >  __o_offset){
int offset = __o_offset.Default(0);
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","AddSR",0xbd95651c,"openfl._internal.stage3D.RegisterMap.AddSR","openfl/_internal/stage3D/AGALConverter.hx",304,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sr,"sr")
	HX_STACK_ARG(usage,"usage")
	HX_STACK_ARG(offset,"offset")
{
		HX_STACK_LINE(305)
		bool tmp = (sr->d != (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(305)
		if ((tmp)){
			HX_STACK_LINE(306)
			int tmp1 = sr->itype;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(306)
			int tmp2 = sr->itype;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(306)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp3 = sr->programType;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(306)
			::String tmp4 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(306)
			int tmp5 = sr->n;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(306)
			::String tmp6 = (tmp4 + tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(306)
			int tmp7 = sr->n;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(306)
			this->Add(tmp1,tmp6,tmp7,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
			HX_STACK_LINE(307)
			int tmp8 = sr->type;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(307)
			int tmp9 = sr->type;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(307)
			::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp10 = sr->programType;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(307)
			::String tmp11 = ::openfl::_internal::stage3D::AGALConverter_obj::PrefixFromType(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(307)
			int tmp12 = sr->o;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(307)
			::String tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(307)
			int tmp14 = sr->o;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(307)
			this->Add(tmp8,tmp13,tmp14,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array);
			HX_STACK_LINE(308)
			return null();
		}
		HX_STACK_LINE(310)
		int tmp1 = sr->type;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(310)
		int tmp2 = offset;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(310)
		::String tmp3 = sr->ToGLSL(false,tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(310)
		int tmp4 = (sr->n + offset);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(310)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp5 = usage;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(310)
		this->Add(tmp1,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(RegisterMap_obj,AddSR,(void))

Void RegisterMap_obj::AddSaR( ::openfl::_internal::stage3D::_AGALConverter::SamplerReg sr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","AddSaR",0x252320c7,"openfl._internal.stage3D.RegisterMap.AddSaR","openfl/_internal/stage3D/AGALConverter.hx",314,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sr,"sr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(315)
		int tmp = sr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(315)
		::String tmp1 = sr->ToGLSL();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(315)
		int tmp2 = sr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(315)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(315)
		this->Add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,AddSaR,(void))

Void RegisterMap_obj::AddDR( ::openfl::_internal::stage3D::_AGALConverter::DestReg dr,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","AddDR",0xbd95580b,"openfl._internal.stage3D.RegisterMap.AddDR","openfl/_internal/stage3D/AGALConverter.hx",319,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(dr,"dr")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(320)
		int tmp = dr->type;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(320)
		::String tmp1 = dr->ToGLSL(false);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(320)
		int tmp2 = dr->n;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(320)
		::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp3 = usage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(320)
		this->Add(tmp,tmp1,tmp2,tmp3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(RegisterMap_obj,AddDR,(void))

Void RegisterMap_obj::Add( int type,::String name,int number,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage usage){
{
		HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","Add",0xb7fc133d,"openfl._internal.stage3D.RegisterMap.Add","openfl/_internal/stage3D/AGALConverter.hx",324,0x0a35cc61)
		HX_STACK_THIS(this)
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(name,"name")
		HX_STACK_ARG(number,"number")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(325)
		{
			HX_STACK_LINE(325)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(325)
			Array< ::Dynamic > _g1 = this->mEntries;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(325)
			while((true)){
				HX_STACK_LINE(325)
				bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(325)
				bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(325)
				if ((tmp1)){
					HX_STACK_LINE(325)
					break;
				}
				HX_STACK_LINE(325)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp2 = _g1->__get(_g).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(325)
				::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp2;		HX_STACK_VAR(entry,"entry");
				HX_STACK_LINE(325)
				++(_g);
				HX_STACK_LINE(327)
				bool tmp3 = (entry->type == type);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(327)
				bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(327)
				bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(327)
				if ((tmp4)){
					HX_STACK_LINE(327)
					tmp5 = (entry->name == name);
				}
				else{
					HX_STACK_LINE(327)
					tmp5 = false;
				}
				HX_STACK_LINE(327)
				bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(327)
				if ((tmp5)){
					HX_STACK_LINE(327)
					tmp6 = (entry->number == number);
				}
				else{
					HX_STACK_LINE(327)
					tmp6 = false;
				}
				HX_STACK_LINE(327)
				if ((tmp6)){
					HX_STACK_LINE(328)
					bool tmp7 = (entry->usage != usage);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(328)
					if ((tmp7)){
						HX_STACK_LINE(329)
						::openfl::errors::IllegalOperationError tmp8 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Cannot use register in multiple ways yet (mat4/vec4)","\x5e","\x30","\xe0","\x74"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(329)
						HX_STACK_DO_THROW(tmp8);
					}
					HX_STACK_LINE(331)
					return null();
				}
			}
		}
		HX_STACK_LINE(336)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp = ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry_obj::__new();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(336)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp;		HX_STACK_VAR(entry,"entry");
		HX_STACK_LINE(337)
		entry->type = type;
		HX_STACK_LINE(338)
		entry->name = name;
		HX_STACK_LINE(339)
		entry->number = number;
		HX_STACK_LINE(340)
		entry->usage = usage;
		HX_STACK_LINE(341)
		::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp1 = entry;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(341)
		this->mEntries->push(tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(RegisterMap_obj,Add,(void))

::String RegisterMap_obj::ToGLSL( bool tempRegsOnly){
	HX_STACK_FRAME("openfl._internal.stage3D.RegisterMap","ToGLSL",0x0022d15d,"openfl._internal.stage3D.RegisterMap.ToGLSL","openfl/_internal/stage3D/AGALConverter.hx",346,0x0a35cc61)
	HX_STACK_THIS(this)
	HX_STACK_ARG(tempRegsOnly,"tempRegsOnly")

	HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_1_1)
	int __ArgCount() const { return 2; }
	int run(::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry a,::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry b){
		HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/_internal/stage3D/AGALConverter.hx",348,0x0a35cc61)
		HX_STACK_ARG(a,"a")
		HX_STACK_ARG(b,"b")
		{
			HX_STACK_LINE(349)
			bool tmp = (a->type != b->type);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(349)
			if ((tmp)){
				HX_STACK_LINE(350)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(350)
				tmp1 = hx::TCast< ::Int >::cast(a->type);
				HX_STACK_LINE(350)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(350)
				tmp2 = hx::TCast< ::Int >::cast(b->type);
				HX_STACK_LINE(350)
				int tmp3 = (tmp1 - tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(350)
				return tmp3;
			}
			else{
				HX_STACK_LINE(352)
				int tmp1 = (a->number - b->number);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(352)
				return tmp1;
			}
			HX_STACK_LINE(349)
			return (int)0;
		}
		return null();
	}
	HX_END_LOCAL_FUNC2(return)

	HX_STACK_LINE(347)
	this->mEntries->sort( Dynamic(new _Function_1_1()));
	HX_STACK_LINE(356)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(356)
	::StringBuf sb = tmp;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(357)
	{
		HX_STACK_LINE(357)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(357)
		int tmp1 = this->mEntries->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(357)
		int _g = tmp1;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(357)
		while((true)){
			HX_STACK_LINE(357)
			bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(357)
			bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(357)
			if ((tmp3)){
				HX_STACK_LINE(357)
				break;
			}
			HX_STACK_LINE(357)
			int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(357)
			int i = tmp4;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(358)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp5 = this->mEntries->__get(i).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(358)
			::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry entry = tmp5;		HX_STACK_VAR(entry,"entry");
			HX_STACK_LINE(363)
			bool tmp6 = tempRegsOnly;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(363)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(363)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(363)
			if ((tmp7)){
				HX_STACK_LINE(363)
				tmp8 = (entry->type != (int)2);
			}
			else{
				HX_STACK_LINE(363)
				tmp8 = false;
			}
			HX_STACK_LINE(363)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(363)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(363)
			if ((tmp9)){
				HX_STACK_LINE(364)
				bool tmp11 = tempRegsOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(364)
				bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(364)
				bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(364)
				bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(364)
				bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(364)
				bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(364)
				if ((tmp16)){
					HX_STACK_LINE(364)
					tmp10 = (entry->type == (int)2);
				}
				else{
					HX_STACK_LINE(364)
					tmp10 = false;
				}
			}
			else{
				HX_STACK_LINE(363)
				tmp10 = true;
			}
			HX_STACK_LINE(362)
			if ((tmp10)){
				HX_STACK_LINE(366)
				continue;
			}
			HX_STACK_LINE(371)
			bool tmp11 = (entry->type == (int)3);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(371)
			if ((tmp11)){
				HX_STACK_LINE(372)
				continue;
			}
			HX_STACK_LINE(375)
			{
				HX_STACK_LINE(375)
				int _g2 = entry->type;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(375)
				int tmp12 = _g2;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(375)
				switch( (int)(tmp12)){
					case (int)0: {
						HX_STACK_LINE(379)
						sb->add(HX_HCSTRING("attribute ","\x84","\xa8","\x71","\x97"));
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(383)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(386)
						sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
					}
					;break;
					case (int)3: {
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(391)
						sb->add(HX_HCSTRING("varying ","\xb0","\x25","\xc9","\xa4"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(394)
						sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
					}
					;break;
					default: {
						HX_STACK_LINE(397)
						::openfl::errors::IllegalOperationError tmp13 = ::openfl::errors::IllegalOperationError_obj::__new(null());		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(397)
						HX_STACK_DO_THROW(tmp13);
					}
				}
			}
			HX_STACK_LINE(400)
			{
				HX_STACK_LINE(400)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage _g2 = entry->usage;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(400)
				switch( (int)(_g2->__Index())){
					case (int)1: {
						HX_STACK_LINE(403)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)6: {
						HX_STACK_LINE(406)
						sb->add(HX_HCSTRING("vec4 ","\xc0","\x4c","\x56","\x34"));
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(409)
						sb->add(HX_HCSTRING("mat4 ","\x0c","\x20","\x23","\x03"));
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(412)
						sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(415)
						sb->add(HX_HCSTRING("samplerCube ","\x63","\x87","\x00","\x86"));
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(418)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),418,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(418)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.Unused","\x58","\xd1","\x07","\x85"),tmp12);
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(421)
						Dynamic tmp12 = hx::SourceInfo(HX_HCSTRING("AGALConverter.hx","\x8f","\x36","\xcd","\xe2"),421,HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0"),HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(421)
						::haxe::Log_obj::trace(HX_HCSTRING("Missing switch patten: RegisterUsage.Sampler2DAlpha","\x66","\x88","\xb0","\xee"),tmp12);
					}
					;break;
				}
			}
			HX_STACK_LINE(424)
			bool tmp12 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Sampler2DAlpha);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(424)
			if ((tmp12)){
				HX_STACK_LINE(425)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(426)
				::String tmp13 = entry->name;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(426)
				sb->add(tmp13);
				HX_STACK_LINE(427)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				HX_STACK_LINE(429)
				sb->add(HX_HCSTRING("uniform ","\x6c","\xcc","\x54","\x02"));
				HX_STACK_LINE(430)
				sb->add(HX_HCSTRING("sampler2D ","\x06","\x3c","\x4f","\x7c"));
				HX_STACK_LINE(431)
				::String tmp14 = (entry->name + HX_HCSTRING("_alpha","\x9f","\xee","\x7d","\x1d"));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(431)
				sb->add(tmp14);
				HX_STACK_LINE(432)
				sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
			}
			else{
				HX_STACK_LINE(433)
				bool tmp13 = (entry->usage == ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(433)
				if ((tmp13)){
					HX_STACK_LINE(434)
					int count = (int)128;		HX_STACK_VAR(count,"count");
					HX_STACK_LINE(435)
					int tmp14 = i;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(435)
					int tmp15 = this->mEntries->length;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(435)
					int tmp16 = (tmp15 - (int)1);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(435)
					bool tmp17 = (tmp14 < tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(435)
					if ((tmp17)){
						HX_STACK_LINE(436)
						int tmp18 = (i + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(436)
						::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry tmp19 = this->mEntries->__get(tmp18).StaticCast< ::openfl::_internal::stage3D::_AGALConverter::RegisterMapEntry >();		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(436)
						int tmp20 = tmp19->number;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(436)
						int tmp21 = entry->number;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(436)
						int tmp22 = (tmp20 - tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(436)
						count = tmp22;
					}
					HX_STACK_LINE(437)
					::String tmp18 = (entry->name + HX_HCSTRING("[","\x5b","\x00","\x00","\x00"));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(437)
					int tmp19 = count;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(437)
					::String tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(437)
					::String tmp21 = (tmp20 + HX_HCSTRING("]","\x5d","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(437)
					sb->add(tmp21);
					HX_STACK_LINE(438)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
				else{
					HX_STACK_LINE(440)
					::String tmp14 = entry->name;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(440)
					sb->add(tmp14);
					HX_STACK_LINE(441)
					sb->add(HX_HCSTRING(";\n","\x6f","\x33","\x00","\x00"));
				}
			}
		}
	}
	HX_STACK_LINE(444)
	::String tmp1 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(444)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(RegisterMap_obj,ToGLSL,return )


RegisterMap_obj::RegisterMap_obj()
{
}

void RegisterMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(RegisterMap);
	HX_MARK_MEMBER_NAME(mEntries,"mEntries");
	HX_MARK_END_CLASS();
}

void RegisterMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mEntries,"mEntries");
}

Dynamic RegisterMap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"Add") ) { return Add_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"AddSR") ) { return AddSR_dyn(); }
		if (HX_FIELD_EQ(inName,"AddDR") ) { return AddDR_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"AddSaR") ) { return AddSaR_dyn(); }
		if (HX_FIELD_EQ(inName,"ToGLSL") ) { return ToGLSL_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"GetUsage") ) { return GetUsage_dyn(); }
		if (HX_FIELD_EQ(inName,"mEntries") ) { return mEntries; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"GetRegisterUsage") ) { return GetRegisterUsage_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic RegisterMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"mEntries") ) { mEntries=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void RegisterMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(RegisterMap_obj,mEntries),HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("GetUsage","\xcb","\x28","\xb8","\xe3"),
	HX_HCSTRING("GetRegisterUsage","\x68","\xa5","\xb3","\x23"),
	HX_HCSTRING("AddSR","\xe0","\x34","\x71","\xaf"),
	HX_HCSTRING("AddSaR","\x83","\x1c","\x9d","\xd3"),
	HX_HCSTRING("AddDR","\xcf","\x27","\x71","\xaf"),
	HX_HCSTRING("Add","\x01","\xaa","\x31","\x00"),
	HX_HCSTRING("ToGLSL","\x19","\xcd","\x9c","\xae"),
	HX_HCSTRING("mEntries","\x63","\xec","\x2a","\xa1"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(RegisterMap_obj::__mClass,"__mClass");
};

#endif

hx::Class RegisterMap_obj::__mClass;

void RegisterMap_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.RegisterMap","\xaa","\x7b","\xea","\xb0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< RegisterMap_obj >;
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
