#ifndef INCLUDED_haxegon_Text
#define INCLUDED_haxegon_Text

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(haxegon,Text)
HX_DECLARE_CLASS2(haxegon,util,Fontclass)
HX_DECLARE_CLASS2(haxegon,util,Fontfile)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Text_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Text_obj OBJ_;
		Text_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Text")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Text_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Text_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Text","\xcd","\xf8","\xd2","\x37"); }

		static void __boot();
		static Void init( ::openfl::display::Stage stage);
		static Dynamic init_dyn();

		static Void align( int a);
		static Dynamic align_dyn();

		static Void rotation( Float a,hx::Null< int >  xpivot,hx::Null< int >  ypivot);
		static Dynamic rotation_dyn();

		static Void input_checkfortext( );
		static Dynamic input_checkfortext_dyn();

		static ::String reverse( ::String t);
		static Dynamic reverse_dyn();

		static bool input( Float x,Float y,::String text,hx::Null< int >  col,hx::Null< int >  responsecol);
		static Dynamic input_dyn();

		static ::String getinput( );
		static Dynamic getinput_dyn();

		static Void drawstringinput( );
		static Dynamic drawstringinput_dyn();

		static Void wordwrap( Dynamic textwidth);
		static Dynamic wordwrap_dyn();

		static Void dowordwrap( int textwidth,::String txt);
		static Dynamic dowordwrap_dyn();

		static Float currentlen( );
		static Dynamic currentlen_dyn();

		static Float currentheight( );
		static Dynamic currentheight_dyn();

		static Float len( ::String t);
		static Dynamic len_dyn();

		static Float height( ::String text);
		static Dynamic height_dyn();

		static Float t1;
		static Float t2;
		static Float t3;
		static Float cachealignx( Float x,int c);
		static Dynamic cachealignx_dyn();

		static Float cachealigny( Float y,int c);
		static Dynamic cachealigny_dyn();

		static Float alignx( Float x);
		static Dynamic alignx_dyn();

		static Float aligny( Float y);
		static Dynamic aligny_dyn();

		static Float cachealigntextx( int c,Float x);
		static Dynamic cachealigntextx_dyn();

		static Float cachealigntexty( int c,Float y);
		static Dynamic cachealigntexty_dyn();

		static Float aligntextx( ::String t,Float x);
		static Dynamic aligntextx_dyn();

		static Float aligntexty( ::String t,Float y);
		static Dynamic aligntexty_dyn();

		static ::haxe::ds::StringMap cachedtextindex;
		static Array< ::Dynamic > cachedtext;
		static int cacheindex;
		static ::String cachelabel;
		static Void cleartextcache( );
		static Dynamic cleartextcache_dyn();

		static Void display( Float x,Float y,::String text,hx::Null< int >  col);
		static Dynamic display_dyn();

		static Void cache_bitmap_text( ::String text,int col);
		static Dynamic cache_bitmap_text_dyn();

		static Void display_bitmap( Float x,Float y,int text,Float size);
		static Dynamic display_bitmap_dyn();

		static Void display_ttf( Float x,Float y,::String text,hx::Null< int >  col);
		static Dynamic display_ttf_dyn();

		static Void createtypeface( ::String t);
		static Dynamic createtypeface_dyn();

		static Void setfont( ::String t,hx::Null< Float >  s);
		static Dynamic setfont_dyn();

		static Void changesize( Float t);
		static Dynamic changesize_dyn();

		static Void addfont( ::String t,hx::Null< Float >  defaultsize);
		static Dynamic addfont_dyn();

		static Void addtypeface( ::String _name,Float _size);
		static Dynamic addtypeface_dyn();

		static ::String getfonttypename( ::String fontname);
		static Dynamic getfonttypename_dyn();

		static Array< ::Dynamic > fontfile;
		static ::haxe::ds::StringMap fontfileindex;
		static Array< ::Dynamic > typeface;
		static ::haxe::ds::StringMap typefaceindex;
		static ::openfl::geom::Matrix fontmatrix;
		static int currentindex;
		static ::String currentfont;
		static Float currentsize;
		static ::openfl::display::Stage gfxstage;
		static ::openfl::display::BitmapData drawto;
		static int LEFT;
		static int RIGHT;
		static int TOP;
		static int BOTTOM;
		static int CENTER;
		static int textalign;
		static Float textrotate;
		static Float textrotatexpivot;
		static Float textrotateypivot;
		static Float textalphamult;
		static Float temprotate;
		static Float tempxscale;
		static Float tempyscale;
		static Float tempxpivot;
		static Float tempypivot;
		static Float tempalpha;
		static Float tempred;
		static Float tempgreen;
		static Float tempblue;
		static bool changecolours;
		static ::openfl::geom::ColorTransform alphact;
		static int wordwrap_width;
		static ::String wordwrap_text;
		static ::String inputtext;
		static ::String lastentry;
		static int inputmaxlength;
		static Float input_textxp;
		static Float input_textyp;
		static Float input_responsexp;
		static Float input_responseyp;
		static int input_textcol;
		static int input_responsecol;
		static ::String input_text;
		static ::String input_response;
		static int input_cursorglow;
		static ::String input_font;
		static Float input_textsize;
		static int input_show;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Text */ 
