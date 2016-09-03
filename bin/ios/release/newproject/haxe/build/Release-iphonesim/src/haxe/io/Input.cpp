#include <hxcpp.h>

#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
namespace haxe{
namespace io{

Void Input_obj::__construct()
{
	return null();
}

//Input_obj::~Input_obj() { }

Dynamic Input_obj::__CreateEmpty() { return  new Input_obj; }
hx::ObjectPtr< Input_obj > Input_obj::__new()
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

Dynamic Input_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Input_obj > _result_ = new Input_obj();
	_result_->__construct();
	return _result_;}

int Input_obj::readByte( ){
	HX_STACK_FRAME("haxe.io.Input","readByte",0x4de8a3c2,"haxe.io.Input.readByte","/usr/local/lib/haxe/std/haxe/io/Input.hx",48,0x3b290ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(48)
	HX_STACK_DO_THROW(HX_HCSTRING("Not implemented","\x15","\x1e","\x32","\x34"));
	HX_STACK_LINE(48)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readByte,return )

int Input_obj::readBytes( ::haxe::io::Bytes s,int pos,int len){
	HX_STACK_FRAME("haxe.io.Input","readBytes",0xdda6a671,"haxe.io.Input.readBytes","/usr/local/lib/haxe/std/haxe/io/Input.hx",61,0x3b290ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(s,"s")
	HX_STACK_ARG(pos,"pos")
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(62)
	int k = len;		HX_STACK_VAR(k,"k");
	HX_STACK_LINE(63)
	Array< unsigned char > b = s->b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(64)
	bool tmp = (pos < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(64)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(64)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(64)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(64)
	if ((tmp2)){
		HX_STACK_LINE(64)
		tmp3 = (len < (int)0);
	}
	else{
		HX_STACK_LINE(64)
		tmp3 = true;
	}
	HX_STACK_LINE(64)
	bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(64)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(64)
	if ((tmp4)){
		HX_STACK_LINE(64)
		int tmp6 = (pos + len);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(64)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		int tmp8 = s->length;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(64)
		tmp5 = (tmp7 > tmp8);
	}
	else{
		HX_STACK_LINE(64)
		tmp5 = true;
	}
	HX_STACK_LINE(64)
	if ((tmp5)){
		HX_STACK_LINE(65)
		HX_STACK_DO_THROW(::haxe::io::Error_obj::OutsideBounds);
	}
	HX_STACK_LINE(66)
	while((true)){
		HX_STACK_LINE(66)
		bool tmp6 = (k > (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(66)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(66)
		if ((tmp7)){
			HX_STACK_LINE(66)
			break;
		}
		HX_STACK_LINE(72)
		unsigned char tmp8 = this->readByte();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(72)
		b[pos] = tmp8;
		HX_STACK_LINE(76)
		(pos)++;
		HX_STACK_LINE(77)
		(k)--;
	}
	HX_STACK_LINE(79)
	int tmp6 = len;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(79)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readBytes,return )

Void Input_obj::close( ){
{
		HX_STACK_FRAME("haxe.io.Input","close",0xfc421af4,"haxe.io.Input.close","/usr/local/lib/haxe/std/haxe/io/Input.hx",87,0x3b290ab1)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,close,(void))

Void Input_obj::readFullBytes( ::haxe::io::Bytes s,int pos,int len){
{
		HX_STACK_FRAME("haxe.io.Input","readFullBytes",0x3db9a162,"haxe.io.Input.readFullBytes","/usr/local/lib/haxe/std/haxe/io/Input.hx",131,0x3b290ab1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_ARG(pos,"pos")
		HX_STACK_ARG(len,"len")
		HX_STACK_LINE(131)
		while((true)){
			HX_STACK_LINE(131)
			bool tmp = (len > (int)0);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(131)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(131)
			if ((tmp1)){
				HX_STACK_LINE(131)
				break;
			}
			HX_STACK_LINE(132)
			::haxe::io::Bytes tmp2 = s;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(132)
			int tmp3 = pos;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(132)
			int tmp4 = len;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(132)
			int tmp5 = this->readBytes(tmp2,tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(132)
			int k = tmp5;		HX_STACK_VAR(k,"k");
			HX_STACK_LINE(133)
			hx::AddEq(pos,k);
			HX_STACK_LINE(134)
			hx::SubEq(len,k);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Input_obj,readFullBytes,(void))

::String Input_obj::readLine( ){
	HX_STACK_FRAME("haxe.io.Input","readLine",0x54789cae,"haxe.io.Input.readLine","/usr/local/lib/haxe/std/haxe/io/Input.hx",171,0x3b290ab1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(172)
	::StringBuf tmp = ::StringBuf_obj::__new();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(172)
	::StringBuf buf = tmp;		HX_STACK_VAR(buf,"buf");
	HX_STACK_LINE(173)
	int last;		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(174)
	::String s;		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(175)
	try
	{
	HX_STACK_CATCHABLE(::haxe::io::Eof, 0);
	{
		HX_STACK_LINE(176)
		while((true)){
			HX_STACK_LINE(176)
			int tmp1 = this->readByte();		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(176)
			int tmp2 = last = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(176)
			bool tmp3 = (tmp2 != (int)10);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(176)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(176)
			if ((tmp4)){
				HX_STACK_LINE(176)
				break;
			}
			HX_STACK_LINE(177)
			int tmp5 = last;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(177)
			::String tmp6 = ::String::fromCharCode(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(177)
			buf->b->push(tmp6);
		}
		HX_STACK_LINE(178)
		::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(178)
		s = tmp1;
		HX_STACK_LINE(179)
		int tmp2 = (s.length - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(179)
		Dynamic tmp3 = s.charCodeAt(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(179)
		bool tmp4 = (tmp3 == (int)13);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(179)
		if ((tmp4)){
			HX_STACK_LINE(179)
			::String tmp5 = s.substr((int)0,(int)-1);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(179)
			s = tmp5;
		}
	}
	}
	catch(Dynamic __e){
		if (__e.IsClass< ::haxe::io::Eof >() ){
			HX_STACK_BEGIN_CATCH
			::haxe::io::Eof e = __e;{
				HX_STACK_LINE(181)
				::String tmp1 = buf->b->join(HX_HCSTRING("","\x00","\x00","\x00","\x00"));		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(181)
				s = tmp1;
				HX_STACK_LINE(182)
				bool tmp2 = (s.length == (int)0);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(182)
				if ((tmp2)){
					HX_STACK_LINE(183)
					::haxe::io::Eof tmp3 = e;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(183)
					HX_STACK_DO_THROW(tmp3);
				}
			}
		}
		else {
		    HX_STACK_DO_THROW(__e);
		}
	}
	HX_STACK_LINE(185)
	::String tmp1 = s;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(185)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Input_obj,readLine,return )

::String Input_obj::readString( int len){
	HX_STACK_FRAME("haxe.io.Input","readString",0xfdebd00b,"haxe.io.Input.readString","/usr/local/lib/haxe/std/haxe/io/Input.hx",294,0x3b290ab1)
	HX_STACK_THIS(this)
	HX_STACK_ARG(len,"len")
	HX_STACK_LINE(295)
	int tmp = len;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(295)
	::haxe::io::Bytes tmp1 = ::haxe::io::Bytes_obj::alloc(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(295)
	::haxe::io::Bytes b = tmp1;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(296)
	::haxe::io::Bytes tmp2 = b;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(296)
	int tmp3 = len;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(296)
	this->readFullBytes(tmp2,(int)0,tmp3);
	HX_STACK_LINE(300)
	::String tmp4 = b->toString();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(300)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC1(Input_obj,readString,return )


Input_obj::Input_obj()
{
}

Dynamic Input_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		if (HX_FIELD_EQ(inName,"readLine") ) { return readLine_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"readBytes") ) { return readBytes_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"readString") ) { return readString_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"readFullBytes") ) { return readFullBytes_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("readByte","\x7e","\xf9","\x1a","\x69"),
	HX_HCSTRING("readBytes","\x35","\x55","\x7f","\x8e"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("readFullBytes","\x26","\x02","\x0b","\xce"),
	HX_HCSTRING("readLine","\x6a","\xf2","\xaa","\x6f"),
	HX_HCSTRING("readString","\xc7","\x0c","\xac","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Input_obj::__mClass,"__mClass");
};

#endif

hx::Class Input_obj::__mClass;

void Input_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.io.Input","\xaa","\x0e","\xf5","\x9f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Input_obj >;
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

} // end namespace haxe
} // end namespace io
