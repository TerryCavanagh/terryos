#include <hxcpp.h>

#ifndef INCLUDED_haxegon_Key
#include <haxegon/Key.h>
#endif
namespace haxegon{

::haxegon::Key Key_obj::A;

::haxegon::Key Key_obj::ALT;

::haxegon::Key Key_obj::B;

::haxegon::Key Key_obj::BACKSLASH;

::haxegon::Key Key_obj::BACKSPACE;

::haxegon::Key Key_obj::C;

::haxegon::Key Key_obj::CAPSLOCK;

::haxegon::Key Key_obj::COMMA;

::haxegon::Key Key_obj::CONTROL;

::haxegon::Key Key_obj::D;

::haxegon::Key Key_obj::DELETE;

::haxegon::Key Key_obj::DOWN;

::haxegon::Key Key_obj::E;

::haxegon::Key Key_obj::EIGHT;

::haxegon::Key Key_obj::END;

::haxegon::Key Key_obj::ENTER;

::haxegon::Key Key_obj::ESCAPE;

::haxegon::Key Key_obj::F;

::haxegon::Key Key_obj::F1;

::haxegon::Key Key_obj::F10;

::haxegon::Key Key_obj::F11;

::haxegon::Key Key_obj::F12;

::haxegon::Key Key_obj::F2;

::haxegon::Key Key_obj::F3;

::haxegon::Key Key_obj::F4;

::haxegon::Key Key_obj::F5;

::haxegon::Key Key_obj::F6;

::haxegon::Key Key_obj::F7;

::haxegon::Key Key_obj::F8;

::haxegon::Key Key_obj::F9;

::haxegon::Key Key_obj::FIVE;

::haxegon::Key Key_obj::FOUR;

::haxegon::Key Key_obj::G;

::haxegon::Key Key_obj::H;

::haxegon::Key Key_obj::HOME;

::haxegon::Key Key_obj::I;

::haxegon::Key Key_obj::J;

::haxegon::Key Key_obj::K;

::haxegon::Key Key_obj::L;

::haxegon::Key Key_obj::LBRACKET;

::haxegon::Key Key_obj::LEFT;

::haxegon::Key Key_obj::M;

::haxegon::Key Key_obj::MINUS;

::haxegon::Key Key_obj::N;

::haxegon::Key Key_obj::NINE;

::haxegon::Key Key_obj::O;

::haxegon::Key Key_obj::ONE;

::haxegon::Key Key_obj::P;

::haxegon::Key Key_obj::PAGEDOWN;

::haxegon::Key Key_obj::PAGEUP;

::haxegon::Key Key_obj::PERIOD;

::haxegon::Key Key_obj::PLUS;

::haxegon::Key Key_obj::Q;

::haxegon::Key Key_obj::QUOTE;

::haxegon::Key Key_obj::R;

::haxegon::Key Key_obj::RBRACKET;

::haxegon::Key Key_obj::RIGHT;

::haxegon::Key Key_obj::S;

::haxegon::Key Key_obj::SEMICOLON;

::haxegon::Key Key_obj::SEVEN;

::haxegon::Key Key_obj::SHIFT;

::haxegon::Key Key_obj::SIX;

::haxegon::Key Key_obj::SLASH;

::haxegon::Key Key_obj::SPACE;

::haxegon::Key Key_obj::T;

::haxegon::Key Key_obj::TAB;

::haxegon::Key Key_obj::THREE;

::haxegon::Key Key_obj::TWO;

::haxegon::Key Key_obj::U;

::haxegon::Key Key_obj::UP;

::haxegon::Key Key_obj::V;

::haxegon::Key Key_obj::W;

::haxegon::Key Key_obj::X;

::haxegon::Key Key_obj::Y;

::haxegon::Key Key_obj::Z;

::haxegon::Key Key_obj::ZERO;

HX_DEFINE_CREATE_ENUM(Key_obj)

int Key_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 65;
	if (inName==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) return 1;
	if (inName==HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")) return 55;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return 52;
	if (inName==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) return 2;
	if (inName==HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80")) return 56;
	if (inName==HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")) return 61;
	if (inName==HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")) return 64;
	if (inName==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) return 3;
	if (inName==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")) return 51;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 68;
	if (inName==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) return 4;
	if (inName==HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")) return 34;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 73;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return 59;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return 48;
	if (inName==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) return 5;
	if (inName==HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")) return 36;
	if (inName==HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")) return 45;
	if (inName==HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")) return 46;
	if (inName==HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")) return 47;
	if (inName==HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")) return 37;
	if (inName==HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")) return 38;
	if (inName==HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")) return 39;
	if (inName==HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")) return 40;
	if (inName==HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")) return 41;
	if (inName==HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")) return 42;
	if (inName==HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")) return 43;
	if (inName==HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")) return 44;
	if (inName==HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")) return 31;
	if (inName==HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")) return 30;
	if (inName==HX_HCSTRING("G","\x47","\x00","\x00","\x00")) return 6;
	if (inName==HX_HCSTRING("H","\x48","\x00","\x00","\x00")) return 7;
	if (inName==HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")) return 72;
	if (inName==HX_HCSTRING("I","\x49","\x00","\x00","\x00")) return 8;
	if (inName==HX_HCSTRING("J","\x4a","\x00","\x00","\x00")) return 9;
	if (inName==HX_HCSTRING("K","\x4b","\x00","\x00","\x00")) return 10;
	if (inName==HX_HCSTRING("L","\x4c","\x00","\x00","\x00")) return 11;
	if (inName==HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16")) return 53;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 69;
	if (inName==HX_HCSTRING("M","\x4d","\x00","\x00","\x00")) return 12;
	if (inName==HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")) return 49;
	if (inName==HX_HCSTRING("N","\x4e","\x00","\x00","\x00")) return 13;
	if (inName==HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")) return 35;
	if (inName==HX_HCSTRING("O","\x4f","\x00","\x00","\x00")) return 14;
	if (inName==HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")) return 27;
	if (inName==HX_HCSTRING("P","\x50","\x00","\x00","\x00")) return 15;
	if (inName==HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9")) return 75;
	if (inName==HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98")) return 74;
	if (inName==HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")) return 62;
	if (inName==HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")) return 50;
	if (inName==HX_HCSTRING("Q","\x51","\x00","\x00","\x00")) return 16;
	if (inName==HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")) return 58;
	if (inName==HX_HCSTRING("R","\x52","\x00","\x00","\x00")) return 17;
	if (inName==HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d")) return 54;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 70;
	if (inName==HX_HCSTRING("S","\x53","\x00","\x00","\x00")) return 18;
	if (inName==HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")) return 57;
	if (inName==HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")) return 33;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return 60;
	if (inName==HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")) return 32;
	if (inName==HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")) return 63;
	if (inName==HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")) return 66;
	if (inName==HX_HCSTRING("T","\x54","\x00","\x00","\x00")) return 19;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return 71;
	if (inName==HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")) return 29;
	if (inName==HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")) return 28;
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return 20;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 67;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return 21;
	if (inName==HX_HCSTRING("W","\x57","\x00","\x00","\x00")) return 22;
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return 23;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return 24;
	if (inName==HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")) return 25;
	if (inName==HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")) return 26;
	return super::__FindIndex(inName);
}

int Key_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return 0;
	if (inName==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")) return 0;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return 0;
	if (inName==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80")) return 0;
	if (inName==HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")) return 0;
	if (inName==HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")) return 0;
	if (inName==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")) return 0;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return 0;
	if (inName==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")) return 0;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return 0;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return 0;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return 0;
	if (inName==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")) return 0;
	if (inName==HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")) return 0;
	if (inName==HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")) return 0;
	if (inName==HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")) return 0;
	if (inName==HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")) return 0;
	if (inName==HX_HCSTRING("G","\x47","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("H","\x48","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")) return 0;
	if (inName==HX_HCSTRING("I","\x49","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("J","\x4a","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("K","\x4b","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("L","\x4c","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16")) return 0;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return 0;
	if (inName==HX_HCSTRING("M","\x4d","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")) return 0;
	if (inName==HX_HCSTRING("N","\x4e","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")) return 0;
	if (inName==HX_HCSTRING("O","\x4f","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")) return 0;
	if (inName==HX_HCSTRING("P","\x50","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9")) return 0;
	if (inName==HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98")) return 0;
	if (inName==HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")) return 0;
	if (inName==HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")) return 0;
	if (inName==HX_HCSTRING("Q","\x51","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")) return 0;
	if (inName==HX_HCSTRING("R","\x52","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d")) return 0;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return 0;
	if (inName==HX_HCSTRING("S","\x53","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")) return 0;
	if (inName==HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")) return 0;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return 0;
	if (inName==HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")) return 0;
	if (inName==HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")) return 0;
	if (inName==HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")) return 0;
	if (inName==HX_HCSTRING("T","\x54","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return 0;
	if (inName==HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")) return 0;
	if (inName==HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")) return 0;
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("W","\x57","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")) return 0;
	if (inName==HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic Key_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("A","\x41","\x00","\x00","\x00")) return A;
	if (inName==HX_HCSTRING("ALT","\x09","\x95","\x31","\x00")) return ALT;
	if (inName==HX_HCSTRING("B","\x42","\x00","\x00","\x00")) return B;
	if (inName==HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3")) return BACKSLASH;
	if (inName==HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6")) return BACKSPACE;
	if (inName==HX_HCSTRING("C","\x43","\x00","\x00","\x00")) return C;
	if (inName==HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80")) return CAPSLOCK;
	if (inName==HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8")) return COMMA;
	if (inName==HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99")) return CONTROL;
	if (inName==HX_HCSTRING("D","\x44","\x00","\x00","\x00")) return D;
	if (inName==HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d")) return DELETE;
	if (inName==HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d")) return DOWN;
	if (inName==HX_HCSTRING("E","\x45","\x00","\x00","\x00")) return E;
	if (inName==HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb")) return EIGHT;
	if (inName==HX_HCSTRING("END","\xbb","\x9f","\x34","\x00")) return END;
	if (inName==HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee")) return ENTER;
	if (inName==HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d")) return ESCAPE;
	if (inName==HX_HCSTRING("F","\x46","\x00","\x00","\x00")) return F;
	if (inName==HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00")) return F1;
	if (inName==HX_HCSTRING("F10","\xa5","\x48","\x35","\x00")) return F10;
	if (inName==HX_HCSTRING("F11","\xa6","\x48","\x35","\x00")) return F11;
	if (inName==HX_HCSTRING("F12","\xa7","\x48","\x35","\x00")) return F12;
	if (inName==HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00")) return F2;
	if (inName==HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00")) return F3;
	if (inName==HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00")) return F4;
	if (inName==HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00")) return F5;
	if (inName==HX_HCSTRING("F6","\x30","\x3d","\x00","\x00")) return F6;
	if (inName==HX_HCSTRING("F7","\x31","\x3d","\x00","\x00")) return F7;
	if (inName==HX_HCSTRING("F8","\x32","\x3d","\x00","\x00")) return F8;
	if (inName==HX_HCSTRING("F9","\x33","\x3d","\x00","\x00")) return F9;
	if (inName==HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e")) return FIVE;
	if (inName==HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e")) return FOUR;
	if (inName==HX_HCSTRING("G","\x47","\x00","\x00","\x00")) return G;
	if (inName==HX_HCSTRING("H","\x48","\x00","\x00","\x00")) return H;
	if (inName==HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f")) return HOME;
	if (inName==HX_HCSTRING("I","\x49","\x00","\x00","\x00")) return I;
	if (inName==HX_HCSTRING("J","\x4a","\x00","\x00","\x00")) return J;
	if (inName==HX_HCSTRING("K","\x4b","\x00","\x00","\x00")) return K;
	if (inName==HX_HCSTRING("L","\x4c","\x00","\x00","\x00")) return L;
	if (inName==HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16")) return LBRACKET;
	if (inName==HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32")) return LEFT;
	if (inName==HX_HCSTRING("M","\x4d","\x00","\x00","\x00")) return M;
	if (inName==HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86")) return MINUS;
	if (inName==HX_HCSTRING("N","\x4e","\x00","\x00","\x00")) return N;
	if (inName==HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33")) return NINE;
	if (inName==HX_HCSTRING("O","\x4f","\x00","\x00","\x00")) return O;
	if (inName==HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00")) return ONE;
	if (inName==HX_HCSTRING("P","\x50","\x00","\x00","\x00")) return P;
	if (inName==HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9")) return PAGEDOWN;
	if (inName==HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98")) return PAGEUP;
	if (inName==HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed")) return PERIOD;
	if (inName==HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35")) return PLUS;
	if (inName==HX_HCSTRING("Q","\x51","\x00","\x00","\x00")) return Q;
	if (inName==HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb")) return QUOTE;
	if (inName==HX_HCSTRING("R","\x52","\x00","\x00","\x00")) return R;
	if (inName==HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d")) return RBRACKET;
	if (inName==HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67")) return RIGHT;
	if (inName==HX_HCSTRING("S","\x53","\x00","\x00","\x00")) return S;
	if (inName==HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49")) return SEMICOLON;
	if (inName==HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8")) return SEVEN;
	if (inName==HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa")) return SHIFT;
	if (inName==HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00")) return SIX;
	if (inName==HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc")) return SLASH;
	if (inName==HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff")) return SPACE;
	if (inName==HX_HCSTRING("T","\x54","\x00","\x00","\x00")) return T;
	if (inName==HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00")) return TAB;
	if (inName==HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d")) return THREE;
	if (inName==HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00")) return TWO;
	if (inName==HX_HCSTRING("U","\x55","\x00","\x00","\x00")) return U;
	if (inName==HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00")) return UP;
	if (inName==HX_HCSTRING("V","\x56","\x00","\x00","\x00")) return V;
	if (inName==HX_HCSTRING("W","\x57","\x00","\x00","\x00")) return W;
	if (inName==HX_HCSTRING("X","\x58","\x00","\x00","\x00")) return X;
	if (inName==HX_HCSTRING("Y","\x59","\x00","\x00","\x00")) return Y;
	if (inName==HX_HCSTRING("Z","\x5a","\x00","\x00","\x00")) return Z;
	if (inName==HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b")) return ZERO;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("A","\x41","\x00","\x00","\x00"),
	HX_HCSTRING("B","\x42","\x00","\x00","\x00"),
	HX_HCSTRING("C","\x43","\x00","\x00","\x00"),
	HX_HCSTRING("D","\x44","\x00","\x00","\x00"),
	HX_HCSTRING("E","\x45","\x00","\x00","\x00"),
	HX_HCSTRING("F","\x46","\x00","\x00","\x00"),
	HX_HCSTRING("G","\x47","\x00","\x00","\x00"),
	HX_HCSTRING("H","\x48","\x00","\x00","\x00"),
	HX_HCSTRING("I","\x49","\x00","\x00","\x00"),
	HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),
	HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),
	HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),
	HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),
	HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),
	HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),
	HX_HCSTRING("P","\x50","\x00","\x00","\x00"),
	HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),
	HX_HCSTRING("R","\x52","\x00","\x00","\x00"),
	HX_HCSTRING("S","\x53","\x00","\x00","\x00"),
	HX_HCSTRING("T","\x54","\x00","\x00","\x00"),
	HX_HCSTRING("U","\x55","\x00","\x00","\x00"),
	HX_HCSTRING("V","\x56","\x00","\x00","\x00"),
	HX_HCSTRING("W","\x57","\x00","\x00","\x00"),
	HX_HCSTRING("X","\x58","\x00","\x00","\x00"),
	HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),
	HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),
	HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),
	HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),
	HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),
	HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),
	HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),
	HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),
	HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),
	HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),
	HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),
	HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),
	HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),
	HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),
	HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),
	HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),
	HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),
	HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),
	HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),
	HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),
	HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),
	HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),
	HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),
	HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),
	HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),
	HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),
	HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),
	HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),
	HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),
	HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),
	HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),
	HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),
	HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),
	HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),
	HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),
	HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),
	HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),
	HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),
	HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),
	HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),
	HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),
	HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),
	HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),
	HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),
	HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),
	HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),
	HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),
	HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),
	HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),
	HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),
	HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),
	HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Key_obj::A,"A");
	HX_MARK_MEMBER_NAME(Key_obj::ALT,"ALT");
	HX_MARK_MEMBER_NAME(Key_obj::B,"B");
	HX_MARK_MEMBER_NAME(Key_obj::BACKSLASH,"BACKSLASH");
	HX_MARK_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_MARK_MEMBER_NAME(Key_obj::C,"C");
	HX_MARK_MEMBER_NAME(Key_obj::CAPSLOCK,"CAPSLOCK");
	HX_MARK_MEMBER_NAME(Key_obj::COMMA,"COMMA");
	HX_MARK_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_MARK_MEMBER_NAME(Key_obj::D,"D");
	HX_MARK_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_MARK_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_MARK_MEMBER_NAME(Key_obj::E,"E");
	HX_MARK_MEMBER_NAME(Key_obj::EIGHT,"EIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::END,"END");
	HX_MARK_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_MARK_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_MARK_MEMBER_NAME(Key_obj::F,"F");
	HX_MARK_MEMBER_NAME(Key_obj::F1,"F1");
	HX_MARK_MEMBER_NAME(Key_obj::F10,"F10");
	HX_MARK_MEMBER_NAME(Key_obj::F11,"F11");
	HX_MARK_MEMBER_NAME(Key_obj::F12,"F12");
	HX_MARK_MEMBER_NAME(Key_obj::F2,"F2");
	HX_MARK_MEMBER_NAME(Key_obj::F3,"F3");
	HX_MARK_MEMBER_NAME(Key_obj::F4,"F4");
	HX_MARK_MEMBER_NAME(Key_obj::F5,"F5");
	HX_MARK_MEMBER_NAME(Key_obj::F6,"F6");
	HX_MARK_MEMBER_NAME(Key_obj::F7,"F7");
	HX_MARK_MEMBER_NAME(Key_obj::F8,"F8");
	HX_MARK_MEMBER_NAME(Key_obj::F9,"F9");
	HX_MARK_MEMBER_NAME(Key_obj::FIVE,"FIVE");
	HX_MARK_MEMBER_NAME(Key_obj::FOUR,"FOUR");
	HX_MARK_MEMBER_NAME(Key_obj::G,"G");
	HX_MARK_MEMBER_NAME(Key_obj::H,"H");
	HX_MARK_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_MARK_MEMBER_NAME(Key_obj::I,"I");
	HX_MARK_MEMBER_NAME(Key_obj::J,"J");
	HX_MARK_MEMBER_NAME(Key_obj::K,"K");
	HX_MARK_MEMBER_NAME(Key_obj::L,"L");
	HX_MARK_MEMBER_NAME(Key_obj::LBRACKET,"LBRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_MARK_MEMBER_NAME(Key_obj::M,"M");
	HX_MARK_MEMBER_NAME(Key_obj::MINUS,"MINUS");
	HX_MARK_MEMBER_NAME(Key_obj::N,"N");
	HX_MARK_MEMBER_NAME(Key_obj::NINE,"NINE");
	HX_MARK_MEMBER_NAME(Key_obj::O,"O");
	HX_MARK_MEMBER_NAME(Key_obj::ONE,"ONE");
	HX_MARK_MEMBER_NAME(Key_obj::P,"P");
	HX_MARK_MEMBER_NAME(Key_obj::PAGEDOWN,"PAGEDOWN");
	HX_MARK_MEMBER_NAME(Key_obj::PAGEUP,"PAGEUP");
	HX_MARK_MEMBER_NAME(Key_obj::PERIOD,"PERIOD");
	HX_MARK_MEMBER_NAME(Key_obj::PLUS,"PLUS");
	HX_MARK_MEMBER_NAME(Key_obj::Q,"Q");
	HX_MARK_MEMBER_NAME(Key_obj::QUOTE,"QUOTE");
	HX_MARK_MEMBER_NAME(Key_obj::R,"R");
	HX_MARK_MEMBER_NAME(Key_obj::RBRACKET,"RBRACKET");
	HX_MARK_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_MARK_MEMBER_NAME(Key_obj::S,"S");
	HX_MARK_MEMBER_NAME(Key_obj::SEMICOLON,"SEMICOLON");
	HX_MARK_MEMBER_NAME(Key_obj::SEVEN,"SEVEN");
	HX_MARK_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_MARK_MEMBER_NAME(Key_obj::SIX,"SIX");
	HX_MARK_MEMBER_NAME(Key_obj::SLASH,"SLASH");
	HX_MARK_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_MARK_MEMBER_NAME(Key_obj::T,"T");
	HX_MARK_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_MARK_MEMBER_NAME(Key_obj::THREE,"THREE");
	HX_MARK_MEMBER_NAME(Key_obj::TWO,"TWO");
	HX_MARK_MEMBER_NAME(Key_obj::U,"U");
	HX_MARK_MEMBER_NAME(Key_obj::UP,"UP");
	HX_MARK_MEMBER_NAME(Key_obj::V,"V");
	HX_MARK_MEMBER_NAME(Key_obj::W,"W");
	HX_MARK_MEMBER_NAME(Key_obj::X,"X");
	HX_MARK_MEMBER_NAME(Key_obj::Y,"Y");
	HX_MARK_MEMBER_NAME(Key_obj::Z,"Z");
	HX_MARK_MEMBER_NAME(Key_obj::ZERO,"ZERO");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Key_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Key_obj::A,"A");
	HX_VISIT_MEMBER_NAME(Key_obj::ALT,"ALT");
	HX_VISIT_MEMBER_NAME(Key_obj::B,"B");
	HX_VISIT_MEMBER_NAME(Key_obj::BACKSLASH,"BACKSLASH");
	HX_VISIT_MEMBER_NAME(Key_obj::BACKSPACE,"BACKSPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::C,"C");
	HX_VISIT_MEMBER_NAME(Key_obj::CAPSLOCK,"CAPSLOCK");
	HX_VISIT_MEMBER_NAME(Key_obj::COMMA,"COMMA");
	HX_VISIT_MEMBER_NAME(Key_obj::CONTROL,"CONTROL");
	HX_VISIT_MEMBER_NAME(Key_obj::D,"D");
	HX_VISIT_MEMBER_NAME(Key_obj::DELETE,"DELETE");
	HX_VISIT_MEMBER_NAME(Key_obj::DOWN,"DOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::E,"E");
	HX_VISIT_MEMBER_NAME(Key_obj::EIGHT,"EIGHT");
	HX_VISIT_MEMBER_NAME(Key_obj::END,"END");
	HX_VISIT_MEMBER_NAME(Key_obj::ENTER,"ENTER");
	HX_VISIT_MEMBER_NAME(Key_obj::ESCAPE,"ESCAPE");
	HX_VISIT_MEMBER_NAME(Key_obj::F,"F");
	HX_VISIT_MEMBER_NAME(Key_obj::F1,"F1");
	HX_VISIT_MEMBER_NAME(Key_obj::F10,"F10");
	HX_VISIT_MEMBER_NAME(Key_obj::F11,"F11");
	HX_VISIT_MEMBER_NAME(Key_obj::F12,"F12");
	HX_VISIT_MEMBER_NAME(Key_obj::F2,"F2");
	HX_VISIT_MEMBER_NAME(Key_obj::F3,"F3");
	HX_VISIT_MEMBER_NAME(Key_obj::F4,"F4");
	HX_VISIT_MEMBER_NAME(Key_obj::F5,"F5");
	HX_VISIT_MEMBER_NAME(Key_obj::F6,"F6");
	HX_VISIT_MEMBER_NAME(Key_obj::F7,"F7");
	HX_VISIT_MEMBER_NAME(Key_obj::F8,"F8");
	HX_VISIT_MEMBER_NAME(Key_obj::F9,"F9");
	HX_VISIT_MEMBER_NAME(Key_obj::FIVE,"FIVE");
	HX_VISIT_MEMBER_NAME(Key_obj::FOUR,"FOUR");
	HX_VISIT_MEMBER_NAME(Key_obj::G,"G");
	HX_VISIT_MEMBER_NAME(Key_obj::H,"H");
	HX_VISIT_MEMBER_NAME(Key_obj::HOME,"HOME");
	HX_VISIT_MEMBER_NAME(Key_obj::I,"I");
	HX_VISIT_MEMBER_NAME(Key_obj::J,"J");
	HX_VISIT_MEMBER_NAME(Key_obj::K,"K");
	HX_VISIT_MEMBER_NAME(Key_obj::L,"L");
	HX_VISIT_MEMBER_NAME(Key_obj::LBRACKET,"LBRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::LEFT,"LEFT");
	HX_VISIT_MEMBER_NAME(Key_obj::M,"M");
	HX_VISIT_MEMBER_NAME(Key_obj::MINUS,"MINUS");
	HX_VISIT_MEMBER_NAME(Key_obj::N,"N");
	HX_VISIT_MEMBER_NAME(Key_obj::NINE,"NINE");
	HX_VISIT_MEMBER_NAME(Key_obj::O,"O");
	HX_VISIT_MEMBER_NAME(Key_obj::ONE,"ONE");
	HX_VISIT_MEMBER_NAME(Key_obj::P,"P");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGEDOWN,"PAGEDOWN");
	HX_VISIT_MEMBER_NAME(Key_obj::PAGEUP,"PAGEUP");
	HX_VISIT_MEMBER_NAME(Key_obj::PERIOD,"PERIOD");
	HX_VISIT_MEMBER_NAME(Key_obj::PLUS,"PLUS");
	HX_VISIT_MEMBER_NAME(Key_obj::Q,"Q");
	HX_VISIT_MEMBER_NAME(Key_obj::QUOTE,"QUOTE");
	HX_VISIT_MEMBER_NAME(Key_obj::R,"R");
	HX_VISIT_MEMBER_NAME(Key_obj::RBRACKET,"RBRACKET");
	HX_VISIT_MEMBER_NAME(Key_obj::RIGHT,"RIGHT");
	HX_VISIT_MEMBER_NAME(Key_obj::S,"S");
	HX_VISIT_MEMBER_NAME(Key_obj::SEMICOLON,"SEMICOLON");
	HX_VISIT_MEMBER_NAME(Key_obj::SEVEN,"SEVEN");
	HX_VISIT_MEMBER_NAME(Key_obj::SHIFT,"SHIFT");
	HX_VISIT_MEMBER_NAME(Key_obj::SIX,"SIX");
	HX_VISIT_MEMBER_NAME(Key_obj::SLASH,"SLASH");
	HX_VISIT_MEMBER_NAME(Key_obj::SPACE,"SPACE");
	HX_VISIT_MEMBER_NAME(Key_obj::T,"T");
	HX_VISIT_MEMBER_NAME(Key_obj::TAB,"TAB");
	HX_VISIT_MEMBER_NAME(Key_obj::THREE,"THREE");
	HX_VISIT_MEMBER_NAME(Key_obj::TWO,"TWO");
	HX_VISIT_MEMBER_NAME(Key_obj::U,"U");
	HX_VISIT_MEMBER_NAME(Key_obj::UP,"UP");
	HX_VISIT_MEMBER_NAME(Key_obj::V,"V");
	HX_VISIT_MEMBER_NAME(Key_obj::W,"W");
	HX_VISIT_MEMBER_NAME(Key_obj::X,"X");
	HX_VISIT_MEMBER_NAME(Key_obj::Y,"Y");
	HX_VISIT_MEMBER_NAME(Key_obj::Z,"Z");
	HX_VISIT_MEMBER_NAME(Key_obj::ZERO,"ZERO");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class Key_obj::__mClass;

Dynamic __Create_Key_obj() { return new Key_obj; }

void Key_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("haxegon.Key","\xf1","\xf2","\x17","\x3a"), hx::TCanCast< Key_obj >,sStaticFields,sMemberFields,
	&__Create_Key_obj, &__Create,
	&super::__SGetClass(), &CreateKey_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void Key_obj::__boot()
{
hx::Static(A) = hx::CreateEnum< Key_obj >(HX_HCSTRING("A","\x41","\x00","\x00","\x00"),0);
hx::Static(ALT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ALT","\x09","\x95","\x31","\x00"),65);
hx::Static(B) = hx::CreateEnum< Key_obj >(HX_HCSTRING("B","\x42","\x00","\x00","\x00"),1);
hx::Static(BACKSLASH) = hx::CreateEnum< Key_obj >(HX_HCSTRING("BACKSLASH","\x96","\x28","\x9e","\xc3"),55);
hx::Static(BACKSPACE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("BACKSPACE","\x1f","\xf5","\x42","\xc6"),52);
hx::Static(C) = hx::CreateEnum< Key_obj >(HX_HCSTRING("C","\x43","\x00","\x00","\x00"),2);
hx::Static(CAPSLOCK) = hx::CreateEnum< Key_obj >(HX_HCSTRING("CAPSLOCK","\x8c","\x6c","\x6e","\x80"),56);
hx::Static(COMMA) = hx::CreateEnum< Key_obj >(HX_HCSTRING("COMMA","\xb5","\x69","\x4b","\xc8"),61);
hx::Static(CONTROL) = hx::CreateEnum< Key_obj >(HX_HCSTRING("CONTROL","\x3d","\x3f","\x55","\x99"),64);
hx::Static(D) = hx::CreateEnum< Key_obj >(HX_HCSTRING("D","\x44","\x00","\x00","\x00"),3);
hx::Static(DELETE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("DELETE","\x2b","\x6c","\x5b","\x1d"),51);
hx::Static(DOWN) = hx::CreateEnum< Key_obj >(HX_HCSTRING("DOWN","\x62","\xc0","\x2e","\x2d"),68);
hx::Static(E) = hx::CreateEnum< Key_obj >(HX_HCSTRING("E","\x45","\x00","\x00","\x00"),4);
hx::Static(EIGHT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("EIGHT","\x2f","\xb9","\x1c","\xeb"),34);
hx::Static(END) = hx::CreateEnum< Key_obj >(HX_HCSTRING("END","\xbb","\x9f","\x34","\x00"),73);
hx::Static(ENTER) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ENTER","\xf8","\xa4","\x74","\xee"),59);
hx::Static(ESCAPE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ESCAPE","\x81","\xef","\x5c","\x8d"),48);
hx::Static(F) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F","\x46","\x00","\x00","\x00"),5);
hx::Static(F1) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F1","\x2b","\x3d","\x00","\x00"),36);
hx::Static(F10) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F10","\xa5","\x48","\x35","\x00"),45);
hx::Static(F11) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F11","\xa6","\x48","\x35","\x00"),46);
hx::Static(F12) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F12","\xa7","\x48","\x35","\x00"),47);
hx::Static(F2) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F2","\x2c","\x3d","\x00","\x00"),37);
hx::Static(F3) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F3","\x2d","\x3d","\x00","\x00"),38);
hx::Static(F4) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F4","\x2e","\x3d","\x00","\x00"),39);
hx::Static(F5) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F5","\x2f","\x3d","\x00","\x00"),40);
hx::Static(F6) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F6","\x30","\x3d","\x00","\x00"),41);
hx::Static(F7) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F7","\x31","\x3d","\x00","\x00"),42);
hx::Static(F8) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F8","\x32","\x3d","\x00","\x00"),43);
hx::Static(F9) = hx::CreateEnum< Key_obj >(HX_HCSTRING("F9","\x33","\x3d","\x00","\x00"),44);
hx::Static(FIVE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("FIVE","\x32","\x9f","\x7c","\x2e"),31);
hx::Static(FOUR) = hx::CreateEnum< Key_obj >(HX_HCSTRING("FOUR","\xe6","\x2b","\x81","\x2e"),30);
hx::Static(G) = hx::CreateEnum< Key_obj >(HX_HCSTRING("G","\x47","\x00","\x00","\x00"),6);
hx::Static(H) = hx::CreateEnum< Key_obj >(HX_HCSTRING("H","\x48","\x00","\x00","\x00"),7);
hx::Static(HOME) = hx::CreateEnum< Key_obj >(HX_HCSTRING("HOME","\x1f","\x92","\xd3","\x2f"),72);
hx::Static(I) = hx::CreateEnum< Key_obj >(HX_HCSTRING("I","\x49","\x00","\x00","\x00"),8);
hx::Static(J) = hx::CreateEnum< Key_obj >(HX_HCSTRING("J","\x4a","\x00","\x00","\x00"),9);
hx::Static(K) = hx::CreateEnum< Key_obj >(HX_HCSTRING("K","\x4b","\x00","\x00","\x00"),10);
hx::Static(L) = hx::CreateEnum< Key_obj >(HX_HCSTRING("L","\x4c","\x00","\x00","\x00"),11);
hx::Static(LBRACKET) = hx::CreateEnum< Key_obj >(HX_HCSTRING("LBRACKET","\x3c","\x3b","\x54","\x16"),53);
hx::Static(LEFT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("LEFT","\x07","\xd0","\x70","\x32"),69);
hx::Static(M) = hx::CreateEnum< Key_obj >(HX_HCSTRING("M","\x4d","\x00","\x00","\x00"),12);
hx::Static(MINUS) = hx::CreateEnum< Key_obj >(HX_HCSTRING("MINUS","\x50","\xb8","\x56","\x86"),49);
hx::Static(N) = hx::CreateEnum< Key_obj >(HX_HCSTRING("N","\x4e","\x00","\x00","\x00"),13);
hx::Static(NINE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("NINE","\x32","\x4d","\xc6","\x33"),35);
hx::Static(O) = hx::CreateEnum< Key_obj >(HX_HCSTRING("O","\x4f","\x00","\x00","\x00"),14);
hx::Static(ONE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ONE","\x46","\x36","\x3c","\x00"),27);
hx::Static(P) = hx::CreateEnum< Key_obj >(HX_HCSTRING("P","\x50","\x00","\x00","\x00"),15);
hx::Static(PAGEDOWN) = hx::CreateEnum< Key_obj >(HX_HCSTRING("PAGEDOWN","\x31","\x36","\xe2","\xb9"),75);
hx::Static(PAGEUP) = hx::CreateEnum< Key_obj >(HX_HCSTRING("PAGEUP","\x6a","\x5e","\xbb","\x98"),74);
hx::Static(PERIOD) = hx::CreateEnum< Key_obj >(HX_HCSTRING("PERIOD","\x01","\x0d","\x9e","\xed"),62);
hx::Static(PLUS) = hx::CreateEnum< Key_obj >(HX_HCSTRING("PLUS","\x5a","\x07","\x1b","\x35"),50);
hx::Static(Q) = hx::CreateEnum< Key_obj >(HX_HCSTRING("Q","\x51","\x00","\x00","\x00"),16);
hx::Static(QUOTE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("QUOTE","\x1c","\x5b","\xe0","\xdb"),58);
hx::Static(R) = hx::CreateEnum< Key_obj >(HX_HCSTRING("R","\x52","\x00","\x00","\x00"),17);
hx::Static(RBRACKET) = hx::CreateEnum< Key_obj >(HX_HCSTRING("RBRACKET","\xf6","\xe7","\x82","\x6d"),54);
hx::Static(RIGHT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("RIGHT","\xbc","\x43","\x52","\x67"),70);
hx::Static(S) = hx::CreateEnum< Key_obj >(HX_HCSTRING("S","\x53","\x00","\x00","\x00"),18);
hx::Static(SEMICOLON) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SEMICOLON","\x11","\x86","\x2a","\x49"),57);
hx::Static(SEVEN) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SEVEN","\xed","\x5c","\x1f","\xf8"),33);
hx::Static(SHIFT) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SHIFT","\x62","\x24","\x11","\xfa"),60);
hx::Static(SIX) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SIX","\x02","\x3b","\x3f","\x00"),32);
hx::Static(SLASH) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SLASH","\x1d","\xf8","\xaf","\xfc"),63);
hx::Static(SPACE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("SPACE","\xa6","\xc4","\x54","\xff"),66);
hx::Static(T) = hx::CreateEnum< Key_obj >(HX_HCSTRING("T","\x54","\x00","\x00","\x00"),19);
hx::Static(TAB) = hx::CreateEnum< Key_obj >(HX_HCSTRING("TAB","\x35","\xf6","\x3f","\x00"),71);
hx::Static(THREE) = hx::CreateEnum< Key_obj >(HX_HCSTRING("THREE","\x3e","\x8c","\x7e","\x8d"),29);
hx::Static(TWO) = hx::CreateEnum< Key_obj >(HX_HCSTRING("TWO","\x6c","\x09","\x40","\x00"),28);
hx::Static(U) = hx::CreateEnum< Key_obj >(HX_HCSTRING("U","\x55","\x00","\x00","\x00"),20);
hx::Static(UP) = hx::CreateEnum< Key_obj >(HX_HCSTRING("UP","\x5b","\x4a","\x00","\x00"),67);
hx::Static(V) = hx::CreateEnum< Key_obj >(HX_HCSTRING("V","\x56","\x00","\x00","\x00"),21);
hx::Static(W) = hx::CreateEnum< Key_obj >(HX_HCSTRING("W","\x57","\x00","\x00","\x00"),22);
hx::Static(X) = hx::CreateEnum< Key_obj >(HX_HCSTRING("X","\x58","\x00","\x00","\x00"),23);
hx::Static(Y) = hx::CreateEnum< Key_obj >(HX_HCSTRING("Y","\x59","\x00","\x00","\x00"),24);
hx::Static(Z) = hx::CreateEnum< Key_obj >(HX_HCSTRING("Z","\x5a","\x00","\x00","\x00"),25);
hx::Static(ZERO) = hx::CreateEnum< Key_obj >(HX_HCSTRING("ZERO","\x28","\xd7","\xb1","\x3b"),26);
}


} // end namespace haxegon
