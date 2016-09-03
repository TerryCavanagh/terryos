#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_RegisterMap
#include <openfl/_internal/stage3D/RegisterMap.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestReg
#include <openfl/_internal/stage3D/_AGALConverter/DestReg.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
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
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void AGALConverter_obj::__construct()
{
	return null();
}

//AGALConverter_obj::~AGALConverter_obj() { }

Dynamic AGALConverter_obj::__CreateEmpty() { return  new AGALConverter_obj; }
hx::ObjectPtr< AGALConverter_obj > AGALConverter_obj::__new()
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

Dynamic AGALConverter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AGALConverter_obj > _result_ = new AGALConverter_obj();
	_result_->__construct();
	return _result_;}

::String AGALConverter_obj::PrefixFromType( int t,::openfl::_internal::stage3D::_AGALConverter::ProgramType pt){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","PrefixFromType",0x9d2aa824,"openfl._internal.stage3D.AGALConverter.PrefixFromType","openfl/_internal/stage3D/AGALConverter.hx",454,0x0a35cc61)
	HX_STACK_ARG(t,"t")
	HX_STACK_ARG(pt,"pt")
	HX_STACK_LINE(455)
	int tmp = t;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(455)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(456)
			return HX_HCSTRING("va","\x2b","\x67","\x00","\x00");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(457)
			bool tmp1 = (pt == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(457)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(457)
			if ((tmp1)){
				HX_STACK_LINE(457)
				tmp2 = HX_HCSTRING("vc","\x2d","\x67","\x00","\x00");
			}
			else{
				HX_STACK_LINE(457)
				tmp2 = HX_HCSTRING("fc","\x3d","\x59","\x00","\x00");
			}
			HX_STACK_LINE(457)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(458)
			bool tmp1 = (pt == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(458)
			::String tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(458)
			if ((tmp1)){
				HX_STACK_LINE(458)
				tmp2 = HX_HCSTRING("vt","\x3e","\x67","\x00","\x00");
			}
			else{
				HX_STACK_LINE(458)
				tmp2 = HX_HCSTRING("ft","\x4e","\x59","\x00","\x00");
			}
			HX_STACK_LINE(458)
			return tmp2;
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(459)
			return HX_HCSTRING("output_","\x3e","\x12","\x6c","\xe4");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(460)
			return HX_HCSTRING("v","\x76","\x00","\x00","\x00");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(461)
			return HX_HCSTRING("sampler","\x08","\xc5","\xc9","\x83");
		}
		;break;
		default: {
			HX_STACK_LINE(462)
			::openfl::errors::IllegalOperationError tmp1 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Invalid data!","\xae","\xd8","\xc0","\xb8"));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(462)
			HX_STACK_DO_THROW(tmp1);
		}
	}
	HX_STACK_LINE(455)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,PrefixFromType,return )

cpp::Int64Struct AGALConverter_obj::ReadUInt64( ::openfl::utils::ByteArrayData ba){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","ReadUInt64",0xd77ae15c,"openfl._internal.stage3D.AGALConverter.ReadUInt64","openfl/_internal/stage3D/AGALConverter.hx",468,0x0a35cc61)
	HX_STACK_ARG(ba,"ba")
	HX_STACK_LINE(469)
	int tmp = ba->readInt();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(469)
	int lo = tmp;		HX_STACK_VAR(lo,"lo");
	HX_STACK_LINE(470)
	int tmp1 = ba->readInt();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(470)
	int hi = tmp1;		HX_STACK_VAR(hi,"hi");
	HX_STACK_LINE(471)
	return cpp::Int64Struct(( ( (cpp::Int64)((unsigned int)hi) ) << 32 ) | ((unsigned int)lo));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AGALConverter_obj,ReadUInt64,return )

::String AGALConverter_obj::ConvertToGLSL( ::openfl::utils::ByteArrayData agal,Array< ::Dynamic > outSamplers){
	HX_STACK_FRAME("openfl._internal.stage3D.AGALConverter","ConvertToGLSL",0x773253de,"openfl._internal.stage3D.AGALConverter.ConvertToGLSL","openfl/_internal/stage3D/AGALConverter.hx",475,0x0a35cc61)
	HX_STACK_ARG(agal,"agal")
	HX_STACK_ARG(outSamplers,"outSamplers")
	HX_STACK_LINE(476)
	agal->position = (int)0;
	HX_STACK_LINE(477)
	agal->__endian = ((Dynamic)((int)1));
	HX_STACK_LINE(479)
	int tmp = agal->readByte();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(479)
	int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	int magic = tmp1;		HX_STACK_VAR(magic,"magic");
	HX_STACK_LINE(480)
	bool tmp2 = (magic == (int)176);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	if ((tmp2)){
		HX_STACK_LINE(482)
		::String tmp3 = agal->readUTF();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(482)
		return tmp3;
	}
	HX_STACK_LINE(486)
	bool tmp3 = (magic != (int)160);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(486)
	if ((tmp3)){
		HX_STACK_LINE(487)
		::openfl::errors::IllegalOperationError tmp4 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Magic value must be 0xA0, may not be AGAL","\x33","\xcd","\xd9","\x2e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(487)
		HX_STACK_DO_THROW(tmp4);
	}
	HX_STACK_LINE(490)
	int tmp4 = agal->readInt();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(490)
	int version = tmp4;		HX_STACK_VAR(version,"version");
	HX_STACK_LINE(491)
	bool tmp5 = (version != (int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(491)
	if ((tmp5)){
		HX_STACK_LINE(492)
		::openfl::errors::IllegalOperationError tmp6 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Version must be 1","\xe3","\xba","\xef","\x98"));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(492)
		HX_STACK_DO_THROW(tmp6);
	}
	HX_STACK_LINE(495)
	int tmp6 = agal->readByte();		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(495)
	int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(495)
	int shaderTypeId = tmp7;		HX_STACK_VAR(shaderTypeId,"shaderTypeId");
	HX_STACK_LINE(496)
	bool tmp8 = (shaderTypeId != (int)161);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(496)
	if ((tmp8)){
		HX_STACK_LINE(497)
		::openfl::errors::IllegalOperationError tmp9 = ::openfl::errors::IllegalOperationError_obj::__new(HX_HCSTRING("Shader type id must be 0xA1","\x38","\x9a","\xad","\xfa"));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(497)
		HX_STACK_DO_THROW(tmp9);
	}
	HX_STACK_LINE(500)
	int tmp9 = agal->readByte();		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(500)
	int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(500)
	bool tmp11 = (tmp10 == (int)0);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(500)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(500)
	if ((tmp11)){
		HX_STACK_LINE(500)
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex;
	}
	else{
		HX_STACK_LINE(500)
		tmp12 = ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Fragment;
	}
	HX_STACK_LINE(500)
	::openfl::_internal::stage3D::_AGALConverter::ProgramType programType = tmp12;		HX_STACK_VAR(programType,"programType");
	HX_STACK_LINE(502)
	::openfl::_internal::stage3D::RegisterMap tmp13 = ::openfl::_internal::stage3D::RegisterMap_obj::__new();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(502)
	::openfl::_internal::stage3D::RegisterMap map = tmp13;		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(503)
	::StringBuf tmp14 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(503)
	::StringBuf sb = tmp14;		HX_STACK_VAR(sb,"sb");
	HX_STACK_LINE(504)
	while((true)){
		HX_STACK_LINE(504)
		int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(504)
		tmp15 = hx::TCast< ::Int >::cast(agal->position);
		HX_STACK_LINE(504)
		::openfl::utils::ByteArrayData tmp16 = agal;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(504)
		int tmp17 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(504)
		bool tmp18 = (tmp15 < tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(504)
		bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(504)
		if ((tmp19)){
			HX_STACK_LINE(504)
			break;
		}
		HX_STACK_LINE(507)
		int tmp20 = agal->readInt();		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(507)
		int opcode = tmp20;		HX_STACK_VAR(opcode,"opcode");
		HX_STACK_LINE(508)
		int tmp21 = agal->readInt();		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(508)
		int dest = tmp21;		HX_STACK_VAR(dest,"dest");
		HX_STACK_LINE(509)
		::openfl::utils::ByteArrayData tmp22 = agal;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(509)
		cpp::Int64Struct tmp23 = ::openfl::_internal::stage3D::AGALConverter_obj::ReadUInt64(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(509)
		cpp::Int64Struct source1 = tmp23;		HX_STACK_VAR(source1,"source1");
		HX_STACK_LINE(510)
		::openfl::utils::ByteArrayData tmp24 = agal;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(510)
		cpp::Int64Struct tmp25 = ::openfl::_internal::stage3D::AGALConverter_obj::ReadUInt64(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(510)
		cpp::Int64Struct source2 = tmp25;		HX_STACK_VAR(source2,"source2");
		HX_STACK_LINE(516)
		int tmp26 = dest;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(516)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp27 = programType;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(516)
		::openfl::_internal::stage3D::_AGALConverter::DestReg tmp28 = ::openfl::_internal::stage3D::_AGALConverter::DestReg_obj::Parse(tmp26,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(516)
		::openfl::_internal::stage3D::_AGALConverter::DestReg dr = tmp28;		HX_STACK_VAR(dr,"dr");
		HX_STACK_LINE(517)
		cpp::Int64Struct tmp29 = source1;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(517)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp30 = programType;		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(517)
		int tmp31 = dr->mask;		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(517)
		::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp32 = ::openfl::_internal::stage3D::_AGALConverter::SourceReg_obj::Parse(tmp29,tmp30,tmp31);		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(517)
		::openfl::_internal::stage3D::_AGALConverter::SourceReg sr1 = tmp32;		HX_STACK_VAR(sr1,"sr1");
		HX_STACK_LINE(518)
		cpp::Int64Struct tmp33 = source2;		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(518)
		::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp34 = programType;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(518)
		int tmp35 = dr->mask;		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(518)
		::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp36 = ::openfl::_internal::stage3D::_AGALConverter::SourceReg_obj::Parse(tmp33,tmp34,tmp35);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(518)
		::openfl::_internal::stage3D::_AGALConverter::SourceReg sr2 = tmp36;		HX_STACK_VAR(sr2,"sr2");
		HX_STACK_LINE(521)
		sb->add(HX_HCSTRING("\t","\x09","\x00","\x00","\x00"));
		HX_STACK_LINE(522)
		int tmp37 = opcode;		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(522)
		switch( (int)(tmp37)){
			case (int)0: {
				HX_STACK_LINE(525)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(525)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(525)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(525)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(525)
				::String tmp42 = (tmp41 + HX_HCSTRING("; // mov","\x19","\x49","\x64","\x51"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(525)
				sb->add(tmp42);
				HX_STACK_LINE(526)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(526)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(527)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(527)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(530)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(530)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(530)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(530)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(530)
				::String tmp42 = (tmp41 + HX_HCSTRING(" + ","\xb5","\x6d","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(530)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(530)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(530)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // add","\x66","\x24","\x5b","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(530)
				sb->add(tmp45);
				HX_STACK_LINE(531)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(531)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(532)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(532)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(533)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(533)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(536)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(536)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(536)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(536)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(536)
				::String tmp42 = (tmp41 + HX_HCSTRING(" - ","\x73","\x6f","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(536)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(536)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(536)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // sub","\xc5","\xdb","\x68","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(536)
				sb->add(tmp45);
				HX_STACK_LINE(537)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(537)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(538)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(538)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(539)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(539)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(542)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(542)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(542)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(542)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(542)
				::String tmp42 = (tmp41 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(542)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(542)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(542)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // mul","\x49","\x4e","\x64","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(542)
				sb->add(tmp45);
				HX_STACK_LINE(543)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(543)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(544)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(544)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(545)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(545)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(548)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(548)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(548)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(548)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(548)
				::String tmp42 = (tmp41 + HX_HCSTRING(" / ","\x31","\x71","\x18","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(548)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(548)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(548)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // div","\x96","\x6f","\x5d","\x51"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(548)
				sb->add(tmp45);
				HX_STACK_LINE(549)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(549)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(550)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(550)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(551)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(551)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(554)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(554)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = vec4(1) / ","\xb4","\x32","\x05","\x3b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(554)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(554)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(554)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(554)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(554)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(554)
				::String tmp45 = (tmp44 + HX_HCSTRING("; // rcp (untested)","\x33","\x14","\x36","\x02"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(554)
				sb->add(tmp45);
				HX_STACK_LINE(555)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(555)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(556)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(556)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)6: {
				HX_STACK_LINE(559)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(559)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = min(","\x39","\xb9","\xa2","\x4b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(559)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(559)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(559)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(559)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(559)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(559)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // min","\x00","\x15","\x0e","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(559)
				sb->add(tmp45);
				HX_STACK_LINE(560)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(560)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(561)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(561)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(562)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(562)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)7: {
				HX_STACK_LINE(565)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(565)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = max(","\xe7","\xaf","\x9c","\x4b"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(565)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(565)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(565)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(565)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(565)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(565)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // max","\x12","\x0e","\x0e","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(565)
				sb->add(tmp45);
				HX_STACK_LINE(566)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(566)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(567)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(567)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(568)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(568)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(571)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(571)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = fract(","\x85","\x4f","\x5f","\xde"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(571)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(571)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(571)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // frc","\x05","\xcd","\x08","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(571)
				sb->add(tmp42);
				HX_STACK_LINE(572)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(572)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(573)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(573)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)9: {
				HX_STACK_LINE(576)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(576)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sqrt(","\x05","\xd4","\x73","\x5c"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(576)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(576)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(576)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sqrt","\xb2","\xa8","\x41","\xb6"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(576)
				sb->add(tmp42);
				HX_STACK_LINE(577)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(577)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(578)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(578)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)10: {
				HX_STACK_LINE(581)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(581)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = inversesqrt(","\x7b","\x94","\x3b","\xf8"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(581)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(581)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(581)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // rsq","\xfe","\xe8","\x11","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(581)
				sb->add(tmp42);
				HX_STACK_LINE(582)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(582)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(583)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(583)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)11: {
				HX_STACK_LINE(586)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(586)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = pow(","\x73","\xf2","\xa2","\x4d"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(586)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(586)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(586)
				::String tmp42 = (tmp41 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(586)
				::String tmp43 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(586)
				::String tmp44 = (tmp42 + tmp43);		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(586)
				::String tmp45 = (tmp44 + HX_HCSTRING("); // pow","\x06","\x61","\x10","\x1a"));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(586)
				sb->add(tmp45);
				HX_STACK_LINE(587)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp46 = dr;		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(587)
				map->AddDR(tmp46,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(588)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp47 = sr1;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(588)
				map->AddSR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(589)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr2;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(589)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)12: {
				HX_STACK_LINE(592)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(592)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = log2(","\xf7","\xc4","\x4a","\x53"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(592)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(592)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(592)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // log","\xf2","\x57","\x0d","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(592)
				sb->add(tmp42);
				HX_STACK_LINE(593)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(593)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(594)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(594)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)13: {
				HX_STACK_LINE(597)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(597)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = exp2(","\x50","\x75","\x76","\x51"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(597)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(597)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(597)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // exp","\x0b","\x10","\x08","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(597)
				sb->add(tmp42);
				HX_STACK_LINE(598)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(598)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(599)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(599)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)14: {
				HX_STACK_LINE(602)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(602)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = normalize(","\x1e","\x9b","\xe9","\xff"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(602)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(602)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(602)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // normalize","\x7b","\x81","\x39","\xe2"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(602)
				sb->add(tmp42);
				HX_STACK_LINE(603)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(603)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(604)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(604)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)15: {
				HX_STACK_LINE(607)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(607)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = sin(","\xf3","\x00","\x9a","\x4f"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(607)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(607)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(607)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // sin","\x86","\xa2","\x12","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(607)
				sb->add(tmp42);
				HX_STACK_LINE(608)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(608)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(609)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(609)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)16: {
				HX_STACK_LINE(612)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(612)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = cos(","\xe4","\x28","\x0b","\x45"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(612)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(612)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(612)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // cos","\xb5","\x83","\x06","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(612)
				sb->add(tmp42);
				HX_STACK_LINE(613)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(613)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(614)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(614)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)17: {
				HX_STACK_LINE(617)
				int tmp38 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(617)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(618)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(618)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = cross(vec3(","\xbe","\xc1","\xb9","\xac"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(618)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(618)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(618)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(618)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(618)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(618)
				::String tmp46 = (tmp45 + HX_HCSTRING(")); // crs","\x09","\xb9","\xf3","\xe5"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(618)
				sb->add(tmp46);
				HX_STACK_LINE(619)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp47 = dr;		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(619)
				map->AddDR(tmp47,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(620)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp48 = sr1;		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(620)
				map->AddSR(tmp48,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(621)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp49 = sr2;		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(621)
				map->AddSR(tmp49,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)18: {
				HX_STACK_LINE(624)
				int tmp38 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(624)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(625)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(625)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec3(","\xe5","\xe8","\x98","\x98"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(625)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(625)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(625)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec3(","\xec","\x87","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(625)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(625)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(625)
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(625)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(625)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(625)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp3","\x6c","\x75","\x5d","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(625)
				sb->add(tmp49);
				HX_STACK_LINE(626)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(626)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(627)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(627)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(628)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(628)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)19: {
				HX_STACK_LINE(631)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(631)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(632)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(632)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(dot(vec4(","\xc4","\xe9","\x98","\x98"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(632)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(632)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(632)
				::String tmp43 = (tmp42 + HX_HCSTRING("), vec4(","\xcb","\x88","\x86","\x4e"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(632)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(632)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(632)
				::String tmp46 = (tmp45 + HX_HCSTRING(")))","\x49","\x40","\x1f","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(632)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(632)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(632)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // dp4","\x6d","\x75","\x5d","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(632)
				sb->add(tmp49);
				HX_STACK_LINE(633)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(633)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(634)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(634)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(635)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(635)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)20: {
				HX_STACK_LINE(638)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(638)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = abs(","\x59","\xde","\xae","\x43"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(638)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(638)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(638)
				::String tmp42 = (tmp41 + HX_HCSTRING("); // abs","\xe0","\xf3","\x04","\x1a"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(638)
				sb->add(tmp42);
				HX_STACK_LINE(639)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(639)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(640)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(640)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)21: {
				HX_STACK_LINE(643)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(643)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = -","\x6a","\x39","\x55","\x15"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(643)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(643)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(643)
				::String tmp42 = (tmp41 + HX_HCSTRING("; // neg","\x95","\x02","\x65","\x51"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(643)
				sb->add(tmp42);
				HX_STACK_LINE(644)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(644)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(645)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(645)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)22: {
				HX_STACK_LINE(648)
				::String tmp38 = dr->ToGLSL(null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(648)
				::String tmp39 = (tmp38 + HX_HCSTRING(" = clamp(","\x70","\x52","\xed","\x36"));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(648)
				::String tmp40 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(648)
				::String tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(648)
				::String tmp42 = (tmp41 + HX_HCSTRING(", 0.0, 1.0); // saturate","\x02","\xd7","\x59","\xd0"));		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(648)
				sb->add(tmp42);
				HX_STACK_LINE(649)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp43 = dr;		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(649)
				map->AddDR(tmp43,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(650)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp44 = sr1;		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(650)
				map->AddSR(tmp44,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)23: {
				HX_STACK_LINE(657)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(657)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->GetRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(657)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(658)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(658)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(658)
				if ((tmp40)){
					HX_STACK_LINE(658)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array);
				}
				else{
					HX_STACK_LINE(658)
					tmp41 = false;
				}
				HX_STACK_LINE(658)
				if ((tmp41)){
					HX_STACK_LINE(659)
					::String tmp42 = dr->ToGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(659)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(659)
					::String tmp44 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(659)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(659)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * mat3(","\x9f","\x6a","\x62","\xc7"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(659)
					::String tmp47 = sr2->ToGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(659)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(659)
					::String tmp49 = (tmp48 + HX_HCSTRING("); // m33","\xbb","\xe5","\x0d","\x1a"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(659)
					sb->add(tmp49);
					HX_STACK_LINE(660)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(660)
					map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(661)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(661)
					map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(662)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(662)
					map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Matrix44,null());
				}
				else{
					HX_STACK_LINE(666)
					int tmp42 = sr2->sourceMask = (int)7;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(666)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(667)
					::String tmp43 = dr->ToGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(667)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(667)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(668)
					::String tmp46 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(667)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(667)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(668)
					::String tmp49 = sr2->ToGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(667)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(667)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(667)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(669)
					::String tmp53 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(667)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(667)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(669)
					::String tmp56 = sr2->ToGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(667)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(667)
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(667)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(670)
					::String tmp60 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(667)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(667)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(670)
					::String tmp63 = sr2->ToGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(667)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(667)
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m33","\x72","\x18","\xfb","\xe5"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(667)
					sb->add(tmp65);
					HX_STACK_LINE(672)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp66 = dr;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(672)
					map->AddDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(673)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp67 = sr1;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(673)
					map->AddSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(674)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp68 = sr2;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(674)
					map->AddSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)0);
					HX_STACK_LINE(675)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp69 = sr2;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(675)
					map->AddSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)1);
					HX_STACK_LINE(676)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp70 = sr2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(676)
					map->AddSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)2);
				}
			}
			;break;
			case (int)24: {
				HX_STACK_LINE(687)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(687)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->GetRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(687)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(688)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(688)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(688)
				if ((tmp40)){
					HX_STACK_LINE(688)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array);
				}
				else{
					HX_STACK_LINE(688)
					tmp41 = false;
				}
				HX_STACK_LINE(688)
				if ((tmp41)){
					HX_STACK_LINE(689)
					::String tmp42 = dr->ToGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(689)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(689)
					::String tmp44 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(689)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(689)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(689)
					::String tmp47 = sr2->ToGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(689)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(689)
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m44","\x72","\x15","\x64","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(689)
					sb->add(tmp49);
					HX_STACK_LINE(690)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(690)
					map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(691)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(691)
					map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(692)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(692)
					map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Matrix44,null());
				}
				else{
					HX_STACK_LINE(696)
					int tmp42 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(696)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(697)
					::String tmp43 = dr->ToGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(697)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec4(","\x85","\x68","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(697)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(698)
					::String tmp46 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(697)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(697)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(698)
					::String tmp49 = sr2->ToGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(697)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(697)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(697)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(699)
					::String tmp53 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(697)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(697)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(699)
					::String tmp56 = sr2->ToGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(697)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(697)
					::String tmp58 = (tmp57 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(697)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(700)
					::String tmp60 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(697)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(697)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(700)
					::String tmp63 = sr2->ToGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(697)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(697)
					::String tmp65 = (tmp64 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(697)
					::String tmp66 = (tmp65 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(701)
					::String tmp67 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(697)
					::String tmp68 = (tmp66 + tmp67);		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(697)
					::String tmp69 = (tmp68 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(701)
					::String tmp70 = sr2->ToGLSL(true,(int)3);		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(697)
					::String tmp71 = (tmp69 + tmp70);		HX_STACK_VAR(tmp71,"tmp71");
					HX_STACK_LINE(697)
					::String tmp72 = (tmp71 + HX_HCSTRING(")); // m44","\x52","\x19","\xfb","\xe5"));		HX_STACK_VAR(tmp72,"tmp72");
					HX_STACK_LINE(697)
					sb->add(tmp72);
					HX_STACK_LINE(703)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp73 = dr;		HX_STACK_VAR(tmp73,"tmp73");
					HX_STACK_LINE(703)
					map->AddDR(tmp73,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(704)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp74 = sr1;		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(704)
					map->AddSR(tmp74,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(705)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp75 = sr2;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(705)
					map->AddSR(tmp75,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)0);
					HX_STACK_LINE(706)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp76 = sr2;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(706)
					map->AddSR(tmp76,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)1);
					HX_STACK_LINE(707)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp77 = sr2;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(707)
					map->AddSR(tmp77,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)2);
					HX_STACK_LINE(708)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp78 = sr2;		HX_STACK_VAR(tmp78,"tmp78");
					HX_STACK_LINE(708)
					map->AddSR(tmp78,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)3);
				}
			}
			;break;
			case (int)25: {
				HX_STACK_LINE(719)
				hx::AndEq(dr->mask,(int)7);
				HX_STACK_LINE(721)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp38 = sr2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(721)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage tmp39 = map->GetRegisterUsage(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(721)
				::openfl::_internal::stage3D::_AGALConverter::RegisterUsage existingUsage = tmp39;		HX_STACK_VAR(existingUsage,"existingUsage");
				HX_STACK_LINE(722)
				bool tmp40 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(722)
				bool tmp41;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(722)
				if ((tmp40)){
					HX_STACK_LINE(722)
					tmp41 = (existingUsage != ::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4Array);
				}
				else{
					HX_STACK_LINE(722)
					tmp41 = false;
				}
				HX_STACK_LINE(722)
				if ((tmp41)){
					HX_STACK_LINE(723)
					::String tmp42 = dr->ToGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(723)
					::String tmp43 = (tmp42 + HX_HCSTRING(" = ","\x63","\x7d","\x18","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(723)
					::String tmp44 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(723)
					::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(723)
					::String tmp46 = (tmp45 + HX_HCSTRING(" * ","\xd6","\x6c","\x18","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(723)
					::String tmp47 = sr2->ToGLSL(false,null());		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(723)
					::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(723)
					::String tmp49 = (tmp48 + HX_HCSTRING("; // m34","\x93","\x14","\x64","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(723)
					sb->add(tmp49);
					HX_STACK_LINE(724)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(724)
					map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(725)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(725)
					map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(726)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(726)
					map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Matrix44,null());
				}
				else{
					HX_STACK_LINE(730)
					int tmp42 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp42,"tmp42");
					HX_STACK_LINE(730)
					sr1->sourceMask = tmp42;
					HX_STACK_LINE(731)
					::String tmp43 = dr->ToGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
					HX_STACK_LINE(731)
					::String tmp44 = (tmp43 + HX_HCSTRING(" = vec3(","\xa6","\x67","\xad","\x0e"));		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(731)
					::String tmp45 = (tmp44 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp45,"tmp45");
					HX_STACK_LINE(732)
					::String tmp46 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp46,"tmp46");
					HX_STACK_LINE(731)
					::String tmp47 = (tmp45 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
					HX_STACK_LINE(731)
					::String tmp48 = (tmp47 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp48,"tmp48");
					HX_STACK_LINE(732)
					::String tmp49 = sr2->ToGLSL(true,(int)0);		HX_STACK_VAR(tmp49,"tmp49");
					HX_STACK_LINE(731)
					::String tmp50 = (tmp48 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
					HX_STACK_LINE(731)
					::String tmp51 = (tmp50 + HX_HCSTRING("), ","\xdd","\x42","\x1f","\x00"));		HX_STACK_VAR(tmp51,"tmp51");
					HX_STACK_LINE(731)
					::String tmp52 = (tmp51 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp52,"tmp52");
					HX_STACK_LINE(733)
					::String tmp53 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp53,"tmp53");
					HX_STACK_LINE(731)
					::String tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
					HX_STACK_LINE(731)
					::String tmp55 = (tmp54 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
					HX_STACK_LINE(733)
					::String tmp56 = sr2->ToGLSL(true,(int)1);		HX_STACK_VAR(tmp56,"tmp56");
					HX_STACK_LINE(731)
					::String tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
					HX_STACK_LINE(731)
					::String tmp58 = (tmp57 + HX_HCSTRING("),","\xe3","\x23","\x00","\x00"));		HX_STACK_VAR(tmp58,"tmp58");
					HX_STACK_LINE(731)
					::String tmp59 = (tmp58 + HX_HCSTRING("dot(","\x7f","\xf5","\x6d","\x42"));		HX_STACK_VAR(tmp59,"tmp59");
					HX_STACK_LINE(734)
					::String tmp60 = sr1->ToGLSL(true,null());		HX_STACK_VAR(tmp60,"tmp60");
					HX_STACK_LINE(731)
					::String tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
					HX_STACK_LINE(731)
					::String tmp62 = (tmp61 + HX_HCSTRING(",","\x2c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp62,"tmp62");
					HX_STACK_LINE(734)
					::String tmp63 = sr2->ToGLSL(true,(int)2);		HX_STACK_VAR(tmp63,"tmp63");
					HX_STACK_LINE(731)
					::String tmp64 = (tmp62 + tmp63);		HX_STACK_VAR(tmp64,"tmp64");
					HX_STACK_LINE(731)
					::String tmp65 = (tmp64 + HX_HCSTRING(")); // m34","\x73","\x18","\xfb","\xe5"));		HX_STACK_VAR(tmp65,"tmp65");
					HX_STACK_LINE(731)
					sb->add(tmp65);
					HX_STACK_LINE(736)
					::openfl::_internal::stage3D::_AGALConverter::DestReg tmp66 = dr;		HX_STACK_VAR(tmp66,"tmp66");
					HX_STACK_LINE(736)
					map->AddDR(tmp66,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
					HX_STACK_LINE(737)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp67 = sr1;		HX_STACK_VAR(tmp67,"tmp67");
					HX_STACK_LINE(737)
					map->AddSR(tmp67,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
					HX_STACK_LINE(738)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp68 = sr2;		HX_STACK_VAR(tmp68,"tmp68");
					HX_STACK_LINE(738)
					map->AddSR(tmp68,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)0);
					HX_STACK_LINE(739)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp69 = sr2;		HX_STACK_VAR(tmp69,"tmp69");
					HX_STACK_LINE(739)
					map->AddSR(tmp69,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)1);
					HX_STACK_LINE(740)
					::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp70 = sr2;		HX_STACK_VAR(tmp70,"tmp70");
					HX_STACK_LINE(740)
					map->AddSR(tmp70,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,(int)2);
				}
			}
			;break;
			case (int)39: {
				HX_STACK_LINE(747)
				sr1->sourceMask = (int)15;
				HX_STACK_LINE(748)
				::String tmp38 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(748)
				::String tmp39 = (HX_HCSTRING("if (any(lessThan(","\x0d","\xa8","\x4d","\x9b") + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(748)
				::String tmp40 = (tmp39 + HX_HCSTRING(", vec4(0)))) discard;","\x61","\xd7","\xc4","\xf0"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(748)
				sb->add(tmp40);
				HX_STACK_LINE(749)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp41 = sr1;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(749)
				map->AddSR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)40: {
				HX_STACK_LINE(753)
				cpp::Int64Struct tmp38 = source2;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(753)
				::openfl::_internal::stage3D::_AGALConverter::ProgramType tmp39 = programType;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(753)
				::openfl::_internal::stage3D::_AGALConverter::SamplerReg tmp40 = ::openfl::_internal::stage3D::_AGALConverter::SamplerReg_obj::Parse(tmp38,tmp39);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(753)
				::openfl::_internal::stage3D::_AGALConverter::SamplerReg sampler = tmp40;		HX_STACK_VAR(sampler,"sampler");
				HX_STACK_LINE(755)
				{
					HX_STACK_LINE(755)
					int _g = sampler->d;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(755)
					int tmp41 = _g;		HX_STACK_VAR(tmp41,"tmp41");
					HX_STACK_LINE(755)
					switch( (int)(tmp41)){
						case (int)0: {
							HX_STACK_LINE(759)
							sr1->sourceMask = (int)3;
							HX_STACK_LINE(760)
							::openfl::_internal::stage3D::_AGALConverter::SamplerReg tmp42 = sampler;		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(760)
							map->AddSaR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Sampler2D);
							HX_STACK_LINE(764)
							::String tmp43 = dr->ToGLSL(null());		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(764)
							::String tmp44 = (tmp43 + HX_HCSTRING(" = texture2D(","\x3e","\x55","\x2e","\x2f"));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(764)
							::String tmp45 = sampler->ToGLSL();		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(764)
							::String tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(764)
							::String tmp47 = (tmp46 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(764)
							::String tmp48 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(764)
							::String tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(764)
							::String tmp50 = (tmp49 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(764)
							sb->add(tmp50);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(768)
							sr1->sourceMask = (int)7;
							HX_STACK_LINE(769)
							::String tmp42 = dr->ToGLSL(null());		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(769)
							::String tmp43 = (tmp42 + HX_HCSTRING(" = textureCube(","\x9b","\x4c","\xbc","\x01"));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(769)
							::String tmp44 = sampler->ToGLSL();		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(769)
							::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(769)
							::String tmp46 = (tmp45 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(769)
							::String tmp47 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(769)
							::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(769)
							::String tmp49 = (tmp48 + HX_HCSTRING("); // tex","\x55","\x61","\x13","\x1a"));		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(769)
							sb->add(tmp49);
							HX_STACK_LINE(770)
							::openfl::_internal::stage3D::_AGALConverter::SamplerReg tmp50 = sampler;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(770)
							map->AddSaR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::SamplerCube);
						}
						;break;
					}
				}
				HX_STACK_LINE(773)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp41 = dr;		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(773)
				map->AddDR(tmp41,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(774)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp42 = sr1;		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(774)
				map->AddSR(tmp42,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(776)
				bool tmp43 = (outSamplers != null());		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(776)
				if ((tmp43)){
					HX_STACK_LINE(778)
					::openfl::_internal::stage3D::SamplerState tmp44 = sampler->ToSamplerState();		HX_STACK_VAR(tmp44,"tmp44");
					HX_STACK_LINE(778)
					outSamplers[sampler->n] = tmp44;
				}
			}
			;break;
			case (int)41: {
				HX_STACK_LINE(782)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(782)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(783)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(783)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(greaterThanEqual(","\xaa","\xa3","\x51","\xec"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(783)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(783)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(783)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(783)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(783)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(783)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(783)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(783)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(783)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // ste","\xe9","\xda","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(783)
				sb->add(tmp49);
				HX_STACK_LINE(784)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(784)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(785)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(785)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(786)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(786)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)42: {
				HX_STACK_LINE(789)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(789)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(790)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(790)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(lessThan(","\x69","\xee","\xb4","\x35"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(790)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(790)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(790)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(790)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(790)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(790)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(790)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(790)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(790)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // slt","\x00","\xd4","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(790)
				sb->add(tmp49);
				HX_STACK_LINE(791)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(791)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(792)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(792)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(793)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(793)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)44: {
				HX_STACK_LINE(796)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(796)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(797)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(797)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(equal(","\x39","\x08","\x45","\xe1"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(797)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(797)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(797)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(797)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(797)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(797)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(797)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(797)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(797)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // seq","\xe4","\xcd","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(797)
				sb->add(tmp49);
				HX_STACK_LINE(798)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(798)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(799)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(799)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(800)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(800)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			case (int)45: {
				HX_STACK_LINE(803)
				int tmp38 = sr2->sourceMask = (int)15;		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(803)
				sr1->sourceMask = tmp38;
				HX_STACK_LINE(804)
				::String tmp39 = dr->ToGLSL(null());		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(804)
				::String tmp40 = (tmp39 + HX_HCSTRING(" = vec4(notEqual(","\x42","\xaa","\xf1","\x97"));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(804)
				::String tmp41 = sr1->ToGLSL(null(),null());		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(804)
				::String tmp42 = (tmp40 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(804)
				::String tmp43 = (tmp42 + HX_HCSTRING(", ","\x74","\x26","\x00","\x00"));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(804)
				::String tmp44 = sr2->ToGLSL(null(),null());		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(804)
				::String tmp45 = (tmp43 + tmp44);		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(804)
				::String tmp46 = (tmp45 + HX_HCSTRING("))","\xe0","\x23","\x00","\x00"));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(804)
				::String tmp47 = dr->GetWriteMask();		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(804)
				::String tmp48 = (tmp46 + tmp47);		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(804)
				::String tmp49 = (tmp48 + HX_HCSTRING("; // sne","\xaf","\xd5","\x68","\x51"));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(804)
				sb->add(tmp49);
				HX_STACK_LINE(805)
				::openfl::_internal::stage3D::_AGALConverter::DestReg tmp50 = dr;		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(805)
				map->AddDR(tmp50,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4);
				HX_STACK_LINE(806)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp51 = sr1;		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(806)
				map->AddSR(tmp51,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
				HX_STACK_LINE(807)
				::openfl::_internal::stage3D::_AGALConverter::SourceReg tmp52 = sr2;		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(807)
				map->AddSR(tmp52,::openfl::_internal::stage3D::_AGALConverter::RegisterUsage_obj::Vector4,null());
			}
			;break;
			default: {
				HX_STACK_LINE(811)
				::String tmp38 = (HX_HCSTRING("Opcode ","\x72","\x65","\x6e","\xe7") + opcode);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(811)
				::openfl::errors::IllegalOperationError tmp39 = ::openfl::errors::IllegalOperationError_obj::__new(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(811)
				HX_STACK_DO_THROW(tmp39);
			}
		}
		HX_STACK_LINE(814)
		sb->add(HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));
	}
	HX_STACK_LINE(818)
	int glslVersion = (int)100;		HX_STACK_VAR(glslVersion,"glslVersion");
	HX_STACK_LINE(820)
	::StringBuf tmp15 = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(820)
	::StringBuf glsl = tmp15;		HX_STACK_VAR(glsl,"glsl");
	HX_STACK_LINE(821)
	bool tmp16 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(821)
	::String tmp17;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(821)
	if ((tmp16)){
		HX_STACK_LINE(821)
		tmp17 = HX_HCSTRING("vertex","\x64","\xdb","\x47","\xa1");
	}
	else{
		HX_STACK_LINE(821)
		tmp17 = HX_HCSTRING("fragment","\xd0","\x5f","\xe5","\xad");
	}
	HX_STACK_LINE(821)
	::String tmp18 = (HX_HCSTRING("// AGAL ","\xaf","\xbc","\x4a","\x8a") + tmp17);		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(821)
	::String tmp19 = (tmp18 + HX_HCSTRING(" shader\n","\x25","\xc5","\xd4","\x85"));		HX_STACK_VAR(tmp19,"tmp19");
	HX_STACK_LINE(821)
	glsl->add(tmp19);
	HX_STACK_LINE(822)
	::String tmp20 = (HX_HCSTRING("#version ","\x2b","\xa9","\xb9","\xad") + glslVersion);		HX_STACK_VAR(tmp20,"tmp20");
	HX_STACK_LINE(822)
	::String tmp21 = (tmp20 + HX_HCSTRING("\n","\x0a","\x00","\x00","\x00"));		HX_STACK_VAR(tmp21,"tmp21");
	HX_STACK_LINE(822)
	glsl->add(tmp21);
	HX_STACK_LINE(824)
	glsl->add(HX_HCSTRING("precision highp float;\n","\x57","\x4a","\xf7","\x14"));
	HX_STACK_LINE(825)
	::String tmp22 = map->ToGLSL(false);		HX_STACK_VAR(tmp22,"tmp22");
	HX_STACK_LINE(825)
	glsl->add(tmp22);
	HX_STACK_LINE(826)
	bool tmp23 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp23,"tmp23");
	HX_STACK_LINE(826)
	if ((tmp23)){
		HX_STACK_LINE(828)
		glsl->add(HX_HCSTRING("uniform vec4 vcPositionScale;\n","\xcf","\xaa","\x4f","\x18"));
	}
	HX_STACK_LINE(830)
	glsl->add(HX_HCSTRING("void main() {\n","\x49","\xb0","\xbf","\xfb"));
	HX_STACK_LINE(831)
	::String tmp24 = map->ToGLSL(true);		HX_STACK_VAR(tmp24,"tmp24");
	HX_STACK_LINE(831)
	glsl->add(tmp24);
	HX_STACK_LINE(832)
	::String tmp25 = sb->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp25,"tmp25");
	HX_STACK_LINE(832)
	glsl->add(tmp25);
	HX_STACK_LINE(834)
	bool tmp26 = (programType == ::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::Vertex);		HX_STACK_VAR(tmp26,"tmp26");
	HX_STACK_LINE(834)
	if ((tmp26)){
		HX_STACK_LINE(836)
		glsl->add(HX_HCSTRING("\tgl_Position *= vcPositionScale;\n","\x7c","\xad","\x85","\x8d"));
	}
	HX_STACK_LINE(838)
	glsl->add(HX_HCSTRING("}\n","\xed","\x6c","\x00","\x00"));
	HX_STACK_LINE(840)
	::String tmp27 = glsl->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp27,"tmp27");
	HX_STACK_LINE(840)
	return tmp27;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(AGALConverter_obj,ConvertToGLSL,return )


AGALConverter_obj::AGALConverter_obj()
{
}

bool AGALConverter_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"ReadUInt64") ) { outValue = ReadUInt64_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"ConvertToGLSL") ) { outValue = ConvertToGLSL_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"PrefixFromType") ) { outValue = PrefixFromType_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AGALConverter_obj::__mClass,"__mClass");
};

#endif

hx::Class AGALConverter_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("PrefixFromType","\x16","\xcd","\x41","\x73"),
	HX_HCSTRING("ReadUInt64","\x4e","\x25","\x3c","\x09"),
	HX_HCSTRING("ConvertToGLSL","\x2c","\x93","\x52","\xfd"),
	::String(null()) };

void AGALConverter_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.AGALConverter","\xa0","\x2d","\xe2","\x9e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AGALConverter_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< AGALConverter_obj >;
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
