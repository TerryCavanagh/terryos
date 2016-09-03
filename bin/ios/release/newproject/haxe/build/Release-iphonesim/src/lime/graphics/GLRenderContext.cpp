#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLFramebuffer
#include <lime/graphics/opengl/GLFramebuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLProgram
#include <lime/graphics/opengl/GLProgram.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLRenderbuffer
#include <lime/graphics/opengl/GLRenderbuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLShader
#include <lime/graphics/opengl/GLShader.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_system__CFFIPointer_CFFIPointer_Impl_
#include <lime/system/_CFFIPointer/CFFIPointer_Impl_.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
namespace lime{
namespace graphics{

Void GLRenderContext_obj::__construct()
{
HX_STACK_FRAME("lime.graphics.GLRenderContext","new",0x262d869c,"lime.graphics.GLRenderContext.new","lime/graphics/GLRenderContext.hx",11,0xbdd53034)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(361)
	this->BROWSER_DEFAULT_WEBGL = (int)37444;
	HX_STACK_LINE(360)
	this->UNPACK_COLORSPACE_CONVERSION_WEBGL = (int)37443;
	HX_STACK_LINE(359)
	this->CONTEXT_LOST_WEBGL = (int)37442;
	HX_STACK_LINE(358)
	this->UNPACK_PREMULTIPLY_ALPHA_WEBGL = (int)37441;
	HX_STACK_LINE(357)
	this->UNPACK_FLIP_Y_WEBGL = (int)37440;
	HX_STACK_LINE(355)
	this->INVALID_FRAMEBUFFER_OPERATION = (int)1286;
	HX_STACK_LINE(353)
	this->MAX_RENDERBUFFER_SIZE = (int)34024;
	HX_STACK_LINE(352)
	this->RENDERBUFFER_BINDING = (int)36007;
	HX_STACK_LINE(351)
	this->FRAMEBUFFER_BINDING = (int)36006;
	HX_STACK_LINE(349)
	this->FRAMEBUFFER_UNSUPPORTED = (int)36061;
	HX_STACK_LINE(348)
	this->FRAMEBUFFER_INCOMPLETE_DIMENSIONS = (int)36057;
	HX_STACK_LINE(347)
	this->FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = (int)36055;
	HX_STACK_LINE(346)
	this->FRAMEBUFFER_INCOMPLETE_ATTACHMENT = (int)36054;
	HX_STACK_LINE(345)
	this->FRAMEBUFFER_COMPLETE = (int)36053;
	HX_STACK_LINE(343)
	this->NONE = (int)0;
	HX_STACK_LINE(341)
	this->DEPTH_STENCIL_ATTACHMENT = (int)33306;
	HX_STACK_LINE(340)
	this->STENCIL_ATTACHMENT = (int)36128;
	HX_STACK_LINE(339)
	this->DEPTH_ATTACHMENT = (int)36096;
	HX_STACK_LINE(338)
	this->COLOR_ATTACHMENT0 = (int)36064;
	HX_STACK_LINE(336)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = (int)36051;
	HX_STACK_LINE(335)
	this->FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = (int)36050;
	HX_STACK_LINE(334)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = (int)36049;
	HX_STACK_LINE(333)
	this->FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = (int)36048;
	HX_STACK_LINE(331)
	this->RENDERBUFFER_STENCIL_SIZE = (int)36181;
	HX_STACK_LINE(330)
	this->RENDERBUFFER_DEPTH_SIZE = (int)36180;
	HX_STACK_LINE(329)
	this->RENDERBUFFER_ALPHA_SIZE = (int)36179;
	HX_STACK_LINE(328)
	this->RENDERBUFFER_BLUE_SIZE = (int)36178;
	HX_STACK_LINE(327)
	this->RENDERBUFFER_GREEN_SIZE = (int)36177;
	HX_STACK_LINE(326)
	this->RENDERBUFFER_RED_SIZE = (int)36176;
	HX_STACK_LINE(325)
	this->RENDERBUFFER_INTERNAL_FORMAT = (int)36164;
	HX_STACK_LINE(324)
	this->RENDERBUFFER_HEIGHT = (int)36163;
	HX_STACK_LINE(323)
	this->RENDERBUFFER_WIDTH = (int)36162;
	HX_STACK_LINE(321)
	this->DEPTH_STENCIL = (int)34041;
	HX_STACK_LINE(320)
	this->STENCIL_INDEX8 = (int)36168;
	HX_STACK_LINE(319)
	this->STENCIL_INDEX = (int)6401;
	HX_STACK_LINE(318)
	this->DEPTH_COMPONENT16 = (int)33189;
	HX_STACK_LINE(317)
	this->RGB565 = (int)36194;
	HX_STACK_LINE(316)
	this->RGB5_A1 = (int)32855;
	HX_STACK_LINE(315)
	this->RGBA4 = (int)32854;
	HX_STACK_LINE(313)
	this->RENDERBUFFER = (int)36161;
	HX_STACK_LINE(312)
	this->FRAMEBUFFER = (int)36160;
	HX_STACK_LINE(310)
	this->HIGH_INT = (int)36341;
	HX_STACK_LINE(309)
	this->MEDIUM_INT = (int)36340;
	HX_STACK_LINE(308)
	this->LOW_INT = (int)36339;
	HX_STACK_LINE(307)
	this->HIGH_FLOAT = (int)36338;
	HX_STACK_LINE(306)
	this->MEDIUM_FLOAT = (int)36337;
	HX_STACK_LINE(305)
	this->LOW_FLOAT = (int)36336;
	HX_STACK_LINE(303)
	this->COMPILE_STATUS = (int)35713;
	HX_STACK_LINE(301)
	this->POINT_SPRITE = (int)34913;
	HX_STACK_LINE(300)
	this->VERTEX_PROGRAM_POINT_SIZE = (int)34370;
	HX_STACK_LINE(298)
	this->VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = (int)34975;
	HX_STACK_LINE(297)
	this->VERTEX_ATTRIB_ARRAY_POINTER = (int)34373;
	HX_STACK_LINE(296)
	this->VERTEX_ATTRIB_ARRAY_NORMALIZED = (int)34922;
	HX_STACK_LINE(295)
	this->VERTEX_ATTRIB_ARRAY_TYPE = (int)34341;
	HX_STACK_LINE(294)
	this->VERTEX_ATTRIB_ARRAY_STRIDE = (int)34340;
	HX_STACK_LINE(293)
	this->VERTEX_ATTRIB_ARRAY_SIZE = (int)34339;
	HX_STACK_LINE(292)
	this->VERTEX_ATTRIB_ARRAY_ENABLED = (int)34338;
	HX_STACK_LINE(290)
	this->SAMPLER_CUBE = (int)35680;
	HX_STACK_LINE(289)
	this->SAMPLER_2D = (int)35678;
	HX_STACK_LINE(288)
	this->FLOAT_MAT4 = (int)35676;
	HX_STACK_LINE(287)
	this->FLOAT_MAT3 = (int)35675;
	HX_STACK_LINE(286)
	this->FLOAT_MAT2 = (int)35674;
	HX_STACK_LINE(285)
	this->BOOL_VEC4 = (int)35673;
	HX_STACK_LINE(284)
	this->BOOL_VEC3 = (int)35672;
	HX_STACK_LINE(283)
	this->BOOL_VEC2 = (int)35671;
	HX_STACK_LINE(282)
	this->BOOL = (int)35670;
	HX_STACK_LINE(281)
	this->INT_VEC4 = (int)35669;
	HX_STACK_LINE(280)
	this->INT_VEC3 = (int)35668;
	HX_STACK_LINE(279)
	this->INT_VEC2 = (int)35667;
	HX_STACK_LINE(278)
	this->FLOAT_VEC4 = (int)35666;
	HX_STACK_LINE(277)
	this->FLOAT_VEC3 = (int)35665;
	HX_STACK_LINE(276)
	this->FLOAT_VEC2 = (int)35664;
	HX_STACK_LINE(274)
	this->MIRRORED_REPEAT = (int)33648;
	HX_STACK_LINE(273)
	this->CLAMP_TO_EDGE = (int)33071;
	HX_STACK_LINE(272)
	this->REPEAT = (int)10497;
	HX_STACK_LINE(270)
	this->ACTIVE_TEXTURE = (int)34016;
	HX_STACK_LINE(269)
	this->TEXTURE31 = (int)34015;
	HX_STACK_LINE(268)
	this->TEXTURE30 = (int)34014;
	HX_STACK_LINE(267)
	this->TEXTURE29 = (int)34013;
	HX_STACK_LINE(266)
	this->TEXTURE28 = (int)34012;
	HX_STACK_LINE(265)
	this->TEXTURE27 = (int)34011;
	HX_STACK_LINE(264)
	this->TEXTURE26 = (int)34010;
	HX_STACK_LINE(263)
	this->TEXTURE25 = (int)34009;
	HX_STACK_LINE(262)
	this->TEXTURE24 = (int)34008;
	HX_STACK_LINE(261)
	this->TEXTURE23 = (int)34007;
	HX_STACK_LINE(260)
	this->TEXTURE22 = (int)34006;
	HX_STACK_LINE(259)
	this->TEXTURE21 = (int)34005;
	HX_STACK_LINE(258)
	this->TEXTURE20 = (int)34004;
	HX_STACK_LINE(257)
	this->TEXTURE19 = (int)34003;
	HX_STACK_LINE(256)
	this->TEXTURE18 = (int)34002;
	HX_STACK_LINE(255)
	this->TEXTURE17 = (int)34001;
	HX_STACK_LINE(254)
	this->TEXTURE16 = (int)34000;
	HX_STACK_LINE(253)
	this->TEXTURE15 = (int)33999;
	HX_STACK_LINE(252)
	this->TEXTURE14 = (int)33998;
	HX_STACK_LINE(251)
	this->TEXTURE13 = (int)33997;
	HX_STACK_LINE(250)
	this->TEXTURE12 = (int)33996;
	HX_STACK_LINE(249)
	this->TEXTURE11 = (int)33995;
	HX_STACK_LINE(248)
	this->TEXTURE10 = (int)33994;
	HX_STACK_LINE(247)
	this->TEXTURE9 = (int)33993;
	HX_STACK_LINE(246)
	this->TEXTURE8 = (int)33992;
	HX_STACK_LINE(245)
	this->TEXTURE7 = (int)33991;
	HX_STACK_LINE(244)
	this->TEXTURE6 = (int)33990;
	HX_STACK_LINE(243)
	this->TEXTURE5 = (int)33989;
	HX_STACK_LINE(242)
	this->TEXTURE4 = (int)33988;
	HX_STACK_LINE(241)
	this->TEXTURE3 = (int)33987;
	HX_STACK_LINE(240)
	this->TEXTURE2 = (int)33986;
	HX_STACK_LINE(239)
	this->TEXTURE1 = (int)33985;
	HX_STACK_LINE(238)
	this->TEXTURE0 = (int)33984;
	HX_STACK_LINE(236)
	this->MAX_CUBE_MAP_TEXTURE_SIZE = (int)34076;
	HX_STACK_LINE(235)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Z = (int)34074;
	HX_STACK_LINE(234)
	this->TEXTURE_CUBE_MAP_POSITIVE_Z = (int)34073;
	HX_STACK_LINE(233)
	this->TEXTURE_CUBE_MAP_NEGATIVE_Y = (int)34072;
	HX_STACK_LINE(232)
	this->TEXTURE_CUBE_MAP_POSITIVE_Y = (int)34071;
	HX_STACK_LINE(231)
	this->TEXTURE_CUBE_MAP_NEGATIVE_X = (int)34070;
	HX_STACK_LINE(230)
	this->TEXTURE_CUBE_MAP_POSITIVE_X = (int)34069;
	HX_STACK_LINE(229)
	this->TEXTURE_BINDING_CUBE_MAP = (int)34068;
	HX_STACK_LINE(228)
	this->TEXTURE_CUBE_MAP = (int)34067;
	HX_STACK_LINE(226)
	this->TEXTURE = (int)5890;
	HX_STACK_LINE(225)
	this->TEXTURE_2D = (int)3553;
	HX_STACK_LINE(223)
	this->TEXTURE_WRAP_T = (int)10243;
	HX_STACK_LINE(222)
	this->TEXTURE_WRAP_S = (int)10242;
	HX_STACK_LINE(221)
	this->TEXTURE_MIN_FILTER = (int)10241;
	HX_STACK_LINE(220)
	this->TEXTURE_MAG_FILTER = (int)10240;
	HX_STACK_LINE(218)
	this->LINEAR_MIPMAP_LINEAR = (int)9987;
	HX_STACK_LINE(217)
	this->NEAREST_MIPMAP_LINEAR = (int)9986;
	HX_STACK_LINE(216)
	this->LINEAR_MIPMAP_NEAREST = (int)9985;
	HX_STACK_LINE(215)
	this->NEAREST_MIPMAP_NEAREST = (int)9984;
	HX_STACK_LINE(213)
	this->LINEAR = (int)9729;
	HX_STACK_LINE(212)
	this->NEAREST = (int)9728;
	HX_STACK_LINE(210)
	this->VERSION = (int)7938;
	HX_STACK_LINE(209)
	this->RENDERER = (int)7937;
	HX_STACK_LINE(208)
	this->VENDOR = (int)7936;
	HX_STACK_LINE(206)
	this->DECR_WRAP = (int)34056;
	HX_STACK_LINE(205)
	this->INCR_WRAP = (int)34055;
	HX_STACK_LINE(204)
	this->INVERT = (int)5386;
	HX_STACK_LINE(203)
	this->DECR = (int)7683;
	HX_STACK_LINE(202)
	this->INCR = (int)7682;
	HX_STACK_LINE(201)
	this->REPLACE = (int)7681;
	HX_STACK_LINE(200)
	this->KEEP = (int)7680;
	HX_STACK_LINE(198)
	this->ALWAYS = (int)519;
	HX_STACK_LINE(197)
	this->GEQUAL = (int)518;
	HX_STACK_LINE(196)
	this->NOTEQUAL = (int)517;
	HX_STACK_LINE(195)
	this->GREATER = (int)516;
	HX_STACK_LINE(194)
	this->LEQUAL = (int)515;
	HX_STACK_LINE(193)
	this->EQUAL = (int)514;
	HX_STACK_LINE(192)
	this->LESS = (int)513;
	HX_STACK_LINE(191)
	this->NEVER = (int)512;
	HX_STACK_LINE(189)
	this->CURRENT_PROGRAM = (int)35725;
	HX_STACK_LINE(188)
	this->SHADING_LANGUAGE_VERSION = (int)35724;
	HX_STACK_LINE(187)
	this->ACTIVE_ATTRIBUTES = (int)35721;
	HX_STACK_LINE(186)
	this->ACTIVE_UNIFORMS = (int)35718;
	HX_STACK_LINE(185)
	this->ATTACHED_SHADERS = (int)35717;
	HX_STACK_LINE(184)
	this->VALIDATE_STATUS = (int)35715;
	HX_STACK_LINE(183)
	this->LINK_STATUS = (int)35714;
	HX_STACK_LINE(182)
	this->DELETE_STATUS = (int)35712;
	HX_STACK_LINE(181)
	this->SHADER_TYPE = (int)35663;
	HX_STACK_LINE(180)
	this->MAX_FRAGMENT_UNIFORM_VECTORS = (int)36349;
	HX_STACK_LINE(179)
	this->MAX_TEXTURE_IMAGE_UNITS = (int)34930;
	HX_STACK_LINE(178)
	this->MAX_VERTEX_TEXTURE_IMAGE_UNITS = (int)35660;
	HX_STACK_LINE(177)
	this->MAX_COMBINED_TEXTURE_IMAGE_UNITS = (int)35661;
	HX_STACK_LINE(176)
	this->MAX_VARYING_VECTORS = (int)36348;
	HX_STACK_LINE(175)
	this->MAX_VERTEX_UNIFORM_VECTORS = (int)36347;
	HX_STACK_LINE(174)
	this->MAX_VERTEX_ATTRIBS = (int)34921;
	HX_STACK_LINE(173)
	this->VERTEX_SHADER = (int)35633;
	HX_STACK_LINE(172)
	this->FRAGMENT_SHADER = (int)35632;
	HX_STACK_LINE(170)
	this->UNSIGNED_SHORT_5_6_5 = (int)33635;
	HX_STACK_LINE(169)
	this->UNSIGNED_SHORT_5_5_5_1 = (int)32820;
	HX_STACK_LINE(168)
	this->UNSIGNED_SHORT_4_4_4_4 = (int)32819;
	HX_STACK_LINE(166)
	this->LUMINANCE_ALPHA = (int)6410;
	HX_STACK_LINE(165)
	this->LUMINANCE = (int)6409;
	HX_STACK_LINE(164)
	this->BGRA_EXT = (int)32993;
	HX_STACK_LINE(163)
	this->BGR_EXT = (int)32992;
	HX_STACK_LINE(162)
	this->RGBA = (int)6408;
	HX_STACK_LINE(161)
	this->RGB = (int)6407;
	HX_STACK_LINE(160)
	this->ALPHA = (int)6406;
	HX_STACK_LINE(159)
	this->DEPTH_COMPONENT = (int)6402;
	HX_STACK_LINE(157)
	this->FLOAT = (int)5126;
	HX_STACK_LINE(156)
	this->UNSIGNED_INT = (int)5125;
	HX_STACK_LINE(155)
	this->INT = (int)5124;
	HX_STACK_LINE(154)
	this->UNSIGNED_SHORT = (int)5123;
	HX_STACK_LINE(153)
	this->SHORT = (int)5122;
	HX_STACK_LINE(152)
	this->UNSIGNED_BYTE = (int)5121;
	HX_STACK_LINE(151)
	this->BYTE = (int)5120;
	HX_STACK_LINE(149)
	this->GENERATE_MIPMAP_HINT = (int)33170;
	HX_STACK_LINE(147)
	this->NICEST = (int)4354;
	HX_STACK_LINE(146)
	this->FASTEST = (int)4353;
	HX_STACK_LINE(145)
	this->DONT_CARE = (int)4352;
	HX_STACK_LINE(143)
	this->COMPRESSED_TEXTURE_FORMATS = (int)34467;
	HX_STACK_LINE(141)
	this->SAMPLE_COVERAGE_INVERT = (int)32939;
	HX_STACK_LINE(140)
	this->SAMPLE_COVERAGE_VALUE = (int)32938;
	HX_STACK_LINE(139)
	this->SAMPLES = (int)32937;
	HX_STACK_LINE(138)
	this->SAMPLE_BUFFERS = (int)32936;
	HX_STACK_LINE(137)
	this->TEXTURE_BINDING_2D = (int)32873;
	HX_STACK_LINE(136)
	this->POLYGON_OFFSET_FACTOR = (int)32824;
	HX_STACK_LINE(134)
	this->POLYGON_OFFSET_UNITS = (int)10752;
	HX_STACK_LINE(133)
	this->STENCIL_BITS = (int)3415;
	HX_STACK_LINE(132)
	this->DEPTH_BITS = (int)3414;
	HX_STACK_LINE(131)
	this->ALPHA_BITS = (int)3413;
	HX_STACK_LINE(130)
	this->BLUE_BITS = (int)3412;
	HX_STACK_LINE(129)
	this->GREEN_BITS = (int)3411;
	HX_STACK_LINE(128)
	this->RED_BITS = (int)3410;
	HX_STACK_LINE(127)
	this->SUBPIXEL_BITS = (int)3408;
	HX_STACK_LINE(126)
	this->MAX_VIEWPORT_DIMS = (int)3386;
	HX_STACK_LINE(125)
	this->MAX_TEXTURE_SIZE = (int)3379;
	HX_STACK_LINE(124)
	this->PACK_ALIGNMENT = (int)3333;
	HX_STACK_LINE(123)
	this->UNPACK_ALIGNMENT = (int)3317;
	HX_STACK_LINE(122)
	this->COLOR_WRITEMASK = (int)3107;
	HX_STACK_LINE(121)
	this->COLOR_CLEAR_VALUE = (int)3106;
	HX_STACK_LINE(119)
	this->SCISSOR_BOX = (int)3088;
	HX_STACK_LINE(118)
	this->VIEWPORT = (int)2978;
	HX_STACK_LINE(117)
	this->STENCIL_BACK_WRITEMASK = (int)36005;
	HX_STACK_LINE(116)
	this->STENCIL_BACK_VALUE_MASK = (int)36004;
	HX_STACK_LINE(115)
	this->STENCIL_BACK_REF = (int)36003;
	HX_STACK_LINE(114)
	this->STENCIL_BACK_PASS_DEPTH_PASS = (int)34819;
	HX_STACK_LINE(113)
	this->STENCIL_BACK_PASS_DEPTH_FAIL = (int)34818;
	HX_STACK_LINE(112)
	this->STENCIL_BACK_FAIL = (int)34817;
	HX_STACK_LINE(111)
	this->STENCIL_BACK_FUNC = (int)34816;
	HX_STACK_LINE(110)
	this->STENCIL_WRITEMASK = (int)2968;
	HX_STACK_LINE(109)
	this->STENCIL_VALUE_MASK = (int)2963;
	HX_STACK_LINE(108)
	this->STENCIL_REF = (int)2967;
	HX_STACK_LINE(107)
	this->STENCIL_PASS_DEPTH_PASS = (int)2966;
	HX_STACK_LINE(106)
	this->STENCIL_PASS_DEPTH_FAIL = (int)2965;
	HX_STACK_LINE(105)
	this->STENCIL_FAIL = (int)2964;
	HX_STACK_LINE(104)
	this->STENCIL_FUNC = (int)2962;
	HX_STACK_LINE(103)
	this->STENCIL_CLEAR_VALUE = (int)2961;
	HX_STACK_LINE(102)
	this->DEPTH_FUNC = (int)2932;
	HX_STACK_LINE(101)
	this->DEPTH_CLEAR_VALUE = (int)2931;
	HX_STACK_LINE(100)
	this->DEPTH_WRITEMASK = (int)2930;
	HX_STACK_LINE(99)
	this->DEPTH_RANGE = (int)2928;
	HX_STACK_LINE(98)
	this->FRONT_FACE = (int)2886;
	HX_STACK_LINE(97)
	this->CULL_FACE_MODE = (int)2885;
	HX_STACK_LINE(96)
	this->ALIASED_LINE_WIDTH_RANGE = (int)33902;
	HX_STACK_LINE(95)
	this->ALIASED_POINT_SIZE_RANGE = (int)33901;
	HX_STACK_LINE(94)
	this->LINE_WIDTH = (int)2849;
	HX_STACK_LINE(92)
	this->CCW = (int)2305;
	HX_STACK_LINE(91)
	this->CW = (int)2304;
	HX_STACK_LINE(89)
	this->OUT_OF_MEMORY = (int)1285;
	HX_STACK_LINE(88)
	this->INVALID_OPERATION = (int)1282;
	HX_STACK_LINE(87)
	this->INVALID_VALUE = (int)1281;
	HX_STACK_LINE(86)
	this->INVALID_ENUM = (int)1280;
	HX_STACK_LINE(85)
	this->NO_ERROR = (int)0;
	HX_STACK_LINE(83)
	this->SAMPLE_COVERAGE = (int)32928;
	HX_STACK_LINE(82)
	this->SAMPLE_ALPHA_TO_COVERAGE = (int)32926;
	HX_STACK_LINE(81)
	this->POLYGON_OFFSET_FILL = (int)32823;
	HX_STACK_LINE(80)
	this->SCISSOR_TEST = (int)3089;
	HX_STACK_LINE(79)
	this->DEPTH_TEST = (int)2929;
	HX_STACK_LINE(78)
	this->STENCIL_TEST = (int)2960;
	HX_STACK_LINE(77)
	this->DITHER = (int)3024;
	HX_STACK_LINE(76)
	this->BLEND = (int)3042;
	HX_STACK_LINE(75)
	this->CULL_FACE = (int)2884;
	HX_STACK_LINE(73)
	this->FRONT_AND_BACK = (int)1032;
	HX_STACK_LINE(72)
	this->BACK = (int)1029;
	HX_STACK_LINE(71)
	this->FRONT = (int)1028;
	HX_STACK_LINE(69)
	this->CURRENT_VERTEX_ATTRIB = (int)34342;
	HX_STACK_LINE(67)
	this->BUFFER_USAGE = (int)34661;
	HX_STACK_LINE(66)
	this->BUFFER_SIZE = (int)34660;
	HX_STACK_LINE(64)
	this->DYNAMIC_DRAW = (int)35048;
	HX_STACK_LINE(63)
	this->STATIC_DRAW = (int)35044;
	HX_STACK_LINE(62)
	this->STREAM_DRAW = (int)35040;
	HX_STACK_LINE(60)
	this->ELEMENT_ARRAY_BUFFER_BINDING = (int)34965;
	HX_STACK_LINE(59)
	this->ARRAY_BUFFER_BINDING = (int)34964;
	HX_STACK_LINE(58)
	this->ELEMENT_ARRAY_BUFFER = (int)34963;
	HX_STACK_LINE(57)
	this->ARRAY_BUFFER = (int)34962;
	HX_STACK_LINE(55)
	this->BLEND_COLOR = (int)32773;
	HX_STACK_LINE(54)
	this->ONE_MINUS_CONSTANT_ALPHA = (int)32772;
	HX_STACK_LINE(53)
	this->CONSTANT_ALPHA = (int)32771;
	HX_STACK_LINE(52)
	this->ONE_MINUS_CONSTANT_COLOR = (int)32770;
	HX_STACK_LINE(51)
	this->CONSTANT_COLOR = (int)32769;
	HX_STACK_LINE(50)
	this->BLEND_SRC_ALPHA = (int)32971;
	HX_STACK_LINE(49)
	this->BLEND_DST_ALPHA = (int)32970;
	HX_STACK_LINE(48)
	this->BLEND_SRC_RGB = (int)32969;
	HX_STACK_LINE(47)
	this->BLEND_DST_RGB = (int)32968;
	HX_STACK_LINE(45)
	this->FUNC_REVERSE_SUBTRACT = (int)32779;
	HX_STACK_LINE(44)
	this->FUNC_SUBTRACT = (int)32778;
	HX_STACK_LINE(42)
	this->BLEND_EQUATION_ALPHA = (int)34877;
	HX_STACK_LINE(41)
	this->BLEND_EQUATION_RGB = (int)32777;
	HX_STACK_LINE(40)
	this->BLEND_EQUATION = (int)32777;
	HX_STACK_LINE(39)
	this->FUNC_ADD = (int)32774;
	HX_STACK_LINE(37)
	this->SRC_ALPHA_SATURATE = (int)776;
	HX_STACK_LINE(36)
	this->ONE_MINUS_DST_COLOR = (int)775;
	HX_STACK_LINE(35)
	this->DST_COLOR = (int)774;
	HX_STACK_LINE(33)
	this->ONE_MINUS_DST_ALPHA = (int)773;
	HX_STACK_LINE(32)
	this->DST_ALPHA = (int)772;
	HX_STACK_LINE(31)
	this->ONE_MINUS_SRC_ALPHA = (int)771;
	HX_STACK_LINE(30)
	this->SRC_ALPHA = (int)770;
	HX_STACK_LINE(29)
	this->ONE_MINUS_SRC_COLOR = (int)769;
	HX_STACK_LINE(28)
	this->SRC_COLOR = (int)768;
	HX_STACK_LINE(27)
	this->ONE = (int)1;
	HX_STACK_LINE(26)
	this->ZERO = (int)0;
	HX_STACK_LINE(24)
	this->TRIANGLE_FAN = (int)6;
	HX_STACK_LINE(23)
	this->TRIANGLE_STRIP = (int)5;
	HX_STACK_LINE(22)
	this->TRIANGLES = (int)4;
	HX_STACK_LINE(21)
	this->LINE_STRIP = (int)3;
	HX_STACK_LINE(20)
	this->LINE_LOOP = (int)2;
	HX_STACK_LINE(19)
	this->LINES = (int)1;
	HX_STACK_LINE(18)
	this->POINTS = (int)0;
	HX_STACK_LINE(16)
	this->COLOR_BUFFER_BIT = (int)16384;
	HX_STACK_LINE(15)
	this->STENCIL_BUFFER_BIT = (int)1024;
	HX_STACK_LINE(14)
	this->DEPTH_BUFFER_BIT = (int)256;
}
;
	return null();
}

//GLRenderContext_obj::~GLRenderContext_obj() { }

Dynamic GLRenderContext_obj::__CreateEmpty() { return  new GLRenderContext_obj; }
hx::ObjectPtr< GLRenderContext_obj > GLRenderContext_obj::__new()
{  hx::ObjectPtr< GLRenderContext_obj > _result_ = new GLRenderContext_obj();
	_result_->__construct();
	return _result_;}

Dynamic GLRenderContext_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GLRenderContext_obj > _result_ = new GLRenderContext_obj();
	_result_->__construct();
	return _result_;}

Void GLRenderContext_obj::activeTexture( int texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","activeTexture",0xfa246cf1,"lime.graphics.GLRenderContext.activeTexture","lime/graphics/GLRenderContext.hx",375,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(375)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_active_texture.call(texture);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,activeTexture,(void))

Void GLRenderContext_obj::attachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","attachShader",0x8c2b730e,"lime.graphics.GLRenderContext.attachShader","lime/graphics/GLRenderContext.hx",382,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(382)
		::lime::graphics::opengl::GLShader tmp = shader;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(382)
		program->attach(tmp);
		HX_STACK_LINE(382)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_attach_shader.call(hx::DynamicPtr(program->id),hx::DynamicPtr(shader->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,attachShader,(void))

Void GLRenderContext_obj::bindAttribLocation( ::lime::graphics::opengl::GLProgram program,int index,::String name){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindAttribLocation",0x60fd5380,"lime.graphics.GLRenderContext.bindAttribLocation","lime/graphics/GLRenderContext.hx",389,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(index,"index")
		HX_STACK_ARG(name,"name")
		HX_STACK_LINE(389)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_attrib_location.call(hx::DynamicPtr(program->id),index,name);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bindAttribLocation,(void))

Void GLRenderContext_obj::bindBuffer( int target,::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindBuffer",0x74fa5be1,"lime.graphics.GLRenderContext.bindBuffer","lime/graphics/GLRenderContext.hx",396,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(396)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(target,hx::DynamicPtr((  (((buffer == null()))) ? Dynamic(null()) : Dynamic(buffer->id) )));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindBuffer,(void))

Void GLRenderContext_obj::bindFramebuffer( int target,::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindFramebuffer",0x2111e66c,"lime.graphics.GLRenderContext.bindFramebuffer","lime/graphics/GLRenderContext.hx",403,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(403)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_framebuffer.call(target,hx::DynamicPtr((  (((framebuffer == null()))) ? Dynamic(null()) : Dynamic(framebuffer->id) )));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindFramebuffer,(void))

Void GLRenderContext_obj::bindRenderbuffer( int target,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindRenderbuffer",0x5523ca77,"lime.graphics.GLRenderContext.bindRenderbuffer","lime/graphics/GLRenderContext.hx",410,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(410)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_renderbuffer.call(target,hx::DynamicPtr((  (((renderbuffer == null()))) ? Dynamic(null()) : Dynamic(renderbuffer->id) )));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindRenderbuffer,(void))

Void GLRenderContext_obj::bindTexture( int target,::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bindTexture",0xd3662eda,"lime.graphics.GLRenderContext.bindTexture","lime/graphics/GLRenderContext.hx",417,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(417)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(target,hx::DynamicPtr((  (((texture == null()))) ? Dynamic(null()) : Dynamic(texture->id) )));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,bindTexture,(void))

Void GLRenderContext_obj::blendColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendColor",0x5eeffc96,"lime.graphics.GLRenderContext.blendColor","lime/graphics/GLRenderContext.hx",424,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(424)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_color.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,blendColor,(void))

Void GLRenderContext_obj::blendEquation( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendEquation",0xa627f239,"lime.graphics.GLRenderContext.blendEquation","lime/graphics/GLRenderContext.hx",431,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(431)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,blendEquation,(void))

Void GLRenderContext_obj::blendEquationSeparate( int modeRGB,int modeAlpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendEquationSeparate",0xb2f82ebc,"lime.graphics.GLRenderContext.blendEquationSeparate","lime/graphics/GLRenderContext.hx",438,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(modeRGB,"modeRGB")
		HX_STACK_ARG(modeAlpha,"modeAlpha")
		HX_STACK_LINE(438)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_equation_separate.call(modeRGB,modeAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,blendEquationSeparate,(void))

Void GLRenderContext_obj::blendFunc( int sfactor,int dfactor){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendFunc",0x97aa0771,"lime.graphics.GLRenderContext.blendFunc","lime/graphics/GLRenderContext.hx",445,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sfactor,"sfactor")
		HX_STACK_ARG(dfactor,"dfactor")
		HX_STACK_LINE(445)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func.call(sfactor,dfactor);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,blendFunc,(void))

Void GLRenderContext_obj::blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","blendFuncSeparate",0xe8e63bf4,"lime.graphics.GLRenderContext.blendFuncSeparate","lime/graphics/GLRenderContext.hx",452,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(srcRGB,"srcRGB")
		HX_STACK_ARG(dstRGB,"dstRGB")
		HX_STACK_ARG(srcAlpha,"srcAlpha")
		HX_STACK_ARG(dstAlpha,"dstAlpha")
		HX_STACK_LINE(452)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_blend_func_separate.call(srcRGB,dstRGB,srcAlpha,dstAlpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,blendFuncSeparate,(void))

Void GLRenderContext_obj::bufferData( int target,::lime::utils::ArrayBufferView data,int usage){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bufferData",0x0faf888e,"lime.graphics.GLRenderContext.bufferData","lime/graphics/GLRenderContext.hx",459,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(data,"data")
		HX_STACK_ARG(usage,"usage")
		HX_STACK_LINE(459)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(target,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength,usage);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bufferData,(void))

Void GLRenderContext_obj::bufferSubData( int target,int offset,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","bufferSubData",0xe95f4fe6,"lime.graphics.GLRenderContext.bufferSubData","lime/graphics/GLRenderContext.hx",466,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(466)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_sub_data.call(target,offset,hx::DynamicPtr(data->buffer),data->byteOffset,data->byteLength);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,bufferSubData,(void))

int GLRenderContext_obj::checkFramebufferStatus( int target){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","checkFramebufferStatus",0x1cdbc55b,"lime.graphics.GLRenderContext.checkFramebufferStatus","lime/graphics/GLRenderContext.hx",473,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_LINE(473)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_check_framebuffer_status.call(target);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,checkFramebufferStatus,return )

Void GLRenderContext_obj::clear( int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clear",0xe0bc2ec9,"lime.graphics.GLRenderContext.clear","lime/graphics/GLRenderContext.hx",480,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(480)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear.call(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clear,(void))

Void GLRenderContext_obj::clearColor( Float red,Float green,Float blue,Float alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearColor",0x9ba279da,"lime.graphics.GLRenderContext.clearColor","lime/graphics/GLRenderContext.hx",487,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(487)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_color.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,clearColor,(void))

Void GLRenderContext_obj::clearDepth( Float depth){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearDepth",0x286ff97a,"lime.graphics.GLRenderContext.clearDepth","lime/graphics/GLRenderContext.hx",494,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(494)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_depth.call(depth);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clearDepth,(void))

Void GLRenderContext_obj::clearStencil( int s){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","clearStencil",0x35361233,"lime.graphics.GLRenderContext.clearStencil","lime/graphics/GLRenderContext.hx",501,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(s,"s")
		HX_STACK_LINE(501)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_clear_stencil.call(s);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,clearStencil,(void))

Void GLRenderContext_obj::colorMask( bool red,bool green,bool blue,bool alpha){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","colorMask",0xb3d1d72b,"lime.graphics.GLRenderContext.colorMask","lime/graphics/GLRenderContext.hx",508,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(red,"red")
		HX_STACK_ARG(green,"green")
		HX_STACK_ARG(blue,"blue")
		HX_STACK_ARG(alpha,"alpha")
		HX_STACK_LINE(508)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_color_mask.call(red,green,blue,alpha);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,colorMask,(void))

Void GLRenderContext_obj::compileShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compileShader",0x7e2cca34,"lime.graphics.GLRenderContext.compileShader","lime/graphics/GLRenderContext.hx",515,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(515)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compile_shader.call(hx::DynamicPtr(shader->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,compileShader,(void))

Void GLRenderContext_obj::compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compressedTexImage2D",0x35a35eeb,"lime.graphics.GLRenderContext.compressedTexImage2D","lime/graphics/GLRenderContext.hx",522,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(522)
		bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(522)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(522)
		if ((tmp)){
			HX_STACK_LINE(522)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(522)
			tmp1 = data->buffer;
		}
		HX_STACK_LINE(522)
		::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(522)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compressed_tex_image_2d.call(target,level,internalformat,width,height,border,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(GLRenderContext_obj,compressedTexImage2D,(void))

Void GLRenderContext_obj::compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView data){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","compressedTexSubImage2D",0x3de2720f,"lime.graphics.GLRenderContext.compressedTexSubImage2D","lime/graphics/GLRenderContext.hx",529,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(data,"data")
		HX_STACK_LINE(529)
		bool tmp = (data == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(529)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(529)
		if ((tmp)){
			HX_STACK_LINE(529)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(529)
			tmp1 = data->buffer;
		}
		HX_STACK_LINE(529)
		::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(529)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_compressed_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,hx::DynamicPtr(buffer),(  (((data == null()))) ? int((int)0) : int(data->byteOffset) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,compressedTexSubImage2D,(void))

Void GLRenderContext_obj::copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","copyTexImage2D",0x4c0a8c1f,"lime.graphics.GLRenderContext.copyTexImage2D","lime/graphics/GLRenderContext.hx",536,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_LINE(536)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_copy_tex_image_2d.call(target,level,internalformat,x,y,width,height,border);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,copyTexImage2D,(void))

Void GLRenderContext_obj::copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","copyTexSubImage2D",0xc2d47d5b,"lime.graphics.GLRenderContext.copyTexSubImage2D","lime/graphics/GLRenderContext.hx",543,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(543)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_copy_tex_sub_image_2d.call(target,level,xoffset,yoffset,x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(GLRenderContext_obj,copyTexSubImage2D,(void))

::lime::graphics::opengl::GLBuffer GLRenderContext_obj::createBuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createBuffer",0xcc9d9f60,"lime.graphics.GLRenderContext.createBuffer","lime/graphics/GLRenderContext.hx",548,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(550)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(550)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(550)
	{
		HX_STACK_LINE(550)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(550)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(550)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(550)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(550)
	::lime::graphics::opengl::GLBuffer tmp2 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(550)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createBuffer,return )

::lime::graphics::opengl::GLFramebuffer GLRenderContext_obj::createFramebuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createFramebuffer",0xeb0e968d,"lime.graphics.GLRenderContext.createFramebuffer","lime/graphics/GLRenderContext.hx",555,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(557)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(557)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(557)
	{
		HX_STACK_LINE(557)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_framebuffer.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(557)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(557)
	::lime::graphics::opengl::GLFramebuffer tmp2 = ::lime::graphics::opengl::GLFramebuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(557)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createFramebuffer,return )

::lime::graphics::opengl::GLProgram GLRenderContext_obj::createProgram( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createProgram",0x7fb67c24,"lime.graphics.GLRenderContext.createProgram","lime/graphics/GLRenderContext.hx",562,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(564)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(564)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(564)
	{
		HX_STACK_LINE(564)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_program.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(564)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(564)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(564)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(564)
	::lime::graphics::opengl::GLProgram tmp2 = ::lime::graphics::opengl::GLProgram_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(564)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createProgram,return )

::lime::graphics::opengl::GLRenderbuffer GLRenderContext_obj::createRenderbuffer( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createRenderbuffer",0x48413736,"lime.graphics.GLRenderContext.createRenderbuffer","lime/graphics/GLRenderContext.hx",569,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(571)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(571)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(571)
	{
		HX_STACK_LINE(571)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_render_buffer.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(571)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(571)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(571)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(571)
	::lime::graphics::opengl::GLRenderbuffer tmp2 = ::lime::graphics::opengl::GLRenderbuffer_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(571)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createRenderbuffer,return )

::lime::graphics::opengl::GLShader GLRenderContext_obj::createShader( int type){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createShader",0x1929a185,"lime.graphics.GLRenderContext.createShader","lime/graphics/GLRenderContext.hx",576,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(578)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(578)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(578)
	{
		HX_STACK_LINE(578)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_shader.call(type);		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(578)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(578)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(578)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(578)
	::lime::graphics::opengl::GLShader tmp2 = ::lime::graphics::opengl::GLShader_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(578)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,createShader,return )

::lime::graphics::opengl::GLTexture GLRenderContext_obj::createTexture( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","createTexture",0x2a9dfa7b,"lime.graphics.GLRenderContext.createTexture","lime/graphics/GLRenderContext.hx",583,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(585)
	int tmp = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	Dynamic tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	{
		HX_STACK_LINE(585)
		::hx::Object * inVal = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call();		HX_STACK_VAR(inVal,"inVal");
		HX_STACK_LINE(585)
		::hx::Object * tmp2 = inVal;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(585)
		::hx::Object * tmp3 = hx::DynamicPtr(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(585)
		tmp1 = Dynamic(tmp3);
	}
	HX_STACK_LINE(585)
	::lime::graphics::opengl::GLTexture tmp2 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(585)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,createTexture,return )

Void GLRenderContext_obj::cullFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","cullFace",0xa4ce17b3,"lime.graphics.GLRenderContext.cullFace","lime/graphics/GLRenderContext.hx",592,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(592)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_cull_face.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,cullFace,(void))

Void GLRenderContext_obj::deleteBuffer( ::lime::graphics::opengl::GLBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteBuffer",0x10e085cf,"lime.graphics.GLRenderContext.deleteBuffer","lime/graphics/GLRenderContext.hx",599,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(599)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_buffer.call(hx::DynamicPtr(buffer->id));
		HX_STACK_LINE(599)
		buffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteBuffer,(void))

Void GLRenderContext_obj::deleteFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteFramebuffer",0x6e26fdbe,"lime.graphics.GLRenderContext.deleteFramebuffer","lime/graphics/GLRenderContext.hx",606,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(framebuffer,"framebuffer")
		HX_STACK_LINE(606)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_framebuffer.call(hx::DynamicPtr(framebuffer->id));
		HX_STACK_LINE(606)
		framebuffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteFramebuffer,(void))

Void GLRenderContext_obj::deleteProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteProgram",0xf5fd36d5,"lime.graphics.GLRenderContext.deleteProgram","lime/graphics/GLRenderContext.hx",613,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(613)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_program.call(hx::DynamicPtr(program->id));
		HX_STACK_LINE(613)
		program->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteProgram,(void))

Void GLRenderContext_obj::deleteRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteRenderbuffer",0x7a831ae5,"lime.graphics.GLRenderContext.deleteRenderbuffer","lime/graphics/GLRenderContext.hx",620,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(620)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_render_buffer.call(hx::DynamicPtr(renderbuffer->id));
		HX_STACK_LINE(620)
		renderbuffer->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteRenderbuffer,(void))

Void GLRenderContext_obj::deleteShader( ::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteShader",0x5d6c87f4,"lime.graphics.GLRenderContext.deleteShader","lime/graphics/GLRenderContext.hx",627,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(627)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_shader.call(hx::DynamicPtr(shader->id));
		HX_STACK_LINE(627)
		shader->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteShader,(void))

Void GLRenderContext_obj::deleteTexture( ::lime::graphics::opengl::GLTexture texture){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","deleteTexture",0xa0e4b52c,"lime.graphics.GLRenderContext.deleteTexture","lime/graphics/GLRenderContext.hx",634,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(texture,"texture")
		HX_STACK_LINE(634)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(hx::DynamicPtr(texture->id));
		HX_STACK_LINE(634)
		texture->invalidate();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,deleteTexture,(void))

Void GLRenderContext_obj::depthFunc( int func){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthFunc",0x2a565123,"lime.graphics.GLRenderContext.depthFunc","lime/graphics/GLRenderContext.hx",641,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_LINE(641)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_func.call(func);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,depthFunc,(void))

Void GLRenderContext_obj::depthMask( bool flag){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthMask",0x2ee7a6cb,"lime.graphics.GLRenderContext.depthMask","lime/graphics/GLRenderContext.hx",648,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(flag,"flag")
		HX_STACK_LINE(648)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_mask.call(flag);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,depthMask,(void))

Void GLRenderContext_obj::depthRange( Float zNear,Float zFar){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","depthRange",0xbcc762fe,"lime.graphics.GLRenderContext.depthRange","lime/graphics/GLRenderContext.hx",655,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(zNear,"zNear")
		HX_STACK_ARG(zFar,"zFar")
		HX_STACK_LINE(655)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_depth_range.call(zNear,zFar);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,depthRange,(void))

Void GLRenderContext_obj::detachShader( ::lime::graphics::opengl::GLProgram program,::lime::graphics::opengl::GLShader shader){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","detachShader",0xc461731c,"lime.graphics.GLRenderContext.detachShader","lime/graphics/GLRenderContext.hx",662,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_ARG(shader,"shader")
		HX_STACK_LINE(662)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_detach_shader.call(hx::DynamicPtr(program->id),hx::DynamicPtr(shader->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,detachShader,(void))

Void GLRenderContext_obj::disable( int cap){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","disable",0xb14fee24,"lime.graphics.GLRenderContext.disable","lime/graphics/GLRenderContext.hx",669,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(669)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable.call(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,disable,(void))

Void GLRenderContext_obj::disableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","disableVertexAttribArray",0xbb346227,"lime.graphics.GLRenderContext.disableVertexAttribArray","lime/graphics/GLRenderContext.hx",676,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(676)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_disable_vertex_attrib_array.call(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,disableVertexAttribArray,(void))

Void GLRenderContext_obj::drawArrays( int mode,int first,int count){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","drawArrays",0x75efbd22,"lime.graphics.GLRenderContext.drawArrays","lime/graphics/GLRenderContext.hx",683,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(count,"count")
		HX_STACK_LINE(683)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_arrays.call(mode,first,count);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,drawArrays,(void))

Void GLRenderContext_obj::drawElements( int mode,int count,int type,int offset){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","drawElements",0x336b649f,"lime.graphics.GLRenderContext.drawElements","lime/graphics/GLRenderContext.hx",690,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_ARG(count,"count")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(690)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_draw_elements.call(mode,count,type,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,drawElements,(void))

Void GLRenderContext_obj::enable( int cap){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","enable",0xb4cc85c7,"lime.graphics.GLRenderContext.enable","lime/graphics/GLRenderContext.hx",697,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(cap,"cap")
		HX_STACK_LINE(697)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable.call(cap);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,enable,(void))

Void GLRenderContext_obj::enableVertexAttribArray( int index){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","enableVertexAttribArray",0xb3bf0324,"lime.graphics.GLRenderContext.enableVertexAttribArray","lime/graphics/GLRenderContext.hx",704,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(704)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_enable_vertex_attrib_array.call(index);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,enableVertexAttribArray,(void))

Void GLRenderContext_obj::finish( ){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","finish",0x42c41797,"lime.graphics.GLRenderContext.finish","lime/graphics/GLRenderContext.hx",711,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_LINE(711)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_finish.call();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,finish,(void))

Void GLRenderContext_obj::flush( ){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","flush",0x9afc2000,"lime.graphics.GLRenderContext.flush","lime/graphics/GLRenderContext.hx",718,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_LINE(718)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_flush.call();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,flush,(void))

Void GLRenderContext_obj::framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLRenderbuffer renderbuffer){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","framebufferRenderbuffer",0x3e17999f,"lime.graphics.GLRenderContext.framebufferRenderbuffer","lime/graphics/GLRenderContext.hx",725,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(renderbuffertarget,"renderbuffertarget")
		HX_STACK_ARG(renderbuffer,"renderbuffer")
		HX_STACK_LINE(725)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_renderbuffer.call(target,attachment,renderbuffertarget,hx::DynamicPtr(renderbuffer->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,framebufferRenderbuffer,(void))

Void GLRenderContext_obj::framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLTexture texture,int level){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","framebufferTexture2D",0x3567ed04,"lime.graphics.GLRenderContext.framebufferTexture2D","lime/graphics/GLRenderContext.hx",732,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(attachment,"attachment")
		HX_STACK_ARG(textarget,"textarget")
		HX_STACK_ARG(texture,"texture")
		HX_STACK_ARG(level,"level")
		HX_STACK_LINE(732)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_framebuffer_texture2D.call(target,attachment,textarget,hx::DynamicPtr(texture->id),level);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,framebufferTexture2D,(void))

Void GLRenderContext_obj::frontFace( int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","frontFace",0x10cf0d22,"lime.graphics.GLRenderContext.frontFace","lime/graphics/GLRenderContext.hx",739,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(739)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_front_face.call(mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,frontFace,(void))

Void GLRenderContext_obj::generateMipmap( int target){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","generateMipmap",0xc2a191e1,"lime.graphics.GLRenderContext.generateMipmap","lime/graphics/GLRenderContext.hx",746,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_LINE(746)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_generate_mipmap.call(target);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,generateMipmap,(void))

Dynamic GLRenderContext_obj::getActiveAttrib( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getActiveAttrib",0x9cd2aba2,"lime.graphics.GLRenderContext.getActiveAttrib","lime/graphics/GLRenderContext.hx",751,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(753)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(753)
	{
		HX_STACK_LINE(753)
		Dynamic result = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_active_attrib.call(hx::DynamicPtr(program->id),index)));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(753)
		tmp = result;
	}
	HX_STACK_LINE(753)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(753)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getActiveAttrib,return )

Dynamic GLRenderContext_obj::getActiveUniform( ::lime::graphics::opengl::GLProgram program,int index){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getActiveUniform",0x17ba49dc,"lime.graphics.GLRenderContext.getActiveUniform","lime/graphics/GLRenderContext.hx",758,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(760)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(760)
	{
		HX_STACK_LINE(760)
		Dynamic result = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_active_uniform.call(hx::DynamicPtr(program->id),index)));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(760)
		tmp = result;
	}
	HX_STACK_LINE(760)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(760)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getActiveUniform,return )

Array< ::Dynamic > GLRenderContext_obj::getAttachedShaders( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getAttachedShaders",0xd643dbf8,"lime.graphics.GLRenderContext.getAttachedShaders","lime/graphics/GLRenderContext.hx",767,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(767)
	return program->getShaders();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getAttachedShaders,return )

int GLRenderContext_obj::getAttribLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getAttribLocation",0x7b35c211,"lime.graphics.GLRenderContext.getAttribLocation","lime/graphics/GLRenderContext.hx",774,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(774)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_attrib_location.call(hx::DynamicPtr(program->id),name);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getAttribLocation,return )

int GLRenderContext_obj::getBufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getBufferParameter",0x578105d7,"lime.graphics.GLRenderContext.getBufferParameter","lime/graphics/GLRenderContext.hx",781,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(781)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_buffer_parameter.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getBufferParameter,return )

Dynamic GLRenderContext_obj::getContextAttributes( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getContextAttributes",0xbf276074,"lime.graphics.GLRenderContext.getContextAttributes","lime/graphics/GLRenderContext.hx",786,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(788)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(788)
	{
		HX_STACK_LINE(788)
		Dynamic base = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_context_attributes.call()));		HX_STACK_VAR(base,"base");
		HX_STACK_LINE(788)
		base->__FieldRef(HX_HCSTRING("premultipliedAlpha","\x28","\x8e","\x5c","\x1a")) = false;
		HX_STACK_LINE(788)
		base->__FieldRef(HX_HCSTRING("preserveDrawingBuffer","\x92","\xbb","\x1e","\x4b")) = false;
		HX_STACK_LINE(788)
		tmp = base;
	}
	HX_STACK_LINE(788)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(788)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getContextAttributes,return )

int GLRenderContext_obj::getError( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getError",0xcb9d0b96,"lime.graphics.GLRenderContext.getError","lime/graphics/GLRenderContext.hx",795,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(795)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_error.call();
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getError,return )

Dynamic GLRenderContext_obj::getExtension( ::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getExtension",0xce1ad24d,"lime.graphics.GLRenderContext.getExtension","lime/graphics/GLRenderContext.hx",802,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(802)
	return ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_extension.call(name)));
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getExtension,return )

int GLRenderContext_obj::getFramebufferAttachmentParameter( int target,int attachment,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getFramebufferAttachmentParameter",0x36d69ecb,"lime.graphics.GLRenderContext.getFramebufferAttachmentParameter","lime/graphics/GLRenderContext.hx",809,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(attachment,"attachment")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(809)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_framebuffer_attachment_parameter.call(target,attachment,pname);
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,getFramebufferAttachmentParameter,return )

Dynamic GLRenderContext_obj::getParameter( int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getParameter",0x31ba7477,"lime.graphics.GLRenderContext.getParameter","lime/graphics/GLRenderContext.hx",816,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(816)
	return ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call(pname)));
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getParameter,return )

::String GLRenderContext_obj::getProgramInfoLog( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getProgramInfoLog",0xec189904,"lime.graphics.GLRenderContext.getProgramInfoLog","lime/graphics/GLRenderContext.hx",823,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(823)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_info_log.call(hx::DynamicPtr(program->id));
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getProgramInfoLog,return )

int GLRenderContext_obj::getProgramParameter( ::lime::graphics::opengl::GLProgram program,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getProgramParameter",0xc6e7b177,"lime.graphics.GLRenderContext.getProgramParameter","lime/graphics/GLRenderContext.hx",830,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(830)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_program_parameter.call(hx::DynamicPtr(program->id),pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getProgramParameter,return )

int GLRenderContext_obj::getRenderbufferParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getRenderbufferParameter",0xad97b9c1,"lime.graphics.GLRenderContext.getRenderbufferParameter","lime/graphics/GLRenderContext.hx",837,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(837)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_render_buffer_parameter.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getRenderbufferParameter,return )

::String GLRenderContext_obj::getShaderInfoLog( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderInfoLog",0x3434d1df,"lime.graphics.GLRenderContext.getShaderInfoLog","lime/graphics/GLRenderContext.hx",844,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(844)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_info_log.call(hx::DynamicPtr(shader->id));
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getShaderInfoLog,return )

int GLRenderContext_obj::getShaderParameter( ::lime::graphics::opengl::GLShader shader,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderParameter",0x79281712,"lime.graphics.GLRenderContext.getShaderParameter","lime/graphics/GLRenderContext.hx",851,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(851)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_parameter.call(hx::DynamicPtr(shader->id),pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getShaderParameter,return )

Dynamic GLRenderContext_obj::getShaderPrecisionFormat( int shadertype,int precisiontype){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderPrecisionFormat",0x3f8fb13e,"lime.graphics.GLRenderContext.getShaderPrecisionFormat","lime/graphics/GLRenderContext.hx",856,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shadertype,"shadertype")
	HX_STACK_ARG(precisiontype,"precisiontype")
	HX_STACK_LINE(858)
	Dynamic tmp;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(858)
	{
		HX_STACK_LINE(858)
		Dynamic result = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_precision_format.call(shadertype,precisiontype)));		HX_STACK_VAR(result,"result");
		HX_STACK_LINE(858)
		tmp = result;
	}
	HX_STACK_LINE(858)
	Dynamic tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(858)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getShaderPrecisionFormat,return )

::String GLRenderContext_obj::getShaderSource( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getShaderSource",0xfeb4c3d2,"lime.graphics.GLRenderContext.getShaderSource","lime/graphics/GLRenderContext.hx",865,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(865)
	return ((::String)(((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_shader_source.call(hx::DynamicPtr(shader->id))))));
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,getShaderSource,return )

Array< ::String > GLRenderContext_obj::getSupportedExtensions( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getSupportedExtensions",0xb3d41830,"lime.graphics.GLRenderContext.getSupportedExtensions","lime/graphics/GLRenderContext.hx",872,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(872)
	Array< ::String > result = Array_obj< ::String >::__new();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(872)
	::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_supported_extensions.call(hx::DynamicPtr(result));
	HX_STACK_LINE(872)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,getSupportedExtensions,return )

int GLRenderContext_obj::getTexParameter( int target,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getTexParameter",0x0c83b8b4,"lime.graphics.GLRenderContext.getTexParameter","lime/graphics/GLRenderContext.hx",879,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(target,"target")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(879)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_tex_parameter.call(target,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getTexParameter,return )

Dynamic GLRenderContext_obj::getUniform( ::lime::graphics::opengl::GLProgram program,int location){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getUniform",0x81019082,"lime.graphics.GLRenderContext.getUniform","lime/graphics/GLRenderContext.hx",886,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(location,"location")
	HX_STACK_LINE(886)
	return ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform.call(hx::DynamicPtr(program->id),location)));
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getUniform,return )

int GLRenderContext_obj::getUniformLocation( ::lime::graphics::opengl::GLProgram program,::String name){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getUniformLocation",0x92a10cd7,"lime.graphics.GLRenderContext.getUniformLocation","lime/graphics/GLRenderContext.hx",893,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(893)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_uniform_location.call(hx::DynamicPtr(program->id),name);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getUniformLocation,return )

int GLRenderContext_obj::getVertexAttrib( int index,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getVertexAttrib",0xdccc4fc0,"lime.graphics.GLRenderContext.getVertexAttrib","lime/graphics/GLRenderContext.hx",900,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(900)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_vertex_attrib.call(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getVertexAttrib,return )

int GLRenderContext_obj::getVertexAttribOffset( int index,int pname){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","getVertexAttribOffset",0x625eab73,"lime.graphics.GLRenderContext.getVertexAttribOffset","lime/graphics/GLRenderContext.hx",907,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_ARG(pname,"pname")
	HX_STACK_LINE(907)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_vertex_attrib_offset.call(index,pname);
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,getVertexAttribOffset,return )

Void GLRenderContext_obj::hint( int target,int mode){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","hint",0x3db3fbcb,"lime.graphics.GLRenderContext.hint","lime/graphics/GLRenderContext.hx",914,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(mode,"mode")
		HX_STACK_LINE(914)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_hint.call(target,mode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,hint,(void))

bool GLRenderContext_obj::isBuffer( ::lime::graphics::opengl::GLBuffer buffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isBuffer",0x219a88ce,"lime.graphics.GLRenderContext.isBuffer","lime/graphics/GLRenderContext.hx",919,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_LINE(921)
	bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(921)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(921)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(921)
	if ((tmp1)){
		HX_STACK_LINE(921)
		Dynamic tmp3 = buffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(921)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(921)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(921)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(921)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(921)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(921)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(921)
		tmp2 = false;
	}
	HX_STACK_LINE(921)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(921)
	if ((tmp2)){
		HX_STACK_LINE(921)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_buffer.call(hx::DynamicPtr(buffer->id));
	}
	else{
		HX_STACK_LINE(921)
		tmp3 = false;
	}
	HX_STACK_LINE(921)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isBuffer,return )

bool GLRenderContext_obj::isContextLost( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isContextLost",0xd15a38e5,"lime.graphics.GLRenderContext.isContextLost","lime/graphics/GLRenderContext.hx",928,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(928)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,isContextLost,return )

bool GLRenderContext_obj::isEnabled( int cap){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isEnabled",0x123d8cf3,"lime.graphics.GLRenderContext.isEnabled","lime/graphics/GLRenderContext.hx",935,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(cap,"cap")
	HX_STACK_LINE(935)
	return ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_enabled.call(cap);
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isEnabled,return )

bool GLRenderContext_obj::isFramebuffer( ::lime::graphics::opengl::GLFramebuffer framebuffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isFramebuffer",0x26e6be5f,"lime.graphics.GLRenderContext.isFramebuffer","lime/graphics/GLRenderContext.hx",940,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(framebuffer,"framebuffer")
	HX_STACK_LINE(942)
	bool tmp = (framebuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(942)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(942)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(942)
	if ((tmp1)){
		HX_STACK_LINE(942)
		Dynamic tmp3 = framebuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(942)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(942)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(942)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(942)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(942)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(942)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(942)
		tmp2 = false;
	}
	HX_STACK_LINE(942)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(942)
	if ((tmp2)){
		HX_STACK_LINE(942)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_framebuffer.call(hx::DynamicPtr(framebuffer->id));
	}
	else{
		HX_STACK_LINE(942)
		tmp3 = false;
	}
	HX_STACK_LINE(942)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isFramebuffer,return )

bool GLRenderContext_obj::isProgram( ::lime::graphics::opengl::GLProgram program){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isProgram",0x8805d2f6,"lime.graphics.GLRenderContext.isProgram","lime/graphics/GLRenderContext.hx",947,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(program,"program")
	HX_STACK_LINE(949)
	bool tmp = (program != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(949)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(949)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(949)
	if ((tmp1)){
		HX_STACK_LINE(949)
		Dynamic tmp3 = program->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(949)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(949)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(949)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(949)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(949)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(949)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(949)
		tmp2 = false;
	}
	HX_STACK_LINE(949)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(949)
	if ((tmp2)){
		HX_STACK_LINE(949)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_program.call(hx::DynamicPtr(program->id));
	}
	else{
		HX_STACK_LINE(949)
		tmp3 = false;
	}
	HX_STACK_LINE(949)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isProgram,return )

bool GLRenderContext_obj::isRenderbuffer( ::lime::graphics::opengl::GLRenderbuffer renderbuffer){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isRenderbuffer",0x698be724,"lime.graphics.GLRenderContext.isRenderbuffer","lime/graphics/GLRenderContext.hx",954,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderbuffer,"renderbuffer")
	HX_STACK_LINE(956)
	bool tmp = (renderbuffer != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(956)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(956)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(956)
	if ((tmp1)){
		HX_STACK_LINE(956)
		Dynamic tmp3 = renderbuffer->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(956)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(956)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(956)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(956)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(956)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(956)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(956)
		tmp2 = false;
	}
	HX_STACK_LINE(956)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(956)
	if ((tmp2)){
		HX_STACK_LINE(956)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_renderbuffer.call(hx::DynamicPtr(renderbuffer->id));
	}
	else{
		HX_STACK_LINE(956)
		tmp3 = false;
	}
	HX_STACK_LINE(956)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isRenderbuffer,return )

bool GLRenderContext_obj::isShader( ::lime::graphics::opengl::GLShader shader){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isShader",0x6e268af3,"lime.graphics.GLRenderContext.isShader","lime/graphics/GLRenderContext.hx",961,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(shader,"shader")
	HX_STACK_LINE(963)
	bool tmp = (shader != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(963)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(963)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(963)
	if ((tmp1)){
		HX_STACK_LINE(963)
		Dynamic tmp3 = shader->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(963)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(963)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(963)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(963)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(963)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(963)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(963)
		tmp2 = false;
	}
	HX_STACK_LINE(963)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(963)
	if ((tmp2)){
		HX_STACK_LINE(963)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_shader.call(hx::DynamicPtr(shader->id));
	}
	else{
		HX_STACK_LINE(963)
		tmp3 = false;
	}
	HX_STACK_LINE(963)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isShader,return )

bool GLRenderContext_obj::isTexture( ::lime::graphics::opengl::GLTexture texture){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","isTexture",0x32ed514d,"lime.graphics.GLRenderContext.isTexture","lime/graphics/GLRenderContext.hx",968,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_ARG(texture,"texture")
	HX_STACK_LINE(970)
	bool tmp = (texture != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(970)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(970)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(970)
	if ((tmp1)){
		HX_STACK_LINE(970)
		Dynamic tmp3 = texture->id;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(970)
		Dynamic tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(970)
		Dynamic tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(970)
		Float tmp6 = ::lime::_system::_CFFIPointer::CFFIPointer_Impl__obj::get(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(970)
		Float tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(970)
		Float tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(970)
		tmp2 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(970)
		tmp2 = false;
	}
	HX_STACK_LINE(970)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(970)
	if ((tmp2)){
		HX_STACK_LINE(970)
		tmp3 = ::lime::graphics::opengl::GL_obj::cffi_lime_gl_is_texture.call(hx::DynamicPtr(texture->id));
	}
	else{
		HX_STACK_LINE(970)
		tmp3 = false;
	}
	HX_STACK_LINE(970)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,isTexture,return )

Void GLRenderContext_obj::lineWidth( Float width){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","lineWidth",0xa16bc4ae,"lime.graphics.GLRenderContext.lineWidth","lime/graphics/GLRenderContext.hx",977,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_LINE(977)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_line_width.call(width);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,lineWidth,(void))

Void GLRenderContext_obj::linkProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","linkProgram",0xc18fffe6,"lime.graphics.GLRenderContext.linkProgram","lime/graphics/GLRenderContext.hx",984,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(984)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_link_program.call(hx::DynamicPtr(program->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,linkProgram,(void))

Void GLRenderContext_obj::pixelStorei( int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","pixelStorei",0xb8dc86ca,"lime.graphics.GLRenderContext.pixelStorei","lime/graphics/GLRenderContext.hx",991,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(991)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_pixel_storei.call(pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,pixelStorei,(void))

Void GLRenderContext_obj::polygonOffset( Float factor,Float units){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","polygonOffset",0x09c77ee9,"lime.graphics.GLRenderContext.polygonOffset","lime/graphics/GLRenderContext.hx",998,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(factor,"factor")
		HX_STACK_ARG(units,"units")
		HX_STACK_LINE(998)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_polygon_offset.call(factor,units);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,polygonOffset,(void))

Void GLRenderContext_obj::readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","readPixels",0x02619c67,"lime.graphics.GLRenderContext.readPixels","lime/graphics/GLRenderContext.hx",1005,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1005)
		bool tmp = (pixels == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1005)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1005)
		if ((tmp)){
			HX_STACK_LINE(1005)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1005)
			tmp1 = pixels->buffer;
		}
		HX_STACK_LINE(1005)
		::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1005)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_read_pixels.call(x,y,width,height,format,type,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(GLRenderContext_obj,readPixels,(void))

Void GLRenderContext_obj::renderbufferStorage( int target,int internalformat,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","renderbufferStorage",0xb7bb8f41,"lime.graphics.GLRenderContext.renderbufferStorage","lime/graphics/GLRenderContext.hx",1012,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1012)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_renderbuffer_storage.call(target,internalformat,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,renderbufferStorage,(void))

Void GLRenderContext_obj::sampleCoverage( Float value,bool invert){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","sampleCoverage",0xa3152376,"lime.graphics.GLRenderContext.sampleCoverage","lime/graphics/GLRenderContext.hx",1019,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_ARG(invert,"invert")
		HX_STACK_LINE(1019)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_sample_coverage.call(value,invert);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,sampleCoverage,(void))

Void GLRenderContext_obj::scissor( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","scissor",0x04deac58,"lime.graphics.GLRenderContext.scissor","lime/graphics/GLRenderContext.hx",1026,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1026)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_scissor.call(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,scissor,(void))

Void GLRenderContext_obj::shaderSource( ::lime::graphics::opengl::GLShader shader,::String source){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","shaderSource",0x7bcdf024,"lime.graphics.GLRenderContext.shaderSource","lime/graphics/GLRenderContext.hx",1033,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(shader,"shader")
		HX_STACK_ARG(source,"source")
		HX_STACK_LINE(1033)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_shader_source.call(hx::DynamicPtr(shader->id),source);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,shaderSource,(void))

Void GLRenderContext_obj::stencilFunc( int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilFunc",0x78d2d59c,"lime.graphics.GLRenderContext.stencilFunc","lime/graphics/GLRenderContext.hx",1040,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1040)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func.call(func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,stencilFunc,(void))

Void GLRenderContext_obj::stencilFuncSeparate( int face,int func,int ref,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilFuncSeparate",0xe319ad1f,"lime.graphics.GLRenderContext.stencilFuncSeparate","lime/graphics/GLRenderContext.hx",1047,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(func,"func")
		HX_STACK_ARG(ref,"ref")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1047)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_func_separate.call(face,func,ref,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,stencilFuncSeparate,(void))

Void GLRenderContext_obj::stencilMask( int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilMask",0x7d642b44,"lime.graphics.GLRenderContext.stencilMask","lime/graphics/GLRenderContext.hx",1054,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1054)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_mask.call(mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,stencilMask,(void))

Void GLRenderContext_obj::stencilMaskSeparate( int face,int mask){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilMaskSeparate",0xf6f4eac7,"lime.graphics.GLRenderContext.stencilMaskSeparate","lime/graphics/GLRenderContext.hx",1061,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(mask,"mask")
		HX_STACK_LINE(1061)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_mask_separate.call(face,mask);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,stencilMaskSeparate,(void))

Void GLRenderContext_obj::stencilOp( int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilOp",0xe6fa8579,"lime.graphics.GLRenderContext.stencilOp","lime/graphics/GLRenderContext.hx",1068,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1068)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_op.call(fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,stencilOp,(void))

Void GLRenderContext_obj::stencilOpSeparate( int face,int fail,int zfail,int zpass){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","stencilOpSeparate",0x717001fc,"lime.graphics.GLRenderContext.stencilOpSeparate","lime/graphics/GLRenderContext.hx",1075,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(face,"face")
		HX_STACK_ARG(fail,"fail")
		HX_STACK_ARG(zfail,"zfail")
		HX_STACK_ARG(zpass,"zpass")
		HX_STACK_LINE(1075)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_stencil_op_separate.call(face,fail,zfail,zpass);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,stencilOpSeparate,(void))

Void GLRenderContext_obj::texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texImage2D",0x35a3460a,"lime.graphics.GLRenderContext.texImage2D","lime/graphics/GLRenderContext.hx",1082,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(internalformat,"internalformat")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(border,"border")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1082)
		bool tmp = (pixels == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1082)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1082)
		if ((tmp)){
			HX_STACK_LINE(1082)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1082)
			tmp1 = pixels->buffer;
		}
		HX_STACK_LINE(1082)
		::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1082)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(target,level,internalformat,width,height,border,format,type,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GLRenderContext_obj,texImage2D,(void))

Void GLRenderContext_obj::texParameterf( int target,int pname,Float param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texParameterf",0xdfab80a0,"lime.graphics.GLRenderContext.texParameterf","lime/graphics/GLRenderContext.hx",1089,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1089)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameterf.call(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,texParameterf,(void))

Void GLRenderContext_obj::texParameteri( int target,int pname,int param){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texParameteri",0xdfab80a3,"lime.graphics.GLRenderContext.texParameteri","lime/graphics/GLRenderContext.hx",1096,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(pname,"pname")
		HX_STACK_ARG(param,"param")
		HX_STACK_LINE(1096)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(target,pname,param);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,texParameteri,(void))

Void GLRenderContext_obj::texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","texSubImage2D",0xcc0a8850,"lime.graphics.GLRenderContext.texSubImage2D","lime/graphics/GLRenderContext.hx",1103,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(target,"target")
		HX_STACK_ARG(level,"level")
		HX_STACK_ARG(xoffset,"xoffset")
		HX_STACK_ARG(yoffset,"yoffset")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(pixels,"pixels")
		HX_STACK_LINE(1103)
		bool tmp = (pixels == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1103)
		::haxe::io::Bytes tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1103)
		if ((tmp)){
			HX_STACK_LINE(1103)
			tmp1 = null();
		}
		else{
			HX_STACK_LINE(1103)
			tmp1 = pixels->buffer;
		}
		HX_STACK_LINE(1103)
		::haxe::io::Bytes buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1103)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_sub_image_2d.call(target,level,xoffset,yoffset,width,height,format,type,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(GLRenderContext_obj,texSubImage2D,(void))

Void GLRenderContext_obj::uniform1f( int location,Float x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1f",0x97ec2c85,"lime.graphics.GLRenderContext.uniform1f","lime/graphics/GLRenderContext.hx",1110,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1110)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1f.call(location,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1f,(void))

Void GLRenderContext_obj::uniform1fv( int location,::lime::utils::ArrayBufferView x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1fv",0x56bac851,"lime.graphics.GLRenderContext.uniform1fv","lime/graphics/GLRenderContext.hx",1117,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1117)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1fv.call(location,hx::DynamicPtr(x->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1fv,(void))

Void GLRenderContext_obj::uniform1i( int location,int x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1i",0x97ec2c88,"lime.graphics.GLRenderContext.uniform1i","lime/graphics/GLRenderContext.hx",1124,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1124)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1i.call(location,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1i,(void))

Void GLRenderContext_obj::uniform1iv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform1iv",0x56bacaee,"lime.graphics.GLRenderContext.uniform1iv","lime/graphics/GLRenderContext.hx",1131,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1131)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform1iv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform1iv,(void))

Void GLRenderContext_obj::uniform2f( int location,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2f",0x97ec2d64,"lime.graphics.GLRenderContext.uniform2f","lime/graphics/GLRenderContext.hx",1138,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1138)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2f.call(location,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniform2f,(void))

Void GLRenderContext_obj::uniform2fv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2fv",0x56bb8a92,"lime.graphics.GLRenderContext.uniform2fv","lime/graphics/GLRenderContext.hx",1145,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1145)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2fv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform2fv,(void))

Void GLRenderContext_obj::uniform2i( int location,int x,int y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2i",0x97ec2d67,"lime.graphics.GLRenderContext.uniform2i","lime/graphics/GLRenderContext.hx",1152,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1152)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2i.call(location,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniform2i,(void))

Void GLRenderContext_obj::uniform2iv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform2iv",0x56bb8d2f,"lime.graphics.GLRenderContext.uniform2iv","lime/graphics/GLRenderContext.hx",1159,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1159)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform2iv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform2iv,(void))

Void GLRenderContext_obj::uniform3f( int location,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3f",0x97ec2e43,"lime.graphics.GLRenderContext.uniform3f","lime/graphics/GLRenderContext.hx",1166,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1166)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3f.call(location,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,uniform3f,(void))

Void GLRenderContext_obj::uniform3fv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3fv",0x56bc4cd3,"lime.graphics.GLRenderContext.uniform3fv","lime/graphics/GLRenderContext.hx",1173,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1173)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3fv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform3fv,(void))

Void GLRenderContext_obj::uniform3i( int location,int x,int y,int z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3i",0x97ec2e46,"lime.graphics.GLRenderContext.uniform3i","lime/graphics/GLRenderContext.hx",1180,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1180)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3i.call(location,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,uniform3i,(void))

Void GLRenderContext_obj::uniform3iv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform3iv",0x56bc4f70,"lime.graphics.GLRenderContext.uniform3iv","lime/graphics/GLRenderContext.hx",1187,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1187)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform3iv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform3iv,(void))

Void GLRenderContext_obj::uniform4f( int location,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4f",0x97ec2f22,"lime.graphics.GLRenderContext.uniform4f","lime/graphics/GLRenderContext.hx",1194,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1194)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4f.call(location,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,uniform4f,(void))

Void GLRenderContext_obj::uniform4fv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4fv",0x56bd0f14,"lime.graphics.GLRenderContext.uniform4fv","lime/graphics/GLRenderContext.hx",1201,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1201)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4fv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform4fv,(void))

Void GLRenderContext_obj::uniform4i( int location,int x,int y,int z,int w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4i",0x97ec2f25,"lime.graphics.GLRenderContext.uniform4i","lime/graphics/GLRenderContext.hx",1208,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1208)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4i.call(location,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,uniform4i,(void))

Void GLRenderContext_obj::uniform4iv( int location,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniform4iv",0x56bd11b1,"lime.graphics.GLRenderContext.uniform4iv","lime/graphics/GLRenderContext.hx",1215,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1215)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform4iv.call(location,hx::DynamicPtr(v->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,uniform4iv,(void))

Void GLRenderContext_obj::uniformMatrix2fv( int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix2fv",0x05c59ed1,"lime.graphics.GLRenderContext.uniformMatrix2fv","lime/graphics/GLRenderContext.hx",1222,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1222)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,transpose,hx::DynamicPtr(v->buffer),(int)2);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix2fv,(void))

Void GLRenderContext_obj::uniformMatrix3fv( int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix3fv",0x05c66112,"lime.graphics.GLRenderContext.uniformMatrix3fv","lime/graphics/GLRenderContext.hx",1229,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1229)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,transpose,hx::DynamicPtr(v->buffer),(int)3);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix3fv,(void))

Void GLRenderContext_obj::uniformMatrix4fv( int location,bool transpose,::lime::utils::ArrayBufferView v){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","uniformMatrix4fv",0x05c72353,"lime.graphics.GLRenderContext.uniformMatrix4fv","lime/graphics/GLRenderContext.hx",1236,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(location,"location")
		HX_STACK_ARG(transpose,"transpose")
		HX_STACK_ARG(v,"v")
		HX_STACK_LINE(1236)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_uniform_matrix.call(location,transpose,hx::DynamicPtr(v->buffer),(int)4);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,uniformMatrix4fv,(void))

Void GLRenderContext_obj::useProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","useProgram",0x72e83641,"lime.graphics.GLRenderContext.useProgram","lime/graphics/GLRenderContext.hx",1250,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1250)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_use_program.call(hx::DynamicPtr((  (((program == null()))) ? Dynamic(null()) : Dynamic(program->id) )));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,useProgram,(void))

Void GLRenderContext_obj::validateProgram( ::lime::graphics::opengl::GLProgram program){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","validateProgram",0x28bfa0ca,"lime.graphics.GLRenderContext.validateProgram","lime/graphics/GLRenderContext.hx",1257,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(program,"program")
		HX_STACK_LINE(1257)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_validate_program.call(hx::DynamicPtr(program->id));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderContext_obj,validateProgram,(void))

Void GLRenderContext_obj::vertexAttrib1f( int indx,Float x){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib1f",0xbb4a4fa7,"lime.graphics.GLRenderContext.vertexAttrib1f","lime/graphics/GLRenderContext.hx",1264,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_LINE(1264)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib1f.call(indx,x);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib1f,(void))

Void GLRenderContext_obj::vertexAttrib1fv( int indx,::lime::utils::ArrayBufferView values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib1fv",0x25bb62ef,"lime.graphics.GLRenderContext.vertexAttrib1fv","lime/graphics/GLRenderContext.hx",1271,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1271)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib1fv.call(indx,hx::DynamicPtr(values->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib1fv,(void))

Void GLRenderContext_obj::vertexAttrib2f( int indx,Float x,Float y){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib2f",0xbb4a5086,"lime.graphics.GLRenderContext.vertexAttrib2f","lime/graphics/GLRenderContext.hx",1278,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1278)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib2f.call(indx,x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GLRenderContext_obj,vertexAttrib2f,(void))

Void GLRenderContext_obj::vertexAttrib2fv( int indx,::lime::utils::ArrayBufferView values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib2fv",0x25bc2530,"lime.graphics.GLRenderContext.vertexAttrib2fv","lime/graphics/GLRenderContext.hx",1285,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1285)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib2fv.call(indx,hx::DynamicPtr(values->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib2fv,(void))

Void GLRenderContext_obj::vertexAttrib3f( int indx,Float x,Float y,Float z){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib3f",0xbb4a5165,"lime.graphics.GLRenderContext.vertexAttrib3f","lime/graphics/GLRenderContext.hx",1292,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_LINE(1292)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib3f.call(indx,x,y,z);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,vertexAttrib3f,(void))

Void GLRenderContext_obj::vertexAttrib3fv( int indx,::lime::utils::ArrayBufferView values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib3fv",0x25bce771,"lime.graphics.GLRenderContext.vertexAttrib3fv","lime/graphics/GLRenderContext.hx",1299,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1299)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib3fv.call(indx,hx::DynamicPtr(values->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib3fv,(void))

Void GLRenderContext_obj::vertexAttrib4f( int indx,Float x,Float y,Float z,Float w){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib4f",0xbb4a5244,"lime.graphics.GLRenderContext.vertexAttrib4f","lime/graphics/GLRenderContext.hx",1306,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(z,"z")
		HX_STACK_ARG(w,"w")
		HX_STACK_LINE(1306)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib4f.call(indx,x,y,z,w);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(GLRenderContext_obj,vertexAttrib4f,(void))

Void GLRenderContext_obj::vertexAttrib4fv( int indx,::lime::utils::ArrayBufferView values){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttrib4fv",0x25bda9b2,"lime.graphics.GLRenderContext.vertexAttrib4fv","lime/graphics/GLRenderContext.hx",1313,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(values,"values")
		HX_STACK_LINE(1313)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib4fv.call(indx,hx::DynamicPtr(values->buffer));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GLRenderContext_obj,vertexAttrib4fv,(void))

Void GLRenderContext_obj::vertexAttribPointer( int indx,int size,int type,bool normalized,int stride,int offset){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","vertexAttribPointer",0x7000f2cb,"lime.graphics.GLRenderContext.vertexAttribPointer","lime/graphics/GLRenderContext.hx",1320,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(indx,"indx")
		HX_STACK_ARG(size,"size")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(normalized,"normalized")
		HX_STACK_ARG(stride,"stride")
		HX_STACK_ARG(offset,"offset")
		HX_STACK_LINE(1320)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_vertex_attrib_pointer.call(indx,size,type,normalized,stride,offset);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GLRenderContext_obj,vertexAttribPointer,(void))

Void GLRenderContext_obj::viewport( int x,int y,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.GLRenderContext","viewport",0x95417caa,"lime.graphics.GLRenderContext.viewport","lime/graphics/GLRenderContext.hx",1327,0xbdd53034)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1327)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_viewport.call(x,y,width,height);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GLRenderContext_obj,viewport,(void))

int GLRenderContext_obj::get_version( ){
	HX_STACK_FRAME("lime.graphics.GLRenderContext","get_version",0x3b00996b,"lime.graphics.GLRenderContext.get_version","lime/graphics/GLRenderContext.hx",1332,0xbdd53034)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1332)
	return (int)2;
}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderContext_obj,get_version,return )


GLRenderContext_obj::GLRenderContext_obj()
{
}

Dynamic GLRenderContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { return CW; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { return ONE; }
		if (HX_FIELD_EQ(inName,"CCW") ) { return CCW; }
		if (HX_FIELD_EQ(inName,"INT") ) { return INT; }
		if (HX_FIELD_EQ(inName,"RGB") ) { return RGB; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { return ZERO; }
		if (HX_FIELD_EQ(inName,"BACK") ) { return BACK; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { return BYTE; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { return RGBA; }
		if (HX_FIELD_EQ(inName,"LESS") ) { return LESS; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { return KEEP; }
		if (HX_FIELD_EQ(inName,"INCR") ) { return INCR; }
		if (HX_FIELD_EQ(inName,"DECR") ) { return DECR; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { return BOOL; }
		if (HX_FIELD_EQ(inName,"NONE") ) { return NONE; }
		if (HX_FIELD_EQ(inName,"hint") ) { return hint_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { return LINES; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { return FRONT; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { return BLEND; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { return SHORT; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { return FLOAT; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { return ALPHA; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { return NEVER; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { return EQUAL; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { return RGBA4; }
		if (HX_FIELD_EQ(inName,"clear") ) { return clear_dyn(); }
		if (HX_FIELD_EQ(inName,"flush") ) { return flush_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { return POINTS; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { return DITHER; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { return NICEST; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { return LEQUAL; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { return GEQUAL; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { return ALWAYS; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { return INVERT; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { return VENDOR; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { return LINEAR; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { return REPEAT; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { return RGB565; }
		if (HX_FIELD_EQ(inName,"enable") ) { return enable_dyn(); }
		if (HX_FIELD_EQ(inName,"finish") ) { return finish_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { return SAMPLES; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { return FASTEST; }
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { return BGR_EXT; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { return GREATER; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { return REPLACE; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { return VERSION; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { return NEAREST; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { return TEXTURE; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { return LOW_INT; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { return RGB5_A1; }
		if (HX_FIELD_EQ(inName,"version") ) { return inCallProp == hx::paccAlways ? get_version() : version; }
		if (HX_FIELD_EQ(inName,"disable") ) { return disable_dyn(); }
		if (HX_FIELD_EQ(inName,"scissor") ) { return scissor_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { return FUNC_ADD; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { return NO_ERROR; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { return VIEWPORT; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { return RED_BITS; }
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { return BGRA_EXT; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { return NOTEQUAL; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { return RENDERER; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { return TEXTURE0; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { return TEXTURE1; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { return TEXTURE2; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { return TEXTURE3; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { return TEXTURE4; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { return TEXTURE5; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { return TEXTURE6; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { return TEXTURE7; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { return TEXTURE8; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { return TEXTURE9; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { return INT_VEC2; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { return INT_VEC3; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { return INT_VEC4; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { return HIGH_INT; }
		if (HX_FIELD_EQ(inName,"cullFace") ) { return cullFace_dyn(); }
		if (HX_FIELD_EQ(inName,"getError") ) { return getError_dyn(); }
		if (HX_FIELD_EQ(inName,"isBuffer") ) { return isBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"isShader") ) { return isShader_dyn(); }
		if (HX_FIELD_EQ(inName,"viewport") ) { return viewport_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { return LINE_LOOP; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { return TRIANGLES; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { return SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { return SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { return DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { return DST_COLOR; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { return CULL_FACE; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { return BLUE_BITS; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { return DONT_CARE; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { return LUMINANCE; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { return INCR_WRAP; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { return DECR_WRAP; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { return TEXTURE10; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { return TEXTURE11; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { return TEXTURE12; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { return TEXTURE13; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { return TEXTURE14; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { return TEXTURE15; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { return TEXTURE16; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { return TEXTURE17; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { return TEXTURE18; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { return TEXTURE19; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { return TEXTURE20; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { return TEXTURE21; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { return TEXTURE22; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { return TEXTURE23; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { return TEXTURE24; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { return TEXTURE25; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { return TEXTURE26; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { return TEXTURE27; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { return TEXTURE28; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { return TEXTURE29; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { return TEXTURE30; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { return TEXTURE31; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { return BOOL_VEC2; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { return BOOL_VEC3; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { return BOOL_VEC4; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { return LOW_FLOAT; }
		if (HX_FIELD_EQ(inName,"blendFunc") ) { return blendFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"colorMask") ) { return colorMask_dyn(); }
		if (HX_FIELD_EQ(inName,"depthFunc") ) { return depthFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"depthMask") ) { return depthMask_dyn(); }
		if (HX_FIELD_EQ(inName,"frontFace") ) { return frontFace_dyn(); }
		if (HX_FIELD_EQ(inName,"isEnabled") ) { return isEnabled_dyn(); }
		if (HX_FIELD_EQ(inName,"isProgram") ) { return isProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"isTexture") ) { return isTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"lineWidth") ) { return lineWidth_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOp") ) { return stencilOp_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1f") ) { return uniform1f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1i") ) { return uniform1i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2f") ) { return uniform2f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2i") ) { return uniform2i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3f") ) { return uniform3f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3i") ) { return uniform3i_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4f") ) { return uniform4f_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4i") ) { return uniform4i_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { return LINE_STRIP; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { return DEPTH_TEST; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { return LINE_WIDTH; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { return FRONT_FACE; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { return DEPTH_FUNC; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { return GREEN_BITS; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { return ALPHA_BITS; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { return DEPTH_BITS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { return TEXTURE_2D; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { return FLOAT_VEC2; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { return FLOAT_VEC3; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { return FLOAT_VEC4; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { return FLOAT_MAT2; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { return FLOAT_MAT3; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { return FLOAT_MAT4; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { return SAMPLER_2D; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { return HIGH_FLOAT; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { return MEDIUM_INT; }
		if (HX_FIELD_EQ(inName,"bindBuffer") ) { return bindBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"blendColor") ) { return blendColor_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferData") ) { return bufferData_dyn(); }
		if (HX_FIELD_EQ(inName,"clearColor") ) { return clearColor_dyn(); }
		if (HX_FIELD_EQ(inName,"clearDepth") ) { return clearDepth_dyn(); }
		if (HX_FIELD_EQ(inName,"depthRange") ) { return depthRange_dyn(); }
		if (HX_FIELD_EQ(inName,"drawArrays") ) { return drawArrays_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniform") ) { return getUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"readPixels") ) { return readPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"texImage2D") ) { return texImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1fv") ) { return uniform1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform1iv") ) { return uniform1iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2fv") ) { return uniform2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform2iv") ) { return uniform2iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3fv") ) { return uniform3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform3iv") ) { return uniform3iv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4fv") ) { return uniform4fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniform4iv") ) { return uniform4iv_dyn(); }
		if (HX_FIELD_EQ(inName,"useProgram") ) { return useProgram_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { return BLEND_COLOR; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { return STREAM_DRAW; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { return STATIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { return BUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { return DEPTH_RANGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { return STENCIL_REF; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { return SCISSOR_BOX; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { return SHADER_TYPE; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { return LINK_STATUS; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { return FRAMEBUFFER; }
		if (HX_FIELD_EQ(inName,"bindTexture") ) { return bindTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"linkProgram") ) { return linkProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"pixelStorei") ) { return pixelStorei_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFunc") ) { return stencilFunc_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMask") ) { return stencilMask_dyn(); }
		if (HX_FIELD_EQ(inName,"get_version") ) { return get_version_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { return TRIANGLE_FAN; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { return ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { return DYNAMIC_DRAW; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { return BUFFER_USAGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { return STENCIL_TEST; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { return SCISSOR_TEST; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { return INVALID_ENUM; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { return STENCIL_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { return STENCIL_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { return STENCIL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { return UNSIGNED_INT; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { return SAMPLER_CUBE; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { return POINT_SPRITE; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { return MEDIUM_FLOAT; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { return RENDERBUFFER; }
		if (HX_FIELD_EQ(inName,"attachShader") ) { return attachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"clearStencil") ) { return clearStencil_dyn(); }
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return createBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"createShader") ) { return createShader_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteBuffer") ) { return deleteBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteShader") ) { return deleteShader_dyn(); }
		if (HX_FIELD_EQ(inName,"detachShader") ) { return detachShader_dyn(); }
		if (HX_FIELD_EQ(inName,"drawElements") ) { return drawElements_dyn(); }
		if (HX_FIELD_EQ(inName,"getExtension") ) { return getExtension_dyn(); }
		if (HX_FIELD_EQ(inName,"getParameter") ) { return getParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"shaderSource") ) { return shaderSource_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { return FUNC_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { return BLEND_DST_RGB; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { return BLEND_SRC_RGB; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { return INVALID_VALUE; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { return OUT_OF_MEMORY; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { return SUBPIXEL_BITS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { return UNSIGNED_BYTE; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { return VERTEX_SHADER; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { return DELETE_STATUS; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { return CLAMP_TO_EDGE; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { return STENCIL_INDEX; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { return DEPTH_STENCIL; }
		if (HX_FIELD_EQ(inName,"activeTexture") ) { return activeTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"blendEquation") ) { return blendEquation_dyn(); }
		if (HX_FIELD_EQ(inName,"bufferSubData") ) { return bufferSubData_dyn(); }
		if (HX_FIELD_EQ(inName,"compileShader") ) { return compileShader_dyn(); }
		if (HX_FIELD_EQ(inName,"createProgram") ) { return createProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"createTexture") ) { return createTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteProgram") ) { return deleteProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteTexture") ) { return deleteTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"isContextLost") ) { return isContextLost_dyn(); }
		if (HX_FIELD_EQ(inName,"isFramebuffer") ) { return isFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"polygonOffset") ) { return polygonOffset_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameterf") ) { return texParameterf_dyn(); }
		if (HX_FIELD_EQ(inName,"texParameteri") ) { return texParameteri_dyn(); }
		if (HX_FIELD_EQ(inName,"texSubImage2D") ) { return texSubImage2D_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { return TRIANGLE_STRIP; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { return BLEND_EQUATION; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { return CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { return CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { return FRONT_AND_BACK; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { return CULL_FACE_MODE; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { return PACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { return SAMPLE_BUFFERS; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { return UNSIGNED_SHORT; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { return TEXTURE_WRAP_S; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { return TEXTURE_WRAP_T; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { return ACTIVE_TEXTURE; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { return COMPILE_STATUS; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { return STENCIL_INDEX8; }
		if (HX_FIELD_EQ(inName,"copyTexImage2D") ) { return copyTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"generateMipmap") ) { return generateMipmap_dyn(); }
		if (HX_FIELD_EQ(inName,"isRenderbuffer") ) { return isRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"sampleCoverage") ) { return sampleCoverage_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1f") ) { return vertexAttrib1f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2f") ) { return vertexAttrib2f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3f") ) { return vertexAttrib3f_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4f") ) { return vertexAttrib4f_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { return BLEND_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { return BLEND_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { return SAMPLE_COVERAGE; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { return DEPTH_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { return COLOR_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { return DEPTH_COMPONENT; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { return LUMINANCE_ALPHA; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { return FRAGMENT_SHADER; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { return VALIDATE_STATUS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { return ACTIVE_UNIFORMS; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { return CURRENT_PROGRAM; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { return MIRRORED_REPEAT; }
		if (HX_FIELD_EQ(inName,"bindFramebuffer") ) { return bindFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveAttrib") ) { return getActiveAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderSource") ) { return getShaderSource_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexParameter") ) { return getTexParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttrib") ) { return getVertexAttrib_dyn(); }
		if (HX_FIELD_EQ(inName,"validateProgram") ) { return validateProgram_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib1fv") ) { return vertexAttrib1fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib2fv") ) { return vertexAttrib2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib3fv") ) { return vertexAttrib3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttrib4fv") ) { return vertexAttrib4fv_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { return DEPTH_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { return COLOR_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { return STENCIL_BACK_REF; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { return UNPACK_ALIGNMENT; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { return MAX_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { return ATTACHED_SHADERS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { return TEXTURE_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { return DEPTH_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"bindRenderbuffer") ) { return bindRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getActiveUniform") ) { return getActiveUniform_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderInfoLog") ) { return getShaderInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix2fv") ) { return uniformMatrix2fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix3fv") ) { return uniformMatrix3fv_dyn(); }
		if (HX_FIELD_EQ(inName,"uniformMatrix4fv") ) { return uniformMatrix4fv_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { return INVALID_OPERATION; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { return DEPTH_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { return STENCIL_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { return STENCIL_BACK_FUNC; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { return STENCIL_BACK_FAIL; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { return COLOR_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { return MAX_VIEWPORT_DIMS; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { return ACTIVE_ATTRIBUTES; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { return DEPTH_COMPONENT16; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { return COLOR_ATTACHMENT0; }
		if (HX_FIELD_EQ(inName,"blendFuncSeparate") ) { return blendFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"copyTexSubImage2D") ) { return copyTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"createFramebuffer") ) { return createFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteFramebuffer") ) { return deleteFramebuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttribLocation") ) { return getAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"getProgramInfoLog") ) { return getProgramInfoLog_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilOpSeparate") ) { return stencilOpSeparate_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { return STENCIL_BUFFER_BIT; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { return SRC_ALPHA_SATURATE; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { return BLEND_EQUATION_RGB; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { return STENCIL_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { return TEXTURE_BINDING_2D; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { return MAX_VERTEX_ATTRIBS; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { return TEXTURE_MAG_FILTER; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { return TEXTURE_MIN_FILTER; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { return RENDERBUFFER_WIDTH; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { return STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { return CONTEXT_LOST_WEBGL; }
		if (HX_FIELD_EQ(inName,"bindAttribLocation") ) { return bindAttribLocation_dyn(); }
		if (HX_FIELD_EQ(inName,"createRenderbuffer") ) { return createRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"deleteRenderbuffer") ) { return deleteRenderbuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getAttachedShaders") ) { return getAttachedShaders_dyn(); }
		if (HX_FIELD_EQ(inName,"getBufferParameter") ) { return getBufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderParameter") ) { return getShaderParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getUniformLocation") ) { return getUniformLocation_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { return ONE_MINUS_SRC_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { return ONE_MINUS_SRC_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { return ONE_MINUS_DST_ALPHA; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { return ONE_MINUS_DST_COLOR; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { return POLYGON_OFFSET_FILL; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { return STENCIL_CLEAR_VALUE; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { return MAX_VARYING_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { return RENDERBUFFER_HEIGHT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { return FRAMEBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { return UNPACK_FLIP_Y_WEBGL; }
		if (HX_FIELD_EQ(inName,"getProgramParameter") ) { return getProgramParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"renderbufferStorage") ) { return renderbufferStorage_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilFuncSeparate") ) { return stencilFuncSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"stencilMaskSeparate") ) { return stencilMaskSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"vertexAttribPointer") ) { return vertexAttribPointer_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { return BLEND_EQUATION_ALPHA; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { return ELEMENT_ARRAY_BUFFER; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { return ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { return POLYGON_OFFSET_UNITS; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { return GENERATE_MIPMAP_HINT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { return UNSIGNED_SHORT_5_6_5; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { return LINEAR_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { return FRAMEBUFFER_COMPLETE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { return RENDERBUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"compressedTexImage2D") ) { return compressedTexImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferTexture2D") ) { return framebufferTexture2D_dyn(); }
		if (HX_FIELD_EQ(inName,"getContextAttributes") ) { return getContextAttributes_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { return FUNC_REVERSE_SUBTRACT; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { return CURRENT_VERTEX_ATTRIB; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { return POLYGON_OFFSET_FACTOR; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { return SAMPLE_COVERAGE_VALUE; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { return LINEAR_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { return NEAREST_MIPMAP_LINEAR; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { return RENDERBUFFER_RED_SIZE; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { return MAX_RENDERBUFFER_SIZE; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { return BROWSER_DEFAULT_WEBGL; }
		if (HX_FIELD_EQ(inName,"blendEquationSeparate") ) { return blendEquationSeparate_dyn(); }
		if (HX_FIELD_EQ(inName,"getVertexAttribOffset") ) { return getVertexAttribOffset_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { return STENCIL_BACK_WRITEMASK; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { return SAMPLE_COVERAGE_INVERT; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { return UNSIGNED_SHORT_4_4_4_4; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { return UNSIGNED_SHORT_5_5_5_1; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { return NEAREST_MIPMAP_NEAREST; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { return RENDERBUFFER_BLUE_SIZE; }
		if (HX_FIELD_EQ(inName,"checkFramebufferStatus") ) { return checkFramebufferStatus_dyn(); }
		if (HX_FIELD_EQ(inName,"getSupportedExtensions") ) { return getSupportedExtensions_dyn(); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { return STENCIL_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { return STENCIL_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { return STENCIL_BACK_VALUE_MASK; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { return MAX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { return RENDERBUFFER_GREEN_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { return RENDERBUFFER_ALPHA_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { return RENDERBUFFER_DEPTH_SIZE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { return FRAMEBUFFER_UNSUPPORTED; }
		if (HX_FIELD_EQ(inName,"compressedTexSubImage2D") ) { return compressedTexSubImage2D_dyn(); }
		if (HX_FIELD_EQ(inName,"enableVertexAttribArray") ) { return enableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"framebufferRenderbuffer") ) { return framebufferRenderbuffer_dyn(); }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { return ONE_MINUS_CONSTANT_COLOR; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { return ONE_MINUS_CONSTANT_ALPHA; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { return SAMPLE_ALPHA_TO_COVERAGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { return ALIASED_POINT_SIZE_RANGE; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { return ALIASED_LINE_WIDTH_RANGE; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { return SHADING_LANGUAGE_VERSION; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { return TEXTURE_BINDING_CUBE_MAP; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { return VERTEX_ATTRIB_ARRAY_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { return VERTEX_ATTRIB_ARRAY_TYPE; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { return DEPTH_STENCIL_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"disableVertexAttribArray") ) { return disableVertexAttribArray_dyn(); }
		if (HX_FIELD_EQ(inName,"getRenderbufferParameter") ) { return getRenderbufferParameter_dyn(); }
		if (HX_FIELD_EQ(inName,"getShaderPrecisionFormat") ) { return getShaderPrecisionFormat_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { return MAX_CUBE_MAP_TEXTURE_SIZE; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { return VERTEX_PROGRAM_POINT_SIZE; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { return RENDERBUFFER_STENCIL_SIZE; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { return COMPRESSED_TEXTURE_FORMATS; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { return MAX_VERTEX_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { return VERTEX_ATTRIB_ARRAY_STRIDE; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { return TEXTURE_CUBE_MAP_POSITIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { return TEXTURE_CUBE_MAP_NEGATIVE_X; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { return TEXTURE_CUBE_MAP_POSITIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Y; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { return TEXTURE_CUBE_MAP_POSITIVE_Z; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { return TEXTURE_CUBE_MAP_NEGATIVE_Z; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { return VERTEX_ATTRIB_ARRAY_ENABLED; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { return VERTEX_ATTRIB_ARRAY_POINTER; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { return ELEMENT_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { return STENCIL_BACK_PASS_DEPTH_FAIL; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { return STENCIL_BACK_PASS_DEPTH_PASS; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { return MAX_FRAGMENT_UNIFORM_VECTORS; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { return RENDERBUFFER_INTERNAL_FORMAT; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { return INVALID_FRAMEBUFFER_OPERATION; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { return MAX_VERTEX_TEXTURE_IMAGE_UNITS; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { return VERTEX_ATTRIB_ARRAY_NORMALIZED; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { return UNPACK_PREMULTIPLY_ALPHA_WEBGL; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { return MAX_COMBINED_TEXTURE_IMAGE_UNITS; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_ATTACHMENT; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { return FRAMEBUFFER_INCOMPLETE_DIMENSIONS; }
		if (HX_FIELD_EQ(inName,"getFramebufferAttachmentParameter") ) { return getFramebufferAttachmentParameter_dyn(); }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { return VERTEX_ATTRIB_ARRAY_BUFFER_BINDING; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { return FRAMEBUFFER_ATTACHMENT_OBJECT_NAME; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { return UNPACK_COLORSPACE_CONVERSION_WEBGL; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { return FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { return FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GLRenderContext_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"CW") ) { CW=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"ONE") ) { ONE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CCW") ) { CCW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT") ) { INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB") ) { RGB=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"ZERO") ) { ZERO=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BACK") ) { BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BYTE") ) { BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA") ) { RGBA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LESS") ) { LESS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"KEEP") ) { KEEP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR") ) { INCR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR") ) { DECR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL") ) { BOOL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NONE") ) { NONE=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"LINES") ) { LINES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT") ) { FRONT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND") ) { BLEND=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHORT") ) { SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT") ) { FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA") ) { ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEVER") ) { NEVER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"EQUAL") ) { EQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGBA4") ) { RGBA4=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"POINTS") ) { POINTS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DITHER") ) { DITHER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NICEST") ) { NICEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LEQUAL") ) { LEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GEQUAL") ) { GEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALWAYS") ) { ALWAYS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVERT") ) { INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VENDOR") ) { VENDOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR") ) { LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPEAT") ) { REPEAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB565") ) { RGB565=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"SAMPLES") ) { SAMPLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FASTEST") ) { FASTEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BGR_EXT") ) { BGR_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREATER") ) { GREATER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"REPLACE") ) { REPLACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERSION") ) { VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST") ) { NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE") ) { TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_INT") ) { LOW_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RGB5_A1") ) { RGB5_A1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"FUNC_ADD") ) { FUNC_ADD=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NO_ERROR") ) { NO_ERROR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VIEWPORT") ) { VIEWPORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RED_BITS") ) { RED_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BGRA_EXT") ) { BGRA_EXT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NOTEQUAL") ) { NOTEQUAL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERER") ) { RENDERER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE0") ) { TEXTURE0=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE1") ) { TEXTURE1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE2") ) { TEXTURE2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE3") ) { TEXTURE3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE4") ) { TEXTURE4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE5") ) { TEXTURE5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE6") ) { TEXTURE6=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE7") ) { TEXTURE7=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE8") ) { TEXTURE8=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE9") ) { TEXTURE9=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC2") ) { INT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC3") ) { INT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INT_VEC4") ) { INT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_INT") ) { HIGH_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"LINE_LOOP") ) { LINE_LOOP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TRIANGLES") ) { TRIANGLES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_COLOR") ) { SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA") ) { SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_ALPHA") ) { DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DST_COLOR") ) { DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE") ) { CULL_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLUE_BITS") ) { BLUE_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DONT_CARE") ) { DONT_CARE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE") ) { LUMINANCE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INCR_WRAP") ) { INCR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DECR_WRAP") ) { DECR_WRAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE10") ) { TEXTURE10=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE11") ) { TEXTURE11=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE12") ) { TEXTURE12=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE13") ) { TEXTURE13=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE14") ) { TEXTURE14=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE15") ) { TEXTURE15=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE16") ) { TEXTURE16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE17") ) { TEXTURE17=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE18") ) { TEXTURE18=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE19") ) { TEXTURE19=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE20") ) { TEXTURE20=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE21") ) { TEXTURE21=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE22") ) { TEXTURE22=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE23") ) { TEXTURE23=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE24") ) { TEXTURE24=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE25") ) { TEXTURE25=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE26") ) { TEXTURE26=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE27") ) { TEXTURE27=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE28") ) { TEXTURE28=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE29") ) { TEXTURE29=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE30") ) { TEXTURE30=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE31") ) { TEXTURE31=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC2") ) { BOOL_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC3") ) { BOOL_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BOOL_VEC4") ) { BOOL_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LOW_FLOAT") ) { LOW_FLOAT=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LINE_STRIP") ) { LINE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_TEST") ) { DEPTH_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINE_WIDTH") ) { LINE_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_FACE") ) { FRONT_FACE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_FUNC") ) { DEPTH_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GREEN_BITS") ) { GREEN_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALPHA_BITS") ) { ALPHA_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_BITS") ) { DEPTH_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_2D") ) { TEXTURE_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC2") ) { FLOAT_VEC2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC3") ) { FLOAT_VEC3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_VEC4") ) { FLOAT_VEC4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT2") ) { FLOAT_MAT2=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT3") ) { FLOAT_MAT3=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FLOAT_MAT4") ) { FLOAT_MAT4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_2D") ) { SAMPLER_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"HIGH_FLOAT") ) { HIGH_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_INT") ) { MEDIUM_INT=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"BLEND_COLOR") ) { BLEND_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STREAM_DRAW") ) { STREAM_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STATIC_DRAW") ) { STATIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_SIZE") ) { BUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_RANGE") ) { DEPTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_REF") ) { STENCIL_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_BOX") ) { SCISSOR_BOX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADER_TYPE") ) { SHADER_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINK_STATUS") ) { LINK_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER") ) { FRAMEBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"TRIANGLE_FAN") ) { TRIANGLE_FAN=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER") ) { ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DYNAMIC_DRAW") ) { DYNAMIC_DRAW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BUFFER_USAGE") ) { BUFFER_USAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_TEST") ) { STENCIL_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SCISSOR_TEST") ) { SCISSOR_TEST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_ENUM") ) { INVALID_ENUM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FUNC") ) { STENCIL_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_FAIL") ) { STENCIL_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BITS") ) { STENCIL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_INT") ) { UNSIGNED_INT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLER_CUBE") ) { SAMPLER_CUBE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POINT_SPRITE") ) { POINT_SPRITE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MEDIUM_FLOAT") ) { MEDIUM_FLOAT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER") ) { RENDERBUFFER=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"FUNC_SUBTRACT") ) { FUNC_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_DST_RGB") ) { BLEND_DST_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_RGB") ) { BLEND_SRC_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"INVALID_VALUE") ) { INVALID_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"OUT_OF_MEMORY") ) { OUT_OF_MEMORY=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SUBPIXEL_BITS") ) { SUBPIXEL_BITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_BYTE") ) { UNSIGNED_BYTE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_SHADER") ) { VERTEX_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DELETE_STATUS") ) { DELETE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CLAMP_TO_EDGE") ) { CLAMP_TO_EDGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX") ) { STENCIL_INDEX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL") ) { DEPTH_STENCIL=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"TRIANGLE_STRIP") ) { TRIANGLE_STRIP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION") ) { BLEND_EQUATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_COLOR") ) { CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONSTANT_ALPHA") ) { CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRONT_AND_BACK") ) { FRONT_AND_BACK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CULL_FACE_MODE") ) { CULL_FACE_MODE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"PACK_ALIGNMENT") ) { PACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_BUFFERS") ) { SAMPLE_BUFFERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT") ) { UNSIGNED_SHORT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_S") ) { TEXTURE_WRAP_S=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_WRAP_T") ) { TEXTURE_WRAP_T=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_TEXTURE") ) { ACTIVE_TEXTURE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COMPILE_STATUS") ) { COMPILE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_INDEX8") ) { STENCIL_INDEX8=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"BLEND_DST_ALPHA") ) { BLEND_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_SRC_ALPHA") ) { BLEND_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE") ) { SAMPLE_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_WRITEMASK") ) { DEPTH_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_WRITEMASK") ) { COLOR_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT") ) { DEPTH_COMPONENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LUMINANCE_ALPHA") ) { LUMINANCE_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAGMENT_SHADER") ) { FRAGMENT_SHADER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VALIDATE_STATUS") ) { VALIDATE_STATUS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_UNIFORMS") ) { ACTIVE_UNIFORMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_PROGRAM") ) { CURRENT_PROGRAM=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MIRRORED_REPEAT") ) { MIRRORED_REPEAT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"DEPTH_BUFFER_BIT") ) { DEPTH_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_BUFFER_BIT") ) { COLOR_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_REF") ) { STENCIL_BACK_REF=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_ALIGNMENT") ) { UNPACK_ALIGNMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_SIZE") ) { MAX_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ATTACHED_SHADERS") ) { ATTACHED_SHADERS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP") ) { TEXTURE_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_ATTACHMENT") ) { DEPTH_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"INVALID_OPERATION") ) { INVALID_OPERATION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_CLEAR_VALUE") ) { DEPTH_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_WRITEMASK") ) { STENCIL_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FUNC") ) { STENCIL_BACK_FUNC=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_FAIL") ) { STENCIL_BACK_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_CLEAR_VALUE") ) { COLOR_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VIEWPORT_DIMS") ) { MAX_VIEWPORT_DIMS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ACTIVE_ATTRIBUTES") ) { ACTIVE_ATTRIBUTES=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT16") ) { DEPTH_COMPONENT16=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"COLOR_ATTACHMENT0") ) { COLOR_ATTACHMENT0=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"STENCIL_BUFFER_BIT") ) { STENCIL_BUFFER_BIT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SRC_ALPHA_SATURATE") ) { SRC_ALPHA_SATURATE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_RGB") ) { BLEND_EQUATION_RGB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_VALUE_MASK") ) { STENCIL_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_2D") ) { TEXTURE_BINDING_2D=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_ATTRIBS") ) { MAX_VERTEX_ATTRIBS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MAG_FILTER") ) { TEXTURE_MAG_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_MIN_FILTER") ) { TEXTURE_MIN_FILTER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_WIDTH") ) { RENDERBUFFER_WIDTH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_ATTACHMENT") ) { STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CONTEXT_LOST_WEBGL") ) { CONTEXT_LOST_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_COLOR") ) { ONE_MINUS_SRC_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_SRC_ALPHA") ) { ONE_MINUS_SRC_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_ALPHA") ) { ONE_MINUS_DST_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_DST_COLOR") ) { ONE_MINUS_DST_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FILL") ) { POLYGON_OFFSET_FILL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_CLEAR_VALUE") ) { STENCIL_CLEAR_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VARYING_VECTORS") ) { MAX_VARYING_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_HEIGHT") ) { RENDERBUFFER_HEIGHT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_BINDING") ) { FRAMEBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_FLIP_Y_WEBGL") ) { UNPACK_FLIP_Y_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"BLEND_EQUATION_ALPHA") ) { BLEND_EQUATION_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER") ) { ELEMENT_ARRAY_BUFFER=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ARRAY_BUFFER_BINDING") ) { ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_UNITS") ) { POLYGON_OFFSET_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"GENERATE_MIPMAP_HINT") ) { GENERATE_MIPMAP_HINT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_6_5") ) { UNSIGNED_SHORT_5_6_5=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_LINEAR") ) { LINEAR_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_COMPLETE") ) { FRAMEBUFFER_COMPLETE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BINDING") ) { RENDERBUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"FUNC_REVERSE_SUBTRACT") ) { FUNC_REVERSE_SUBTRACT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"CURRENT_VERTEX_ATTRIB") ) { CURRENT_VERTEX_ATTRIB=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"POLYGON_OFFSET_FACTOR") ) { POLYGON_OFFSET_FACTOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_VALUE") ) { SAMPLE_COVERAGE_VALUE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LINEAR_MIPMAP_NEAREST") ) { LINEAR_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_LINEAR") ) { NEAREST_MIPMAP_LINEAR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_RED_SIZE") ) { RENDERBUFFER_RED_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_RENDERBUFFER_SIZE") ) { MAX_RENDERBUFFER_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"BROWSER_DEFAULT_WEBGL") ) { BROWSER_DEFAULT_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_WRITEMASK") ) { STENCIL_BACK_WRITEMASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_COVERAGE_INVERT") ) { SAMPLE_COVERAGE_INVERT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_4_4_4_4") ) { UNSIGNED_SHORT_4_4_4_4=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNSIGNED_SHORT_5_5_5_1") ) { UNSIGNED_SHORT_5_5_5_1=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"NEAREST_MIPMAP_NEAREST") ) { NEAREST_MIPMAP_NEAREST=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_BLUE_SIZE") ) { RENDERBUFFER_BLUE_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_FAIL") ) { STENCIL_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_PASS_DEPTH_PASS") ) { STENCIL_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_VALUE_MASK") ) { STENCIL_BACK_VALUE_MASK=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_TEXTURE_IMAGE_UNITS") ) { MAX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_GREEN_SIZE") ) { RENDERBUFFER_GREEN_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_ALPHA_SIZE") ) { RENDERBUFFER_ALPHA_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_DEPTH_SIZE") ) { RENDERBUFFER_DEPTH_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_UNSUPPORTED") ) { FRAMEBUFFER_UNSUPPORTED=inValue.Cast< int >(); return inValue; }
		break;
	case 24:
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_COLOR") ) { ONE_MINUS_CONSTANT_COLOR=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ONE_MINUS_CONSTANT_ALPHA") ) { ONE_MINUS_CONSTANT_ALPHA=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SAMPLE_ALPHA_TO_COVERAGE") ) { SAMPLE_ALPHA_TO_COVERAGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_POINT_SIZE_RANGE") ) { ALIASED_POINT_SIZE_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ALIASED_LINE_WIDTH_RANGE") ) { ALIASED_LINE_WIDTH_RANGE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"SHADING_LANGUAGE_VERSION") ) { SHADING_LANGUAGE_VERSION=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_BINDING_CUBE_MAP") ) { TEXTURE_BINDING_CUBE_MAP=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_SIZE") ) { VERTEX_ATTRIB_ARRAY_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_TYPE") ) { VERTEX_ATTRIB_ARRAY_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"DEPTH_STENCIL_ATTACHMENT") ) { DEPTH_STENCIL_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"MAX_CUBE_MAP_TEXTURE_SIZE") ) { MAX_CUBE_MAP_TEXTURE_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_PROGRAM_POINT_SIZE") ) { VERTEX_PROGRAM_POINT_SIZE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_STENCIL_SIZE") ) { RENDERBUFFER_STENCIL_SIZE=inValue.Cast< int >(); return inValue; }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"COMPRESSED_TEXTURE_FORMATS") ) { COMPRESSED_TEXTURE_FORMATS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_UNIFORM_VECTORS") ) { MAX_VERTEX_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_STRIDE") ) { VERTEX_ATTRIB_ARRAY_STRIDE=inValue.Cast< int >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_X") ) { TEXTURE_CUBE_MAP_POSITIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_X") ) { TEXTURE_CUBE_MAP_NEGATIVE_X=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Y") ) { TEXTURE_CUBE_MAP_POSITIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Y") ) { TEXTURE_CUBE_MAP_NEGATIVE_Y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_POSITIVE_Z") ) { TEXTURE_CUBE_MAP_POSITIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"TEXTURE_CUBE_MAP_NEGATIVE_Z") ) { TEXTURE_CUBE_MAP_NEGATIVE_Z=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_ENABLED") ) { VERTEX_ATTRIB_ARRAY_ENABLED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_POINTER") ) { VERTEX_ATTRIB_ARRAY_POINTER=inValue.Cast< int >(); return inValue; }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"ELEMENT_ARRAY_BUFFER_BINDING") ) { ELEMENT_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_FAIL") ) { STENCIL_BACK_PASS_DEPTH_FAIL=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"STENCIL_BACK_PASS_DEPTH_PASS") ) { STENCIL_BACK_PASS_DEPTH_PASS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"MAX_FRAGMENT_UNIFORM_VECTORS") ) { MAX_FRAGMENT_UNIFORM_VECTORS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"RENDERBUFFER_INTERNAL_FORMAT") ) { RENDERBUFFER_INTERNAL_FORMAT=inValue.Cast< int >(); return inValue; }
		break;
	case 29:
		if (HX_FIELD_EQ(inName,"INVALID_FRAMEBUFFER_OPERATION") ) { INVALID_FRAMEBUFFER_OPERATION=inValue.Cast< int >(); return inValue; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"MAX_VERTEX_TEXTURE_IMAGE_UNITS") ) { MAX_VERTEX_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_NORMALIZED") ) { VERTEX_ATTRIB_ARRAY_NORMALIZED=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_PREMULTIPLY_ALPHA_WEBGL") ) { UNPACK_PREMULTIPLY_ALPHA_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"MAX_COMBINED_TEXTURE_IMAGE_UNITS") ) { MAX_COMBINED_TEXTURE_IMAGE_UNITS=inValue.Cast< int >(); return inValue; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_DIMENSIONS") ) { FRAMEBUFFER_INCOMPLETE_DIMENSIONS=inValue.Cast< int >(); return inValue; }
		break;
	case 34:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_BUFFER_BINDING") ) { VERTEX_ATTRIB_ARRAY_BUFFER_BINDING=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_OBJECT_NAME") ) { FRAMEBUFFER_ATTACHMENT_OBJECT_NAME=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"UNPACK_COLORSPACE_CONVERSION_WEBGL") ) { UNPACK_COLORSPACE_CONVERSION_WEBGL=inValue.Cast< int >(); return inValue; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT") ) { FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT=inValue.Cast< int >(); return inValue; }
		break;
	case 44:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE") ) { FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderContext_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"));
	outFields->push(HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"));
	outFields->push(HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"));
	outFields->push(HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"));
	outFields->push(HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"));
	outFields->push(HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"));
	outFields->push(HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"));
	outFields->push(HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"));
	outFields->push(HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"));
	outFields->push(HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"));
	outFields->push(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"));
	outFields->push(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"));
	outFields->push(HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"));
	outFields->push(HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"));
	outFields->push(HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"));
	outFields->push(HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"));
	outFields->push(HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"));
	outFields->push(HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"));
	outFields->push(HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"));
	outFields->push(HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"));
	outFields->push(HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"));
	outFields->push(HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"));
	outFields->push(HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"));
	outFields->push(HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"));
	outFields->push(HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"));
	outFields->push(HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"));
	outFields->push(HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"));
	outFields->push(HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"));
	outFields->push(HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"));
	outFields->push(HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"));
	outFields->push(HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"));
	outFields->push(HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"));
	outFields->push(HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"));
	outFields->push(HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"));
	outFields->push(HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"));
	outFields->push(HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"));
	outFields->push(HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"));
	outFields->push(HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"));
	outFields->push(HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"));
	outFields->push(HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"));
	outFields->push(HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"));
	outFields->push(HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"));
	outFields->push(HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"));
	outFields->push(HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"));
	outFields->push(HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"));
	outFields->push(HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"));
	outFields->push(HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"));
	outFields->push(HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"));
	outFields->push(HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"));
	outFields->push(HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"));
	outFields->push(HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"));
	outFields->push(HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"));
	outFields->push(HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"));
	outFields->push(HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"));
	outFields->push(HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"));
	outFields->push(HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"));
	outFields->push(HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"));
	outFields->push(HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"));
	outFields->push(HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"));
	outFields->push(HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"));
	outFields->push(HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"));
	outFields->push(HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"));
	outFields->push(HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"));
	outFields->push(HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"));
	outFields->push(HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"));
	outFields->push(HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"));
	outFields->push(HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"));
	outFields->push(HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"));
	outFields->push(HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"));
	outFields->push(HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"));
	outFields->push(HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"));
	outFields->push(HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"));
	outFields->push(HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"));
	outFields->push(HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"));
	outFields->push(HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"));
	outFields->push(HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"));
	outFields->push(HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"));
	outFields->push(HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"));
	outFields->push(HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"));
	outFields->push(HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"));
	outFields->push(HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"));
	outFields->push(HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"));
	outFields->push(HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"));
	outFields->push(HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"));
	outFields->push(HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"));
	outFields->push(HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"));
	outFields->push(HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"));
	outFields->push(HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"));
	outFields->push(HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"));
	outFields->push(HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"));
	outFields->push(HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"));
	outFields->push(HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"));
	outFields->push(HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"));
	outFields->push(HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"));
	outFields->push(HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"));
	outFields->push(HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"));
	outFields->push(HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"));
	outFields->push(HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"));
	outFields->push(HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"));
	outFields->push(HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"));
	outFields->push(HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"));
	outFields->push(HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"));
	outFields->push(HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"));
	outFields->push(HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"));
	outFields->push(HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"));
	outFields->push(HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"));
	outFields->push(HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"));
	outFields->push(HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"));
	outFields->push(HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"));
	outFields->push(HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"));
	outFields->push(HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"));
	outFields->push(HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91"));
	outFields->push(HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"));
	outFields->push(HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"));
	outFields->push(HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"));
	outFields->push(HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"));
	outFields->push(HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"));
	outFields->push(HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"));
	outFields->push(HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"));
	outFields->push(HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"));
	outFields->push(HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"));
	outFields->push(HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"));
	outFields->push(HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"));
	outFields->push(HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"));
	outFields->push(HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"));
	outFields->push(HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"));
	outFields->push(HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"));
	outFields->push(HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"));
	outFields->push(HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"));
	outFields->push(HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"));
	outFields->push(HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"));
	outFields->push(HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"));
	outFields->push(HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"));
	outFields->push(HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"));
	outFields->push(HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"));
	outFields->push(HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"));
	outFields->push(HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"));
	outFields->push(HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"));
	outFields->push(HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"));
	outFields->push(HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"));
	outFields->push(HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"));
	outFields->push(HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"));
	outFields->push(HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"));
	outFields->push(HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"));
	outFields->push(HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"));
	outFields->push(HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"));
	outFields->push(HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"));
	outFields->push(HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"));
	outFields->push(HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"));
	outFields->push(HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"));
	outFields->push(HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"));
	outFields->push(HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"));
	outFields->push(HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"));
	outFields->push(HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"));
	outFields->push(HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"));
	outFields->push(HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"));
	outFields->push(HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"));
	outFields->push(HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"));
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"));
	outFields->push(HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"));
	outFields->push(HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"));
	outFields->push(HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"));
	outFields->push(HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"));
	outFields->push(HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"));
	outFields->push(HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"));
	outFields->push(HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"));
	outFields->push(HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"));
	outFields->push(HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"));
	outFields->push(HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"));
	outFields->push(HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"));
	outFields->push(HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"));
	outFields->push(HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"));
	outFields->push(HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"));
	outFields->push(HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"));
	outFields->push(HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"));
	outFields->push(HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"));
	outFields->push(HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"));
	outFields->push(HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"));
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"));
	outFields->push(HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"));
	outFields->push(HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"));
	outFields->push(HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"));
	outFields->push(HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"));
	outFields->push(HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"));
	outFields->push(HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"));
	outFields->push(HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"));
	outFields->push(HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"));
	outFields->push(HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"));
	outFields->push(HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"));
	outFields->push(HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"));
	outFields->push(HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"));
	outFields->push(HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"));
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"));
	outFields->push(HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"));
	outFields->push(HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"));
	outFields->push(HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"));
	outFields->push(HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"));
	outFields->push(HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"));
	outFields->push(HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"));
	outFields->push(HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"));
	outFields->push(HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"));
	outFields->push(HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"));
	outFields->push(HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"));
	outFields->push(HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"));
	outFields->push(HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"));
	outFields->push(HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"));
	outFields->push(HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"));
	outFields->push(HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"));
	outFields->push(HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"));
	outFields->push(HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_BUFFER_BIT),HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BUFFER_BIT),HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_BUFFER_BIT),HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POINTS),HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINES),HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_LOOP),HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_STRIP),HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLES),HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLE_STRIP),HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TRIANGLE_FAN),HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ZERO),HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE),HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_COLOR),HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_SRC_COLOR),HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_ALPHA),HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_SRC_ALPHA),HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DST_ALPHA),HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_DST_ALPHA),HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DST_COLOR),HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_DST_COLOR),HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SRC_ALPHA_SATURATE),HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_ADD),HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION),HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION_RGB),HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_EQUATION_ALPHA),HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_SUBTRACT),HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FUNC_REVERSE_SUBTRACT),HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_DST_RGB),HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_SRC_RGB),HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_DST_ALPHA),HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_SRC_ALPHA),HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONSTANT_COLOR),HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_CONSTANT_COLOR),HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONSTANT_ALPHA),HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ONE_MINUS_CONSTANT_ALPHA),HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND_COLOR),HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ARRAY_BUFFER),HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ELEMENT_ARRAY_BUFFER),HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ARRAY_BUFFER_BINDING),HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ELEMENT_ARRAY_BUFFER_BINDING),HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STREAM_DRAW),HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STATIC_DRAW),HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DYNAMIC_DRAW),HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BUFFER_SIZE),HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BUFFER_USAGE),HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CURRENT_VERTEX_ATTRIB),HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT),HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BACK),HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT_AND_BACK),HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CULL_FACE),HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLEND),HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DITHER),HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_TEST),HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_TEST),HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SCISSOR_TEST),HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_FILL),HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_ALPHA_TO_COVERAGE),HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE),HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NO_ERROR),HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_ENUM),HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_VALUE),HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_OPERATION),HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,OUT_OF_MEMORY),HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CW),HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CCW),HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINE_WIDTH),HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALIASED_POINT_SIZE_RANGE),HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALIASED_LINE_WIDTH_RANGE),HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CULL_FACE_MODE),HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRONT_FACE),HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_RANGE),HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_WRITEMASK),HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_CLEAR_VALUE),HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_FUNC),HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_CLEAR_VALUE),HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_FUNC),HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_FAIL),HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_PASS_DEPTH_FAIL),HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_PASS_DEPTH_PASS),HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_REF),HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_VALUE_MASK),HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_WRITEMASK),HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_FUNC),HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_FAIL),HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_FAIL),HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_PASS_DEPTH_PASS),HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_REF),HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_VALUE_MASK),HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BACK_WRITEMASK),HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VIEWPORT),HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SCISSOR_BOX),HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_CLEAR_VALUE),HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_WRITEMASK),HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_ALIGNMENT),HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,PACK_ALIGNMENT),HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_TEXTURE_SIZE),HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VIEWPORT_DIMS),HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SUBPIXEL_BITS),HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RED_BITS),HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GREEN_BITS),HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BLUE_BITS),HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALPHA_BITS),HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_BITS),HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_BITS),HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_UNITS),HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POLYGON_OFFSET_FACTOR),HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_BINDING_2D),HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_BUFFERS),HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLES),HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE_VALUE),HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLE_COVERAGE_INVERT),HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COMPRESSED_TEXTURE_FORMATS),HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DONT_CARE),HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FASTEST),HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NICEST),HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GENERATE_MIPMAP_HINT),HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BYTE),HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_BYTE),HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHORT),HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT),HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT),HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_INT),HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT),HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_COMPONENT),HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALPHA),HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB),HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGBA),HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BGR_EXT),HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BGRA_EXT),HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LUMINANCE),HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LUMINANCE_ALPHA),HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_4_4_4_4),HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_5_5_5_1),HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNSIGNED_SHORT_5_6_5),HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAGMENT_SHADER),HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_SHADER),HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_ATTRIBS),HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_UNIFORM_VECTORS),HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VARYING_VECTORS),HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_COMBINED_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_VERTEX_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_TEXTURE_IMAGE_UNITS),HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_FRAGMENT_UNIFORM_VECTORS),HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHADER_TYPE),HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DELETE_STATUS),HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINK_STATUS),HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VALIDATE_STATUS),HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ATTACHED_SHADERS),HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_UNIFORMS),HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_ATTRIBUTES),HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SHADING_LANGUAGE_VERSION),HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CURRENT_PROGRAM),HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEVER),HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LESS),HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,EQUAL),HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LEQUAL),HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GREATER),HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NOTEQUAL),HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,GEQUAL),HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ALWAYS),HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,KEEP),HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,REPLACE),HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INCR),HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DECR),HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVERT),HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INCR_WRAP),HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DECR_WRAP),HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VENDOR),HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERER),HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERSION),HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST),HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR),HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST_MIPMAP_NEAREST),HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR_MIPMAP_NEAREST),HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NEAREST_MIPMAP_LINEAR),HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LINEAR_MIPMAP_LINEAR),HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_MAG_FILTER),HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_MIN_FILTER),HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_WRAP_S),HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_WRAP_T),HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_2D),HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE),HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP),HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_BINDING_CUBE_MAP),HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_X),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_X),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Y),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Y),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_POSITIVE_Z),HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE_CUBE_MAP_NEGATIVE_Z),HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_CUBE_MAP_TEXTURE_SIZE),HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE0),HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE1),HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE2),HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE3),HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE4),HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE5),HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE6),HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE7),HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE8),HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE9),HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE10),HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE11),HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE12),HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE13),HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE14),HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE15),HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE16),HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE17),HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE18),HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE19),HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE20),HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE21),HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE22),HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE23),HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE24),HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE25),HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE26),HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE27),HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE28),HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE29),HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE30),HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,TEXTURE31),HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,ACTIVE_TEXTURE),HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,REPEAT),HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CLAMP_TO_EDGE),HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MIRRORED_REPEAT),HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC2),HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC3),HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_VEC4),HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC2),HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC3),HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INT_VEC4),HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL),HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC2),HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC3),HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BOOL_VEC4),HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT2),HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT3),HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FLOAT_MAT4),HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLER_2D),HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,SAMPLER_CUBE),HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_ENABLED),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_SIZE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_STRIDE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_TYPE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_NORMALIZED),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_POINTER),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_ATTRIB_ARRAY_BUFFER_BINDING),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,VERTEX_PROGRAM_POINT_SIZE),HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,POINT_SPRITE),HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COMPILE_STATUS),HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LOW_FLOAT),HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MEDIUM_FLOAT),HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,HIGH_FLOAT),HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,LOW_INT),HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MEDIUM_INT),HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,HIGH_INT),HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER),HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER),HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGBA4),HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB5_A1),HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RGB565),HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_COMPONENT16),HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_INDEX),HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_INDEX8),HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_STENCIL),HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_WIDTH),HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_HEIGHT),HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_INTERNAL_FORMAT),HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_RED_SIZE),HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_GREEN_SIZE),HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_BLUE_SIZE),HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_ALPHA_SIZE),HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_DEPTH_SIZE),HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_STENCIL_SIZE),HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_OBJECT_NAME),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,COLOR_ATTACHMENT0),HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_ATTACHMENT),HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,STENCIL_ATTACHMENT),HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,DEPTH_STENCIL_ATTACHMENT),HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,NONE),HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_COMPLETE),HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_ATTACHMENT),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_INCOMPLETE_DIMENSIONS),HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_UNSUPPORTED),HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,FRAMEBUFFER_BINDING),HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,RENDERBUFFER_BINDING),HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,MAX_RENDERBUFFER_SIZE),HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,INVALID_FRAMEBUFFER_OPERATION),HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_FLIP_Y_WEBGL),HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_PREMULTIPLY_ALPHA_WEBGL),HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,CONTEXT_LOST_WEBGL),HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,UNPACK_COLORSPACE_CONVERSION_WEBGL),HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,BROWSER_DEFAULT_WEBGL),HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0")},
	{hx::fsInt,(int)offsetof(GLRenderContext_obj,version),HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("DEPTH_BUFFER_BIT","\xca","\x5b","\xce","\xc6"),
	HX_HCSTRING("STENCIL_BUFFER_BIT","\x71","\x93","\x29","\xde"),
	HX_HCSTRING("COLOR_BUFFER_BIT","\x6a","\xf7","\x74","\xfb"),
	HX_HCSTRING("POINTS","\x23","\xbe","\xb0","\xa9"),
	HX_HCSTRING("LINES","\xdf","\x15","\xf0","\xf2"),
	HX_HCSTRING("LINE_LOOP","\xcf","\x55","\xc1","\x16"),
	HX_HCSTRING("LINE_STRIP","\xed","\x20","\x88","\xdd"),
	HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),
	HX_HCSTRING("TRIANGLE_STRIP","\xc1","\x66","\x6c","\xf6"),
	HX_HCSTRING("TRIANGLE_FAN","\x7c","\xee","\x2e","\x91"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("SRC_COLOR","\x48","\x9e","\xbd","\x5c"),
	HX_HCSTRING("ONE_MINUS_SRC_COLOR","\x20","\x3b","\xe1","\x48"),
	HX_HCSTRING("SRC_ALPHA","\x43","\xd4","\xf7","\x33"),
	HX_HCSTRING("ONE_MINUS_SRC_ALPHA","\x1b","\x71","\x1b","\x20"),
	HX_HCSTRING("DST_ALPHA","\x24","\x02","\xf2","\xd3"),
	HX_HCSTRING("ONE_MINUS_DST_ALPHA","\xfc","\x9e","\x15","\xc0"),
	HX_HCSTRING("DST_COLOR","\x29","\xcc","\xb7","\xfc"),
	HX_HCSTRING("ONE_MINUS_DST_COLOR","\x01","\x69","\xdb","\xe8"),
	HX_HCSTRING("SRC_ALPHA_SATURATE","\xab","\xe2","\x3d","\x33"),
	HX_HCSTRING("FUNC_ADD","\x46","\x78","\x17","\x75"),
	HX_HCSTRING("BLEND_EQUATION","\x9a","\x14","\x92","\x71"),
	HX_HCSTRING("BLEND_EQUATION_RGB","\x88","\x25","\xeb","\x90"),
	HX_HCSTRING("BLEND_EQUATION_ALPHA","\x99","\xaa","\xae","\x37"),
	HX_HCSTRING("FUNC_SUBTRACT","\xaf","\xc0","\xa0","\x17"),
	HX_HCSTRING("FUNC_REVERSE_SUBTRACT","\xcc","\x8d","\xef","\xf3"),
	HX_HCSTRING("BLEND_DST_RGB","\x05","\x87","\xf5","\xec"),
	HX_HCSTRING("BLEND_SRC_RGB","\x64","\x43","\x8c","\x2c"),
	HX_HCSTRING("BLEND_DST_ALPHA","\x56","\x25","\x32","\x74"),
	HX_HCSTRING("BLEND_SRC_ALPHA","\x75","\xf7","\x37","\xd4"),
	HX_HCSTRING("CONSTANT_COLOR","\xe8","\x64","\x8a","\xc8"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_COLOR","\x10","\x39","\xe7","\x06"),
	HX_HCSTRING("CONSTANT_ALPHA","\xe3","\x9a","\xc4","\x9f"),
	HX_HCSTRING("ONE_MINUS_CONSTANT_ALPHA","\x0b","\x6f","\x21","\xde"),
	HX_HCSTRING("BLEND_COLOR","\x75","\xcb","\xc8","\x67"),
	HX_HCSTRING("ARRAY_BUFFER","\x46","\x66","\x17","\xf4"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER","\x09","\x05","\x53","\x3d"),
	HX_HCSTRING("ARRAY_BUFFER_BINDING","\xec","\xd4","\xa9","\x79"),
	HX_HCSTRING("ELEMENT_ARRAY_BUFFER_BINDING","\xaf","\x6e","\x96","\xa2"),
	HX_HCSTRING("STREAM_DRAW","\x63","\x7f","\x28","\x15"),
	HX_HCSTRING("STATIC_DRAW","\x75","\x50","\x2f","\xba"),
	HX_HCSTRING("DYNAMIC_DRAW","\x24","\x04","\x1f","\x24"),
	HX_HCSTRING("BUFFER_SIZE","\xa0","\x7b","\x91","\x4c"),
	HX_HCSTRING("BUFFER_USAGE","\x42","\x05","\x11","\xe0"),
	HX_HCSTRING("CURRENT_VERTEX_ATTRIB","\x1f","\x8c","\x2f","\xab"),
	HX_HCSTRING("FRONT","\x89","\x50","\x7c","\x84"),
	HX_HCSTRING("BACK","\x27","\xa2","\xd1","\x2b"),
	HX_HCSTRING("FRONT_AND_BACK","\xa5","\x3d","\x6a","\xc1"),
	HX_HCSTRING("CULL_FACE","\x8a","\xa5","\xf4","\xcf"),
	HX_HCSTRING("BLEND","\x31","\x20","\xe3","\x32"),
	HX_HCSTRING("DITHER","\xe6","\xac","\x41","\x70"),
	HX_HCSTRING("STENCIL_TEST","\xd5","\xdc","\x69","\xd5"),
	HX_HCSTRING("DEPTH_TEST","\x6e","\x6c","\x25","\x28"),
	HX_HCSTRING("SCISSOR_TEST","\xb5","\xbe","\x51","\x59"),
	HX_HCSTRING("POLYGON_OFFSET_FILL","\x4a","\x3d","\x32","\xac"),
	HX_HCSTRING("SAMPLE_ALPHA_TO_COVERAGE","\x16","\x3e","\x56","\xe1"),
	HX_HCSTRING("SAMPLE_COVERAGE","\xdd","\xb7","\x0e","\xc1"),
	HX_HCSTRING("NO_ERROR","\xea","\xb5","\x7d","\x2f"),
	HX_HCSTRING("INVALID_ENUM","\xa9","\x74","\x70","\x13"),
	HX_HCSTRING("INVALID_VALUE","\xa9","\xe8","\x26","\xb0"),
	HX_HCSTRING("INVALID_OPERATION","\x5f","\xb1","\xc8","\x29"),
	HX_HCSTRING("OUT_OF_MEMORY","\x18","\xf2","\x97","\xe1"),
	HX_HCSTRING("CW","\xb4","\x3a","\x00","\x00"),
	HX_HCSTRING("CCW","\xb7","\x11","\x33","\x00"),
	HX_HCSTRING("LINE_WIDTH","\x1b","\x84","\xd2","\x23"),
	HX_HCSTRING("ALIASED_POINT_SIZE_RANGE","\xfe","\xf6","\xa4","\x7b"),
	HX_HCSTRING("ALIASED_LINE_WIDTH_RANGE","\xe9","\x22","\xd5","\x8a"),
	HX_HCSTRING("CULL_FACE_MODE","\x78","\xbd","\x87","\xd1"),
	HX_HCSTRING("FRONT_FACE","\x53","\xb7","\x4d","\xef"),
	HX_HCSTRING("DEPTH_RANGE","\x01","\x9a","\x23","\xcf"),
	HX_HCSTRING("DEPTH_WRITEMASK","\x8f","\x37","\x3f","\x66"),
	HX_HCSTRING("DEPTH_CLEAR_VALUE","\x23","\x17","\x0d","\x1b"),
	HX_HCSTRING("DEPTH_FUNC","\x60","\x8f","\xf0","\x1e"),
	HX_HCSTRING("STENCIL_CLEAR_VALUE","\x9c","\x91","\x82","\x73"),
	HX_HCSTRING("STENCIL_FUNC","\xc7","\xff","\x34","\xcc"),
	HX_HCSTRING("STENCIL_FAIL","\x61","\xce","\x25","\xcc"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_FAIL","\x45","\xca","\xb9","\xc8"),
	HX_HCSTRING("STENCIL_PASS_DEPTH_PASS","\x38","\xf5","\x55","\xcf"),
	HX_HCSTRING("STENCIL_REF","\x10","\x6a","\xa5","\x3c"),
	HX_HCSTRING("STENCIL_VALUE_MASK","\x9d","\x58","\x5e","\xa0"),
	HX_HCSTRING("STENCIL_WRITEMASK","\xc8","\xf1","\xa6","\x49"),
	HX_HCSTRING("STENCIL_BACK_FUNC","\x39","\x78","\xa2","\x90"),
	HX_HCSTRING("STENCIL_BACK_FAIL","\xd3","\x46","\x93","\x90"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_FAIL","\x13","\x23","\x0e","\x34"),
	HX_HCSTRING("STENCIL_BACK_PASS_DEPTH_PASS","\x06","\x4e","\xaa","\x3a"),
	HX_HCSTRING("STENCIL_BACK_REF","\xde","\x45","\xb8","\x08"),
	HX_HCSTRING("STENCIL_BACK_VALUE_MASK","\x8f","\xb2","\xc4","\x88"),
	HX_HCSTRING("STENCIL_BACK_WRITEMASK","\x16","\x9c","\x15","\xc2"),
	HX_HCSTRING("VIEWPORT","\x66","\xdc","\x2a","\xf6"),
	HX_HCSTRING("SCISSOR_BOX","\xe8","\x48","\x4c","\x55"),
	HX_HCSTRING("COLOR_CLEAR_VALUE","\x83","\xa7","\x2e","\xf8"),
	HX_HCSTRING("COLOR_WRITEMASK","\xef","\xef","\xf9","\x14"),
	HX_HCSTRING("UNPACK_ALIGNMENT","\xb6","\x2a","\x2e","\x4b"),
	HX_HCSTRING("PACK_ALIGNMENT","\x9d","\xd6","\x85","\xc3"),
	HX_HCSTRING("MAX_TEXTURE_SIZE","\xe0","\x0b","\x5b","\xfb"),
	HX_HCSTRING("MAX_VIEWPORT_DIMS","\xa9","\x2d","\xfb","\x08"),
	HX_HCSTRING("SUBPIXEL_BITS","\x1f","\xac","\x14","\x0a"),
	HX_HCSTRING("RED_BITS","\x14","\xf8","\x9e","\x96"),
	HX_HCSTRING("GREEN_BITS","\x62","\xa9","\x9b","\x94"),
	HX_HCSTRING("BLUE_BITS","\x0b","\x26","\x60","\xa1"),
	HX_HCSTRING("ALPHA_BITS","\xe7","\xfe","\x7b","\xe0"),
	HX_HCSTRING("DEPTH_BITS","\x22","\x9f","\x42","\x1c"),
	HX_HCSTRING("STENCIL_BITS","\x89","\x0f","\x87","\xc9"),
	HX_HCSTRING("POLYGON_OFFSET_UNITS","\xa8","\xe8","\x11","\xa6"),
	HX_HCSTRING("POLYGON_OFFSET_FACTOR","\x56","\x6b","\x12","\x2a"),
	HX_HCSTRING("TEXTURE_BINDING_2D","\x30","\xec","\x98","\xb1"),
	HX_HCSTRING("SAMPLE_BUFFERS","\xfe","\x16","\x71","\x3c"),
	HX_HCSTRING("SAMPLES","\xe9","\x98","\x9d","\x03"),
	HX_HCSTRING("SAMPLE_COVERAGE_VALUE","\x2f","\x7a","\x07","\x69"),
	HX_HCSTRING("SAMPLE_COVERAGE_INVERT","\x78","\x52","\xa5","\xcd"),
	HX_HCSTRING("COMPRESSED_TEXTURE_FORMATS","\x7a","\x13","\xe3","\x12"),
	HX_HCSTRING("DONT_CARE","\x7f","\x9b","\xc1","\xcf"),
	HX_HCSTRING("FASTEST","\x0a","\xa3","\x0d","\x5e"),
	HX_HCSTRING("NICEST","\x7e","\x6d","\x94","\x64"),
	HX_HCSTRING("GENERATE_MIPMAP_HINT","\x94","\xd3","\xd5","\x83"),
	HX_HCSTRING("BYTE","\x08","\xe7","\xe3","\x2b"),
	HX_HCSTRING("UNSIGNED_BYTE","\xd2","\x79","\x6b","\x01"),
	HX_HCSTRING("SHORT","\x5c","\xbc","\x15","\xfa"),
	HX_HCSTRING("UNSIGNED_SHORT","\x52","\x9a","\x2e","\xfb"),
	HX_HCSTRING("INT","\xcf","\xa8","\x37","\x00"),
	HX_HCSTRING("UNSIGNED_INT","\x45","\xfd","\xb9","\x1c"),
	HX_HCSTRING("FLOAT","\x7c","\xfd","\x84","\x80"),
	HX_HCSTRING("DEPTH_COMPONENT","\x01","\x1f","\x62","\x0f"),
	HX_HCSTRING("ALPHA","\x3e","\xdf","\x84","\x9f"),
	HX_HCSTRING("RGB","\xed","\x76","\x3e","\x00"),
	HX_HCSTRING("RGBA","\xb4","\x98","\x69","\x36"),
	HX_HCSTRING("BGR_EXT","\xef","\xba","\xba","\x91"),
	HX_HCSTRING("BGRA_EXT","\x36","\x94","\xc4","\xbc"),
	HX_HCSTRING("LUMINANCE","\xd8","\xa7","\xe0","\x63"),
	HX_HCSTRING("LUMINANCE_ALPHA","\x57","\x40","\xe0","\xbd"),
	HX_HCSTRING("UNSIGNED_SHORT_4_4_4_4","\xa6","\x33","\x71","\x7b"),
	HX_HCSTRING("UNSIGNED_SHORT_5_5_5_1","\x26","\x01","\x6e","\x38"),
	HX_HCSTRING("UNSIGNED_SHORT_5_6_5","\x75","\xbb","\x16","\x8c"),
	HX_HCSTRING("FRAGMENT_SHADER","\xf4","\x26","\x78","\xe9"),
	HX_HCSTRING("VERTEX_SHADER","\xe0","\x69","\x73","\x49"),
	HX_HCSTRING("MAX_VERTEX_ATTRIBS","\x49","\xc9","\x15","\x5f"),
	HX_HCSTRING("MAX_VERTEX_UNIFORM_VECTORS","\x45","\x6c","\x16","\x5a"),
	HX_HCSTRING("MAX_VARYING_VECTORS","\x06","\xb9","\xf7","\x37"),
	HX_HCSTRING("MAX_COMBINED_TEXTURE_IMAGE_UNITS","\xa8","\xd1","\xa6","\x77"),
	HX_HCSTRING("MAX_VERTEX_TEXTURE_IMAGE_UNITS","\xc7","\x90","\x95","\x2b"),
	HX_HCSTRING("MAX_TEXTURE_IMAGE_UNITS","\xcc","\x6c","\x61","\x54"),
	HX_HCSTRING("MAX_FRAGMENT_UNIFORM_VECTORS","\x71","\x49","\xf5","\x0a"),
	HX_HCSTRING("SHADER_TYPE","\x54","\xe5","\x27","\x87"),
	HX_HCSTRING("DELETE_STATUS","\x06","\xe4","\x98","\x1e"),
	HX_HCSTRING("LINK_STATUS","\x17","\x18","\x8f","\x45"),
	HX_HCSTRING("VALIDATE_STATUS","\xfb","\x22","\x07","\xc6"),
	HX_HCSTRING("ATTACHED_SHADERS","\x73","\xd2","\x76","\x75"),
	HX_HCSTRING("ACTIVE_UNIFORMS","\x98","\x7d","\x3a","\x2c"),
	HX_HCSTRING("ACTIVE_ATTRIBUTES","\xf0","\xe5","\xc7","\x4a"),
	HX_HCSTRING("SHADING_LANGUAGE_VERSION","\xe6","\xc4","\xef","\x70"),
	HX_HCSTRING("CURRENT_PROGRAM","\xfe","\x28","\xc0","\x3f"),
	HX_HCSTRING("NEVER","\x6c","\x76","\x1e","\x17"),
	HX_HCSTRING("LESS","\x59","\xdb","\x70","\x32"),
	HX_HCSTRING("EQUAL","\x94","\x07","\x71","\xf0"),
	HX_HCSTRING("LEQUAL","\xc8","\x73","\x90","\x53"),
	HX_HCSTRING("GREATER","\xda","\x64","\x94","\x37"),
	HX_HCSTRING("NOTEQUAL","\xc1","\xc1","\xe9","\xc8"),
	HX_HCSTRING("GEQUAL","\xed","\xa5","\xc7","\x53"),
	HX_HCSTRING("ALWAYS","\xcf","\xba","\x59","\xf9"),
	HX_HCSTRING("KEEP","\x85","\x98","\xc7","\x31"),
	HX_HCSTRING("REPLACE","\x14","\x1c","\xfc","\x2a"),
	HX_HCSTRING("INCR","\xd4","\xfd","\x7b","\x30"),
	HX_HCSTRING("DECR","\x70","\x18","\x27","\x2d"),
	HX_HCSTRING("INVERT","\x16","\x93","\x5b","\x52"),
	HX_HCSTRING("INCR_WRAP","\x55","\x7f","\x68","\x2c"),
	HX_HCSTRING("DECR_WRAP","\x39","\x6f","\xeb","\x0a"),
	HX_HCSTRING("VENDOR","\x88","\x91","\x19","\x51"),
	HX_HCSTRING("RENDERER","\x43","\x55","\x61","\x0c"),
	HX_HCSTRING("VERSION","\xf8","\xba","\xc5","\xfc"),
	HX_HCSTRING("NEAREST","\x3e","\xec","\x9d","\xe5"),
	HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),
	HX_HCSTRING("NEAREST_MIPMAP_NEAREST","\x68","\xb9","\x63","\x7e"),
	HX_HCSTRING("LINEAR_MIPMAP_NEAREST","\xa1","\x9b","\xa4","\x65"),
	HX_HCSTRING("NEAREST_MIPMAP_LINEAR","\xfb","\x83","\xf2","\x3b"),
	HX_HCSTRING("LINEAR_MIPMAP_LINEAR","\xe2","\x8b","\xf8","\x99"),
	HX_HCSTRING("TEXTURE_MAG_FILTER","\x88","\xff","\xd5","\x1e"),
	HX_HCSTRING("TEXTURE_MIN_FILTER","\x69","\x66","\xc2","\x46"),
	HX_HCSTRING("TEXTURE_WRAP_S","\xa2","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_WRAP_T","\xa3","\x2d","\xc3","\xfe"),
	HX_HCSTRING("TEXTURE_2D","\x16","\x0c","\xf8","\xa2"),
	HX_HCSTRING("TEXTURE","\xbb","\x9c","\xb4","\x1e"),
	HX_HCSTRING("TEXTURE_CUBE_MAP","\x36","\x7a","\xe1","\xad"),
	HX_HCSTRING("TEXTURE_BINDING_CUBE_MAP","\xd0","\x69","\x98","\x75"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_X","\xbb","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_X","\x77","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Y","\xbc","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Y","\x78","\x03","\xe2","\x6b"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_POSITIVE_Z","\xbd","\x1c","\xee","\x24"),
	HX_HCSTRING("TEXTURE_CUBE_MAP_NEGATIVE_Z","\x79","\x03","\xe2","\x6b"),
	HX_HCSTRING("MAX_CUBE_MAP_TEXTURE_SIZE","\x77","\xb9","\x24","\x9d"),
	HX_HCSTRING("TEXTURE0","\x15","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE1","\x16","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE2","\x17","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE3","\x18","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE4","\x19","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE5","\x1a","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE6","\x1b","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE7","\x1c","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE8","\x1d","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE9","\x1e","\x87","\x54","\xbf"),
	HX_HCSTRING("TEXTURE10","\x5a","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE11","\x5b","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE12","\x5c","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE13","\x5d","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE14","\x5e","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE15","\x5f","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE16","\x60","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE17","\x61","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE18","\x62","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE19","\x63","\xac","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE20","\x39","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE21","\x3a","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE22","\x3b","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE23","\x3c","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE24","\x3d","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE25","\x3e","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE26","\x3f","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE27","\x40","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE28","\x41","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE29","\x42","\xad","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE30","\x18","\xae","\xa1","\xaa"),
	HX_HCSTRING("TEXTURE31","\x19","\xae","\xa1","\xaa"),
	HX_HCSTRING("ACTIVE_TEXTURE","\x02","\x1a","\x22","\xce"),
	HX_HCSTRING("REPEAT","\x5b","\x43","\xff","\xb8"),
	HX_HCSTRING("CLAMP_TO_EDGE","\x1d","\xfc","\x5a","\x96"),
	HX_HCSTRING("MIRRORED_REPEAT","\x5c","\x94","\x80","\x4a"),
	HX_HCSTRING("FLOAT_VEC2","\x61","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC3","\x62","\xac","\xa4","\xeb"),
	HX_HCSTRING("FLOAT_VEC4","\x63","\xac","\xa4","\xeb"),
	HX_HCSTRING("INT_VEC2","\x2e","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC3","\x2f","\x14","\x05","\x7d"),
	HX_HCSTRING("INT_VEC4","\x30","\x14","\x05","\x7d"),
	HX_HCSTRING("BOOL","\x2a","\x4c","\xdc","\x2b"),
	HX_HCSTRING("BOOL_VEC2","\xf3","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC3","\xf4","\x66","\x2b","\x2d"),
	HX_HCSTRING("BOOL_VEC4","\xf5","\x66","\x2b","\x2d"),
	HX_HCSTRING("FLOAT_MAT2","\x95","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT3","\x96","\xc6","\xae","\xe5"),
	HX_HCSTRING("FLOAT_MAT4","\x97","\xc6","\xae","\xe5"),
	HX_HCSTRING("SAMPLER_2D","\x09","\x2a","\x93","\x6e"),
	HX_HCSTRING("SAMPLER_CUBE","\xec","\x3e","\x82","\xa4"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_ENABLED","\x61","\x99","\x09","\x66"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_SIZE","\xc1","\x07","\xfd","\x08"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_STRIDE","\x19","\x2b","\x41","\x58"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_TYPE","\xba","\x59","\xb2","\x09"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_NORMALIZED","\x37","\xb7","\x22","\x78"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_POINTER","\x9d","\x55","\xfa","\x38"),
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_BUFFER_BINDING","\xa6","\x80","\x67","\x97"),
	HX_HCSTRING("VERTEX_PROGRAM_POINT_SIZE","\xe6","\x56","\xbe","\x34"),
	HX_HCSTRING("POINT_SPRITE","\x74","\x93","\x5c","\x14"),
	HX_HCSTRING("COMPILE_STATUS","\xde","\xcb","\x4e","\x8c"),
	HX_HCSTRING("LOW_FLOAT","\x31","\x04","\x74","\xe4"),
	HX_HCSTRING("MEDIUM_FLOAT","\xf2","\x8a","\x46","\xb9"),
	HX_HCSTRING("HIGH_FLOAT","\x9f","\xf9","\x3b","\x47"),
	HX_HCSTRING("LOW_INT","\x44","\x28","\x70","\x45"),
	HX_HCSTRING("MEDIUM_INT","\xc5","\xcc","\xaf","\x4f"),
	HX_HCSTRING("HIGH_INT","\x32","\x46","\x02","\x09"),
	HX_HCSTRING("FRAMEBUFFER","\xcd","\x20","\x84","\x50"),
	HX_HCSTRING("RENDERBUFFER","\xd6","\xa4","\xa4","\xa9"),
	HX_HCSTRING("RGBA4","\x00","\x05","\xfc","\x65"),
	HX_HCSTRING("RGB5_A1","\x47","\x8f","\xf9","\xd8"),
	HX_HCSTRING("RGB565","\xe7","\x41","\x7f","\xd6"),
	HX_HCSTRING("DEPTH_COMPONENT16","\x26","\xcc","\x68","\x43"),
	HX_HCSTRING("STENCIL_INDEX","\x0f","\x79","\xb6","\x97"),
	HX_HCSTRING("STENCIL_INDEX8","\x49","\x74","\xf3","\x27"),
	HX_HCSTRING("DEPTH_STENCIL","\x40","\x2f","\x20","\x2b"),
	HX_HCSTRING("RENDERBUFFER_WIDTH","\x7d","\x1e","\xe1","\x43"),
	HX_HCSTRING("RENDERBUFFER_HEIGHT","\x70","\x07","\x69","\xd7"),
	HX_HCSTRING("RENDERBUFFER_INTERNAL_FORMAT","\x90","\xda","\xeb","\xb5"),
	HX_HCSTRING("RENDERBUFFER_RED_SIZE","\x98","\xa5","\x58","\x5e"),
	HX_HCSTRING("RENDERBUFFER_GREEN_SIZE","\x26","\x9b","\x7d","\x3b"),
	HX_HCSTRING("RENDERBUFFER_BLUE_SIZE","\xdd","\x93","\x86","\xdd"),
	HX_HCSTRING("RENDERBUFFER_ALPHA_SIZE","\xab","\xf0","\x5d","\x87"),
	HX_HCSTRING("RENDERBUFFER_DEPTH_SIZE","\xe6","\x90","\x24","\xc3"),
	HX_HCSTRING("RENDERBUFFER_STENCIL_SIZE","\x8d","\xd5","\x5a","\x9d"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE","\x50","\x22","\x44","\x50"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_OBJECT_NAME","\xe1","\xa1","\x3a","\x4c"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL","\xf6","\x9b","\xba","\x81"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE","\xdc","\x4c","\x39","\x8a"),
	HX_HCSTRING("COLOR_ATTACHMENT0","\xb1","\x9a","\xfe","\x86"),
	HX_HCSTRING("DEPTH_ATTACHMENT","\xff","\x54","\xcd","\xe9"),
	HX_HCSTRING("STENCIL_ATTACHMENT","\xa6","\x8c","\x28","\x01"),
	HX_HCSTRING("DEPTH_STENCIL_ATTACHMENT","\xc2","\xe1","\xe1","\x9f"),
	HX_HCSTRING("NONE","\xb8","\xda","\xca","\x33"),
	HX_HCSTRING("FRAMEBUFFER_COMPLETE","\xab","\x65","\x7d","\xea"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_ATTACHMENT","\xf2","\xcf","\xb7","\x1d"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT","\x8b","\x0a","\xcd","\x77"),
	HX_HCSTRING("FRAMEBUFFER_INCOMPLETE_DIMENSIONS","\x5c","\x86","\xe4","\x1c"),
	HX_HCSTRING("FRAMEBUFFER_UNSUPPORTED","\xe3","\xa6","\x4e","\xc8"),
	HX_HCSTRING("FRAMEBUFFER_BINDING","\x73","\xee","\xae","\xc5"),
	HX_HCSTRING("RENDERBUFFER_BINDING","\x7c","\x23","\x70","\x23"),
	HX_HCSTRING("MAX_RENDERBUFFER_SIZE","\x4f","\xd4","\x3d","\x65"),
	HX_HCSTRING("INVALID_FRAMEBUFFER_OPERATION","\x2d","\xd4","\xc5","\x43"),
	HX_HCSTRING("UNPACK_FLIP_Y_WEBGL","\x0e","\x9f","\x94","\x9d"),
	HX_HCSTRING("UNPACK_PREMULTIPLY_ALPHA_WEBGL","\x73","\x5d","\xcb","\xc6"),
	HX_HCSTRING("CONTEXT_LOST_WEBGL","\x6e","\x67","\x71","\x45"),
	HX_HCSTRING("UNPACK_COLORSPACE_CONVERSION_WEBGL","\x9f","\xd9","\xf0","\xb9"),
	HX_HCSTRING("BROWSER_DEFAULT_WEBGL","\x04","\x04","\x92","\xc0"),
	HX_HCSTRING("version","\x18","\xe7","\xf1","\x7c"),
	HX_HCSTRING("activeTexture","\xb5","\x13","\xaa","\x56"),
	HX_HCSTRING("attachShader","\xca","\xd0","\x77","\xb2"),
	HX_HCSTRING("bindAttribLocation","\x3c","\xa6","\x30","\x1e"),
	HX_HCSTRING("bindBuffer","\x9d","\x92","\xbe","\xf8"),
	HX_HCSTRING("bindFramebuffer","\x30","\xc6","\x61","\xe7"),
	HX_HCSTRING("bindRenderbuffer","\x33","\xb6","\xb7","\x14"),
	HX_HCSTRING("bindTexture","\x9e","\xdc","\x51","\x9b"),
	HX_HCSTRING("blendColor","\x52","\x33","\xb4","\xe2"),
	HX_HCSTRING("blendEquation","\xfd","\x98","\xad","\x02"),
	HX_HCSTRING("blendEquationSeparate","\x80","\x39","\x68","\xa7"),
	HX_HCSTRING("blendFunc","\x35","\xfc","\x9b","\x07"),
	HX_HCSTRING("blendFuncSeparate","\xb8","\x94","\xc0","\xca"),
	HX_HCSTRING("bufferData","\x4a","\xbf","\x73","\x93"),
	HX_HCSTRING("bufferSubData","\xaa","\xf6","\xe4","\x45"),
	HX_HCSTRING("checkFramebufferStatus","\x17","\x26","\x75","\x0a"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("clearColor","\x96","\xb0","\x66","\x1f"),
	HX_HCSTRING("clearDepth","\x36","\x30","\x34","\xac"),
	HX_HCSTRING("clearStencil","\xef","\x6f","\x82","\x5b"),
	HX_HCSTRING("colorMask","\xef","\xcb","\xc3","\x23"),
	HX_HCSTRING("compileShader","\xf8","\x70","\xb2","\xda"),
	HX_HCSTRING("compressedTexImage2D","\xa7","\xd8","\x5d","\x24"),
	HX_HCSTRING("compressedTexSubImage2D","\xd3","\xb5","\x7d","\x36"),
	HX_HCSTRING("copyTexImage2D","\xdb","\xd0","\x76","\xe4"),
	HX_HCSTRING("copyTexSubImage2D","\x1f","\xd6","\xae","\xa4"),
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("createFramebuffer","\x51","\xef","\xe8","\xcc"),
	HX_HCSTRING("createProgram","\xe8","\x22","\x3c","\xdc"),
	HX_HCSTRING("createRenderbuffer","\xf2","\x89","\x74","\x05"),
	HX_HCSTRING("createShader","\x41","\xff","\x75","\x3f"),
	HX_HCSTRING("createTexture","\x3f","\xa1","\x23","\x87"),
	HX_HCSTRING("cullFace","\x6f","\xe7","\x31","\xac"),
	HX_HCSTRING("deleteBuffer","\x8b","\xe3","\x2c","\x37"),
	HX_HCSTRING("deleteFramebuffer","\x82","\x56","\x01","\x50"),
	HX_HCSTRING("deleteProgram","\x99","\xdd","\x82","\x52"),
	HX_HCSTRING("deleteRenderbuffer","\xa1","\x6d","\xb6","\x37"),
	HX_HCSTRING("deleteShader","\xb0","\xe5","\xb8","\x83"),
	HX_HCSTRING("deleteTexture","\xf0","\x5b","\x6a","\xfd"),
	HX_HCSTRING("depthFunc","\xe7","\x45","\x48","\x9a"),
	HX_HCSTRING("depthMask","\x8f","\x9b","\xd9","\x9e"),
	HX_HCSTRING("depthRange","\xba","\x99","\x8b","\x40"),
	HX_HCSTRING("detachShader","\xd8","\xd0","\xad","\xea"),
	HX_HCSTRING("disable","\xe8","\x69","\x58","\xb1"),
	HX_HCSTRING("disableVertexAttribArray","\xe3","\x69","\x74","\x4a"),
	HX_HCSTRING("drawArrays","\xde","\xf3","\xb3","\xf9"),
	HX_HCSTRING("drawElements","\x5b","\xc2","\xb7","\x59"),
	HX_HCSTRING("enable","\x83","\xae","\x87","\xf8"),
	HX_HCSTRING("enableVertexAttribArray","\xe8","\x46","\x5a","\xac"),
	HX_HCSTRING("finish","\x53","\x40","\x7f","\x86"),
	HX_HCSTRING("flush","\xc4","\x62","\x9b","\x02"),
	HX_HCSTRING("framebufferRenderbuffer","\x63","\xdd","\xb2","\x36"),
	HX_HCSTRING("framebufferTexture2D","\xc0","\x66","\x22","\x24"),
	HX_HCSTRING("frontFace","\xe6","\x01","\xc1","\x80"),
	HX_HCSTRING("generateMipmap","\x9d","\xd6","\x0d","\x5b"),
	HX_HCSTRING("getActiveAttrib","\x66","\x8b","\x22","\x63"),
	HX_HCSTRING("getActiveUniform","\x98","\x35","\x4e","\xd7"),
	HX_HCSTRING("getAttachedShaders","\xb4","\x2e","\x77","\x93"),
	HX_HCSTRING("getAttribLocation","\xd5","\x1a","\x10","\x5d"),
	HX_HCSTRING("getBufferParameter","\x93","\x58","\xb4","\x14"),
	HX_HCSTRING("getContextAttributes","\x30","\xda","\xe1","\xad"),
	HX_HCSTRING("getError","\x52","\xdb","\x00","\xd3"),
	HX_HCSTRING("getExtension","\x09","\x30","\x67","\xf4"),
	HX_HCSTRING("getFramebufferAttachmentParameter","\x8f","\xbf","\x8d","\xff"),
	HX_HCSTRING("getParameter","\x33","\xd2","\x06","\x58"),
	HX_HCSTRING("getProgramInfoLog","\xc8","\xf1","\xf2","\xcd"),
	HX_HCSTRING("getProgramParameter","\x3b","\xc3","\x9c","\x96"),
	HX_HCSTRING("getRenderbufferParameter","\x7d","\xc1","\xd7","\x3c"),
	HX_HCSTRING("getShaderInfoLog","\x9b","\xbd","\xc8","\xf3"),
	HX_HCSTRING("getShaderParameter","\xce","\x69","\x5b","\x36"),
	HX_HCSTRING("getShaderPrecisionFormat","\xfa","\xb8","\xcf","\xce"),
	HX_HCSTRING("getShaderSource","\x96","\xa3","\x04","\xc5"),
	HX_HCSTRING("getSupportedExtensions","\xec","\x78","\x6d","\xa1"),
	HX_HCSTRING("getTexParameter","\x78","\x98","\xd3","\xd2"),
	HX_HCSTRING("getUniform","\x3e","\xc7","\xc5","\x04"),
	HX_HCSTRING("getUniformLocation","\x93","\x5f","\xd4","\x4f"),
	HX_HCSTRING("getVertexAttrib","\x84","\x2f","\x1c","\xa3"),
	HX_HCSTRING("getVertexAttribOffset","\x37","\xb6","\xce","\x56"),
	HX_HCSTRING("hint","\x87","\x3d","\x0e","\x45"),
	HX_HCSTRING("isBuffer","\x8a","\x58","\xfe","\x28"),
	HX_HCSTRING("isContextLost","\xa9","\xdf","\xdf","\x2d"),
	HX_HCSTRING("isEnabled","\xb7","\x81","\x2f","\x82"),
	HX_HCSTRING("isFramebuffer","\x23","\x65","\x6c","\x83"),
	HX_HCSTRING("isProgram","\xba","\xc7","\xf7","\xf7"),
	HX_HCSTRING("isRenderbuffer","\xe0","\x2b","\xf8","\x01"),
	HX_HCSTRING("isShader","\xaf","\x5a","\x8a","\x75"),
	HX_HCSTRING("isTexture","\x11","\x46","\xdf","\xa2"),
	HX_HCSTRING("lineWidth","\x72","\xb9","\x5d","\x11"),
	HX_HCSTRING("linkProgram","\xaa","\xad","\x7b","\x89"),
	HX_HCSTRING("pixelStorei","\x8e","\x34","\xc8","\x80"),
	HX_HCSTRING("polygonOffset","\xad","\x25","\x4d","\x66"),
	HX_HCSTRING("readPixels","\x23","\xd3","\x25","\x86"),
	HX_HCSTRING("renderbufferStorage","\x05","\xa1","\x70","\x87"),
	HX_HCSTRING("sampleCoverage","\x32","\x68","\x81","\x3b"),
	HX_HCSTRING("scissor","\x1c","\x28","\xe7","\x04"),
	HX_HCSTRING("shaderSource","\xe0","\x4d","\x1a","\xa2"),
	HX_HCSTRING("stencilFunc","\x60","\x83","\xbe","\x40"),
	HX_HCSTRING("stencilFuncSeparate","\xe3","\xbe","\xce","\xb2"),
	HX_HCSTRING("stencilMask","\x08","\xd9","\x4f","\x45"),
	HX_HCSTRING("stencilMaskSeparate","\x8b","\xfc","\xa9","\xc6"),
	HX_HCSTRING("stencilOp","\x3d","\x7a","\xec","\x56"),
	HX_HCSTRING("stencilOpSeparate","\xc0","\x5a","\x4a","\x53"),
	HX_HCSTRING("texImage2D","\xc6","\x7c","\x67","\xb9"),
	HX_HCSTRING("texParameterf","\x64","\x27","\x31","\x3c"),
	HX_HCSTRING("texParameteri","\x67","\x27","\x31","\x3c"),
	HX_HCSTRING("texSubImage2D","\x14","\x2f","\x90","\x28"),
	HX_HCSTRING("uniform1f","\x49","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1fv","\x0d","\xff","\x7e","\xda"),
	HX_HCSTRING("uniform1i","\x4c","\x21","\xde","\x07"),
	HX_HCSTRING("uniform1iv","\xaa","\x01","\x7f","\xda"),
	HX_HCSTRING("uniform2f","\x28","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2fv","\x4e","\xc1","\x7f","\xda"),
	HX_HCSTRING("uniform2i","\x2b","\x22","\xde","\x07"),
	HX_HCSTRING("uniform2iv","\xeb","\xc3","\x7f","\xda"),
	HX_HCSTRING("uniform3f","\x07","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3fv","\x8f","\x83","\x80","\xda"),
	HX_HCSTRING("uniform3i","\x0a","\x23","\xde","\x07"),
	HX_HCSTRING("uniform3iv","\x2c","\x86","\x80","\xda"),
	HX_HCSTRING("uniform4f","\xe6","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4fv","\xd0","\x45","\x81","\xda"),
	HX_HCSTRING("uniform4i","\xe9","\x23","\xde","\x07"),
	HX_HCSTRING("uniform4iv","\x6d","\x48","\x81","\xda"),
	HX_HCSTRING("uniformMatrix2fv","\x8d","\x8a","\x59","\xc5"),
	HX_HCSTRING("uniformMatrix3fv","\xce","\x4c","\x5a","\xc5"),
	HX_HCSTRING("uniformMatrix4fv","\x0f","\x0f","\x5b","\xc5"),
	HX_HCSTRING("useProgram","\xfd","\x6c","\xac","\xf6"),
	HX_HCSTRING("validateProgram","\x8e","\x80","\x0f","\xef"),
	HX_HCSTRING("vertexAttrib1f","\x63","\x94","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib1fv","\xb3","\x42","\x0b","\xec"),
	HX_HCSTRING("vertexAttrib2f","\x42","\x95","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib2fv","\xf4","\x04","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib3f","\x21","\x96","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib3fv","\x35","\xc7","\x0c","\xec"),
	HX_HCSTRING("vertexAttrib4f","\x00","\x97","\xb6","\x53"),
	HX_HCSTRING("vertexAttrib4fv","\x76","\x89","\x0d","\xec"),
	HX_HCSTRING("vertexAttribPointer","\x8f","\x04","\xb6","\x3f"),
	HX_HCSTRING("viewport","\x66","\x4c","\xa5","\x9c"),
	HX_HCSTRING("get_version","\x2f","\x47","\xec","\x02"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderContext_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderContext_obj::__mClass;

void GLRenderContext_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.GLRenderContext","\xaa","\x48","\x0f","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderContext_obj >;
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

} // end namespace lime
} // end namespace graphics
