#ifndef INCLUDED_haxegon_Gfx
#define INCLUDED_haxegon_Gfx

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(haxegon,Gfx)
HX_DECLARE_CLASS2(haxegon,util,AnimationContainer)
HX_DECLARE_CLASS2(haxegon,util,Tileset)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Shape)
HX_DECLARE_CLASS2(openfl,display,Stage)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)
namespace haxegon{


class HXCPP_CLASS_ATTRIBUTES  Gfx_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Gfx_obj OBJ_;
		Gfx_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="haxegon.Gfx")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Gfx_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Gfx_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("Gfx","\x59","\x39","\x36","\x00"); }

		static void __boot();
		static int LEFT;
		static int RIGHT;
		static int TOP;
		static int BOTTOM;
		static int CENTER;
		static int screenwidth;
		static int screenheight;
		static int screenwidthmid;
		static int screenheightmid;
		static bool clearscreeneachframe;
		static int screenscale;
		static int devicexres;
		static int deviceyres;
		static bool fullscreen;
		static ::String currenttilesetname;
		static ::openfl::display::BitmapData backbuffer;
		static ::openfl::display::BitmapData drawto;
		static Void resizescreen( Float width,Float height,hx::Null< int >  scale);
		static Dynamic resizescreen_dyn();

		static Void setfullscreen( bool fs);
		static Dynamic setfullscreen_dyn();

		static int getscreenx( Float _x);
		static Dynamic getscreenx_dyn();

		static int getscreeny( Float _y);
		static Dynamic getscreeny_dyn();

		static bool showfps;
		static int render_fps;
		static int render_fps_max;
		static int update_fps;
		static int update_fps_max;
		static int fps( );
		static Dynamic fps_dyn();

		static int updatefps( );
		static Dynamic updatefps_dyn();

		static Void reset( );
		static Dynamic reset_dyn();

		static Void reset_ifclear( );
		static Dynamic reset_ifclear_dyn();

		static Void rotation( Float angle,hx::Null< Float >  xpivot,hx::Null< Float >  ypivot);
		static Dynamic rotation_dyn();

		static Void scale( Float xscale,Float yscale,hx::Null< Float >  xpivot,hx::Null< Float >  ypivot);
		static Dynamic scale_dyn();

		static Void imagealpha( Float a);
		static Dynamic imagealpha_dyn();

		static Void imagecolor( hx::Null< int >  c,hx::Null< int >  add);
		static Dynamic imagecolor_dyn();

		static Void changetileset( ::String tilesetname);
		static Dynamic changetileset_dyn();

		static int numberoftiles( );
		static Dynamic numberoftiles_dyn();

		static Void loadtiles( ::String imagename,int width,int height,::String altlabel);
		static Dynamic loadtiles_dyn();

		static Void addblanktiles( ::String imagename,int num);
		static Dynamic addblanktiles_dyn();

		static Void createtiles( ::String imagename,Float width,Float height,int amount);
		static Dynamic createtiles_dyn();

		static int tilewidth( );
		static Dynamic tilewidth_dyn();

		static int tileheight( );
		static Dynamic tileheight_dyn();

		static Void loadimage( ::String imagename);
		static Dynamic loadimage_dyn();

		static Void createimage( ::String imagename,Float width,Float height);
		static Dynamic createimage_dyn();

		static Void resizeimage( ::String imagename,Float scale);
		static Dynamic resizeimage_dyn();

		static int imagewidth( ::String imagename);
		static Dynamic imagewidth_dyn();

		static int imageheight( ::String imagename);
		static Dynamic imageheight_dyn();

		static Void drawtoscreen( );
		static Dynamic drawtoscreen_dyn();

		static Void drawtoimage( ::String imagename);
		static Dynamic drawtoimage_dyn();

		static Void drawtotile( int tilenumber);
		static Dynamic drawtotile_dyn();

		static Float t1;
		static Float t2;
		static Float t3;
		static Float imagealignx( Float x);
		static Dynamic imagealignx_dyn();

		static Float imagealigny( Float y);
		static Dynamic imagealigny_dyn();

		static Float imagealignonimagex( Float x);
		static Dynamic imagealignonimagex_dyn();

		static Float imagealignonimagey( Float y);
		static Dynamic imagealignonimagey_dyn();

		static Void drawimage( Float x,Float y,::String imagename);
		static Dynamic drawimage_dyn();

		static Void grabtilefromscreen( int tilenumber,Float x,Float y);
		static Dynamic grabtilefromscreen_dyn();

		static Void grabtilefromimage( int tilenumber,::String imagename,Float x,Float y);
		static Dynamic grabtilefromimage_dyn();

		static Void grabimagefromscreen( ::String imagename,Float x,Float y);
		static Dynamic grabimagefromscreen_dyn();

		static Void grabimagefromimage( ::String imagename,::String imagetocopyfrom,Float x,Float y,hx::Null< Float >  w,hx::Null< Float >  h);
		static Dynamic grabimagefromimage_dyn();

		static Void copytile( int totilenumber,::String fromtileset,int fromtilenumber);
		static Dynamic copytile_dyn();

		static Void drawtile( Float x,Float y,::String tilesetname,int t);
		static Dynamic drawtile_dyn();

		static int currentframe( );
		static Dynamic currentframe_dyn();

		static Void stopanimation( ::String animationname);
		static Dynamic stopanimation_dyn();

		static Void defineanimation( ::String animationname,::String tileset,int startframe,int endframe,int delayperframe);
		static Dynamic defineanimation_dyn();

		static Void drawanimation( Float x,Float y,::String animationname);
		static Dynamic drawanimation_dyn();

		static Float tilealignx( Float x);
		static Dynamic tilealignx_dyn();

		static Float tilealigny( Float y);
		static Dynamic tilealigny_dyn();

		static Float tilealignontilex( Float x);
		static Dynamic tilealignontilex_dyn();

		static Float tilealignontiley( Float y);
		static Dynamic tilealignontiley_dyn();

		static Void drawline( Float _x1,Float _y1,Float _x2,Float _y2,int col,hx::Null< Float >  alpha);
		static Dynamic drawline_dyn();

		static Void drawhexagon( Float x,Float y,Float radius,Float angle,int col,hx::Null< Float >  alpha);
		static Dynamic drawhexagon_dyn();

		static Void fillhexagon( Float x,Float y,Float radius,Float angle,int col,hx::Null< Float >  alpha);
		static Dynamic fillhexagon_dyn();

		static Void drawcircle( Float x,Float y,Float radius,int col,hx::Null< Float >  alpha);
		static Dynamic drawcircle_dyn();

		static Void fillcircle( Float x,Float y,Float radius,int col,hx::Null< Float >  alpha);
		static Dynamic fillcircle_dyn();

		static Void drawtri( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,int col,hx::Null< Float >  alpha);
		static Dynamic drawtri_dyn();

		static Void filltri( Float x1,Float y1,Float x2,Float y2,Float x3,Float y3,int col,hx::Null< Float >  alpha);
		static Dynamic filltri_dyn();

		static Void drawbox( Float x,Float y,Float width,Float height,int col,hx::Null< Float >  alpha);
		static Dynamic drawbox_dyn();

		static Float get_linethickness( );
		static Dynamic get_linethickness_dyn();

		static Float set_linethickness( Float size);
		static Dynamic set_linethickness_dyn();

		static Void clearscreen( hx::Null< int >  col);
		static Dynamic clearscreen_dyn();

		static int getpixel( Float x,Float y);
		static Dynamic getpixel_dyn();

		static Void setpixel( Float x,Float y,int col,hx::Null< Float >  alpha);
		static Dynamic setpixel_dyn();

		static Void fillbox( Float x,Float y,Float width,Float height,int col,hx::Null< Float >  alpha);
		static Dynamic fillbox_dyn();

		static int getred( int c);
		static Dynamic getred_dyn();

		static int getgreen( int c);
		static Dynamic getgreen_dyn();

		static int getblue( int c);
		static Dynamic getblue_dyn();

		static int gethue( int c);
		static Dynamic gethue_dyn();

		static Float getsaturation( int c);
		static Dynamic getsaturation_dyn();

		static Float getlightness( int c);
		static Dynamic getlightness_dyn();

		static int rgb( int red,int green,int blue);
		static Dynamic rgb_dyn();

		static int hsl( Float hue,Float saturation,Float lightness);
		static Dynamic hsl_dyn();

		static Void setzoom( int t);
		static Dynamic setzoom_dyn();

		static Void updategraphicsmode( );
		static Dynamic updategraphicsmode_dyn();

		static Void init( ::openfl::display::Stage stage);
		static Dynamic init_dyn();

		static Void initgfx( int width,int height,int scale);
		static Dynamic initgfx_dyn();

		static Void settrect( Float x,Float y,Float w,Float h);
		static Dynamic settrect_dyn();

		static Void settpoint( Float x,Float y);
		static Dynamic settpoint_dyn();

		static Array< ::Dynamic > tiles;
		static ::haxe::ds::StringMap tilesetindex;
		static int currenttileset;
		static Array< ::Dynamic > animations;
		static int animationnum;
		static ::haxe::ds::StringMap animationindex;
		static Array< ::Dynamic > images;
		static int imagenum;
		static ::openfl::geom::ColorTransform ct;
		static ::openfl::geom::ColorTransform alphact;
		static ::openfl::geom::Rectangle images_rect;
		static ::openfl::geom::Point tl;
		static ::openfl::geom::Rectangle trect;
		static ::openfl::geom::Point tpoint;
		static ::openfl::display::BitmapData tbuffer;
		static ::haxe::ds::StringMap imageindex;
		static bool transform;
		static bool coltransform;
		static Float imagerotate;
		static Float imagerotatexpivot;
		static Float imagerotateypivot;
		static Float imagexscale;
		static Float imageyscale;
		static Float imagescalexpivot;
		static Float imagescaleypivot;
		static Float imagealphamult;
		static Float imageredmult;
		static Float imagegreenmult;
		static Float imagebluemult;
		static Float imageredadd;
		static Float imagegreenadd;
		static Float imageblueadd;
		static int tempframe;
		static Float tempxalign;
		static Float tempyalign;
		static Float temprotate;
		static bool changecolours;
		static ::String oldtileset;
		static Float tx;
		static Float ty;
		static Float tx2;
		static Float ty2;
		static ::openfl::display::BitmapData transparentpixel;
		static Float _linethickness;
		static ::openfl::display::BitmapData buffer;
		static ::openfl::display::BitmapData temptile;
		static ::openfl::display::Bitmap screen;
		static ::openfl::display::Shape tempshape;
		static ::openfl::geom::Matrix shapematrix;
		static int alphamult;
		static ::openfl::display::Stage gfxstage;
		static Array< Float > hslval;
		static bool initrun;
		static bool skiprender;
		static bool drawingtoscreen;
};

} // end namespace haxegon

#endif /* INCLUDED_haxegon_Gfx */ 
