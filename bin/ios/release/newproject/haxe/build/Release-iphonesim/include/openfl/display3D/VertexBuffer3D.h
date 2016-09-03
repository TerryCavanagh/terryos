#ifndef INCLUDED_openfl_display3D_VertexBuffer3D
#define INCLUDED_openfl_display3D_VertexBuffer3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLBuffer)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,ByteArrayData)
HX_DECLARE_CLASS2(openfl,utils,IDataInput)
HX_DECLARE_CLASS2(openfl,utils,IDataOutput)
namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES  VertexBuffer3D_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef VertexBuffer3D_obj OBJ_;
		VertexBuffer3D_obj();
		Void __construct(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.VertexBuffer3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< VertexBuffer3D_obj > __new(::openfl::display3D::Context3D context3D,int numVertices,int dataPerVertex,::String bufferUsage);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~VertexBuffer3D_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("VertexBuffer3D","\x55","\x59","\x6d","\xdc"); }

		::openfl::display3D::Context3D __context;
		::openfl::_Vector::FloatVector __data;
		::lime::graphics::opengl::GLBuffer __id;
		int __memoryUsage;
		int __numVertices;
		int __stride;
		int __usage;
		int __vertexSize;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void uploadFromByteArray( ::openfl::utils::ByteArrayData data,int byteArrayOffset,int startVertex,int numVertices);
		Dynamic uploadFromByteArray_dyn();

		virtual Void uploadFromTypedArray( ::lime::utils::ArrayBufferView data);
		Dynamic uploadFromTypedArray_dyn();

		virtual Void uploadFromVector( ::openfl::_Vector::FloatVector data,int startVertex,int numVertices);
		Dynamic uploadFromVector_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_VertexBuffer3D */ 
