#ifndef INCLUDED_haxegon_bitmapFont_BitmapTextField
#define INCLUDED_haxegon_bitmapFont_BitmapTextField

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapFont)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapGlyphCollection)
HX_DECLARE_CLASS2(haxegon,bitmapFont,BitmapTextField)
HX_DECLARE_CLASS2(haxegon,bitmapFont,TextBorderStyle)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,geom,Point)
namespace haxegon{
namespace bitmapFont{


class HXCPP_CLASS_ATTRIBUTES  BitmapTextField_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef BitmapTextField_obj OBJ_;
		BitmapTextField_obj();
		Void __construct(::haxegon::bitmapFont::BitmapFont font,::String __o_text,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="haxegon.bitmapFont.BitmapTextField")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< BitmapTextField_obj > __new(::haxegon::bitmapFont::BitmapFont font,::String __o_text,Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BitmapTextField_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("BitmapTextField","\xbe","\x06","\xe0","\x0b"); }

		::haxegon::bitmapFont::BitmapFont font;
		::String text;
		Array< ::String > _lines;
		Array< Float > _linesWidth;
		::String alignment;
		int lineSpacing;
		int letterSpacing;
		bool autoUpperCase;
		bool wordWrap;
		bool wrapByWord;
		bool autoSize;
		int padding;
		Float textWidth;
		Float textHeight;
		Float lineHeight;
		int numSpacesInTab;
		::String _tabSpaces;
		int textColor;
		bool useTextColor;
		::haxegon::bitmapFont::TextBorderStyle borderStyle;
		int borderColor;
		Float borderSize;
		Float borderQuality;
		::openfl::geom::Point shadowOffset;
		bool background;
		int backgroundColor;
		bool multiLine;
		int numLines;
		Float size;
		bool smoothing;
		bool updateImmediately;
		bool _pendingTextChange;
		bool _pendingGraphicChange;
		bool _pendingTextGlyphsChange;
		bool _pendingBorderGlyphsChange;
		int _fieldWidth;
		int _fieldHeight;
		::openfl::display::Bitmap _bitmap;
		::openfl::display::BitmapData _bitmapData;
		::haxegon::bitmapFont::BitmapGlyphCollection textGlyphs;
		::haxegon::bitmapFont::BitmapGlyphCollection borderGlyphs;
		::openfl::geom::Point _point;
		virtual Void dispose( );
		Dynamic dispose_dyn();

		virtual Void forceGraphicUpdate( );
		Dynamic forceGraphicUpdate_dyn();

		virtual Void checkImmediateChanges( );
		Dynamic checkImmediateChanges_dyn();

		virtual Void checkPendingChanges( );
		Dynamic checkPendingChanges_dyn();

		virtual int set_textColor( int value);
		Dynamic set_textColor_dyn();

		virtual bool set_useTextColor( bool value);
		Dynamic set_useTextColor_dyn();

		virtual ::String set_text( ::String value);
		Dynamic set_text_dyn();

		virtual Void updateText( );
		Dynamic updateText_dyn();

		virtual Void computeTextSize( );
		Dynamic computeTextSize_dyn();

		virtual Float getLineWidth( int lineIndex);
		Dynamic getLineWidth_dyn();

		virtual Float getStringWidth( ::String str,hx::Null< bool >  fordrawing);
		Dynamic getStringWidth_dyn();

		virtual Void cutLines( );
		Dynamic cutLines_dyn();

		virtual Void wrap( );
		Dynamic wrap_dyn();

		virtual Void splitLineIntoWords( ::String line,Array< ::String > words);
		Dynamic splitLineIntoWords_dyn();

		virtual Void wrapLineByWord( Array< ::String > words,Array< ::String > newLines);
		Dynamic wrapLineByWord_dyn();

		virtual Void wrapLineByCharacter( Array< ::String > words,Array< ::String > newLines);
		Dynamic wrapLineByCharacter_dyn();

		virtual Void updateGraphic( );
		Dynamic updateGraphic_dyn();

		virtual Void blitLine( ::String line,::haxegon::bitmapFont::BitmapGlyphCollection glyphs,int startX,int startY);
		Dynamic blitLine_dyn();

		virtual Void setBorderStyle( ::haxegon::bitmapFont::TextBorderStyle Style,hx::Null< int >  Color,hx::Null< Float >  Size,hx::Null< Float >  Quality);
		Dynamic setBorderStyle_dyn();

		virtual Float set_width( Float value);

		virtual ::String set_alignment( ::String value);
		Dynamic set_alignment_dyn();

		virtual bool set_multiLine( bool value);
		Dynamic set_multiLine_dyn();

		virtual ::haxegon::bitmapFont::BitmapFont set_font( ::haxegon::bitmapFont::BitmapFont value);
		Dynamic set_font_dyn();

		virtual int set_lineSpacing( int value);
		Dynamic set_lineSpacing_dyn();

		virtual int set_letterSpacing( int value);
		Dynamic set_letterSpacing_dyn();

		virtual bool set_autoUpperCase( bool value);
		Dynamic set_autoUpperCase_dyn();

		virtual bool set_wordWrap( bool value);
		Dynamic set_wordWrap_dyn();

		virtual bool set_wrapByWord( bool value);
		Dynamic set_wrapByWord_dyn();

		virtual bool set_autoSize( bool value);
		Dynamic set_autoSize_dyn();

		virtual Float set_size( Float value);
		Dynamic set_size_dyn();

		virtual int set_padding( int value);
		Dynamic set_padding_dyn();

		virtual int set_numSpacesInTab( int value);
		Dynamic set_numSpacesInTab_dyn();

		virtual bool set_background( bool value);
		Dynamic set_background_dyn();

		virtual int set_backgroundColor( int value);
		Dynamic set_backgroundColor_dyn();

		virtual ::haxegon::bitmapFont::TextBorderStyle set_borderStyle( ::haxegon::bitmapFont::TextBorderStyle style);
		Dynamic set_borderStyle_dyn();

		virtual int set_borderColor( int value);
		Dynamic set_borderColor_dyn();

		virtual Float set_borderSize( Float value);
		Dynamic set_borderSize_dyn();

		virtual Float set_borderQuality( Float value);
		Dynamic set_borderQuality_dyn();

		virtual int get_numLines( );
		Dynamic get_numLines_dyn();

		virtual Float get_textWidth( );
		Dynamic get_textWidth_dyn();

		virtual Float get_textHeight( );
		Dynamic get_textHeight_dyn();

		virtual Float get_lineHeight( );
		Dynamic get_lineHeight_dyn();

		virtual bool set_updateImmediately( bool value);
		Dynamic set_updateImmediately_dyn();

		virtual bool set_smoothing( bool value);
		Dynamic set_smoothing_dyn();

		virtual Void updateTextGlyphs( );
		Dynamic updateTextGlyphs_dyn();

		virtual Void updateBorderGlyphs( );
		Dynamic updateBorderGlyphs_dyn();

};

} // end namespace haxegon
} // end namespace bitmapFont

#endif /* INCLUDED_haxegon_bitmapFont_BitmapTextField */ 
