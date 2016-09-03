#include <hxcpp.h>

#ifndef INCLUDED_openfl_display3D__Context3DTextureFormat_Context3DTextureFormat_Impl_
#include <openfl/display3D/_Context3DTextureFormat/Context3DTextureFormat_Impl_.h>
#endif
namespace openfl{
namespace display3D{
namespace _Context3DTextureFormat{

Void Context3DTextureFormat_Impl__obj::__construct()
{
	return null();
}

//Context3DTextureFormat_Impl__obj::~Context3DTextureFormat_Impl__obj() { }

Dynamic Context3DTextureFormat_Impl__obj::__CreateEmpty() { return  new Context3DTextureFormat_Impl__obj; }
hx::ObjectPtr< Context3DTextureFormat_Impl__obj > Context3DTextureFormat_Impl__obj::__new()
{  hx::ObjectPtr< Context3DTextureFormat_Impl__obj > _result_ = new Context3DTextureFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTextureFormat_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DTextureFormat_Impl__obj > _result_ = new Context3DTextureFormat_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DTextureFormat_Impl__obj::BGR_PACKED;

Dynamic Context3DTextureFormat_Impl__obj::BGRA;

Dynamic Context3DTextureFormat_Impl__obj::BGRA_PACKED;

Dynamic Context3DTextureFormat_Impl__obj::COMPRESSED;

Dynamic Context3DTextureFormat_Impl__obj::COMPRESSED_ALPHA;

Dynamic Context3DTextureFormat_Impl__obj::RGBA_HALF_FLOAT;

Dynamic Context3DTextureFormat_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_","fromString",0xc71d5181,"openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_.fromString","openfl/display3D/Context3DTextureFormat.hx",14,0xa18085d1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(16)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(16)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(16)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("bgrPacked565","\x6f","\x69","\x33","\x84"))){
		HX_STACK_LINE(18)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("bgra","\xb4","\x74","\x15","\x41"))){
		HX_STACK_LINE(19)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("bgraPacked4444","\x4c","\x10","\xaf","\x4f"))){
		HX_STACK_LINE(20)
		tmp1 = ((Dynamic)((int)2));
	}
	else if (  ( _switch_1==HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67"))){
		HX_STACK_LINE(21)
		tmp1 = ((Dynamic)((int)3));
	}
	else if (  ( _switch_1==HX_HCSTRING("compressedAlpha","\x1d","\xd7","\x1f","\x4a"))){
		HX_STACK_LINE(22)
		tmp1 = ((Dynamic)((int)4));
	}
	else if (  ( _switch_1==HX_HCSTRING("rgbaHalfFloat","\x95","\x5b","\x55","\x9e"))){
		HX_STACK_LINE(23)
		tmp1 = ((Dynamic)((int)5));
	}
	else  {
		HX_STACK_LINE(24)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(16)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFormat_Impl__obj,fromString,return )

::String Context3DTextureFormat_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_","toString",0xc7ab9ed2,"openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_.toString","openfl/display3D/Context3DTextureFormat.hx",30,0xa18085d1)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(32)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(32)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(32)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(34)
			tmp1 = HX_HCSTRING("bgrPacked565","\x6f","\x69","\x33","\x84");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(35)
			tmp1 = HX_HCSTRING("bgra","\xb4","\x74","\x15","\x41");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(36)
			tmp1 = HX_HCSTRING("bgraPacked4444","\x4c","\x10","\xaf","\x4f");
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(37)
			tmp1 = HX_HCSTRING("compressed","\x81","\x4c","\xda","\x67");
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(38)
			tmp1 = HX_HCSTRING("compressedAlpha","\x1d","\xd7","\x1f","\x4a");
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(39)
			tmp1 = HX_HCSTRING("rgbaHalfFloat","\x95","\x5b","\x55","\x9e");
		}
		;break;
		default: {
			HX_STACK_LINE(40)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(32)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Context3DTextureFormat_Impl__obj,toString,return )


Context3DTextureFormat_Impl__obj::Context3DTextureFormat_Impl__obj()
{
}

bool Context3DTextureFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::BGR_PACKED,HX_HCSTRING("BGR_PACKED","\xca","\xa9","\xe1","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::BGRA,HX_HCSTRING("BGRA","\xb4","\x3c","\xd6","\x2b")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::BGRA_PACKED,HX_HCSTRING("BGRA_PACKED","\xe3","\x96","\xb3","\xa9")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::COMPRESSED,HX_HCSTRING("COMPRESSED","\x81","\xc0","\xe3","\x59")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::COMPRESSED_ALPHA,HX_HCSTRING("COMPRESSED_ALPHA","\xc0","\xbd","\xf0","\x0e")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Context3DTextureFormat_Impl__obj::RGBA_HALF_FLOAT,HX_HCSTRING("RGBA_HALF_FLOAT","\x9b","\x47","\xf2","\xb0")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGR_PACKED,"BGR_PACKED");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGRA,"BGRA");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGRA_PACKED,"BGRA_PACKED");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::COMPRESSED,"COMPRESSED");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::COMPRESSED_ALPHA,"COMPRESSED_ALPHA");
	HX_MARK_MEMBER_NAME(Context3DTextureFormat_Impl__obj::RGBA_HALF_FLOAT,"RGBA_HALF_FLOAT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGR_PACKED,"BGR_PACKED");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGRA,"BGRA");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::BGRA_PACKED,"BGRA_PACKED");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::COMPRESSED,"COMPRESSED");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::COMPRESSED_ALPHA,"COMPRESSED_ALPHA");
	HX_VISIT_MEMBER_NAME(Context3DTextureFormat_Impl__obj::RGBA_HALF_FLOAT,"RGBA_HALF_FLOAT");
};

#endif

hx::Class Context3DTextureFormat_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("BGR_PACKED","\xca","\xa9","\xe1","\x6a"),
	HX_HCSTRING("BGRA","\xb4","\x3c","\xd6","\x2b"),
	HX_HCSTRING("BGRA_PACKED","\xe3","\x96","\xb3","\xa9"),
	HX_HCSTRING("COMPRESSED","\x81","\xc0","\xe3","\x59"),
	HX_HCSTRING("COMPRESSED_ALPHA","\xc0","\xbd","\xf0","\x0e"),
	HX_HCSTRING("RGBA_HALF_FLOAT","\x9b","\x47","\xf2","\xb0"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void Context3DTextureFormat_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display3D._Context3DTextureFormat.Context3DTextureFormat_Impl_","\x08","\xef","\x41","\x50");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Context3DTextureFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Context3DTextureFormat_Impl__obj >;
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

void Context3DTextureFormat_Impl__obj::__boot()
{
	BGR_PACKED= ((Dynamic)((int)0));
	BGRA= ((Dynamic)((int)1));
	BGRA_PACKED= ((Dynamic)((int)2));
	COMPRESSED= ((Dynamic)((int)3));
	COMPRESSED_ALPHA= ((Dynamic)((int)4));
	RGBA_HALF_FLOAT= ((Dynamic)((int)5));
}

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DTextureFormat
