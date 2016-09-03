#include <hxcpp.h>

#ifndef INCLUDED_openfl_display__GraphicsPathWinding_GraphicsPathWinding_Impl_
#include <openfl/display/_GraphicsPathWinding/GraphicsPathWinding_Impl_.h>
#endif
namespace openfl{
namespace display{
namespace _GraphicsPathWinding{

Void GraphicsPathWinding_Impl__obj::__construct()
{
	return null();
}

//GraphicsPathWinding_Impl__obj::~GraphicsPathWinding_Impl__obj() { }

Dynamic GraphicsPathWinding_Impl__obj::__CreateEmpty() { return  new GraphicsPathWinding_Impl__obj; }
hx::ObjectPtr< GraphicsPathWinding_Impl__obj > GraphicsPathWinding_Impl__obj::__new()
{  hx::ObjectPtr< GraphicsPathWinding_Impl__obj > _result_ = new GraphicsPathWinding_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsPathWinding_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPathWinding_Impl__obj > _result_ = new GraphicsPathWinding_Impl__obj();
	_result_->__construct();
	return _result_;}

Dynamic GraphicsPathWinding_Impl__obj::EVEN_ODD;

Dynamic GraphicsPathWinding_Impl__obj::NON_ZERO;

Dynamic GraphicsPathWinding_Impl__obj::fromString( ::String value){
	HX_STACK_FRAME("openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","fromString",0x5431d0d8,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.fromString","openfl/display/GraphicsPathWinding.hx",9,0xa8467880)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(11)
	::String tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(11)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(11)
	::String _switch_1 = (tmp);
	if (  ( _switch_1==HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06"))){
		HX_STACK_LINE(13)
		tmp1 = ((Dynamic)((int)0));
	}
	else if (  ( _switch_1==HX_HCSTRING("nonZero","\xd5","\x1e","\xb4","\xd1"))){
		HX_STACK_LINE(14)
		tmp1 = ((Dynamic)((int)1));
	}
	else  {
		HX_STACK_LINE(15)
		tmp1 = null();
	}
;
;
	HX_STACK_LINE(11)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsPathWinding_Impl__obj,fromString,return )

::String GraphicsPathWinding_Impl__obj::toString( int value){
	HX_STACK_FRAME("openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","toString",0x816cca69,"openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_.toString","openfl/display/GraphicsPathWinding.hx",21,0xa8467880)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(23)
	int tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(23)
	::String tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(23)
	switch( (int)(tmp)){
		case (int)0: {
			HX_STACK_LINE(25)
			tmp1 = HX_HCSTRING("evenOdd","\xb5","\xc6","\x7e","\x06");
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(26)
			tmp1 = HX_HCSTRING("nonZero","\xd5","\x1e","\xb4","\xd1");
		}
		;break;
		default: {
			HX_STACK_LINE(27)
			tmp1 = null();
		}
	}
	HX_STACK_LINE(23)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GraphicsPathWinding_Impl__obj,toString,return )


GraphicsPathWinding_Impl__obj::GraphicsPathWinding_Impl__obj()
{
}

bool GraphicsPathWinding_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
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
	{hx::fsObject /*Dynamic*/ ,(void *) &GraphicsPathWinding_Impl__obj::EVEN_ODD,HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21")},
	{hx::fsObject /*Dynamic*/ ,(void *) &GraphicsPathWinding_Impl__obj::NON_ZERO,HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_MARK_MEMBER_NAME(GraphicsPathWinding_Impl__obj::NON_ZERO,"NON_ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::EVEN_ODD,"EVEN_ODD");
	HX_VISIT_MEMBER_NAME(GraphicsPathWinding_Impl__obj::NON_ZERO,"NON_ZERO");
};

#endif

hx::Class GraphicsPathWinding_Impl__obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("EVEN_ODD","\xaa","\x3e","\xb7","\x21"),
	HX_HCSTRING("NON_ZERO","\xfa","\x82","\x17","\x61"),
	HX_HCSTRING("fromString","\xdb","\x2d","\x74","\x54"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

void GraphicsPathWinding_Impl__obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display._GraphicsPathWinding.GraphicsPathWinding_Impl_","\x51","\x92","\x50","\xe4");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPathWinding_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GraphicsPathWinding_Impl__obj >;
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

void GraphicsPathWinding_Impl__obj::__boot()
{
	EVEN_ODD= ((Dynamic)((int)0));
	NON_ZERO= ((Dynamic)((int)1));
}

} // end namespace openfl
} // end namespace display
} // end namespace _GraphicsPathWinding
