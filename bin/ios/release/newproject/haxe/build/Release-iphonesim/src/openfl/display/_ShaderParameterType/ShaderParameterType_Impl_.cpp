#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__ShaderParameterType_ShaderParameterType_Impl_
#include <openfl/display/_ShaderParameterType/ShaderParameterType_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _ShaderParameterType{

Void ShaderParameterType_Impl__obj::__construct()
{
	return null();
}

//ShaderParameterType_Impl__obj::~ShaderParameterType_Impl__obj() { }

Dynamic ShaderParameterType_Impl__obj::__CreateEmpty() { return  new ShaderParameterType_Impl__obj; }
hx::ObjectPtr< ShaderParameterType_Impl__obj > ShaderParameterType_Impl__obj::__new()
{  hx::ObjectPtr< ShaderParameterType_Impl__obj > _result_ = new ShaderParameterType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderParameterType_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ShaderParameterType_Impl__obj > _result_ = new ShaderParameterType_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic ShaderParameterType_Impl__obj::BOOL;

Dynamic ShaderParameterType_Impl__obj::BOOL2;

Dynamic ShaderParameterType_Impl__obj::BOOL3;

Dynamic ShaderParameterType_Impl__obj::BOOL4;

Dynamic ShaderParameterType_Impl__obj::FLOAT;

Dynamic ShaderParameterType_Impl__obj::FLOAT2;

Dynamic ShaderParameterType_Impl__obj::FLOAT3;

Dynamic ShaderParameterType_Impl__obj::FLOAT4;

Dynamic ShaderParameterType_Impl__obj::INT;

Dynamic ShaderParameterType_Impl__obj::INT2;

Dynamic ShaderParameterType_Impl__obj::INT3;

Dynamic ShaderParameterType_Impl__obj::INT4;

Dynamic ShaderParameterType_Impl__obj::MATRIX2X2;

Dynamic ShaderParameterType_Impl__obj::MATRIX2X3;

Dynamic ShaderParameterType_Impl__obj::MATRIX2X4;

Dynamic ShaderParameterType_Impl__obj::MATRIX3X2;

Dynamic ShaderParameterType_Impl__obj::MATRIX3X3;

Dynamic ShaderParameterType_Impl__obj::MATRIX3X4;

Dynamic ShaderParameterType_Impl__obj::MATRIX4X2;

Dynamic ShaderParameterType_Impl__obj::MATRIX4X3;

Dynamic ShaderParameterType_Impl__obj::MATRIX4X4;

Dynamic ShaderParameterType_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._ShaderParameterType.ShaderParameterType_Impl_","fromString",0x95cd8270,"openfl.display._ShaderParameterType.ShaderParameterType_Impl_.fromString","openfl/display/ShaderParameterType.hx",28,0xaf3fed4c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41"))){
		HX_STACK_LINE(32)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("bool2","\xc8","\x20","\xf8","\xb6"))){
		HX_STACK_LINE(33)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("bool3","\xc9","\x20","\xf8","\xb6"))){
		HX_STACK_LINE(34)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("bool4","\xca","\x20","\xf8","\xb6"))){
		HX_STACK_LINE(35)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"))){
		HX_STACK_LINE(36)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("float2","\x16","\x23","\x56","\x41"))){
		HX_STACK_LINE(37)
		tmp1 = ((Dynamic)((int)5));
	}
	else if (  ( _switch_1==HX_HCSTRING("float3","\x17","\x23","\x56","\x41"))){
		HX_STACK_LINE(38)
		tmp1 = ((Dynamic)((int)6));
	}
	else if (  ( _switch_1==HX_HCSTRING("float4","\x18","\x23","\x56","\x41"))){
		HX_STACK_LINE(39)
		tmp1 = ((Dynamic)((int)7));
	}
	else if (  ( _switch_1==HX_HCSTRING("int","\xef","\x0c","\x50","\x00"))){
		HX_STACK_LINE(40)
		tmp1 = ((Dynamic)((int)8));
	}
	else if (  ( _switch_1==HX_HCSTRING("int2","\x63","\x44","\xbb","\x45"))){
		HX_STACK_LINE(41)
		tmp1 = ((Dynamic)((int)9));
	}
	else if (  ( _switch_1==HX_HCSTRING("int3","\x64","\x44","\xbb","\x45"))){
		HX_STACK_LINE(42)
		tmp1 = ((Dynamic)((int)10));
	}
	else if (  ( _switch_1==HX_HCSTRING("int4","\x65","\x44","\xbb","\x45"))){
		HX_STACK_LINE(43)
		tmp1 = ((Dynamic)((int)11));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix2x2","\xcb","\xc1","\xda","\xad"))){
		HX_STACK_LINE(44)
		tmp1 = ((Dynamic)((int)12));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix2x3","\xcc","\xc1","\xda","\xad"))){
		HX_STACK_LINE(45)
		tmp1 = ((Dynamic)((int)13));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix2x4","\xcd","\xc1","\xda","\xad"))){
		HX_STACK_LINE(46)
		tmp1 = ((Dynamic)((int)14));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix3x2","\x0c","\x84","\xdb","\xad"))){
		HX_STACK_LINE(47)
		tmp1 = ((Dynamic)((int)15));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix3x3","\x0d","\x84","\xdb","\xad"))){
		HX_STACK_LINE(48)
		tmp1 = ((Dynamic)((int)16));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix3x4","\x0e","\x84","\xdb","\xad"))){
		HX_STACK_LINE(49)
		tmp1 = ((Dynamic)((int)17));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix4x2","\x4d","\x46","\xdc","\xad"))){
		HX_STACK_LINE(50)
		tmp1 = ((Dynamic)((int)18));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix4x3","\x4e","\x46","\xdc","\xad"))){
		HX_STACK_LINE(51)
		tmp1 = ((Dynamic)((int)19));
	}
	else if (  ( _switch_1==HX_HCSTRING("matrix4x4","\x4f","\x46","\xdc","\xad"))){
		HX_STACK_LINE(52)
		tmp1 = ((Dynamic)((int)20));
	}
	else  {
		HX_STACK_LINE(53)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderParameterType_Impl__obj,fromString,return )

::String ShaderParameterType_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._ShaderParameterType.ShaderParameterType_Impl_","toString",0xc4386601,"openfl.display._ShaderParameterType.ShaderParameterType_Impl_.toString","openfl/display/ShaderParameterType.hx",59,0xaf3fed4c)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(61)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(61)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(61)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(63)
			tmp1 = HX_HCSTRING("bool","\x2a","\x84","\x1b","\x41");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(64)
			tmp1 = HX_HCSTRING("bool2","\xc8","\x20","\xf8","\xb6");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(65)
			tmp1 = HX_HCSTRING("bool3","\xc9","\x20","\xf8","\xb6");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(66)
			tmp1 = HX_HCSTRING("bool4","\xca","\x20","\xf8","\xb6");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(67)
			tmp1 = HX_HCSTRING("float","\x9c","\xc5","\x96","\x02");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(68)
			tmp1 = HX_HCSTRING("float2","\x16","\x23","\x56","\x41");
		}
		;break;
		case (int)6: {
			HX_STACK_LINE(69)
			tmp1 = HX_HCSTRING("float3","\x17","\x23","\x56","\x41");
		}
		;break;
		case (int)7: {
			HX_STACK_LINE(70)
			tmp1 = HX_HCSTRING("float4","\x18","\x23","\x56","\x41");
		}
		;break;
		case (int)8: {
			HX_STACK_LINE(71)
			tmp1 = HX_HCSTRING("int","\xef","\x0c","\x50","\x00");
		}
		;break;
		case (int)9: {
			HX_STACK_LINE(72)
			tmp1 = HX_HCSTRING("int2","\x63","\x44","\xbb","\x45");
		}
		;break;
		case (int)10: {
			HX_STACK_LINE(73)
			tmp1 = HX_HCSTRING("int3","\x64","\x44","\xbb","\x45");
		}
		;break;
		case (int)11: {
			HX_STACK_LINE(74)
			tmp1 = HX_HCSTRING("int4","\x65","\x44","\xbb","\x45");
		}
		;break;
		case (int)12: {
			HX_STACK_LINE(75)
			tmp1 = HX_HCSTRING("matrix2x2","\xcb","\xc1","\xda","\xad");
		}
		;break;
		case (int)13: {
			HX_STACK_LINE(76)
			tmp1 = HX_HCSTRING("matrix2x3","\xcc","\xc1","\xda","\xad");
		}
		;break;
		case (int)14: {
			HX_STACK_LINE(77)
			tmp1 = HX_HCSTRING("matrix2x4","\xcd","\xc1","\xda","\xad");
		}
		;break;
		case (int)15: {
			HX_STACK_LINE(78)
			tmp1 = HX_HCSTRING("matrix3x2","\x0c","\x84","\xdb","\xad");
		}
		;break;
		case (int)16: {
			HX_STACK_LINE(79)
			tmp1 = HX_HCSTRING("matrix3x3","\x0d","\x84","\xdb","\xad");
		}
		;break;
		case (int)17: {
			HX_STACK_LINE(80)
			tmp1 = HX_HCSTRING("matrix3x4","\x0e","\x84","\xdb","\xad");
		}
		;break;
		case (int)18: {
			HX_STACK_LINE(81)
			tmp1 = HX_HCSTRING("matrix4x2","\x4d","\x46","\xdc","\xad");
		}
		;break;
		case (int)19: {
			HX_STACK_LINE(82)
			tmp1 = HX_HCSTRING("matrix4x3","\x4e","\x46","\xdc","\xad");
		}
		;break;
		case (int)20: {
			HX_STACK_LINE(83)
			tmp1 = HX_HCSTRING("matrix4x4","\x4f","\x46","\xdc","\xad");
		}
		;break;
		default: {
			HX_STACK_LINE(84)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(61)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ShaderParameterType_Impl__obj,toString,return )


ShaderParameterType_Impl__obj::ShaderParameterType_Impl__obj()
{
}

bool ShaderParameterType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true;  }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::BOOL,HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::BOOL2,HX_HCSTRING("BOOL2","\xc8","\x58","\xe6","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::BOOL3,HX_HCSTRING("BOOL3","\xc9","\x58","\xe6","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::BOOL4,HX_HCSTRING("BOOL4","\xca","\x58","\xe6","\x34")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::FLOAT,HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::FLOAT2,HX_HCSTRING("FLOAT2","\x36","\xcf","\xd8","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::FLOAT3,HX_HCSTRING("FLOAT3","\x37","\xcf","\xd8","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::FLOAT4,HX_HCSTRING("FLOAT4","\x38","\xcf","\xd8","\xf3")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::INT,HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::INT2,HX_HCSTRING("INT2","\x83","\x0c","\x7c","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::INT3,HX_HCSTRING("INT3","\x84","\x0c","\x7c","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::INT4,HX_HCSTRING("INT4","\x85","\x0c","\x7c","\x30")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX2X2,HX_HCSTRING("MATRIX2X2","\xeb","\x79","\x4b","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX2X3,HX_HCSTRING("MATRIX2X3","\xec","\x79","\x4b","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX2X4,HX_HCSTRING("MATRIX2X4","\xed","\x79","\x4b","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX3X2,HX_HCSTRING("MATRIX3X2","\x2c","\x3c","\x4c","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX3X3,HX_HCSTRING("MATRIX3X3","\x2d","\x3c","\x4c","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX3X4,HX_HCSTRING("MATRIX3X4","\x2e","\x3c","\x4c","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX4X2,HX_HCSTRING("MATRIX4X2","\x6d","\xfe","\x4c","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX4X3,HX_HCSTRING("MATRIX4X3","\x6e","\xfe","\x4c","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &ShaderParameterType_Impl__obj::MATRIX4X4,HX_HCSTRING("MATRIX4X4","\x6f","\xfe","\x4c","\xa9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL,"BOOL");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL2,"BOOL2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL3,"BOOL3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL4,"BOOL4");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT,"FLOAT");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT2,"FLOAT2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT3,"FLOAT3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT4,"FLOAT4");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::INT,"INT");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::INT2,"INT2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::INT3,"INT3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::INT4,"INT4");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X2,"MATRIX2X2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X3,"MATRIX2X3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X4,"MATRIX2X4");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X2,"MATRIX3X2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X3,"MATRIX3X3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X4,"MATRIX3X4");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X2,"MATRIX4X2");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X3,"MATRIX4X3");
	HX_MARK_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X4,"MATRIX4X4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL,"BOOL");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL2,"BOOL2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL3,"BOOL3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::BOOL4,"BOOL4");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT,"FLOAT");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT2,"FLOAT2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT3,"FLOAT3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::FLOAT4,"FLOAT4");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::INT,"INT");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::INT2,"INT2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::INT3,"INT3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::INT4,"INT4");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X2,"MATRIX2X2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X3,"MATRIX2X3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX2X4,"MATRIX2X4");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X2,"MATRIX3X2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X3,"MATRIX3X3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX3X4,"MATRIX3X4");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X2,"MATRIX4X2");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X3,"MATRIX4X3");
	HX_VISIT_MEMBER_NAME(ShaderParameterType_Impl__obj::MATRIX4X4,"MATRIX4X4");
};

#endif

hx::Class ShaderParameterType_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL2","\xc8","\x58","\xe6","\x34"),
	HX_HCSTRING("BOOL3","\xc9","\x58","\xe6","\x34"),
	HX_HCSTRING("BOOL4","\xca","\x58","\xe6","\x34"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("FLOAT2","\x36","\xcf","\xd8","\xf3"),
	HX_HCSTRING("FLOAT3","\x37","\xcf","\xd8","\xf3"),
	HX_HCSTRING("FLOAT4","\x38","\xcf","\xd8","\xf3"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("INT2","\x83","\x0c","\x7c","\x30"),
	HX_HCSTRING("INT3","\x84","\x0c","\x7c","\x30"),
	HX_HCSTRING("INT4","\x85","\x0c","\x7c","\x30"),
	HX_HCSTRING("MATRIX2X2","\xeb","\x79","\x4b","\xa9"),
	HX_HCSTRING("MATRIX2X3","\xec","\x79","\x4b","\xa9"),
	HX_HCSTRING("MATRIX2X4","\xed","\x79","\x4b","\xa9"),
	HX_HCSTRING("MATRIX3X2","\x2c","\x3c","\x4c","\xa9"),
	HX_HCSTRING("MATRIX3X3","\x2d","\x3c","\x4c","\xa9"),
	HX_HCSTRING("MATRIX3X4","\x2e","\x3c","\x4c","\xa9"),
	HX_HCSTRING("MATRIX4X2","\x6d","\xfe","\x4c","\xa9"),
	HX_HCSTRING("MATRIX4X3","\x6e","\xfe","\x4c","\xa9"),
	HX_HCSTRING("MATRIX4X4","\x6f","\xfe","\x4c","\xa9"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void ShaderParameterType_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._ShaderParameterType.ShaderParameterType_Impl_","\xb9","\xc9","\xc6","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ShaderParameterType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ShaderParameterType_Impl__obj >;
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

void ShaderParameterType_Impl__obj::__boot()
{
	BOOL= ((Dynamic)((int)0));
	BOOL2= ((Dynamic)((int)1));
	BOOL3= ((Dynamic)((int)2));
	BOOL4= ((Dynamic)((int)3));
	FLOAT= ((Dynamic)((int)4));
	FLOAT2= ((Dynamic)((int)5));
	FLOAT3= ((Dynamic)((int)6));
	FLOAT4= ((Dynamic)((int)7));
	INT= ((Dynamic)((int)8));
	INT2= ((Dynamic)((int)9));
	INT3= ((Dynamic)((int)10));
	INT4= ((Dynamic)((int)11));
	MATRIX2X2= ((Dynamic)((int)12));
	MATRIX2X3= ((Dynamic)((int)13));
	MATRIX2X4= ((Dynamic)((int)14));
	MATRIX3X2= ((Dynamic)((int)15));
	MATRIX3X3= ((Dynamic)((int)16));
	MATRIX3X4= ((Dynamic)((int)17));
	MATRIX4X2= ((Dynamic)((int)18));
	MATRIX4X3= ((Dynamic)((int)19));
	MATRIX4X4= ((Dynamic)((int)20));
}

} // end namespace openfl
} // end namespace display
} // end namespace _ShaderParameterType
