#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DVertexBufferFormat_Context3DVertexBufferFormat_Impl_
#include <openfl/display3D/_Context3DVertexBufferFormat/Context3DVertexBufferFormat_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DVertexBufferFormat{

Void Context3DVertexBufferFormat_Impl__obj::__construct()
{
	return null();
}

//Context3DVertexBufferFormat_Impl__obj::~Context3DVertexBufferFormat_Impl__obj() { }

Dynamic Context3DVertexBufferFormat_Impl__obj::__CreateEmpty() { return  new Context3DVertexBufferFormat_Impl__obj; }
hx::ObjectPtr< Context3DVertexBufferFormat_Impl__obj > Context3DVertexBufferFormat_Impl__obj::__new()
{  hx::ObjectPtr< Context3DVertexBufferFormat_Impl__obj > _result_ = new Context3DVertexBufferFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DVertexBufferFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DVertexBufferFormat_Impl__obj > _result_ = new Context3DVertexBufferFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DVertexBufferFormat_Impl__obj::BYTES_4;

Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_1;

Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_2;

Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_3;

Dynamic Context3DVertexBufferFormat_Impl__obj::FLOAT_4;

Dynamic Context3DVertexBufferFormat_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","fromString",0x69b9a727,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.fromString","openfl/display3D/Context3DVertexBufferFormat.hx",13,0x4ab2835e)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(15)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(15)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(15)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bytes4","\x69","\x55","\x6f","\x27"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("float1","\x15","\x23","\x56","\x41"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("float2","\x16","\x23","\x56","\x41"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("float3","\x17","\x23","\x56","\x41"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("float4","\x18","\x23","\x56","\x41"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)4));
	}
	else  {
		HX_STACK_LINE(22)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(15)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DVertexBufferFormat_Impl__obj,fromString,return )

::String Context3DVertexBufferFormat_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","toString",0xa34b1ef8,"openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_.toString","openfl/display3D/Context3DVertexBufferFormat.hx",28,0x4ab2835e)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(30)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(30)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(30)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(32)
			tmp1 = HX_HCSTRING("bytes4","\x69","\x55","\x6f","\x27");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(33)
			tmp1 = HX_HCSTRING("float1","\x15","\x23","\x56","\x41");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("float2","\x16","\x23","\x56","\x41");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("float3","\x17","\x23","\x56","\x41");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("float4","\x18","\x23","\x56","\x41");
		}
		;break;
		default: {
			HX_STACK_LINE(37)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(30)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DVertexBufferFormat_Impl__obj,toString,return )


Context3DVertexBufferFormat_Impl__obj::Context3DVertexBufferFormat_Impl__obj()
{
}

bool Context3DVertexBufferFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DVertexBufferFormat_Impl__obj::BYTES_4,HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_1,HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_2,HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_3,HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DVertexBufferFormat_Impl__obj::FLOAT_4,HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::BYTES_4,"BYTES_4");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_1,"FLOAT_1");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_2,"FLOAT_2");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_3,"FLOAT_3");
	HX_MARK_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_4,"FLOAT_4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::BYTES_4,"BYTES_4");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_1,"FLOAT_1");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_2,"FLOAT_2");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_3,"FLOAT_3");
	HX_VISIT_MEMBER_NAME(Context3DVertexBufferFormat_Impl__obj::FLOAT_4,"FLOAT_4");
};

#endif

hx::Class Context3DVertexBufferFormat_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BYTES_4","\x00","\x7c","\xcf","\xd9"),
	HX_HCSTRING("FLOAT_1","\x6e","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_2","\x6f","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_3","\x70","\xa7","\xdc","\x69"),
	HX_HCSTRING("FLOAT_4","\x71","\xa7","\xdc","\x69"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DVertexBufferFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DVertexBufferFormat.Context3DVertexBufferFormat_Impl_","\xa2","\x0b","\x6b","\x59");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DVertexBufferFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DVertexBufferFormat_Impl__obj >;
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

void Context3DVertexBufferFormat_Impl__obj::__boot()
{
	BYTES_4= ((Dynamic)((int)0));
	FLOAT_1= ((Dynamic)((int)1));
	FLOAT_2= ((Dynamic)((int)2));
	FLOAT_3= ((Dynamic)((int)3));
	FLOAT_4= ((Dynamic)((int)4));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DVertexBufferFormat
