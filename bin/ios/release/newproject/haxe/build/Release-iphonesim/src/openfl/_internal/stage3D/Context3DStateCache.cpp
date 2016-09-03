#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#include <openfl/_internal/stage3D/Context3DStateCache.h>
#endif
#ifndef INCLUDED_openfl_display3D_Program3D
#include <openfl/display3D/Program3D.h>
#endif
namespace openfl{
namespace _internal{
namespace stage3D{

Void Context3DStateCache_obj::__construct()
{
HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","new",0xfc35c194,"openfl._internal.stage3D.Context3DStateCache.new","openfl/_internal/stage3D/Context3DStateCache.hx",9,0xc7f853df)
HX_STACK_THIS(this)
{
	struct _Function_1_1{
		inline static ::openfl::_Vector::FloatVector Block( ){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/_internal/stage3D/Context3DStateCache.hx",44,0xc7f853df)
			{
				HX_STACK_LINE(44)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(44)
				::openfl::_Vector::FloatVector tmp = ::openfl::_Vector::FloatVector_obj::__new((int)4096,fixed,null());		HX_STACK_VAR(tmp,"tmp");
				HX_STACK_LINE(44)
				::openfl::_Vector::FloatVector tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(44)
				return tmp1;
			}
			return null();
		}
	};
	HX_STACK_LINE(44)
	this->_registers = _Function_1_1::Block();
	HX_STACK_LINE(49)
	this->clearSettings();
}
;
	return null();
}

//Context3DStateCache_obj::~Context3DStateCache_obj() { }

Dynamic Context3DStateCache_obj::__CreateEmpty() { return  new Context3DStateCache_obj; }
hx::ObjectPtr< Context3DStateCache_obj > Context3DStateCache_obj::__new()
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Dynamic Context3DStateCache_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Context3DStateCache_obj > _result_ = new Context3DStateCache_obj();
	_result_->__construct();
	return _result_;}

Void Context3DStateCache_obj::clearSettings( ){
{
		HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","clearSettings",0x4de179c4,"openfl._internal.stage3D.Context3DStateCache.clearSettings","openfl/_internal/stage3D/Context3DStateCache.hx",53,0xc7f853df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->_srcBlendFactor = null();
		HX_STACK_LINE(56)
		this->_destBlendFactor = null();
		HX_STACK_LINE(57)
		this->_deptTestEnabled = false;
		HX_STACK_LINE(58)
		this->_depthTestMask = false;
		HX_STACK_LINE(59)
		this->_depthTestCompareMode = null();
		HX_STACK_LINE(60)
		this->_program = null();
		HX_STACK_LINE(61)
		this->_cullingMode = null();
		HX_STACK_LINE(62)
		this->_activeTexture = (int)-1;
		HX_STACK_LINE(63)
		this->_activeVertexArray = (int)-1;
		HX_STACK_LINE(64)
		this->_viewportOriginX = (int)-1;
		HX_STACK_LINE(65)
		this->_viewportOriginY = (int)-1;
		HX_STACK_LINE(66)
		this->_viewportWidth = (int)-1;
		HX_STACK_LINE(67)
		this->_viewportHeight = (int)-1;
		HX_STACK_LINE(69)
		this->clearRegisters();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearSettings,(void))

Void Context3DStateCache_obj::clearRegisters( ){
{
		HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","clearRegisters",0x47eb38af,"openfl._internal.stage3D.Context3DStateCache.clearRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",73,0xc7f853df)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		int tmp = (int)4096;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(74)
		int numFloats = tmp;		HX_STACK_VAR(numFloats,"numFloats");
		HX_STACK_LINE(75)
		{
			HX_STACK_LINE(75)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(75)
			while((true)){
				HX_STACK_LINE(75)
				bool tmp1 = (_g < numFloats);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(75)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(75)
				if ((tmp2)){
					HX_STACK_LINE(75)
					break;
				}
				HX_STACK_LINE(75)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				int c = tmp3;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(76)
				::openfl::_Vector::FloatVector tmp4 = this->_registers;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(76)
				int tmp5 = c;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				Float tmp6 = tmp4->set(tmp5,((Float)-999999999.0));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				tmp6;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Context3DStateCache_obj,clearRegisters,(void))

bool Context3DStateCache_obj::updateBlendSrcFactor( Dynamic factor){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateBlendSrcFactor",0x54a68877,"openfl._internal.stage3D.Context3DStateCache.updateBlendSrcFactor","openfl/_internal/stage3D/Context3DStateCache.hx",81,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(82)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(82)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(82)
	if ((tmp)){
		HX_STACK_LINE(82)
		Dynamic tmp2 = factor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(82)
		Dynamic tmp3 = this->_srcBlendFactor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(82)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(82)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(82)
		tmp1 = false;
	}
	HX_STACK_LINE(82)
	if ((tmp1)){
		HX_STACK_LINE(83)
		return false;
	}
	HX_STACK_LINE(84)
	this->_srcBlendFactor = factor;
	HX_STACK_LINE(85)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendSrcFactor,return )

bool Context3DStateCache_obj::updateBlendDestFactor( Dynamic factor){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateBlendDestFactor",0xd0cb3ead,"openfl._internal.stage3D.Context3DStateCache.updateBlendDestFactor","openfl/_internal/stage3D/Context3DStateCache.hx",89,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(factor,"factor")
	HX_STACK_LINE(90)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(90)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(90)
	if ((tmp)){
		HX_STACK_LINE(90)
		Dynamic tmp2 = factor;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(90)
		Dynamic tmp3 = this->_destBlendFactor;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(90)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(90)
		tmp1 = false;
	}
	HX_STACK_LINE(90)
	if ((tmp1)){
		HX_STACK_LINE(91)
		return false;
	}
	HX_STACK_LINE(92)
	this->_destBlendFactor = factor;
	HX_STACK_LINE(93)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateBlendDestFactor,return )

bool Context3DStateCache_obj::updateDepthTestEnabled( bool test){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthTestEnabled",0x47bd6581,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestEnabled","openfl/_internal/stage3D/Context3DStateCache.hx",97,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(test,"test")
	HX_STACK_LINE(98)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(98)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(98)
	if ((tmp)){
		HX_STACK_LINE(98)
		bool tmp2 = test;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(98)
		bool tmp3 = this->_deptTestEnabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(98)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(98)
		tmp1 = false;
	}
	HX_STACK_LINE(98)
	if ((tmp1)){
		HX_STACK_LINE(99)
		return false;
	}
	HX_STACK_LINE(100)
	this->_deptTestEnabled = test;
	HX_STACK_LINE(101)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestEnabled,return )

bool Context3DStateCache_obj::updateDepthTestMask( bool mask){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthTestMask",0xcdb33fec,"openfl._internal.stage3D.Context3DStateCache.updateDepthTestMask","openfl/_internal/stage3D/Context3DStateCache.hx",105,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_LINE(106)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(106)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(106)
	if ((tmp)){
		HX_STACK_LINE(106)
		bool tmp2 = mask;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(106)
		bool tmp3 = this->_depthTestMask;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(106)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(106)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(106)
		tmp1 = false;
	}
	HX_STACK_LINE(106)
	if ((tmp1)){
		HX_STACK_LINE(107)
		return false;
	}
	HX_STACK_LINE(108)
	this->_depthTestMask = mask;
	HX_STACK_LINE(109)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthTestMask,return )

bool Context3DStateCache_obj::updateDepthCompareMode( Dynamic mode){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateDepthCompareMode",0xcaf041da,"openfl._internal.stage3D.Context3DStateCache.updateDepthCompareMode","openfl/_internal/stage3D/Context3DStateCache.hx",113,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mode,"mode")
	HX_STACK_LINE(114)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(114)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(114)
	if ((tmp)){
		HX_STACK_LINE(114)
		Dynamic tmp2 = mode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(114)
		Dynamic tmp3 = this->_depthTestCompareMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(114)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(114)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(114)
		tmp1 = false;
	}
	HX_STACK_LINE(114)
	if ((tmp1)){
		HX_STACK_LINE(115)
		return false;
	}
	HX_STACK_LINE(116)
	this->_depthTestCompareMode = mode;
	HX_STACK_LINE(117)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateDepthCompareMode,return )

bool Context3DStateCache_obj::updateProgram3D( ::openfl::display3D::Program3D program3d){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateProgram3D",0x56efe020,"openfl._internal.stage3D.Context3DStateCache.updateProgram3D","openfl/_internal/stage3D/Context3DStateCache.hx",121,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program3d,"program3d")
	HX_STACK_LINE(122)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(122)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(122)
	if ((tmp)){
		HX_STACK_LINE(122)
		::openfl::display3D::Program3D tmp2 = program3d;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(122)
		::openfl::display3D::Program3D tmp3 = this->_program;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(122)
		::openfl::display3D::Program3D tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(122)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(122)
		tmp1 = false;
	}
	HX_STACK_LINE(122)
	if ((tmp1)){
		HX_STACK_LINE(123)
		return false;
	}
	HX_STACK_LINE(124)
	this->_program = program3d;
	HX_STACK_LINE(125)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateProgram3D,return )

bool Context3DStateCache_obj::updateCullingMode( Dynamic cullMode){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateCullingMode",0x8ec7aa9e,"openfl._internal.stage3D.Context3DStateCache.updateCullingMode","openfl/_internal/stage3D/Context3DStateCache.hx",129,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cullMode,"cullMode")
	HX_STACK_LINE(130)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(130)
	if ((tmp)){
		HX_STACK_LINE(130)
		Dynamic tmp2 = cullMode;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(130)
		Dynamic tmp3 = this->_cullingMode;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(130)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(130)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(130)
		tmp1 = false;
	}
	HX_STACK_LINE(130)
	if ((tmp1)){
		HX_STACK_LINE(131)
		return false;
	}
	HX_STACK_LINE(132)
	this->_cullingMode = cullMode;
	HX_STACK_LINE(133)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateCullingMode,return )

bool Context3DStateCache_obj::updateActiveTextureSample( int texture){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateActiveTextureSample",0xbea3116a,"openfl._internal.stage3D.Context3DStateCache.updateActiveTextureSample","openfl/_internal/stage3D/Context3DStateCache.hx",137,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(138)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(138)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(138)
	if ((tmp)){
		HX_STACK_LINE(138)
		int tmp2 = texture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(138)
		int tmp3 = this->_activeTexture;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(138)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(138)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(138)
		tmp1 = false;
	}
	HX_STACK_LINE(138)
	if ((tmp1)){
		HX_STACK_LINE(139)
		return false;
	}
	HX_STACK_LINE(140)
	this->_activeTexture = texture;
	HX_STACK_LINE(141)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveTextureSample,return )

bool Context3DStateCache_obj::updateActiveVertexArray( int vertexArray){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateActiveVertexArray",0x147a1a5a,"openfl._internal.stage3D.Context3DStateCache.updateActiveVertexArray","openfl/_internal/stage3D/Context3DStateCache.hx",145,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(vertexArray,"vertexArray")
	HX_STACK_LINE(146)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(146)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(146)
	if ((tmp)){
		HX_STACK_LINE(146)
		int tmp2 = vertexArray;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(146)
		int tmp3 = this->_activeVertexArray;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(146)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(146)
		tmp1 = (tmp2 == tmp4);
	}
	else{
		HX_STACK_LINE(146)
		tmp1 = false;
	}
	HX_STACK_LINE(146)
	if ((tmp1)){
		HX_STACK_LINE(147)
		return false;
	}
	HX_STACK_LINE(148)
	this->_activeVertexArray = vertexArray;
	HX_STACK_LINE(149)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC1(Context3DStateCache_obj,updateActiveVertexArray,return )

bool Context3DStateCache_obj::updateViewport( int originX,int originY,int width,int height){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateViewport",0xa0a332db,"openfl._internal.stage3D.Context3DStateCache.updateViewport","openfl/_internal/stage3D/Context3DStateCache.hx",153,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(originX,"originX")
	HX_STACK_ARG(originY,"originY")
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
	HX_STACK_LINE(154)
	bool tmp = false;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(154)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(154)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(154)
	if ((tmp1)){
		HX_STACK_LINE(154)
		int tmp3 = this->_viewportOriginX;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(154)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(154)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = originX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		tmp2 = (tmp5 == tmp6);
	}
	else{
		HX_STACK_LINE(154)
		tmp2 = false;
	}
	HX_STACK_LINE(154)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(154)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(154)
	if ((tmp3)){
		HX_STACK_LINE(154)
		int tmp5 = this->_viewportOriginY;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(154)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(154)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = originY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		tmp4 = (tmp7 == tmp8);
	}
	else{
		HX_STACK_LINE(154)
		tmp4 = false;
	}
	HX_STACK_LINE(154)
	bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(154)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(154)
	if ((tmp5)){
		HX_STACK_LINE(154)
		int tmp7 = this->_viewportWidth;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(154)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		int tmp10 = width;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		tmp6 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(154)
		tmp6 = false;
	}
	HX_STACK_LINE(154)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(154)
	if ((tmp6)){
		HX_STACK_LINE(154)
		int tmp8 = this->_viewportHeight;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(154)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(154)
		int tmp10 = height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(154)
		tmp7 = (tmp9 == tmp10);
	}
	else{
		HX_STACK_LINE(154)
		tmp7 = false;
	}
	HX_STACK_LINE(154)
	if ((tmp7)){
		HX_STACK_LINE(155)
		return false;
	}
	HX_STACK_LINE(157)
	this->_viewportOriginX = originX;
	HX_STACK_LINE(158)
	this->_viewportOriginY = originY;
	HX_STACK_LINE(159)
	this->_viewportWidth = width;
	HX_STACK_LINE(160)
	this->_viewportHeight = height;
	HX_STACK_LINE(162)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC4(Context3DStateCache_obj,updateViewport,return )

bool Context3DStateCache_obj::updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters){
	HX_STACK_FRAME("openfl._internal.stage3D.Context3DStateCache","updateRegisters",0x353db09b,"openfl._internal.stage3D.Context3DStateCache.updateRegisters","openfl/_internal/stage3D/Context3DStateCache.hx",167,0xc7f853df)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mTemp,"mTemp")
	HX_STACK_ARG(startRegister,"startRegister")
	HX_STACK_ARG(numRegisters,"numRegisters")
	HX_STACK_LINE(167)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC3(Context3DStateCache_obj,updateRegisters,return )

bool Context3DStateCache_obj::disableCache;

int Context3DStateCache_obj::MAX_NUM_REGISTERS;

int Context3DStateCache_obj::FLOATS_PER_REGISTER;


Context3DStateCache_obj::Context3DStateCache_obj()
{
}

void Context3DStateCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Context3DStateCache);
	HX_MARK_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_MARK_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_MARK_MEMBER_NAME(_deptTestEnabled,"_deptTestEnabled");
	HX_MARK_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_MARK_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_MARK_MEMBER_NAME(_program,"_program");
	HX_MARK_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_MARK_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_MARK_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_MARK_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_MARK_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_MARK_MEMBER_NAME(_viewportWidth,"_viewportWidth");
	HX_MARK_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_MARK_MEMBER_NAME(_registers,"_registers");
	HX_MARK_END_CLASS();
}

void Context3DStateCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_srcBlendFactor,"_srcBlendFactor");
	HX_VISIT_MEMBER_NAME(_destBlendFactor,"_destBlendFactor");
	HX_VISIT_MEMBER_NAME(_deptTestEnabled,"_deptTestEnabled");
	HX_VISIT_MEMBER_NAME(_depthTestMask,"_depthTestMask");
	HX_VISIT_MEMBER_NAME(_depthTestCompareMode,"_depthTestCompareMode");
	HX_VISIT_MEMBER_NAME(_program,"_program");
	HX_VISIT_MEMBER_NAME(_cullingMode,"_cullingMode");
	HX_VISIT_MEMBER_NAME(_activeTexture,"_activeTexture");
	HX_VISIT_MEMBER_NAME(_activeVertexArray,"_activeVertexArray");
	HX_VISIT_MEMBER_NAME(_viewportOriginX,"_viewportOriginX");
	HX_VISIT_MEMBER_NAME(_viewportOriginY,"_viewportOriginY");
	HX_VISIT_MEMBER_NAME(_viewportWidth,"_viewportWidth");
	HX_VISIT_MEMBER_NAME(_viewportHeight,"_viewportHeight");
	HX_VISIT_MEMBER_NAME(_registers,"_registers");
}

Dynamic Context3DStateCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { return _program; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { return _registers; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { return _cullingMode; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"clearSettings") ) { return clearSettings_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { return _depthTestMask; }
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { return _activeTexture; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { return _viewportWidth; }
		if (HX_FIELD_EQ(inName,"clearRegisters") ) { return clearRegisters_dyn(); }
		if (HX_FIELD_EQ(inName,"updateViewport") ) { return updateViewport_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { return _srcBlendFactor; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { return _viewportHeight; }
		if (HX_FIELD_EQ(inName,"updateProgram3D") ) { return updateProgram3D_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRegisters") ) { return updateRegisters_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { return _destBlendFactor; }
		if (HX_FIELD_EQ(inName,"_deptTestEnabled") ) { return _deptTestEnabled; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { return _viewportOriginX; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { return _viewportOriginY; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"updateCullingMode") ) { return updateCullingMode_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { return _activeVertexArray; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateDepthTestMask") ) { return updateDepthTestMask_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"updateBlendSrcFactor") ) { return updateBlendSrcFactor_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { return _depthTestCompareMode; }
		if (HX_FIELD_EQ(inName,"updateBlendDestFactor") ) { return updateBlendDestFactor_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"updateDepthTestEnabled") ) { return updateDepthTestEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"updateDepthCompareMode") ) { return updateDepthCompareMode_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"updateActiveVertexArray") ) { return updateActiveVertexArray_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"updateActiveTextureSample") ) { return updateActiveTextureSample_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Context3DStateCache_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_program") ) { _program=inValue.Cast< ::openfl::display3D::Program3D >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_registers") ) { _registers=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_cullingMode") ) { _cullingMode=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_depthTestMask") ) { _depthTestMask=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_activeTexture") ) { _activeTexture=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportWidth") ) { _viewportWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_srcBlendFactor") ) { _srcBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportHeight") ) { _viewportHeight=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_destBlendFactor") ) { _destBlendFactor=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_deptTestEnabled") ) { _deptTestEnabled=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginX") ) { _viewportOriginX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_viewportOriginY") ) { _viewportOriginY=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_activeVertexArray") ) { _activeVertexArray=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_depthTestCompareMode") ) { _depthTestCompareMode=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Context3DStateCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"));
	outFields->push(HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"));
	outFields->push(HX_HCSTRING("_deptTestEnabled","\x0b","\xad","\xac","\x59"));
	outFields->push(HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"));
	outFields->push(HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"));
	outFields->push(HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"));
	outFields->push(HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"));
	outFields->push(HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"));
	outFields->push(HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"));
	outFields->push(HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"));
	outFields->push(HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"));
	outFields->push(HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"));
	outFields->push(HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_srcBlendFactor),HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_destBlendFactor),HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_deptTestEnabled),HX_HCSTRING("_deptTestEnabled","\x0b","\xad","\xac","\x59")},
	{hx::fsBool,(int)offsetof(Context3DStateCache_obj,_depthTestMask),HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_depthTestCompareMode),HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d")},
	{hx::fsObject /*::openfl::display3D::Program3D*/ ,(int)offsetof(Context3DStateCache_obj,_program),HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Context3DStateCache_obj,_cullingMode),HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeTexture),HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_activeVertexArray),HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginX),HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportOriginY),HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportWidth),HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0")},
	{hx::fsInt,(int)offsetof(Context3DStateCache_obj,_viewportHeight),HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(Context3DStateCache_obj,_registers),HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Context3DStateCache_obj::disableCache,HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f")},
	{hx::fsInt,(void *) &Context3DStateCache_obj::MAX_NUM_REGISTERS,HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55")},
	{hx::fsInt,(void *) &Context3DStateCache_obj::FLOATS_PER_REGISTER,HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("_srcBlendFactor","\x1b","\x24","\xae","\xb6"),
	HX_HCSTRING("_destBlendFactor","\x3f","\xbb","\x73","\x88"),
	HX_HCSTRING("_deptTestEnabled","\x0b","\xad","\xac","\x59"),
	HX_HCSTRING("_depthTestMask","\xc2","\x9e","\x63","\xc8"),
	HX_HCSTRING("_depthTestCompareMode","\x92","\x77","\x60","\x2d"),
	HX_HCSTRING("_program","\x05","\xa4","\xb1","\x2d"),
	HX_HCSTRING("_cullingMode","\xf4","\x87","\x45","\xc8"),
	HX_HCSTRING("_activeTexture","\xf6","\x03","\xfc","\x94"),
	HX_HCSTRING("_activeVertexArray","\x30","\x9c","\x71","\x09"),
	HX_HCSTRING("_viewportOriginX","\x6d","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportOriginY","\x6e","\xa6","\x1b","\x44"),
	HX_HCSTRING("_viewportWidth","\x01","\x18","\xf0","\xf0"),
	HX_HCSTRING("_viewportHeight","\x8c","\x61","\x74","\x97"),
	HX_HCSTRING("_registers","\x71","\x6c","\xb4","\x16"),
	HX_HCSTRING("clearSettings","\x90","\x7f","\x9a","\xbe"),
	HX_HCSTRING("clearRegisters","\x63","\x45","\x17","\x79"),
	HX_HCSTRING("updateBlendSrcFactor","\x2b","\x14","\x7b","\xed"),
	HX_HCSTRING("updateBlendDestFactor","\x79","\xf0","\xf0","\xf1"),
	HX_HCSTRING("updateDepthTestEnabled","\x35","\x46","\x93","\x27"),
	HX_HCSTRING("updateDepthTestMask","\xb8","\xa6","\x98","\x1d"),
	HX_HCSTRING("updateDepthCompareMode","\x8e","\x22","\xc6","\xaa"),
	HX_HCSTRING("updateProgram3D","\xec","\xf0","\x4e","\x2c"),
	HX_HCSTRING("updateCullingMode","\x6a","\x86","\xa5","\xc6"),
	HX_HCSTRING("updateActiveTextureSample","\x36","\x99","\xb3","\x38"),
	HX_HCSTRING("updateActiveVertexArray","\x26","\xd7","\xc8","\x0f"),
	HX_HCSTRING("updateViewport","\x8f","\x3f","\xcf","\xd1"),
	HX_HCSTRING("updateRegisters","\x67","\xc1","\x9c","\x0a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_MARK_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::disableCache,"disableCache");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::MAX_NUM_REGISTERS,"MAX_NUM_REGISTERS");
	HX_VISIT_MEMBER_NAME(Context3DStateCache_obj::FLOATS_PER_REGISTER,"FLOATS_PER_REGISTER");
};

#endif

hx::Class Context3DStateCache_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("disableCache","\x3a","\xb7","\x98","\x7f"),
	HX_HCSTRING("MAX_NUM_REGISTERS","\xbc","\x37","\x8a","\x55"),
	HX_HCSTRING("FLOATS_PER_REGISTER","\x8d","\x76","\x42","\x08"),
	::String(null()) };

void Context3DStateCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D.Context3DStateCache","\xa2","\xa7","\xb0","\x13");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Context3DStateCache_obj >;
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

void Context3DStateCache_obj::__boot()
{
	disableCache= true;
	MAX_NUM_REGISTERS= (int)1024;
	FLOATS_PER_REGISTER= (int)4;
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
