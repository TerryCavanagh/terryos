#include <hxcpp.h>

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasGraphics
#include <openfl/_internal/renderer/canvas/CanvasGraphics.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_RangeError
#include <openfl/errors/RangeError.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
namespace openfl{
namespace display{

Void DisplayObjectContainer_obj::__construct()
{
HX_STACK_FRAME("openfl.display.DisplayObjectContainer","new",0x4362e03c,"openfl.display.DisplayObjectContainer.new","openfl/display/DisplayObjectContainer.hx",31,0x5f4d3d72)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(33)
	super::__construct();
	HX_STACK_LINE(35)
	this->mouseChildren = true;
	HX_STACK_LINE(37)
	this->__children = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(38)
	this->__removedChildren = Array_obj< ::Dynamic >::__new();
}
;
	return null();
}

//DisplayObjectContainer_obj::~DisplayObjectContainer_obj() { }

Dynamic DisplayObjectContainer_obj::__CreateEmpty() { return  new DisplayObjectContainer_obj; }
hx::ObjectPtr< DisplayObjectContainer_obj > DisplayObjectContainer_obj::__new()
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

Dynamic DisplayObjectContainer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DisplayObjectContainer_obj > _result_ = new DisplayObjectContainer_obj();
	_result_->__construct();
	return _result_;}

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChild",0x5694c25f,"openfl.display.DisplayObjectContainer.addChild","openfl/display/DisplayObjectContainer.hx",43,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(45)
	::openfl::display::DisplayObject tmp = child;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(45)
	int tmp1 = this->get_numChildren();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(45)
	::openfl::display::DisplayObject tmp2 = this->addChildAt(tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(45)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,addChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::addChildAt( ::openfl::display::DisplayObject child,int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","addChildAt",0xb7119132,"openfl.display.DisplayObjectContainer.addChildAt","openfl/display/DisplayObjectContainer.hx",50,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(52)
	int tmp = index;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(52)
	int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(52)
	bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(52)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(52)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(52)
	if ((tmp3)){
		HX_STACK_LINE(52)
		tmp4 = (index < (int)0);
	}
	else{
		HX_STACK_LINE(52)
		tmp4 = true;
	}
	HX_STACK_LINE(52)
	if ((tmp4)){
		HX_STACK_LINE(54)
		::String tmp5 = (HX_HCSTRING("Invalid index position ","\x80","\x59","\x50","\x86") + index);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(54)
		HX_STACK_DO_THROW(tmp5);
	}
	HX_STACK_LINE(58)
	bool tmp5 = (child->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(58)
	if ((tmp5)){
		HX_STACK_LINE(60)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(60)
		this->__children->remove(tmp6);
		HX_STACK_LINE(61)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(61)
		::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(61)
		this->__children->insert(tmp7,tmp8);
	}
	else{
		HX_STACK_LINE(65)
		bool tmp6 = (child->parent != null());		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(65)
		if ((tmp6)){
			HX_STACK_LINE(67)
			::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(67)
			child->parent->removeChild(tmp7);
		}
		HX_STACK_LINE(71)
		int tmp7 = index;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(71)
		::openfl::display::DisplayObject tmp8 = child;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(71)
		this->__children->insert(tmp7,tmp8);
		HX_STACK_LINE(72)
		child->parent = hx::ObjectPtr<OBJ_>(this);
		HX_STACK_LINE(74)
		::openfl::display::Stage tmp9 = this->stage;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(74)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(74)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(74)
		if ((tmp10)){
			HX_STACK_LINE(74)
			tmp11 = (child->stage == null());
		}
		else{
			HX_STACK_LINE(74)
			tmp11 = false;
		}
		HX_STACK_LINE(74)
		bool addedToStage = tmp11;		HX_STACK_VAR(addedToStage,"addedToStage");
		HX_STACK_LINE(76)
		bool tmp12 = addedToStage;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(76)
		if ((tmp12)){
			HX_STACK_LINE(78)
			::openfl::display::Stage tmp13 = this->stage;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(78)
			this->__setStageReference(tmp13);
		}
		HX_STACK_LINE(82)
		{
			HX_STACK_LINE(82)
			bool tmp13 = child->__transformDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(82)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(82)
			if ((tmp14)){
				HX_STACK_LINE(82)
				child->__transformDirty = true;
				HX_STACK_LINE(82)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(83)
		{
			HX_STACK_LINE(83)
			bool tmp13 = child->__renderDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(83)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(83)
			if ((tmp14)){
				HX_STACK_LINE(83)
				child->__renderDirty = true;
				HX_STACK_LINE(83)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(84)
		{
			HX_STACK_LINE(84)
			bool tmp13 = this->__renderDirty;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(84)
			bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(84)
			if ((tmp14)){
				HX_STACK_LINE(84)
				this->__renderDirty = true;
				HX_STACK_LINE(84)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(86)
		::openfl::events::Event tmp13 = ::openfl::events::Event_obj::__new(HX_HCSTRING("added","\xc0","\xd4","\x43","\x1c"),true,null());		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(86)
		::openfl::events::Event event = tmp13;		HX_STACK_VAR(event,"event");
		HX_STACK_LINE(87)
		event->target = child;
		HX_STACK_LINE(88)
		::openfl::events::Event tmp14 = event;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(88)
		child->__dispatchEvent(tmp14);
		HX_STACK_LINE(90)
		bool tmp15 = addedToStage;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(90)
		if ((tmp15)){
			HX_STACK_LINE(92)
			::openfl::events::Event tmp16 = ::openfl::events::Event_obj::__new(HX_HCSTRING("addedToStage","\x63","\x22","\x55","\x0c"),false,false);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(92)
			::openfl::events::Event event1 = tmp16;		HX_STACK_VAR(event1,"event1");
			HX_STACK_LINE(94)
			::openfl::events::Event tmp17 = event1;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(94)
			child->dispatchEvent(tmp17);
			HX_STACK_LINE(96)
			bool tmp18 = (child->__children != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(96)
			if ((tmp18)){
				HX_STACK_LINE(98)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(98)
				Array< ::Dynamic > _g1 = child->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(98)
				while((true)){
					HX_STACK_LINE(98)
					bool tmp19 = (_g < _g1->length);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(98)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(98)
					if ((tmp20)){
						HX_STACK_LINE(98)
						break;
					}
					HX_STACK_LINE(98)
					::openfl::display::DisplayObject tmp21 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(98)
					::openfl::display::DisplayObject _child = tmp21;		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(98)
					++(_g);
					HX_STACK_LINE(100)
					::openfl::events::Event tmp22 = event1;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(100)
					_child->dispatchEvent(tmp22);
				}
			}
		}
	}
	HX_STACK_LINE(110)
	::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(110)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,addChildAt,return )

bool DisplayObjectContainer_obj::areInaccessibleObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","areInaccessibleObjectsUnderPoint",0x2380e0e1,"openfl.display.DisplayObjectContainer.areInaccessibleObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",117,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(117)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,areInaccessibleObjectsUnderPoint,return )

bool DisplayObjectContainer_obj::contains( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","contains",0xc3f94cc3,"openfl.display.DisplayObjectContainer.contains","openfl/display/DisplayObjectContainer.hx",122,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(124)
	while((true)){
		HX_STACK_LINE(124)
		bool tmp = (child != hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(124)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(124)
		if ((tmp)){
			HX_STACK_LINE(124)
			tmp1 = (child != null());
		}
		else{
			HX_STACK_LINE(124)
			tmp1 = false;
		}
		HX_STACK_LINE(124)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		if ((tmp2)){
			HX_STACK_LINE(124)
			break;
		}
		HX_STACK_LINE(126)
		child = child->parent;
	}
	HX_STACK_LINE(130)
	bool tmp = (child == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(130)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,contains,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildAt",0x9ee8eb5d,"openfl.display.DisplayObjectContainer.getChildAt","openfl/display/DisplayObjectContainer.hx",135,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(137)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(137)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(137)
	if ((tmp)){
		HX_STACK_LINE(137)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(137)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(137)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(137)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(137)
		tmp1 = false;
	}
	HX_STACK_LINE(137)
	if ((tmp1)){
		HX_STACK_LINE(139)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		return tmp2;
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildAt,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::getChildByName( ::String name){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildByName",0x64b33f2c,"openfl.display.DisplayObjectContainer.getChildByName","openfl/display/DisplayObjectContainer.hx",148,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(name,"name")
	HX_STACK_LINE(150)
	{
		HX_STACK_LINE(150)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(150)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(150)
		while((true)){
			HX_STACK_LINE(150)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(150)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(150)
			if ((tmp1)){
				HX_STACK_LINE(150)
				break;
			}
			HX_STACK_LINE(150)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(150)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(150)
			++(_g);
			HX_STACK_LINE(152)
			::String tmp3 = child->get_name();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			::String tmp4 = name;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			bool tmp5 = (tmp3 == tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(152)
			if ((tmp5)){
				HX_STACK_LINE(152)
				::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(152)
				return tmp6;
			}
		}
	}
	HX_STACK_LINE(156)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildByName,return )

int DisplayObjectContainer_obj::getChildIndex( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getChildIndex",0xcc3e62e8,"openfl.display.DisplayObjectContainer.getChildIndex","openfl/display/DisplayObjectContainer.hx",162,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(164)
	{
		HX_STACK_LINE(164)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(164)
		int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(164)
		int _g = tmp;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(164)
		while((true)){
			HX_STACK_LINE(164)
			bool tmp1 = (_g1 < _g);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(164)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(164)
			if ((tmp2)){
				HX_STACK_LINE(164)
				break;
			}
			HX_STACK_LINE(164)
			int tmp3 = (_g1)++;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(164)
			int i = tmp3;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(166)
			::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(166)
			::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(166)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(166)
			if ((tmp6)){
				HX_STACK_LINE(166)
				int tmp7 = i;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(166)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(170)
	return (int)-1;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getChildIndex,return )

Array< ::Dynamic > DisplayObjectContainer_obj::getObjectsUnderPoint( ::openfl::geom::Point point){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","getObjectsUnderPoint",0x85c6693a,"openfl.display.DisplayObjectContainer.getObjectsUnderPoint","openfl/display/DisplayObjectContainer.hx",175,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(177)
	Array< ::Dynamic > stack = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(stack,"stack");
	HX_STACK_LINE(178)
	Float tmp = point->x;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(178)
	Float tmp1 = point->y;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(178)
	this->__hitTest(tmp,tmp1,false,stack,false,hx::ObjectPtr<OBJ_>(this));
	HX_STACK_LINE(179)
	stack->reverse();
	HX_STACK_LINE(180)
	return stack;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,getObjectsUnderPoint,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChild( ::openfl::display::DisplayObject child){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChild",0x1a99d294,"openfl.display.DisplayObjectContainer.removeChild","openfl/display/DisplayObjectContainer.hx",185,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(child,"child")
	HX_STACK_LINE(187)
	bool tmp = (child != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(187)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(187)
	if ((tmp)){
		HX_STACK_LINE(187)
		tmp1 = (child->parent == hx::ObjectPtr<OBJ_>(this));
	}
	else{
		HX_STACK_LINE(187)
		tmp1 = false;
	}
	HX_STACK_LINE(187)
	if ((tmp1)){
		HX_STACK_LINE(189)
		::openfl::events::Event tmp2 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removed","\xa0","\x1f","\x00","\xf3"),true,null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(189)
		child->__dispatchEvent(tmp2);
		HX_STACK_LINE(191)
		::openfl::display::Stage tmp3 = this->stage;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(191)
		bool tmp4 = (tmp3 != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(191)
		if ((tmp4)){
			HX_STACK_LINE(193)
			::openfl::events::Event tmp5 = ::openfl::events::Event_obj::__new(HX_HCSTRING("removedFromStage","\x34","\x21","\x76","\xba"),false,false);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(193)
			::openfl::events::Event event = tmp5;		HX_STACK_VAR(event,"event");
			HX_STACK_LINE(195)
			::openfl::events::Event tmp6 = event;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(195)
			child->dispatchEvent(tmp6);
			HX_STACK_LINE(197)
			bool tmp7 = (child->__children != null());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(197)
			if ((tmp7)){
				HX_STACK_LINE(199)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(199)
				Array< ::Dynamic > _g1 = child->__children;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(199)
				while((true)){
					HX_STACK_LINE(199)
					bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(199)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(199)
					if ((tmp9)){
						HX_STACK_LINE(199)
						break;
					}
					HX_STACK_LINE(199)
					::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(199)
					::openfl::display::DisplayObject _child = tmp10;		HX_STACK_VAR(_child,"_child");
					HX_STACK_LINE(199)
					++(_g);
					HX_STACK_LINE(201)
					::openfl::events::Event tmp11 = event;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(201)
					_child->dispatchEvent(tmp11);
				}
			}
			HX_STACK_LINE(207)
			child->__setStageReference(null());
		}
		HX_STACK_LINE(211)
		child->parent = null();
		HX_STACK_LINE(212)
		::openfl::display::DisplayObject tmp5 = child;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(212)
		this->__children->remove(tmp5);
		HX_STACK_LINE(213)
		::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(213)
		this->__removedChildren->push(tmp6);
		HX_STACK_LINE(214)
		{
			HX_STACK_LINE(214)
			bool tmp7 = child->__transformDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(214)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(214)
			if ((tmp8)){
				HX_STACK_LINE(214)
				child->__transformDirty = true;
				HX_STACK_LINE(214)
				(::openfl::display::DisplayObject_obj::__worldTransformDirty)++;
			}
		}
		HX_STACK_LINE(215)
		{
			HX_STACK_LINE(215)
			bool tmp7 = child->__renderDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(215)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(215)
			if ((tmp8)){
				HX_STACK_LINE(215)
				child->__renderDirty = true;
				HX_STACK_LINE(215)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
		HX_STACK_LINE(216)
		{
			HX_STACK_LINE(216)
			bool tmp7 = this->__renderDirty;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(216)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(216)
			if ((tmp8)){
				HX_STACK_LINE(216)
				this->__renderDirty = true;
				HX_STACK_LINE(216)
				(::openfl::display::DisplayObject_obj::__worldRenderDirty)++;
			}
		}
	}
	HX_STACK_LINE(220)
	::openfl::display::DisplayObject tmp2 = child;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(220)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChild,return )

::openfl::display::DisplayObject DisplayObjectContainer_obj::removeChildAt( int index){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildAt",0x52a2d8a7,"openfl.display.DisplayObjectContainer.removeChildAt","openfl/display/DisplayObjectContainer.hx",225,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(index,"index")
	HX_STACK_LINE(227)
	bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(227)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(227)
	if ((tmp)){
		HX_STACK_LINE(227)
		int tmp2 = index;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(227)
		int tmp3 = this->__children->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(227)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(227)
		tmp1 = (tmp2 < tmp4);
	}
	else{
		HX_STACK_LINE(227)
		tmp1 = false;
	}
	HX_STACK_LINE(227)
	if ((tmp1)){
		HX_STACK_LINE(229)
		::openfl::display::DisplayObject tmp2 = this->__children->__get(index).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(229)
		::openfl::display::DisplayObject tmp3 = this->removeChild(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(229)
		return tmp3;
	}
	HX_STACK_LINE(233)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,removeChildAt,return )

Void DisplayObjectContainer_obj::removeChildren( hx::Null< int >  __o_beginIndex,hx::Null< int >  __o_endIndex){
int beginIndex = __o_beginIndex.Default(0);
int endIndex = __o_endIndex.Default(2147483647);
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","removeChildren",0xfbffdb47,"openfl.display.DisplayObjectContainer.removeChildren","openfl/display/DisplayObjectContainer.hx",238,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(beginIndex,"beginIndex")
	HX_STACK_ARG(endIndex,"endIndex")
{
		HX_STACK_LINE(240)
		bool tmp = (endIndex == (int)2147483647);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(240)
		if ((tmp)){
			HX_STACK_LINE(242)
			int tmp1 = this->__children->length;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(242)
			int tmp2 = (tmp1 - (int)1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(242)
			endIndex = tmp2;
			HX_STACK_LINE(244)
			bool tmp3 = (endIndex < (int)0);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(244)
			if ((tmp3)){
				HX_STACK_LINE(246)
				return null();
			}
		}
		HX_STACK_LINE(252)
		int tmp1 = beginIndex;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(252)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(252)
		int tmp3 = (tmp2 - (int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(252)
		bool tmp4 = (tmp1 > tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(252)
		if ((tmp4)){
			HX_STACK_LINE(254)
			return null();
		}
		else{
			HX_STACK_LINE(256)
			bool tmp5 = (endIndex < beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(256)
			bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(256)
			bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(256)
			bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(256)
			if ((tmp7)){
				HX_STACK_LINE(256)
				tmp8 = (beginIndex < (int)0);
			}
			else{
				HX_STACK_LINE(256)
				tmp8 = true;
			}
			HX_STACK_LINE(256)
			bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(256)
			bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(256)
			if ((tmp9)){
				HX_STACK_LINE(256)
				int tmp11 = endIndex;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(256)
				int tmp12 = this->__children->length;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(256)
				int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(256)
				tmp10 = (tmp11 > tmp13);
			}
			else{
				HX_STACK_LINE(256)
				tmp10 = true;
			}
			HX_STACK_LINE(256)
			if ((tmp10)){
				HX_STACK_LINE(258)
				::openfl::errors::RangeError tmp11 = ::openfl::errors::RangeError_obj::__new(HX_HCSTRING("The supplied index is out of bounds.","\x17","\x96","\x1b","\x51"));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(258)
				HX_STACK_DO_THROW(tmp11);
			}
		}
		HX_STACK_LINE(262)
		int tmp5 = (endIndex - beginIndex);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(262)
		int numRemovals = tmp5;		HX_STACK_VAR(numRemovals,"numRemovals");
		HX_STACK_LINE(263)
		while((true)){
			HX_STACK_LINE(263)
			bool tmp6 = (numRemovals >= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(263)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(263)
			if ((tmp7)){
				HX_STACK_LINE(263)
				break;
			}
			HX_STACK_LINE(265)
			int tmp8 = beginIndex;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(265)
			this->removeChildAt(tmp8);
			HX_STACK_LINE(266)
			(numRemovals)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,removeChildren,(void))

::openfl::display::DisplayObject DisplayObjectContainer_obj::resolve( ::String fieldName){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","resolve",0x8cca40c8,"openfl.display.DisplayObjectContainer.resolve","openfl/display/DisplayObjectContainer.hx",273,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(fieldName,"fieldName")
	HX_STACK_LINE(275)
	bool tmp = (this->__children == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(275)
	if ((tmp)){
		HX_STACK_LINE(275)
		return null();
	}
	HX_STACK_LINE(277)
	{
		HX_STACK_LINE(277)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(277)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(277)
		while((true)){
			HX_STACK_LINE(277)
			bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(277)
			bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(277)
			if ((tmp2)){
				HX_STACK_LINE(277)
				break;
			}
			HX_STACK_LINE(277)
			::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(277)
			::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(277)
			++(_g);
			HX_STACK_LINE(279)
			::String tmp4 = child->get_name();		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(279)
			::String tmp5 = fieldName;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(279)
			bool tmp6 = (tmp4 == tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(279)
			if ((tmp6)){
				HX_STACK_LINE(281)
				::openfl::display::DisplayObject tmp7 = child;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(281)
				return tmp7;
			}
		}
	}
	HX_STACK_LINE(287)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(DisplayObjectContainer_obj,resolve,return )

Void DisplayObjectContainer_obj::setChildIndex( ::openfl::display::DisplayObject child,int index){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","setChildIndex",0x114444f4,"openfl.display.DisplayObjectContainer.setChildIndex","openfl/display/DisplayObjectContainer.hx",292,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child,"child")
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(294)
		bool tmp = (index >= (int)0);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(294)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(294)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(294)
		if ((tmp1)){
			HX_STACK_LINE(294)
			int tmp3 = index;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(294)
			int tmp4 = this->__children->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(294)
			int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(294)
			int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(294)
			tmp2 = (tmp3 <= tmp6);
		}
		else{
			HX_STACK_LINE(294)
			tmp2 = false;
		}
		HX_STACK_LINE(294)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(294)
		if ((tmp2)){
			HX_STACK_LINE(294)
			tmp3 = (child->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(294)
			tmp3 = false;
		}
		HX_STACK_LINE(294)
		if ((tmp3)){
			HX_STACK_LINE(296)
			::openfl::display::DisplayObject tmp4 = child;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(296)
			this->__children->remove(tmp4);
			HX_STACK_LINE(297)
			int tmp5 = index;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(297)
			::openfl::display::DisplayObject tmp6 = child;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(297)
			this->__children->insert(tmp5,tmp6);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,setChildIndex,(void))

Void DisplayObjectContainer_obj::stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","stopAllMovieClips",0x46e0f9ce,"openfl.display.DisplayObjectContainer.stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",306,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(306)
		this->__stopAllMovieClips();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,stopAllMovieClips,(void))

Void DisplayObjectContainer_obj::swapChildren( ::openfl::display::DisplayObject child1,::openfl::display::DisplayObject child2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildren",0xe0695f96,"openfl.display.DisplayObjectContainer.swapChildren","openfl/display/DisplayObjectContainer.hx",311,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(child1,"child1")
		HX_STACK_ARG(child2,"child2")
		HX_STACK_LINE(313)
		bool tmp = (child1->parent == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(313)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(313)
		if ((tmp)){
			HX_STACK_LINE(313)
			tmp1 = (child2->parent == hx::ObjectPtr<OBJ_>(this));
		}
		else{
			HX_STACK_LINE(313)
			tmp1 = false;
		}
		HX_STACK_LINE(313)
		if ((tmp1)){
			HX_STACK_LINE(317)
			::openfl::display::DisplayObject tmp2 = child1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(317)
			int tmp3 = this->__children->indexOf(tmp2,null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(317)
			int index1 = tmp3;		HX_STACK_VAR(index1,"index1");
			HX_STACK_LINE(318)
			::openfl::display::DisplayObject tmp4 = child2;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(318)
			int tmp5 = this->__children->indexOf(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(318)
			int index2 = tmp5;		HX_STACK_VAR(index2,"index2");
			HX_STACK_LINE(341)
			::openfl::display::DisplayObject tmp6 = child2;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(341)
			this->__children[index1] = tmp6;
			HX_STACK_LINE(342)
			::openfl::display::DisplayObject tmp7 = child1;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(342)
			this->__children[index2] = tmp7;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildren,(void))

Void DisplayObjectContainer_obj::swapChildrenAt( int index1,int index2){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","swapChildrenAt",0xd5312a29,"openfl.display.DisplayObjectContainer.swapChildrenAt","openfl/display/DisplayObjectContainer.hx",349,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index1,"index1")
		HX_STACK_ARG(index2,"index2")
		HX_STACK_LINE(351)
		::openfl::display::DisplayObject tmp = this->__children->__get(index1).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(351)
		::openfl::display::DisplayObject swap = tmp;		HX_STACK_VAR(swap,"swap");
		HX_STACK_LINE(352)
		::openfl::display::DisplayObject tmp1 = this->__children->__get(index2).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(352)
		this->__children[index1] = tmp1;
		HX_STACK_LINE(353)
		::openfl::display::DisplayObject tmp2 = swap;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(353)
		this->__children[index2] = tmp2;
		HX_STACK_LINE(354)
		swap = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(DisplayObjectContainer_obj,swapChildrenAt,(void))

Void DisplayObjectContainer_obj::__enterFrame( int deltaTime){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__enterFrame",0x3af993b9,"openfl.display.DisplayObjectContainer.__enterFrame","openfl/display/DisplayObjectContainer.hx",361,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(deltaTime,"deltaTime")
		HX_STACK_LINE(361)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(361)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(361)
		while((true)){
			HX_STACK_LINE(361)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(361)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(361)
			if ((tmp1)){
				HX_STACK_LINE(361)
				break;
			}
			HX_STACK_LINE(361)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(361)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(361)
			++(_g);
			HX_STACK_LINE(363)
			int tmp3 = deltaTime;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(363)
			child->__enterFrame(tmp3);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getBounds",0xe74ca467,"openfl.display.DisplayObjectContainer.__getBounds","openfl/display/DisplayObjectContainer.hx",370,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(372)
		::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(372)
		::openfl::geom::Matrix tmp1 = matrix;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(372)
		this->super::__getBounds(tmp,tmp1);
		HX_STACK_LINE(374)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(374)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(374)
		if ((tmp3)){
			HX_STACK_LINE(374)
			return null();
		}
		HX_STACK_LINE(376)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		if ((tmp4)){
			HX_STACK_LINE(378)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(378)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(379)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(383)
		{
			HX_STACK_LINE(383)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(383)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(383)
			while((true)){
				HX_STACK_LINE(383)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(383)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(383)
				if ((tmp6)){
					HX_STACK_LINE(383)
					break;
				}
				HX_STACK_LINE(383)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(383)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(383)
				++(_g);
				HX_STACK_LINE(385)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(385)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(385)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(385)
				bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(385)
				if ((tmp10)){
					HX_STACK_LINE(385)
					Float tmp12 = child->get_scaleY();		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(385)
					Float tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(385)
					tmp11 = (tmp13 == (int)0);
				}
				else{
					HX_STACK_LINE(385)
					tmp11 = true;
				}
				HX_STACK_LINE(385)
				if ((tmp11)){
					HX_STACK_LINE(385)
					continue;
				}
				HX_STACK_LINE(386)
				::openfl::geom::Rectangle tmp12 = rect;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(386)
				::openfl::geom::Matrix tmp13 = child->__worldTransform;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(386)
				child->__getBounds(tmp12,tmp13);
			}
		}
		HX_STACK_LINE(390)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(390)
		if ((tmp5)){
			HX_STACK_LINE(392)
			this->__updateTransforms(null());
			HX_STACK_LINE(393)
			this->__updateChildren(true);
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__getRenderBounds( ::openfl::geom::Rectangle rect,::openfl::geom::Matrix matrix){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__getRenderBounds",0x21a0a9dd,"openfl.display.DisplayObjectContainer.__getRenderBounds","openfl/display/DisplayObjectContainer.hx",400,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(matrix,"matrix")
		HX_STACK_LINE(402)
		::openfl::geom::Rectangle tmp = this->__scrollRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(402)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(402)
		if ((tmp1)){
			HX_STACK_LINE(404)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(404)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(404)
			this->super::__getRenderBounds(tmp2,tmp3);
			HX_STACK_LINE(405)
			return null();
		}
		else{
			HX_STACK_LINE(409)
			::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(409)
			::openfl::geom::Matrix tmp3 = matrix;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(409)
			this->super::__getBounds(tmp2,tmp3);
		}
		HX_STACK_LINE(413)
		int tmp2 = this->__children->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(413)
		bool tmp3 = (tmp2 == (int)0);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(413)
		if ((tmp3)){
			HX_STACK_LINE(413)
			return null();
		}
		HX_STACK_LINE(415)
		bool tmp4 = (matrix != null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(415)
		if ((tmp4)){
			HX_STACK_LINE(417)
			::openfl::geom::Matrix tmp5 = matrix;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(417)
			this->__updateTransforms(tmp5);
			HX_STACK_LINE(418)
			this->__updateChildren(true);
		}
		HX_STACK_LINE(422)
		{
			HX_STACK_LINE(422)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(422)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(422)
			while((true)){
				HX_STACK_LINE(422)
				bool tmp5 = (_g < _g1->length);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(422)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(422)
				if ((tmp6)){
					HX_STACK_LINE(422)
					break;
				}
				HX_STACK_LINE(422)
				::openfl::display::DisplayObject tmp7 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(422)
				::openfl::display::DisplayObject child = tmp7;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(422)
				++(_g);
				HX_STACK_LINE(424)
				Float tmp8 = child->get_scaleX();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(424)
				bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(424)
				bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(424)
				bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(424)
				bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(424)
				if ((tmp11)){
					HX_STACK_LINE(424)
					Float tmp13 = child->get_scaleY();		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(424)
					Float tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(424)
					Float tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(424)
					tmp12 = (tmp15 == (int)0);
				}
				else{
					HX_STACK_LINE(424)
					tmp12 = true;
				}
				HX_STACK_LINE(424)
				bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(424)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(424)
				if ((tmp13)){
					HX_STACK_LINE(424)
					tmp14 = child->__isMask;
				}
				else{
					HX_STACK_LINE(424)
					tmp14 = true;
				}
				HX_STACK_LINE(424)
				if ((tmp14)){
					HX_STACK_LINE(424)
					continue;
				}
				HX_STACK_LINE(425)
				::openfl::geom::Rectangle tmp15 = rect;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(425)
				::openfl::geom::Matrix tmp16 = child->__worldTransform;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(425)
				child->__getRenderBounds(tmp15,tmp16);
			}
		}
		HX_STACK_LINE(429)
		bool tmp5 = (matrix != null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(429)
		if ((tmp5)){
			HX_STACK_LINE(431)
			this->__updateTransforms(null());
			HX_STACK_LINE(432)
			this->__updateChildren(true);
		}
	}
return null();
}


bool DisplayObjectContainer_obj::__hitTest( Float x,Float y,bool shapeFlag,Array< ::Dynamic > stack,bool interactiveOnly,::openfl::display::DisplayObject hitObject){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTest",0x5a840e01,"openfl.display.DisplayObjectContainer.__hitTest","openfl/display/DisplayObjectContainer.hx",439,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(shapeFlag,"shapeFlag")
	HX_STACK_ARG(stack,"stack")
	HX_STACK_ARG(interactiveOnly,"interactiveOnly")
	HX_STACK_ARG(hitObject,"hitObject")
	HX_STACK_LINE(441)
	bool tmp = hitObject->get_visible();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(441)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(441)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(441)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(441)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(441)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(441)
	if ((tmp4)){
		HX_STACK_LINE(441)
		tmp5 = this->__isMask;
	}
	else{
		HX_STACK_LINE(441)
		tmp5 = true;
	}
	HX_STACK_LINE(441)
	bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(441)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(441)
	if ((tmp6)){
		HX_STACK_LINE(441)
		bool tmp8 = interactiveOnly;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(441)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(441)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(441)
		bool tmp11 = tmp9;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(441)
		if ((tmp11)){
			HX_STACK_LINE(441)
			bool tmp12 = this->mouseEnabled;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(441)
			bool tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(441)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(441)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(441)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(441)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(441)
			bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(441)
			bool tmp19 = !(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(441)
			tmp10 = tmp19;
		}
		else{
			HX_STACK_LINE(441)
			tmp10 = false;
		}
		HX_STACK_LINE(441)
		bool tmp12 = tmp10;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(441)
		if ((tmp12)){
			HX_STACK_LINE(441)
			bool tmp13 = this->mouseChildren;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(441)
			bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(441)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(441)
			bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(441)
			bool tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(441)
			tmp7 = !(tmp17);
		}
		else{
			HX_STACK_LINE(441)
			tmp7 = false;
		}
	}
	else{
		HX_STACK_LINE(441)
		tmp7 = true;
	}
	HX_STACK_LINE(441)
	if ((tmp7)){
		HX_STACK_LINE(441)
		return false;
	}
	HX_STACK_LINE(442)
	::openfl::display::DisplayObject tmp8 = this->get_mask();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(442)
	bool tmp9 = (tmp8 != null());		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(442)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(442)
	if ((tmp9)){
		HX_STACK_LINE(442)
		::openfl::display::DisplayObject tmp11 = this->get_mask();		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(442)
		::openfl::display::DisplayObject tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(442)
		Float tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(442)
		Float tmp14 = y;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(442)
		Float tmp15 = tmp13;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(442)
		Float tmp16 = tmp14;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(442)
		bool tmp17 = tmp12->__hitTestMask(tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(442)
		bool tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(442)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(442)
		tmp10 = !(tmp19);
	}
	else{
		HX_STACK_LINE(442)
		tmp10 = false;
	}
	HX_STACK_LINE(442)
	if ((tmp10)){
		HX_STACK_LINE(442)
		return false;
	}
	HX_STACK_LINE(443)
	::openfl::geom::Rectangle tmp11 = this->get_scrollRect();		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(443)
	bool tmp12 = (tmp11 != null());		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(443)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(443)
	if ((tmp12)){
		HX_STACK_LINE(443)
		::openfl::geom::Rectangle tmp14 = this->get_scrollRect();		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(443)
		::openfl::geom::Rectangle tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp16 = ::openfl::geom::Point_obj::__new(x,y);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp19 = this->globalToLocal(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(443)
		::openfl::geom::Point tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(443)
		bool tmp22 = tmp15->containsPoint(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(443)
		bool tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(443)
		bool tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(443)
		tmp13 = !(tmp24);
	}
	else{
		HX_STACK_LINE(443)
		tmp13 = false;
	}
	HX_STACK_LINE(443)
	if ((tmp13)){
		HX_STACK_LINE(443)
		return false;
	}
	HX_STACK_LINE(445)
	int tmp14 = this->__children->length;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(445)
	int i = tmp14;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(446)
	bool tmp15 = interactiveOnly;		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(446)
	if ((tmp15)){
		HX_STACK_LINE(448)
		bool tmp16 = (stack == null());		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(448)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(448)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(448)
		if ((tmp17)){
			HX_STACK_LINE(448)
			bool tmp19 = this->mouseChildren;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(448)
			bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(448)
			bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(448)
			tmp18 = !(tmp21);
		}
		else{
			HX_STACK_LINE(448)
			tmp18 = true;
		}
		HX_STACK_LINE(448)
		if ((tmp18)){
			HX_STACK_LINE(450)
			while((true)){
				HX_STACK_LINE(450)
				int tmp19 = --(i);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(450)
				bool tmp20 = (tmp19 >= (int)0);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(450)
				bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(450)
				if ((tmp21)){
					HX_STACK_LINE(450)
					break;
				}
				HX_STACK_LINE(452)
				::openfl::display::DisplayObject tmp22 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(452)
				Float tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(452)
				Float tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(452)
				bool tmp25 = shapeFlag;		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(452)
				::openfl::display::DisplayObject tmp26 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(452)
				::openfl::display::DisplayObject tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(452)
				bool tmp28 = tmp22->__hitTest(tmp23,tmp24,tmp25,null(),true,tmp27);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(452)
				if ((tmp28)){
					HX_STACK_LINE(454)
					bool tmp29 = (stack != null());		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(454)
					if ((tmp29)){
						HX_STACK_LINE(456)
						::openfl::display::DisplayObject tmp30 = hitObject;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(456)
						stack->push(tmp30);
					}
					HX_STACK_LINE(460)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(466)
			bool tmp19 = (stack != null());		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(466)
			if ((tmp19)){
				HX_STACK_LINE(468)
				int length = stack->length;		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(470)
				bool interactive = false;		HX_STACK_VAR(interactive,"interactive");
				HX_STACK_LINE(471)
				bool hitTest = false;		HX_STACK_VAR(hitTest,"hitTest");
				HX_STACK_LINE(473)
				while((true)){
					HX_STACK_LINE(473)
					int tmp20 = --(i);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(473)
					bool tmp21 = (tmp20 >= (int)0);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(473)
					bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(473)
					if ((tmp22)){
						HX_STACK_LINE(473)
						break;
					}
					HX_STACK_LINE(475)
					::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(475)
					bool tmp24 = tmp23->__getInteractive(null());		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(475)
					interactive = tmp24;
					HX_STACK_LINE(477)
					bool tmp25 = interactive;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(477)
					bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(477)
					bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(477)
					if ((tmp26)){
						HX_STACK_LINE(477)
						bool tmp28 = this->mouseEnabled;		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(477)
						bool tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(477)
						bool tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(477)
						if ((tmp30)){
							HX_STACK_LINE(477)
							bool tmp31 = hitTest;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(477)
							bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(477)
							bool tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(477)
							tmp27 = !(tmp33);
						}
						else{
							HX_STACK_LINE(477)
							tmp27 = false;
						}
					}
					else{
						HX_STACK_LINE(477)
						tmp27 = true;
					}
					HX_STACK_LINE(477)
					if ((tmp27)){
						HX_STACK_LINE(479)
						::openfl::display::DisplayObject tmp28 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(479)
						Float tmp29 = x;		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(479)
						Float tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(479)
						bool tmp31 = shapeFlag;		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(479)
						::openfl::display::DisplayObject tmp32 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(479)
						::openfl::display::DisplayObject tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(479)
						bool tmp34 = tmp28->__hitTest(tmp29,tmp30,tmp31,stack,true,tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(479)
						if ((tmp34)){
							HX_STACK_LINE(481)
							hitTest = true;
							HX_STACK_LINE(483)
							bool tmp35 = interactive;		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(483)
							if ((tmp35)){
								HX_STACK_LINE(485)
								break;
							}
						}
					}
				}
				HX_STACK_LINE(495)
				bool tmp20 = hitTest;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(495)
				if ((tmp20)){
					HX_STACK_LINE(497)
					int tmp21 = length;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(497)
					::openfl::display::DisplayObject tmp22 = hitObject;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(497)
					stack->insert(tmp21,tmp22);
					HX_STACK_LINE(498)
					return true;
				}
			}
		}
	}
	else{
		HX_STACK_LINE(506)
		while((true)){
			HX_STACK_LINE(506)
			int tmp16 = --(i);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(506)
			bool tmp17 = (tmp16 >= (int)0);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(506)
			bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(506)
			if ((tmp18)){
				HX_STACK_LINE(506)
				break;
			}
			HX_STACK_LINE(508)
			::openfl::display::DisplayObject tmp19 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(508)
			Float tmp20 = x;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(508)
			Float tmp21 = y;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(508)
			bool tmp22 = shapeFlag;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(508)
			::openfl::display::DisplayObject tmp23 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(508)
			::openfl::display::DisplayObject tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(508)
			tmp19->__hitTest(tmp20,tmp21,tmp22,stack,false,tmp24);
		}
	}
	HX_STACK_LINE(514)
	return false;
}


bool DisplayObjectContainer_obj::__hitTestMask( Float x,Float y){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__hitTestMask",0x4f390f8d,"openfl.display.DisplayObjectContainer.__hitTestMask","openfl/display/DisplayObjectContainer.hx",519,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(521)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(521)
	int i = tmp;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(523)
	while((true)){
		HX_STACK_LINE(523)
		int tmp1 = --(i);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(523)
		bool tmp2 = (tmp1 >= (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(523)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(523)
		if ((tmp3)){
			HX_STACK_LINE(523)
			break;
		}
		HX_STACK_LINE(525)
		::openfl::display::DisplayObject tmp4 = this->__children->__get(i).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(525)
		Float tmp5 = x;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(525)
		Float tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(525)
		bool tmp7 = tmp4->__hitTestMask(tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(525)
		if ((tmp7)){
			HX_STACK_LINE(527)
			return true;
		}
	}
	HX_STACK_LINE(533)
	return false;
}


Void DisplayObjectContainer_obj::__readGraphicsData( ::openfl::_Vector::ObjectVector graphicsData,bool recurse){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__readGraphicsData",0x782e37cf,"openfl.display.DisplayObjectContainer.__readGraphicsData","openfl/display/DisplayObjectContainer.hx",538,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(graphicsData,"graphicsData")
		HX_STACK_ARG(recurse,"recurse")
		HX_STACK_LINE(540)
		::openfl::_Vector::ObjectVector tmp = graphicsData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(540)
		bool tmp1 = recurse;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(540)
		this->super::__readGraphicsData(tmp,tmp1);
		HX_STACK_LINE(542)
		bool tmp2 = recurse;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(542)
		if ((tmp2)){
			HX_STACK_LINE(544)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(544)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(544)
			while((true)){
				HX_STACK_LINE(544)
				bool tmp3 = (_g < _g1->length);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(544)
				bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(544)
				if ((tmp4)){
					HX_STACK_LINE(544)
					break;
				}
				HX_STACK_LINE(544)
				::openfl::display::DisplayObject tmp5 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(544)
				::openfl::display::DisplayObject child = tmp5;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(544)
				++(_g);
				HX_STACK_LINE(546)
				::openfl::_Vector::ObjectVector tmp6 = graphicsData;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(546)
				bool tmp7 = recurse;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(546)
				child->__readGraphicsData(tmp6,tmp7);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairo",0x687e990e,"openfl.display.DisplayObjectContainer.__renderCairo","openfl/display/DisplayObjectContainer.hx",555,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(557)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(557)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(557)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(557)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(557)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(557)
		if ((tmp3)){
			HX_STACK_LINE(557)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(557)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(557)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(557)
			tmp4 = true;
		}
		HX_STACK_LINE(557)
		if ((tmp4)){
			HX_STACK_LINE(557)
			return null();
		}
		HX_STACK_LINE(559)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(559)
		this->super::__renderCairo(tmp5);
		HX_STACK_LINE(561)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(563)
		{
			HX_STACK_LINE(563)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(563)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(563)
			while((true)){
				HX_STACK_LINE(563)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(563)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(563)
				if ((tmp7)){
					HX_STACK_LINE(563)
					break;
				}
				HX_STACK_LINE(563)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(563)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(563)
				++(_g);
				HX_STACK_LINE(565)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(565)
				child->__renderCairo(tmp9);
			}
		}
		HX_STACK_LINE(569)
		{
			HX_STACK_LINE(569)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(569)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(569)
			while((true)){
				HX_STACK_LINE(569)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(569)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(569)
				if ((tmp7)){
					HX_STACK_LINE(569)
					break;
				}
				HX_STACK_LINE(569)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(569)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(569)
				++(_g);
				HX_STACK_LINE(571)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(571)
				if ((tmp9)){
					HX_STACK_LINE(573)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(579)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(579)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(579)
		if ((tmp7)){
			HX_STACK_LINE(581)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(581)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(585)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCairoMask",0x110aa51a,"openfl.display.DisplayObjectContainer.__renderCairoMask","openfl/display/DisplayObjectContainer.hx",590,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(592)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(592)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(592)
		if ((tmp1)){
			HX_STACK_LINE(594)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(594)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(594)
			::openfl::_internal::renderer::cairo::CairoGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(598)
		{
			HX_STACK_LINE(598)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(598)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(598)
			while((true)){
				HX_STACK_LINE(598)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(598)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(598)
				if ((tmp3)){
					HX_STACK_LINE(598)
					break;
				}
				HX_STACK_LINE(598)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(598)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(598)
				++(_g);
				HX_STACK_LINE(600)
				::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(600)
				child->__renderCairoMask(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvas",0x09986192,"openfl.display.DisplayObjectContainer.__renderCanvas","openfl/display/DisplayObjectContainer.hx",607,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(609)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		if ((tmp3)){
			HX_STACK_LINE(609)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(609)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(609)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(609)
			tmp4 = true;
		}
		HX_STACK_LINE(609)
		if ((tmp4)){
			HX_STACK_LINE(609)
			return null();
		}
		HX_STACK_LINE(613)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(613)
		this->super::__renderCanvas(tmp5);
		HX_STACK_LINE(615)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(617)
		{
			HX_STACK_LINE(617)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(617)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(617)
			while((true)){
				HX_STACK_LINE(617)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(617)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(617)
				if ((tmp7)){
					HX_STACK_LINE(617)
					break;
				}
				HX_STACK_LINE(617)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(617)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(617)
				++(_g);
				HX_STACK_LINE(619)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(619)
				child->__renderCanvas(tmp9);
			}
		}
		HX_STACK_LINE(623)
		{
			HX_STACK_LINE(623)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(623)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(623)
			while((true)){
				HX_STACK_LINE(623)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(623)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(623)
				if ((tmp7)){
					HX_STACK_LINE(623)
					break;
				}
				HX_STACK_LINE(623)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(623)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(623)
				++(_g);
				HX_STACK_LINE(625)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(625)
				if ((tmp9)){
					HX_STACK_LINE(627)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(633)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(633)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(633)
		if ((tmp7)){
			HX_STACK_LINE(635)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(635)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(639)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderCanvasMask",0xd78cff9e,"openfl.display.DisplayObjectContainer.__renderCanvasMask","openfl/display/DisplayObjectContainer.hx",646,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(648)
		::openfl::display::Graphics tmp = this->__graphics;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(648)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(648)
		if ((tmp1)){
			HX_STACK_LINE(650)
			::openfl::display::Graphics tmp2 = this->__graphics;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(650)
			::openfl::_internal::renderer::RenderSession tmp3 = renderSession;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(650)
			::openfl::_internal::renderer::canvas::CanvasGraphics_obj::renderMask(tmp2,tmp3);
		}
		HX_STACK_LINE(654)
		::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(654)
		::openfl::geom::Rectangle bounds = tmp2;		HX_STACK_VAR(bounds,"bounds");
		HX_STACK_LINE(655)
		{
			HX_STACK_LINE(655)
			::openfl::geom::Rectangle tmp3 = bounds;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(655)
			::openfl::geom::Matrix tmp4 = this->__transform;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(655)
			this->__getBounds(tmp3,tmp4);
		}
		HX_STACK_LINE(657)
		Float tmp3 = bounds->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(657)
		Float tmp4 = bounds->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(657)
		renderSession->context->rect((int)0,(int)0,tmp3,tmp4);
	}
return null();
}


Void DisplayObjectContainer_obj::__renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderDOM",0xd2304188,"openfl.display.DisplayObjectContainer.__renderDOM","openfl/display/DisplayObjectContainer.hx",668,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(672)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(672)
		this->super::__renderDOM(tmp);
		HX_STACK_LINE(674)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(676)
		{
			HX_STACK_LINE(676)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(676)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(676)
			while((true)){
				HX_STACK_LINE(676)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(676)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(676)
				if ((tmp2)){
					HX_STACK_LINE(676)
					break;
				}
				HX_STACK_LINE(676)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(676)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(676)
				++(_g);
				HX_STACK_LINE(678)
				::openfl::_internal::renderer::RenderSession tmp4 = renderSession;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(678)
				child->__renderDOM(tmp4);
			}
		}
		HX_STACK_LINE(682)
		{
			HX_STACK_LINE(682)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(682)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(682)
			while((true)){
				HX_STACK_LINE(682)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(682)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(682)
				if ((tmp2)){
					HX_STACK_LINE(682)
					break;
				}
				HX_STACK_LINE(682)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(682)
				::openfl::display::DisplayObject orphan = tmp3;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(682)
				++(_g);
				HX_STACK_LINE(684)
				bool tmp4 = (orphan->stage == null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(684)
				if ((tmp4)){
					HX_STACK_LINE(686)
					::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(686)
					orphan->__renderDOM(tmp5);
				}
			}
		}
		HX_STACK_LINE(692)
		int tmp1 = this->__removedChildren->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(692)
		bool tmp2 = (tmp1 > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(692)
		if ((tmp2)){
			HX_STACK_LINE(694)
			int tmp3 = this->__removedChildren->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(694)
			this->__removedChildren->splice((int)0,tmp3);
		}
		HX_STACK_LINE(698)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__renderGL",0x3eef01bf,"openfl.display.DisplayObjectContainer.__renderGL","openfl/display/DisplayObjectContainer.hx",705,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(707)
		bool tmp = this->__renderable;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(707)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(707)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(707)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(707)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(707)
		if ((tmp3)){
			HX_STACK_LINE(707)
			Float tmp5 = this->__worldAlpha;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(707)
			Float tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(707)
			tmp4 = (tmp6 <= (int)0);
		}
		else{
			HX_STACK_LINE(707)
			tmp4 = true;
		}
		HX_STACK_LINE(707)
		if ((tmp4)){
			HX_STACK_LINE(707)
			return null();
		}
		HX_STACK_LINE(709)
		::openfl::_internal::renderer::RenderSession tmp5 = renderSession;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(709)
		this->super::__renderGL(tmp5);
		HX_STACK_LINE(711)
		renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
		HX_STACK_LINE(713)
		{
			HX_STACK_LINE(713)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(713)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(713)
			while((true)){
				HX_STACK_LINE(713)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(713)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(713)
				if ((tmp7)){
					HX_STACK_LINE(713)
					break;
				}
				HX_STACK_LINE(713)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(713)
				::openfl::display::DisplayObject child = tmp8;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(713)
				++(_g);
				HX_STACK_LINE(715)
				::openfl::_internal::renderer::RenderSession tmp9 = renderSession;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(715)
				child->__renderGL(tmp9);
			}
		}
		HX_STACK_LINE(719)
		{
			HX_STACK_LINE(719)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(719)
			Array< ::Dynamic > _g1 = this->__removedChildren;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(719)
			while((true)){
				HX_STACK_LINE(719)
				bool tmp6 = (_g < _g1->length);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(719)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(719)
				if ((tmp7)){
					HX_STACK_LINE(719)
					break;
				}
				HX_STACK_LINE(719)
				::openfl::display::DisplayObject tmp8 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(719)
				::openfl::display::DisplayObject orphan = tmp8;		HX_STACK_VAR(orphan,"orphan");
				HX_STACK_LINE(719)
				++(_g);
				HX_STACK_LINE(721)
				bool tmp9 = (orphan->stage == null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(721)
				if ((tmp9)){
					HX_STACK_LINE(723)
					orphan->__cleanup();
				}
			}
		}
		HX_STACK_LINE(729)
		int tmp6 = this->__removedChildren->length;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		bool tmp7 = (tmp6 > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(729)
		if ((tmp7)){
			HX_STACK_LINE(731)
			int tmp8 = this->__removedChildren->length;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(731)
			this->__removedChildren->splice((int)0,tmp8);
		}
		HX_STACK_LINE(735)
		renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
	}
return null();
}


Void DisplayObjectContainer_obj::__setStageReference( ::openfl::display::Stage stage){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__setStageReference",0x58cb6d2b,"openfl.display.DisplayObjectContainer.__setStageReference","openfl/display/DisplayObjectContainer.hx",740,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(stage,"stage")
		HX_STACK_LINE(742)
		::openfl::display::Stage tmp = stage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(742)
		this->super::__setStageReference(tmp);
		HX_STACK_LINE(744)
		bool tmp1 = (this->__children != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(744)
		if ((tmp1)){
			HX_STACK_LINE(746)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(746)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(746)
			while((true)){
				HX_STACK_LINE(746)
				bool tmp2 = (_g < _g1->length);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(746)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(746)
				if ((tmp3)){
					HX_STACK_LINE(746)
					break;
				}
				HX_STACK_LINE(746)
				::openfl::display::DisplayObject tmp4 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(746)
				::openfl::display::DisplayObject child = tmp4;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(746)
				++(_g);
				HX_STACK_LINE(748)
				::openfl::display::Stage tmp5 = stage;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(748)
				child->__setStageReference(tmp5);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__stopAllMovieClips( ){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__stopAllMovieClips",0xb7ce11ae,"openfl.display.DisplayObjectContainer.__stopAllMovieClips","openfl/display/DisplayObjectContainer.hx",759,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_LINE(759)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(759)
		Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(759)
		while((true)){
			HX_STACK_LINE(759)
			bool tmp = (_g < _g1->length);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(759)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(759)
			if ((tmp1)){
				HX_STACK_LINE(759)
				break;
			}
			HX_STACK_LINE(759)
			::openfl::display::DisplayObject tmp2 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(759)
			::openfl::display::DisplayObject child = tmp2;		HX_STACK_VAR(child,"child");
			HX_STACK_LINE(759)
			++(_g);
			HX_STACK_LINE(761)
			child->__stopAllMovieClips();
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__update( bool transformOnly,bool updateChildren,::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__update",0xc6b2e3cd,"openfl.display.DisplayObjectContainer.__update","openfl/display/DisplayObjectContainer.hx",768,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_ARG(updateChildren,"updateChildren")
		HX_STACK_ARG(maskGraphics,"maskGraphics")
		HX_STACK_LINE(770)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(770)
		bool tmp1 = updateChildren;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(770)
		::openfl::display::Graphics tmp2 = maskGraphics;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(770)
		this->super::__update(tmp,tmp1,tmp2);
		HX_STACK_LINE(773)
		bool tmp3 = this->__renderable;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(773)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(773)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(773)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(773)
		if ((tmp5)){
			HX_STACK_LINE(773)
			bool tmp7 = this->__isMask;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(773)
			bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(773)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(773)
			tmp6 = !(tmp9);
		}
		else{
			HX_STACK_LINE(773)
			tmp6 = false;
		}
		HX_STACK_LINE(773)
		if ((tmp6)){
			HX_STACK_LINE(775)
			return null();
		}
		HX_STACK_LINE(779)
		bool tmp7 = updateChildren;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(779)
		if ((tmp7)){
			HX_STACK_LINE(781)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(781)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(781)
			while((true)){
				HX_STACK_LINE(781)
				bool tmp8 = (_g < _g1->length);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(781)
				bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(781)
				if ((tmp9)){
					HX_STACK_LINE(781)
					break;
				}
				HX_STACK_LINE(781)
				::openfl::display::DisplayObject tmp10 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(781)
				::openfl::display::DisplayObject child = tmp10;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(781)
				++(_g);
				HX_STACK_LINE(783)
				bool tmp11 = transformOnly;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(783)
				::openfl::display::Graphics tmp12 = maskGraphics;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(783)
				child->__update(tmp11,true,tmp12);
			}
		}
	}
return null();
}


Void DisplayObjectContainer_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.DisplayObjectContainer","__updateChildren",0x0e3ace2c,"openfl.display.DisplayObjectContainer.__updateChildren","openfl/display/DisplayObjectContainer.hx",792,0x5f4d3d72)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
		HX_STACK_LINE(794)
		bool tmp = transformOnly;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(794)
		this->super::__updateChildren(tmp);
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(796)
			Array< ::Dynamic > _g1 = this->__children;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(796)
			while((true)){
				HX_STACK_LINE(796)
				bool tmp1 = (_g < _g1->length);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(796)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(796)
				if ((tmp2)){
					HX_STACK_LINE(796)
					break;
				}
				HX_STACK_LINE(796)
				::openfl::display::DisplayObject tmp3 = _g1->__get(_g).StaticCast< ::openfl::display::DisplayObject >();		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(796)
				::openfl::display::DisplayObject child = tmp3;		HX_STACK_VAR(child,"child");
				HX_STACK_LINE(796)
				++(_g);
				HX_STACK_LINE(798)
				bool tmp4 = transformOnly;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(798)
				child->__update(tmp4,true,null());
			}
		}
	}
return null();
}


int DisplayObjectContainer_obj::get_numChildren( ){
	HX_STACK_FRAME("openfl.display.DisplayObjectContainer","get_numChildren",0x73b78b18,"openfl.display.DisplayObjectContainer.get_numChildren","openfl/display/DisplayObjectContainer.hx",812,0x5f4d3d72)
	HX_STACK_THIS(this)
	HX_STACK_LINE(814)
	int tmp = this->__children->length;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(814)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC0(DisplayObjectContainer_obj,get_numChildren,return )


DisplayObjectContainer_obj::DisplayObjectContainer_obj()
{
}

void DisplayObjectContainer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DisplayObjectContainer);
	HX_MARK_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_MARK_MEMBER_NAME(tabChildren,"tabChildren");
	HX_MARK_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DisplayObjectContainer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mouseChildren,"mouseChildren");
	HX_VISIT_MEMBER_NAME(tabChildren,"tabChildren");
	HX_VISIT_MEMBER_NAME(__removedChildren,"__removedChildren");
	::openfl::display::InteractiveObject_obj::__Visit(HX_VISIT_ARG);
}

Dynamic DisplayObjectContainer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"resolve") ) { return resolve_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addChild") ) { return addChild_dyn(); }
		if (HX_FIELD_EQ(inName,"contains") ) { return contains_dyn(); }
		if (HX_FIELD_EQ(inName,"__update") ) { return __update_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return __hitTest_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"addChildAt") ) { return addChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"getChildAt") ) { return getChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"numChildren") ) { if (inCallProp == hx::paccAlways) return get_numChildren(); }
		if (HX_FIELD_EQ(inName,"tabChildren") ) { return tabChildren; }
		if (HX_FIELD_EQ(inName,"removeChild") ) { return removeChild_dyn(); }
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return __getBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return __renderDOM_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"swapChildren") ) { return swapChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"__enterFrame") ) { return __enterFrame_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { return mouseChildren; }
		if (HX_FIELD_EQ(inName,"getChildIndex") ) { return getChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildAt") ) { return removeChildAt_dyn(); }
		if (HX_FIELD_EQ(inName,"setChildIndex") ) { return setChildIndex_dyn(); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return __hitTestMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getChildByName") ) { return getChildByName_dyn(); }
		if (HX_FIELD_EQ(inName,"removeChildren") ) { return removeChildren_dyn(); }
		if (HX_FIELD_EQ(inName,"swapChildrenAt") ) { return swapChildrenAt_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_numChildren") ) { return get_numChildren_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { return __removedChildren; }
		if (HX_FIELD_EQ(inName,"stopAllMovieClips") ) { return stopAllMovieClips_dyn(); }
		if (HX_FIELD_EQ(inName,"__getRenderBounds") ) { return __getRenderBounds_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__readGraphicsData") ) { return __readGraphicsData_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__setStageReference") ) { return __setStageReference_dyn(); }
		if (HX_FIELD_EQ(inName,"__stopAllMovieClips") ) { return __stopAllMovieClips_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getObjectsUnderPoint") ) { return getObjectsUnderPoint_dyn(); }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"areInaccessibleObjectsUnderPoint") ) { return areInaccessibleObjectsUnderPoint_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DisplayObjectContainer_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"tabChildren") ) { tabChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"mouseChildren") ) { mouseChildren=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__removedChildren") ) { __removedChildren=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DisplayObjectContainer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"));
	outFields->push(HX_HCSTRING("numChildren","\xa5","\x69","\x80","\x5c"));
	outFields->push(HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"));
	outFields->push(HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,mouseChildren),HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff")},
	{hx::fsBool,(int)offsetof(DisplayObjectContainer_obj,tabChildren),HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(DisplayObjectContainer_obj,__removedChildren),HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("mouseChildren","\x84","\x18","\x6b","\xff"),
	HX_HCSTRING("tabChildren","\xb4","\x0c","\x86","\x4b"),
	HX_HCSTRING("__removedChildren","\xdf","\xc5","\x0e","\xd3"),
	HX_HCSTRING("addChild","\xbb","\xcf","\x16","\xbf"),
	HX_HCSTRING("addChildAt","\x8e","\xad","\x36","\xce"),
	HX_HCSTRING("areInaccessibleObjectsUnderPoint","\x3d","\x22","\x9b","\x1e"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("getChildAt","\xb9","\x07","\x0e","\xb6"),
	HX_HCSTRING("getChildByName","\x88","\xb9","\x73","\xa3"),
	HX_HCSTRING("getChildIndex","\x0c","\x68","\x02","\xb9"),
	HX_HCSTRING("getObjectsUnderPoint","\x96","\x10","\xd5","\x80"),
	HX_HCSTRING("removeChild","\xb8","\x86","\xed","\x43"),
	HX_HCSTRING("removeChildAt","\xcb","\xdd","\x66","\x3f"),
	HX_HCSTRING("removeChildren","\xa3","\x55","\xc0","\x3a"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	HX_HCSTRING("setChildIndex","\x18","\x4a","\x08","\xfe"),
	HX_HCSTRING("stopAllMovieClips","\xf2","\x60","\xf8","\xa0"),
	HX_HCSTRING("swapChildren","\xf2","\x4a","\x53","\xe0"),
	HX_HCSTRING("swapChildrenAt","\x85","\xa4","\xf1","\x13"),
	HX_HCSTRING("__enterFrame","\x15","\x7f","\xe3","\x3a"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__getRenderBounds","\x01","\x11","\xb8","\x7b"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__readGraphicsData","\x2b","\x10","\x91","\xf2"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__setStageReference","\x4f","\xe5","\xe5","\xf4"),
	HX_HCSTRING("__stopAllMovieClips","\xd2","\x89","\xe8","\x53"),
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("get_numChildren","\x3c","\x21","\x62","\x1d"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DisplayObjectContainer_obj::__mClass,"__mClass");
};

#endif

hx::Class DisplayObjectContainer_obj::__mClass;

void DisplayObjectContainer_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DisplayObjectContainer","\x4a","\x52","\xef","\x89");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DisplayObjectContainer_obj >;
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

} // end namespace openfl
} // end namespace display
