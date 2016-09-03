#include <hxcpp.h>

#ifndef INCLUDED_openfl_utils__CompressionAlgorithm_CompressionAlgorithm_Impl_
#include <openfl/utils/_CompressionAlgorithm/CompressionAlgorithm_Impl_.h>
#endif
namespace openfl{
namespace utils{
namespace _CompressionAlgorithm{

Void CompressionAlgorithm_Impl__obj::__construct()
{
	return null();
}

//CompressionAlgorithm_Impl__obj::~CompressionAlgorithm_Impl__obj() { }

Dynamic CompressionAlgorithm_Impl__obj::__CreateEmpty() { return  new CompressionAlgorithm_Impl__obj; }
hx::ObjectPtr< CompressionAlgorithm_Impl__obj > CompressionAlgorithm_Impl__obj::__new()
{  hx::ObjectPtr< CompressionAlgorithm_Impl__obj > _result_ = new CompressionAlgorithm_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CompressionAlgorithm_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< CompressionAlgorithm_Impl__obj > _result_ = new CompressionAlgorithm_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic CompressionAlgorithm_Impl__obj::DEFLATE;

Dynamic CompressionAlgorithm_Impl__obj::LZMA;

Dynamic CompressionAlgorithm_Impl__obj::ZLIB;

Dynamic CompressionAlgorithm_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","fromString",0x5224159f,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.fromString","openfl/utils/CompressionAlgorithm.hx",11,0x4617ecf8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(13)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(13)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(13)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2"))){
		HX_STACK_LINE(15)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("lzma","\x62","\xfd","\xbf","\x47"))){
		HX_STACK_LINE(16)
		tmp1 = ((Dynamic)((int)1));
	}
	else if (  ( _switch_1==HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50"))){
		HX_STACK_LINE(17)
		tmp1 = ((Dynamic)((int)2));
	}
	else  {
		HX_STACK_LINE(18)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(13)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,fromString,return )

::String CompressionAlgorithm_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","toString",0x36c27f70,"openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_.toString","openfl/utils/CompressionAlgorithm.hx",24,0x4617ecf8)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(26)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(26)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(26)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(28)
			tmp1 = HX_HCSTRING("deflate","\x6b","\x0b","\xfa","\xa2");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(29)
			tmp1 = HX_HCSTRING("lzma","\x62","\xfd","\xbf","\x47");
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(30)
			tmp1 = HX_HCSTRING("zlib","\x0b","\x57","\xf6","\x50");
		}
		;break;
		default: {
			HX_STACK_LINE(31)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(26)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CompressionAlgorithm_Impl__obj,toString,return )


CompressionAlgorithm_Impl__obj::CompressionAlgorithm_Impl__obj()
{
}

bool CompressionAlgorithm_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::DEFLATE,HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::LZMA,HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32")},
	{hx::fsObject /*Dynamic*/ ,(void *) &CompressionAlgorithm_Impl__obj::ZLIB,HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_MARK_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::DEFLATE,"DEFLATE");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::LZMA,"LZMA");
	HX_VISIT_MEMBER_NAME(CompressionAlgorithm_Impl__obj::ZLIB,"ZLIB");
};

#endif

hx::Class CompressionAlgorithm_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("DEFLATE","\x4b","\xdf","\xcd","\x22"),
	HX_HCSTRING("LZMA","\x62","\xc5","\x80","\x32"),
	HX_HCSTRING("ZLIB","\x0b","\x1f","\xb7","\x3b"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void CompressionAlgorithm_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.utils._CompressionAlgorithm.CompressionAlgorithm_Impl_","\x2a","\x9a","\x41","\x91");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CompressionAlgorithm_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CompressionAlgorithm_Impl__obj >;
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

void CompressionAlgorithm_Impl__obj::__boot()
{
	DEFLATE= ((Dynamic)((int)0));
	LZMA= ((Dynamic)((int)1));
	ZLIB= ((Dynamic)((int)2));
}

} // end namespace openfl
} // end namespace utils
} // end namespace _CompressionAlgorithm
