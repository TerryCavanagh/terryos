#ifndef INCLUDED_openfl_display3D_textures_CubeTexture
#define INCLUDED_openfl_display3D_textures_CubeTexture

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display3D{
namespace textures{


class HXCPP_CLASS_ATTRIBUTES  CubeTexture_obj : public ::openfl::display3D::textures::TextureBase_obj{
	public:
		typedef ::openfl::display3D::textures::TextureBase_obj super;
		typedef CubeTexture_obj OBJ_;
		CubeTexture_obj();
		Void __construct(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.textures.CubeTexture")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< CubeTexture_obj > __new(::openfl::display3D::Context3D context,int size,Dynamic format,bool optimizeForRenderToTexture,int streamingLevels);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CubeTexture_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("CubeTexture","\x46","\x04","\xc2","\x59"); }

		bool __optimizeForRenderToTexture;
		int __size;
		int __streamingLevels;
		int __uploadedSides;
		virtual Void uploadCompressedTextureFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,hx::Null< bool >  async);
		Dynamic uploadCompressedTextureFromByteArray_dyn();

		virtual Void uploadFromBitmapData( ::openfl::display::BitmapData source,int side,hx::Null< int >  miplevel,hx::Null< bool >  generateMipmap);
		Dynamic uploadFromBitmapData_dyn();

		virtual Void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int side,hx::Null< int >  miplevel);
		Dynamic uploadFromByteArray_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace textures

#endif /* INCLUDED_openfl_display3D_textures_CubeTexture */ 
