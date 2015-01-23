////////////////////////////////////////////////////////////////////////////////
#ifndef EVENT_HPP
#define EVENT_HPP

////////////////////////////////////////////////////////////////////////////////
#include <map>
#include <string>

#include <linux/input.h>

#define EV_BTN EV_KEY

const std::map<int, int> type_map =
{
    { EV_KEY << 16, UI_SET_KEYBIT },
    { EV_REL << 16, UI_SET_RELBIT },
    { EV_ABS << 16, UI_SET_ABSBIT },
};

constexpr int CODE_MASK = 0xffff;
constexpr int EV_MASK = CODE_MASK << 16;

////////////////////////////////////////////////////////////////////////////////
namespace _imp
{
enum
{
    _KEY_RESERVED         = KEY_RESERVED,
    _KEY_ESC              = KEY_ESC,
    _KEY_1                = KEY_1,
    _KEY_2                = KEY_2,
    _KEY_3                = KEY_3,
    _KEY_4                = KEY_4,
    _KEY_5                = KEY_5,
    _KEY_6                = KEY_6,
    _KEY_7                = KEY_7,
    _KEY_8                = KEY_8,
    _KEY_9                = KEY_9,
    _KEY_0                = KEY_0,
    _KEY_MINUS            = KEY_MINUS,
    _KEY_EQUAL            = KEY_EQUAL,
    _KEY_BACKSPACE        = KEY_BACKSPACE,
    _KEY_TAB              = KEY_TAB,
    _KEY_Q                = KEY_Q,
    _KEY_W                = KEY_W,
    _KEY_E                = KEY_E,
    _KEY_R                = KEY_R,
    _KEY_T                = KEY_T,
    _KEY_Y                = KEY_Y,
    _KEY_U                = KEY_U,
    _KEY_I                = KEY_I,
    _KEY_O                = KEY_O,
    _KEY_P                = KEY_P,
    _KEY_LEFTBRACE        = KEY_LEFTBRACE,
    _KEY_RIGHTBRACE       = KEY_RIGHTBRACE,
    _KEY_ENTER            = KEY_ENTER,
    _KEY_LEFTCTRL         = KEY_LEFTCTRL,
    _KEY_A                = KEY_A,
    _KEY_S                = KEY_S,
    _KEY_D                = KEY_D,
    _KEY_F                = KEY_F,
    _KEY_G                = KEY_G,
    _KEY_H                = KEY_H,
    _KEY_J                = KEY_J,
    _KEY_K                = KEY_K,
    _KEY_L                = KEY_L,
    _KEY_SEMICOLON        = KEY_SEMICOLON,
    _KEY_APOSTROPHE       = KEY_APOSTROPHE,
    _KEY_GRAVE            = KEY_GRAVE,
    _KEY_LEFTSHIFT        = KEY_LEFTSHIFT,
    _KEY_BACKSLASH        = KEY_BACKSLASH,
    _KEY_Z                = KEY_Z,
    _KEY_X                = KEY_X,
    _KEY_C                = KEY_C,
    _KEY_V                = KEY_V,
    _KEY_B                = KEY_B,
    _KEY_N                = KEY_N,
    _KEY_M                = KEY_M,
    _KEY_COMMA            = KEY_COMMA,
    _KEY_DOT              = KEY_DOT,
    _KEY_SLASH            = KEY_SLASH,
    _KEY_RIGHTSHIFT       = KEY_RIGHTSHIFT,
    _KEY_KPASTERISK       = KEY_KPASTERISK,
    _KEY_LEFTALT          = KEY_LEFTALT,
    _KEY_SPACE            = KEY_SPACE,
    _KEY_CAPSLOCK         = KEY_CAPSLOCK,
    _KEY_F1               = KEY_F1,
    _KEY_F2               = KEY_F2,
    _KEY_F3               = KEY_F3,
    _KEY_F4               = KEY_F4,
    _KEY_F5               = KEY_F5,
    _KEY_F6               = KEY_F6,
    _KEY_F7               = KEY_F7,
    _KEY_F8               = KEY_F8,
    _KEY_F9               = KEY_F9,
    _KEY_F10              = KEY_F10,
    _KEY_NUMLOCK          = KEY_NUMLOCK,
    _KEY_SCROLLLOCK       = KEY_SCROLLLOCK,
    _KEY_KP7              = KEY_KP7,
    _KEY_KP8              = KEY_KP8,
    _KEY_KP9              = KEY_KP9,
    _KEY_KPMINUS          = KEY_KPMINUS,
    _KEY_KP4              = KEY_KP4,
    _KEY_KP5              = KEY_KP5,
    _KEY_KP6              = KEY_KP6,
    _KEY_KPPLUS           = KEY_KPPLUS,
    _KEY_KP1              = KEY_KP1,
    _KEY_KP2              = KEY_KP2,
    _KEY_KP3              = KEY_KP3,
    _KEY_KP0              = KEY_KP0,
    _KEY_KPDOT            = KEY_KPDOT,
    _KEY_ZENKAKUHANKAKU   = KEY_ZENKAKUHANKAKU,
    _KEY_102ND            = KEY_102ND,
    _KEY_F11              = KEY_F11,
    _KEY_F12              = KEY_F12,
    _KEY_RO               = KEY_RO,
    _KEY_KATAKANA         = KEY_KATAKANA,
    _KEY_HIRAGANA         = KEY_HIRAGANA,
    _KEY_HENKAN           = KEY_HENKAN,
    _KEY_KATAKANAHIRAGANA = KEY_KATAKANAHIRAGANA,
    _KEY_MUHENKAN         = KEY_MUHENKAN,
    _KEY_KPJPCOMMA        = KEY_KPJPCOMMA,
    _KEY_KPENTER          = KEY_KPENTER,
    _KEY_RIGHTCTRL        = KEY_RIGHTCTRL,
    _KEY_KPSLASH          = KEY_KPSLASH,
    _KEY_SYSRQ            = KEY_SYSRQ,
    _KEY_RIGHTALT         = KEY_RIGHTALT,
    _KEY_LINEFEED         = KEY_LINEFEED,
    _KEY_HOME             = KEY_HOME,
    _KEY_UP               = KEY_UP,
    _KEY_PAGEUP           = KEY_PAGEUP,
    _KEY_LEFT             = KEY_LEFT,
    _KEY_RIGHT            = KEY_RIGHT,
    _KEY_END              = KEY_END,
    _KEY_DOWN             = KEY_DOWN,
    _KEY_PAGEDOWN         = KEY_PAGEDOWN,
    _KEY_INSERT           = KEY_INSERT,
    _KEY_DELETE           = KEY_DELETE,
    _KEY_MACRO            = KEY_MACRO,
    _KEY_MUTE             = KEY_MUTE,
    _KEY_VOLUMEDOWN       = KEY_VOLUMEDOWN,
    _KEY_VOLUMEUP         = KEY_VOLUMEUP,
    _KEY_POWER            = KEY_POWER,
    _KEY_KPEQUAL          = KEY_KPEQUAL,
    _KEY_KPPLUSMINUS      = KEY_KPPLUSMINUS,
    _KEY_PAUSE            = KEY_PAUSE,
    _KEY_SCALE            = KEY_SCALE,
    _KEY_KPCOMMA          = KEY_KPCOMMA,
    _KEY_HANGEUL          = KEY_HANGEUL,
    _KEY_HANGUEL          = KEY_HANGUEL,
    _KEY_HANJA            = KEY_HANJA,
    _KEY_YEN              = KEY_YEN,
    _KEY_LEFTMETA         = KEY_LEFTMETA,
    _KEY_RIGHTMETA        = KEY_RIGHTMETA,
    _KEY_COMPOSE          = KEY_COMPOSE,
    _KEY_STOP             = KEY_STOP,
    _KEY_AGAIN            = KEY_AGAIN,
    _KEY_PROPS            = KEY_PROPS,
    _KEY_UNDO             = KEY_UNDO,
    _KEY_FRONT            = KEY_FRONT,
    _KEY_COPY             = KEY_COPY,
    _KEY_OPEN             = KEY_OPEN,
    _KEY_PASTE            = KEY_PASTE,
    _KEY_FIND             = KEY_FIND,
    _KEY_CUT              = KEY_CUT,
    _KEY_HELP             = KEY_HELP,
    _KEY_MENU             = KEY_MENU,
    _KEY_CALC             = KEY_CALC,
    _KEY_SETUP            = KEY_SETUP,
    _KEY_SLEEP            = KEY_SLEEP,
    _KEY_WAKEUP           = KEY_WAKEUP,
    _KEY_FILE             = KEY_FILE,
    _KEY_SENDFILE         = KEY_SENDFILE,
    _KEY_DELETEFILE       = KEY_DELETEFILE,
    _KEY_XFER             = KEY_XFER,
    _KEY_PROG1            = KEY_PROG1,
    _KEY_PROG2            = KEY_PROG2,
    _KEY_WWW              = KEY_WWW,
    _KEY_MSDOS            = KEY_MSDOS,
    _KEY_COFFEE           = KEY_COFFEE,
    _KEY_SCREENLOCK       = KEY_SCREENLOCK,
    _KEY_DIRECTION        = KEY_DIRECTION,
    _KEY_CYCLEWINDOWS     = KEY_CYCLEWINDOWS,
    _KEY_MAIL             = KEY_MAIL,
    _KEY_BOOKMARKS        = KEY_BOOKMARKS,
    _KEY_COMPUTER         = KEY_COMPUTER,
    _KEY_BACK             = KEY_BACK,
    _KEY_FORWARD          = KEY_FORWARD,
    _KEY_CLOSECD          = KEY_CLOSECD,
    _KEY_EJECTCD          = KEY_EJECTCD,
    _KEY_EJECTCLOSECD     = KEY_EJECTCLOSECD,
    _KEY_NEXTSONG         = KEY_NEXTSONG,
    _KEY_PLAYPAUSE        = KEY_PLAYPAUSE,
    _KEY_PREVIOUSSONG     = KEY_PREVIOUSSONG,
    _KEY_STOPCD           = KEY_STOPCD,
    _KEY_RECORD           = KEY_RECORD,
    _KEY_REWIND           = KEY_REWIND,
    _KEY_PHONE            = KEY_PHONE,
    _KEY_ISO              = KEY_ISO,
    _KEY_CONFIG           = KEY_CONFIG,
    _KEY_HOMEPAGE         = KEY_HOMEPAGE,
    _KEY_REFRESH          = KEY_REFRESH,
    _KEY_EXIT             = KEY_EXIT,
    _KEY_MOVE             = KEY_MOVE,
    _KEY_EDIT             = KEY_EDIT,
    _KEY_SCROLLUP         = KEY_SCROLLUP,
    _KEY_SCROLLDOWN       = KEY_SCROLLDOWN,
    _KEY_KPLEFTPAREN      = KEY_KPLEFTPAREN,
    _KEY_KPRIGHTPAREN     = KEY_KPRIGHTPAREN,
    _KEY_NEW              = KEY_NEW,
    _KEY_REDO             = KEY_REDO,
    _KEY_F13              = KEY_F13,
    _KEY_F14              = KEY_F14,
    _KEY_F15              = KEY_F15,
    _KEY_F16              = KEY_F16,
    _KEY_F17              = KEY_F17,
    _KEY_F18              = KEY_F18,
    _KEY_F19              = KEY_F19,
    _KEY_F20              = KEY_F20,
    _KEY_F21              = KEY_F21,
    _KEY_F22              = KEY_F22,
    _KEY_F23              = KEY_F23,
    _KEY_F24              = KEY_F24,
    _KEY_PLAYCD           = KEY_PLAYCD,
    _KEY_PAUSECD          = KEY_PAUSECD,
    _KEY_PROG3            = KEY_PROG3,
    _KEY_PROG4            = KEY_PROG4,
    _KEY_DASHBOARD        = KEY_DASHBOARD,
    _KEY_SUSPEND          = KEY_SUSPEND,
    _KEY_CLOSE            = KEY_CLOSE,
    _KEY_PLAY             = KEY_PLAY,
    _KEY_FASTFORWARD      = KEY_FASTFORWARD,
    _KEY_BASSBOOST        = KEY_BASSBOOST,
    _KEY_PRINT            = KEY_PRINT,
    _KEY_HP               = KEY_HP,
    _KEY_CAMERA           = KEY_CAMERA,
    _KEY_SOUND            = KEY_SOUND,
    _KEY_QUESTION         = KEY_QUESTION,
    _KEY_EMAIL            = KEY_EMAIL,
    _KEY_CHAT             = KEY_CHAT,
    _KEY_SEARCH           = KEY_SEARCH,
    _KEY_CONNECT          = KEY_CONNECT,
    _KEY_FINANCE          = KEY_FINANCE,
    _KEY_SPORT            = KEY_SPORT,
    _KEY_SHOP             = KEY_SHOP,
    _KEY_ALTERASE         = KEY_ALTERASE,
    _KEY_CANCEL           = KEY_CANCEL,
    _KEY_BRIGHTNESSDOWN   = KEY_BRIGHTNESSDOWN,
    _KEY_BRIGHTNESSUP     = KEY_BRIGHTNESSUP,
    _KEY_MEDIA            = KEY_MEDIA,
    _KEY_SWITCHVIDEOMODE  = KEY_SWITCHVIDEOMODE,
    _KEY_KBDILLUMTOGGLE   = KEY_KBDILLUMTOGGLE,
    _KEY_KBDILLUMDOWN     = KEY_KBDILLUMDOWN,
    _KEY_KBDILLUMUP       = KEY_KBDILLUMUP,
    _KEY_SEND             = KEY_SEND,
    _KEY_REPLY            = KEY_REPLY,
    _KEY_FORWARDMAIL      = KEY_FORWARDMAIL,
    _KEY_SAVE             = KEY_SAVE,
    _KEY_DOCUMENTS        = KEY_DOCUMENTS,
    _KEY_BATTERY          = KEY_BATTERY,
    _KEY_BLUETOOTH        = KEY_BLUETOOTH,
    _KEY_WLAN             = KEY_WLAN,
    _KEY_UWB              = KEY_UWB,
    _KEY_UNKNOWN          = KEY_UNKNOWN,
    _KEY_VIDEO_NEXT       = KEY_VIDEO_NEXT,
    _KEY_VIDEO_PREV       = KEY_VIDEO_PREV,
    _KEY_BRIGHTNESS_CYCLE = KEY_BRIGHTNESS_CYCLE,
    _KEY_BRIGHTNESS_AUTO  = KEY_BRIGHTNESS_AUTO,
    _KEY_BRIGHTNESS_ZERO  = KEY_BRIGHTNESS_ZERO,
    _KEY_DISPLAY_OFF      = KEY_DISPLAY_OFF,
    _KEY_WWAN             = KEY_WWAN,
    _KEY_WIMAX            = KEY_WIMAX,
    _KEY_RFKILL           = KEY_RFKILL,
    _KEY_MICMUTE          = KEY_MICMUTE,
    _BTN_MISC             = BTN_MISC,
    _BTN_0                = BTN_0,
    _BTN_1                = BTN_1,
    _BTN_2                = BTN_2,
    _BTN_3                = BTN_3,
    _BTN_4                = BTN_4,
    _BTN_5                = BTN_5,
    _BTN_6                = BTN_6,
    _BTN_7                = BTN_7,
    _BTN_8                = BTN_8,
    _BTN_9                = BTN_9,
    _BTN_MOUSE            = BTN_MOUSE,
    _BTN_LEFT             = BTN_LEFT,
    _BTN_RIGHT            = BTN_RIGHT,
    _BTN_MIDDLE           = BTN_MIDDLE,
    _BTN_SIDE             = BTN_SIDE,
    _BTN_EXTRA            = BTN_EXTRA,
    _BTN_FORWARD          = BTN_FORWARD,
    _BTN_BACK             = BTN_BACK,
    _BTN_TASK             = BTN_TASK,
    _BTN_JOYSTICK         = BTN_JOYSTICK,
    _BTN_TRIGGER          = BTN_TRIGGER,
    _BTN_THUMB            = BTN_THUMB,
    _BTN_THUMB2           = BTN_THUMB2,
    _BTN_TOP              = BTN_TOP,
    _BTN_TOP2             = BTN_TOP2,
    _BTN_PINKIE           = BTN_PINKIE,
    _BTN_BASE             = BTN_BASE,
    _BTN_BASE2            = BTN_BASE2,
    _BTN_BASE3            = BTN_BASE3,
    _BTN_BASE4            = BTN_BASE4,
    _BTN_BASE5            = BTN_BASE5,
    _BTN_BASE6            = BTN_BASE6,
    _BTN_DEAD             = BTN_DEAD,
    _BTN_GAMEPAD          = BTN_GAMEPAD,
    _BTN_SOUTH            = BTN_SOUTH,
    _BTN_A                = BTN_A,
    _BTN_EAST             = BTN_EAST,
    _BTN_B                = BTN_B,
    _BTN_C                = BTN_C,
    _BTN_NORTH            = BTN_NORTH,
    _BTN_X                = BTN_X,
    _BTN_WEST             = BTN_WEST,
    _BTN_Y                = BTN_Y,
    _BTN_Z                = BTN_Z,
    _BTN_TL               = BTN_TL,
    _BTN_TR               = BTN_TR,
    _BTN_TL2              = BTN_TL2,
    _BTN_TR2              = BTN_TR2,
    _BTN_SELECT           = BTN_SELECT,
    _BTN_START            = BTN_START,
    _BTN_MODE             = BTN_MODE,
    _BTN_THUMBL           = BTN_THUMBL,
    _BTN_THUMBR           = BTN_THUMBR,
    _BTN_DIGI             = BTN_DIGI,
    _BTN_TOOL_PEN         = BTN_TOOL_PEN,
    _BTN_TOOL_RUBBER      = BTN_TOOL_RUBBER,
    _BTN_TOOL_BRUSH       = BTN_TOOL_BRUSH,
    _BTN_TOOL_PENCIL      = BTN_TOOL_PENCIL,
    _BTN_TOOL_AIRBRUSH    = BTN_TOOL_AIRBRUSH,
    _BTN_TOOL_FINGER      = BTN_TOOL_FINGER,
    _BTN_TOOL_MOUSE       = BTN_TOOL_MOUSE,
    _BTN_TOOL_LENS        = BTN_TOOL_LENS,
    _BTN_TOOL_QUINTTAP    = BTN_TOOL_QUINTTAP,
    _BTN_TOUCH            = BTN_TOUCH,
    _BTN_STYLUS           = BTN_STYLUS,
    _BTN_STYLUS2          = BTN_STYLUS2,
    _BTN_TOOL_DOUBLETAP   = BTN_TOOL_DOUBLETAP,
    _BTN_TOOL_TRIPLETAP   = BTN_TOOL_TRIPLETAP,
    _BTN_TOOL_QUADTAP     = BTN_TOOL_QUADTAP,
    _BTN_WHEEL            = BTN_WHEEL,
    _BTN_GEAR_DOWN        = BTN_GEAR_DOWN,
    _BTN_GEAR_UP          = BTN_GEAR_UP,
    _KEY_OK               = KEY_OK,
    _KEY_SELECT           = KEY_SELECT,
    _KEY_GOTO             = KEY_GOTO,
    _KEY_CLEAR            = KEY_CLEAR,
    _KEY_POWER2           = KEY_POWER2,
    _KEY_OPTION           = KEY_OPTION,
    _KEY_INFO             = KEY_INFO,
    _KEY_TIME             = KEY_TIME,
    _KEY_VENDOR           = KEY_VENDOR,
    _KEY_ARCHIVE          = KEY_ARCHIVE,
    _KEY_PROGRAM          = KEY_PROGRAM,
    _KEY_CHANNEL          = KEY_CHANNEL,
    _KEY_FAVORITES        = KEY_FAVORITES,
    _KEY_EPG              = KEY_EPG,
    _KEY_PVR              = KEY_PVR,
    _KEY_MHP              = KEY_MHP,
    _KEY_LANGUAGE         = KEY_LANGUAGE,
    _KEY_TITLE            = KEY_TITLE,
    _KEY_SUBTITLE         = KEY_SUBTITLE,
    _KEY_ANGLE            = KEY_ANGLE,
    _KEY_ZOOM             = KEY_ZOOM,
    _KEY_MODE             = KEY_MODE,
    _KEY_KEYBOARD         = KEY_KEYBOARD,
    _KEY_SCREEN           = KEY_SCREEN,
    _KEY_PC               = KEY_PC,
    _KEY_TV               = KEY_TV,
    _KEY_TV2              = KEY_TV2,
    _KEY_VCR              = KEY_VCR,
    _KEY_VCR2             = KEY_VCR2,
    _KEY_SAT              = KEY_SAT,
    _KEY_SAT2             = KEY_SAT2,
    _KEY_CD               = KEY_CD,
    _KEY_TAPE             = KEY_TAPE,
    _KEY_RADIO            = KEY_RADIO,
    _KEY_TUNER            = KEY_TUNER,
    _KEY_PLAYER           = KEY_PLAYER,
    _KEY_TEXT             = KEY_TEXT,
    _KEY_DVD              = KEY_DVD,
    _KEY_AUX              = KEY_AUX,
    _KEY_MP3              = KEY_MP3,
    _KEY_AUDIO            = KEY_AUDIO,
    _KEY_VIDEO            = KEY_VIDEO,
    _KEY_DIRECTORY        = KEY_DIRECTORY,
    _KEY_LIST             = KEY_LIST,
    _KEY_MEMO             = KEY_MEMO,
    _KEY_CALENDAR         = KEY_CALENDAR,
    _KEY_RED              = KEY_RED,
    _KEY_GREEN            = KEY_GREEN,
    _KEY_YELLOW           = KEY_YELLOW,
    _KEY_BLUE             = KEY_BLUE,
    _KEY_CHANNELUP        = KEY_CHANNELUP,
    _KEY_CHANNELDOWN      = KEY_CHANNELDOWN,
    _KEY_FIRST            = KEY_FIRST,
    _KEY_LAST             = KEY_LAST,
    _KEY_AB               = KEY_AB,
    _KEY_NEXT             = KEY_NEXT,
    _KEY_RESTART          = KEY_RESTART,
    _KEY_SLOW             = KEY_SLOW,
    _KEY_SHUFFLE          = KEY_SHUFFLE,
    _KEY_BREAK            = KEY_BREAK,
    _KEY_PREVIOUS         = KEY_PREVIOUS,
    _KEY_DIGITS           = KEY_DIGITS,
    _KEY_TEEN             = KEY_TEEN,
    _KEY_TWEN             = KEY_TWEN,
    _KEY_VIDEOPHONE       = KEY_VIDEOPHONE,
    _KEY_GAMES            = KEY_GAMES,
    _KEY_ZOOMIN           = KEY_ZOOMIN,
    _KEY_ZOOMOUT          = KEY_ZOOMOUT,
    _KEY_ZOOMRESET        = KEY_ZOOMRESET,
    _KEY_WORDPROCESSOR    = KEY_WORDPROCESSOR,
    _KEY_EDITOR           = KEY_EDITOR,
    _KEY_SPREADSHEET      = KEY_SPREADSHEET,
    _KEY_GRAPHICSEDITOR   = KEY_GRAPHICSEDITOR,
    _KEY_PRESENTATION     = KEY_PRESENTATION,
    _KEY_DATABASE         = KEY_DATABASE,
    _KEY_NEWS             = KEY_NEWS,
    _KEY_VOICEMAIL        = KEY_VOICEMAIL,
    _KEY_ADDRESSBOOK      = KEY_ADDRESSBOOK,
    _KEY_MESSENGER        = KEY_MESSENGER,
    _KEY_DISPLAYTOGGLE    = KEY_DISPLAYTOGGLE,
    _KEY_BRIGHTNESS_TOGGLE = KEY_BRIGHTNESS_TOGGLE,
    _KEY_SPELLCHECK       = KEY_SPELLCHECK,
    _KEY_LOGOFF           = KEY_LOGOFF,
    _KEY_DOLLAR           = KEY_DOLLAR,
    _KEY_EURO             = KEY_EURO,
    _KEY_FRAMEBACK        = KEY_FRAMEBACK,
    _KEY_FRAMEFORWARD     = KEY_FRAMEFORWARD,
    _KEY_CONTEXT_MENU     = KEY_CONTEXT_MENU,
    _KEY_MEDIA_REPEAT     = KEY_MEDIA_REPEAT,
    _KEY_10CHANNELSUP     = KEY_10CHANNELSUP,
    _KEY_10CHANNELSDOWN   = KEY_10CHANNELSDOWN,
    _KEY_IMAGES           = KEY_IMAGES,
    _KEY_DEL_EOL          = KEY_DEL_EOL,
    _KEY_DEL_EOS          = KEY_DEL_EOS,
    _KEY_INS_LINE         = KEY_INS_LINE,
    _KEY_DEL_LINE         = KEY_DEL_LINE,
    _KEY_FN               = KEY_FN,
    _KEY_FN_ESC           = KEY_FN_ESC,
    _KEY_FN_F1            = KEY_FN_F1,
    _KEY_FN_F2            = KEY_FN_F2,
    _KEY_FN_F3            = KEY_FN_F3,
    _KEY_FN_F4            = KEY_FN_F4,
    _KEY_FN_F5            = KEY_FN_F5,
    _KEY_FN_F6            = KEY_FN_F6,
    _KEY_FN_F7            = KEY_FN_F7,
    _KEY_FN_F8            = KEY_FN_F8,
    _KEY_FN_F9            = KEY_FN_F9,
    _KEY_FN_F10           = KEY_FN_F10,
    _KEY_FN_F11           = KEY_FN_F11,
    _KEY_FN_F12           = KEY_FN_F12,
    _KEY_FN_1             = KEY_FN_1,
    _KEY_FN_2             = KEY_FN_2,
    _KEY_FN_D             = KEY_FN_D,
    _KEY_FN_E             = KEY_FN_E,
    _KEY_FN_F             = KEY_FN_F,
    _KEY_FN_S             = KEY_FN_S,
    _KEY_FN_B             = KEY_FN_B,
    _KEY_BRL_DOT1         = KEY_BRL_DOT1,
    _KEY_BRL_DOT2         = KEY_BRL_DOT2,
    _KEY_BRL_DOT3         = KEY_BRL_DOT3,
    _KEY_BRL_DOT4         = KEY_BRL_DOT4,
    _KEY_BRL_DOT5         = KEY_BRL_DOT5,
    _KEY_BRL_DOT6         = KEY_BRL_DOT6,
    _KEY_BRL_DOT7         = KEY_BRL_DOT7,
    _KEY_BRL_DOT8         = KEY_BRL_DOT8,
    _KEY_BRL_DOT9         = KEY_BRL_DOT9,
    _KEY_BRL_DOT10        = KEY_BRL_DOT10,
    _KEY_NUMERIC_0        = KEY_NUMERIC_0,
    _KEY_NUMERIC_1        = KEY_NUMERIC_1,
    _KEY_NUMERIC_2        = KEY_NUMERIC_2,
    _KEY_NUMERIC_3        = KEY_NUMERIC_3,
    _KEY_NUMERIC_4        = KEY_NUMERIC_4,
    _KEY_NUMERIC_5        = KEY_NUMERIC_5,
    _KEY_NUMERIC_6        = KEY_NUMERIC_6,
    _KEY_NUMERIC_7        = KEY_NUMERIC_7,
    _KEY_NUMERIC_8        = KEY_NUMERIC_8,
    _KEY_NUMERIC_9        = KEY_NUMERIC_9,
    _KEY_NUMERIC_STAR     = KEY_NUMERIC_STAR,
    _KEY_NUMERIC_POUND    = KEY_NUMERIC_POUND,
    _KEY_CAMERA_FOCUS     = KEY_CAMERA_FOCUS,
    _KEY_WPS_BUTTON       = KEY_WPS_BUTTON,
    _KEY_TOUCHPAD_TOGGLE  = KEY_TOUCHPAD_TOGGLE,
    _KEY_TOUCHPAD_ON      = KEY_TOUCHPAD_ON,
    _KEY_TOUCHPAD_OFF     = KEY_TOUCHPAD_OFF,
    _KEY_CAMERA_ZOOMIN    = KEY_CAMERA_ZOOMIN,
    _KEY_CAMERA_ZOOMOUT   = KEY_CAMERA_ZOOMOUT,
    _KEY_CAMERA_UP        = KEY_CAMERA_UP,
    _KEY_CAMERA_DOWN      = KEY_CAMERA_DOWN,
    _KEY_CAMERA_LEFT      = KEY_CAMERA_LEFT,
    _KEY_CAMERA_RIGHT     = KEY_CAMERA_RIGHT,
    _KEY_ATTENDANT_ON     = KEY_ATTENDANT_ON,
    _KEY_ATTENDANT_OFF    = KEY_ATTENDANT_OFF,
    _KEY_ATTENDANT_TOGGLE = KEY_ATTENDANT_TOGGLE,
    _KEY_LIGHTS_TOGGLE    = KEY_LIGHTS_TOGGLE,
    _BTN_DPAD_UP          = BTN_DPAD_UP,
    _BTN_DPAD_DOWN        = BTN_DPAD_DOWN,
    _BTN_DPAD_LEFT        = BTN_DPAD_LEFT,
    _BTN_DPAD_RIGHT       = BTN_DPAD_RIGHT,
    _KEY_ALS_TOGGLE       = KEY_ALS_TOGGLE,
    _KEY_BUTTONCONFIG     = KEY_BUTTONCONFIG,
    _KEY_TASKMANAGER      = KEY_TASKMANAGER,
    _KEY_JOURNAL          = KEY_JOURNAL,
    _KEY_CONTROLPANEL     = KEY_CONTROLPANEL,
    _KEY_APPSELECT        = KEY_APPSELECT,
    _KEY_SCREENSAVER      = KEY_SCREENSAVER,
    _KEY_VOICECOMMAND     = KEY_VOICECOMMAND,
    _KEY_BRIGHTNESS_MIN   = KEY_BRIGHTNESS_MIN,
    _KEY_BRIGHTNESS_MAX   = KEY_BRIGHTNESS_MAX,
    _BTN_TRIGGER_HAPPY    = BTN_TRIGGER_HAPPY,
    _BTN_TRIGGER_HAPPY1   = BTN_TRIGGER_HAPPY1,
    _BTN_TRIGGER_HAPPY2   = BTN_TRIGGER_HAPPY2,
    _BTN_TRIGGER_HAPPY3   = BTN_TRIGGER_HAPPY3,
    _BTN_TRIGGER_HAPPY4   = BTN_TRIGGER_HAPPY4,
    _BTN_TRIGGER_HAPPY5   = BTN_TRIGGER_HAPPY5,
    _BTN_TRIGGER_HAPPY6   = BTN_TRIGGER_HAPPY6,
    _BTN_TRIGGER_HAPPY7   = BTN_TRIGGER_HAPPY7,
    _BTN_TRIGGER_HAPPY8   = BTN_TRIGGER_HAPPY8,
    _BTN_TRIGGER_HAPPY9   = BTN_TRIGGER_HAPPY9,
    _BTN_TRIGGER_HAPPY10  = BTN_TRIGGER_HAPPY10,
    _BTN_TRIGGER_HAPPY11  = BTN_TRIGGER_HAPPY11,
    _BTN_TRIGGER_HAPPY12  = BTN_TRIGGER_HAPPY12,
    _BTN_TRIGGER_HAPPY13  = BTN_TRIGGER_HAPPY13,
    _BTN_TRIGGER_HAPPY14  = BTN_TRIGGER_HAPPY14,
    _BTN_TRIGGER_HAPPY15  = BTN_TRIGGER_HAPPY15,
    _BTN_TRIGGER_HAPPY16  = BTN_TRIGGER_HAPPY16,
    _BTN_TRIGGER_HAPPY17  = BTN_TRIGGER_HAPPY17,
    _BTN_TRIGGER_HAPPY18  = BTN_TRIGGER_HAPPY18,
    _BTN_TRIGGER_HAPPY19  = BTN_TRIGGER_HAPPY19,
    _BTN_TRIGGER_HAPPY20  = BTN_TRIGGER_HAPPY20,
    _BTN_TRIGGER_HAPPY21  = BTN_TRIGGER_HAPPY21,
    _BTN_TRIGGER_HAPPY22  = BTN_TRIGGER_HAPPY22,
    _BTN_TRIGGER_HAPPY23  = BTN_TRIGGER_HAPPY23,
    _BTN_TRIGGER_HAPPY24  = BTN_TRIGGER_HAPPY24,
    _BTN_TRIGGER_HAPPY25  = BTN_TRIGGER_HAPPY25,
    _BTN_TRIGGER_HAPPY26  = BTN_TRIGGER_HAPPY26,
    _BTN_TRIGGER_HAPPY27  = BTN_TRIGGER_HAPPY27,
    _BTN_TRIGGER_HAPPY28  = BTN_TRIGGER_HAPPY28,
    _BTN_TRIGGER_HAPPY29  = BTN_TRIGGER_HAPPY29,
    _BTN_TRIGGER_HAPPY30  = BTN_TRIGGER_HAPPY30,
    _BTN_TRIGGER_HAPPY31  = BTN_TRIGGER_HAPPY31,
    _BTN_TRIGGER_HAPPY32  = BTN_TRIGGER_HAPPY32,
    _BTN_TRIGGER_HAPPY33  = BTN_TRIGGER_HAPPY33,
    _BTN_TRIGGER_HAPPY34  = BTN_TRIGGER_HAPPY34,
    _BTN_TRIGGER_HAPPY35  = BTN_TRIGGER_HAPPY35,
    _BTN_TRIGGER_HAPPY36  = BTN_TRIGGER_HAPPY36,
    _BTN_TRIGGER_HAPPY37  = BTN_TRIGGER_HAPPY37,
    _BTN_TRIGGER_HAPPY38  = BTN_TRIGGER_HAPPY38,
    _BTN_TRIGGER_HAPPY39  = BTN_TRIGGER_HAPPY39,
    _BTN_TRIGGER_HAPPY40  = BTN_TRIGGER_HAPPY40,
    _KEY_MIN_INTERESTING  = KEY_MIN_INTERESTING,
    _KEY_MAX              = KEY_MAX,
    _KEY_CNT              = KEY_CNT,
    _REL_X                = REL_X,
    _REL_Y                = REL_Y,
    _REL_Z                = REL_Z,
    _REL_RX               = REL_RX,
    _REL_RY               = REL_RY,
    _REL_RZ               = REL_RZ,
    _REL_HWHEEL           = REL_HWHEEL,
    _REL_DIAL             = REL_DIAL,
    _REL_WHEEL            = REL_WHEEL,
    _REL_MISC             = REL_MISC,
    _REL_MAX              = REL_MAX,
    _REL_CNT              = REL_CNT,
    _ABS_X                = ABS_X,
    _ABS_Y                = ABS_Y,
    _ABS_Z                = ABS_Z,
    _ABS_RX               = ABS_RX,
    _ABS_RY               = ABS_RY,
    _ABS_RZ               = ABS_RZ,
    _ABS_THROTTLE         = ABS_THROTTLE,
    _ABS_RUDDER           = ABS_RUDDER,
    _ABS_WHEEL            = ABS_WHEEL,
    _ABS_GAS              = ABS_GAS,
    _ABS_BRAKE            = ABS_BRAKE,
    _ABS_HAT0X            = ABS_HAT0X,
    _ABS_HAT0Y            = ABS_HAT0Y,
    _ABS_HAT1X            = ABS_HAT1X,
    _ABS_HAT1Y            = ABS_HAT1Y,
    _ABS_HAT2X            = ABS_HAT2X,
    _ABS_HAT2Y            = ABS_HAT2Y,
    _ABS_HAT3X            = ABS_HAT3X,
    _ABS_HAT3Y            = ABS_HAT3Y,
    _ABS_PRESSURE         = ABS_PRESSURE,
    _ABS_DISTANCE         = ABS_DISTANCE,
    _ABS_TILT_X           = ABS_TILT_X,
    _ABS_TILT_Y           = ABS_TILT_Y,
    _ABS_TOOL_WIDTH       = ABS_TOOL_WIDTH,
    _ABS_VOLUME           = ABS_VOLUME,
    _ABS_MISC             = ABS_MISC,
    _ABS_MT_SLOT          = ABS_MT_SLOT,
    _ABS_MT_TOUCH_MAJOR   = ABS_MT_TOUCH_MAJOR,
    _ABS_MT_TOUCH_MINOR   = ABS_MT_TOUCH_MINOR,
    _ABS_MT_WIDTH_MAJOR   = ABS_MT_WIDTH_MAJOR,
    _ABS_MT_WIDTH_MINOR   = ABS_MT_WIDTH_MINOR,
    _ABS_MT_ORIENTATION   = ABS_MT_ORIENTATION,
    _ABS_MT_POSITION_X    = ABS_MT_POSITION_X,
    _ABS_MT_POSITION_Y    = ABS_MT_POSITION_Y,
    _ABS_MT_TOOL_TYPE     = ABS_MT_TOOL_TYPE,
    _ABS_MT_BLOB_ID       = ABS_MT_BLOB_ID,
    _ABS_MT_TRACKING_ID   = ABS_MT_TRACKING_ID,
    _ABS_MT_PRESSURE      = ABS_MT_PRESSURE,
    _ABS_MT_DISTANCE      = ABS_MT_DISTANCE,
    _ABS_MT_TOOL_X        = ABS_MT_TOOL_X,
    _ABS_MT_TOOL_Y        = ABS_MT_TOOL_Y,
    _ABS_MAX              = ABS_MAX,
    _ABS_CNT              = ABS_CNT,
};
}

////////////////////////////////////////////////////////////////////////////////
#undef KEY_RESERVED
#undef KEY_ESC
#undef KEY_1
#undef KEY_2
#undef KEY_3
#undef KEY_4
#undef KEY_5
#undef KEY_6
#undef KEY_7
#undef KEY_8
#undef KEY_9
#undef KEY_0
#undef KEY_MINUS
#undef KEY_EQUAL
#undef KEY_BACKSPACE
#undef KEY_TAB
#undef KEY_Q
#undef KEY_W
#undef KEY_E
#undef KEY_R
#undef KEY_T
#undef KEY_Y
#undef KEY_U
#undef KEY_I
#undef KEY_O
#undef KEY_P
#undef KEY_LEFTBRACE
#undef KEY_RIGHTBRACE
#undef KEY_ENTER
#undef KEY_LEFTCTRL
#undef KEY_A
#undef KEY_S
#undef KEY_D
#undef KEY_F
#undef KEY_G
#undef KEY_H
#undef KEY_J
#undef KEY_K
#undef KEY_L
#undef KEY_SEMICOLON
#undef KEY_APOSTROPHE
#undef KEY_GRAVE
#undef KEY_LEFTSHIFT
#undef KEY_BACKSLASH
#undef KEY_Z
#undef KEY_X
#undef KEY_C
#undef KEY_V
#undef KEY_B
#undef KEY_N
#undef KEY_M
#undef KEY_COMMA
#undef KEY_DOT
#undef KEY_SLASH
#undef KEY_RIGHTSHIFT
#undef KEY_KPASTERISK
#undef KEY_LEFTALT
#undef KEY_SPACE
#undef KEY_CAPSLOCK
#undef KEY_F1
#undef KEY_F2
#undef KEY_F3
#undef KEY_F4
#undef KEY_F5
#undef KEY_F6
#undef KEY_F7
#undef KEY_F8
#undef KEY_F9
#undef KEY_F10
#undef KEY_NUMLOCK
#undef KEY_SCROLLLOCK
#undef KEY_KP7
#undef KEY_KP8
#undef KEY_KP9
#undef KEY_KPMINUS
#undef KEY_KP4
#undef KEY_KP5
#undef KEY_KP6
#undef KEY_KPPLUS
#undef KEY_KP1
#undef KEY_KP2
#undef KEY_KP3
#undef KEY_KP0
#undef KEY_KPDOT
#undef KEY_ZENKAKUHANKAKU
#undef KEY_102ND
#undef KEY_F11
#undef KEY_F12
#undef KEY_RO
#undef KEY_KATAKANA
#undef KEY_HIRAGANA
#undef KEY_HENKAN
#undef KEY_KATAKANAHIRAGANA
#undef KEY_MUHENKAN
#undef KEY_KPJPCOMMA
#undef KEY_KPENTER
#undef KEY_RIGHTCTRL
#undef KEY_KPSLASH
#undef KEY_SYSRQ
#undef KEY_RIGHTALT
#undef KEY_LINEFEED
#undef KEY_HOME
#undef KEY_UP
#undef KEY_PAGEUP
#undef KEY_LEFT
#undef KEY_RIGHT
#undef KEY_END
#undef KEY_DOWN
#undef KEY_PAGEDOWN
#undef KEY_INSERT
#undef KEY_DELETE
#undef KEY_MACRO
#undef KEY_MUTE
#undef KEY_VOLUMEDOWN
#undef KEY_VOLUMEUP
#undef KEY_POWER
#undef KEY_KPEQUAL
#undef KEY_KPPLUSMINUS
#undef KEY_PAUSE
#undef KEY_SCALE
#undef KEY_KPCOMMA
#undef KEY_HANGEUL
#undef KEY_HANGUEL
#undef KEY_HANJA
#undef KEY_YEN
#undef KEY_LEFTMETA
#undef KEY_RIGHTMETA
#undef KEY_COMPOSE
#undef KEY_STOP
#undef KEY_AGAIN
#undef KEY_PROPS
#undef KEY_UNDO
#undef KEY_FRONT
#undef KEY_COPY
#undef KEY_OPEN
#undef KEY_PASTE
#undef KEY_FIND
#undef KEY_CUT
#undef KEY_HELP
#undef KEY_MENU
#undef KEY_CALC
#undef KEY_SETUP
#undef KEY_SLEEP
#undef KEY_WAKEUP
#undef KEY_FILE
#undef KEY_SENDFILE
#undef KEY_DELETEFILE
#undef KEY_XFER
#undef KEY_PROG1
#undef KEY_PROG2
#undef KEY_WWW
#undef KEY_MSDOS
#undef KEY_COFFEE
#undef KEY_SCREENLOCK
#undef KEY_DIRECTION
#undef KEY_CYCLEWINDOWS
#undef KEY_MAIL
#undef KEY_BOOKMARKS
#undef KEY_COMPUTER
#undef KEY_BACK
#undef KEY_FORWARD
#undef KEY_CLOSECD
#undef KEY_EJECTCD
#undef KEY_EJECTCLOSECD
#undef KEY_NEXTSONG
#undef KEY_PLAYPAUSE
#undef KEY_PREVIOUSSONG
#undef KEY_STOPCD
#undef KEY_RECORD
#undef KEY_REWIND
#undef KEY_PHONE
#undef KEY_ISO
#undef KEY_CONFIG
#undef KEY_HOMEPAGE
#undef KEY_REFRESH
#undef KEY_EXIT
#undef KEY_MOVE
#undef KEY_EDIT
#undef KEY_SCROLLUP
#undef KEY_SCROLLDOWN
#undef KEY_KPLEFTPAREN
#undef KEY_KPRIGHTPAREN
#undef KEY_NEW
#undef KEY_REDO
#undef KEY_F13
#undef KEY_F14
#undef KEY_F15
#undef KEY_F16
#undef KEY_F17
#undef KEY_F18
#undef KEY_F19
#undef KEY_F20
#undef KEY_F21
#undef KEY_F22
#undef KEY_F23
#undef KEY_F24
#undef KEY_PLAYCD
#undef KEY_PAUSECD
#undef KEY_PROG3
#undef KEY_PROG4
#undef KEY_DASHBOARD
#undef KEY_SUSPEND
#undef KEY_CLOSE
#undef KEY_PLAY
#undef KEY_FASTFORWARD
#undef KEY_BASSBOOST
#undef KEY_PRINT
#undef KEY_HP
#undef KEY_CAMERA
#undef KEY_SOUND
#undef KEY_QUESTION
#undef KEY_EMAIL
#undef KEY_CHAT
#undef KEY_SEARCH
#undef KEY_CONNECT
#undef KEY_FINANCE
#undef KEY_SPORT
#undef KEY_SHOP
#undef KEY_ALTERASE
#undef KEY_CANCEL
#undef KEY_BRIGHTNESSDOWN
#undef KEY_BRIGHTNESSUP
#undef KEY_MEDIA
#undef KEY_SWITCHVIDEOMODE
#undef KEY_KBDILLUMTOGGLE
#undef KEY_KBDILLUMDOWN
#undef KEY_KBDILLUMUP
#undef KEY_SEND
#undef KEY_REPLY
#undef KEY_FORWARDMAIL
#undef KEY_SAVE
#undef KEY_DOCUMENTS
#undef KEY_BATTERY
#undef KEY_BLUETOOTH
#undef KEY_WLAN
#undef KEY_UWB
#undef KEY_UNKNOWN
#undef KEY_VIDEO_NEXT
#undef KEY_VIDEO_PREV
#undef KEY_BRIGHTNESS_CYCLE
#undef KEY_BRIGHTNESS_AUTO
#undef KEY_BRIGHTNESS_ZERO
#undef KEY_DISPLAY_OFF
#undef KEY_WWAN
#undef KEY_WIMAX
#undef KEY_RFKILL
#undef KEY_MICMUTE
#undef BTN_MISC
#undef BTN_0
#undef BTN_1
#undef BTN_2
#undef BTN_3
#undef BTN_4
#undef BTN_5
#undef BTN_6
#undef BTN_7
#undef BTN_8
#undef BTN_9
#undef BTN_MOUSE
#undef BTN_LEFT
#undef BTN_RIGHT
#undef BTN_MIDDLE
#undef BTN_SIDE
#undef BTN_EXTRA
#undef BTN_FORWARD
#undef BTN_BACK
#undef BTN_TASK
#undef BTN_JOYSTICK
#undef BTN_TRIGGER
#undef BTN_THUMB
#undef BTN_THUMB2
#undef BTN_TOP
#undef BTN_TOP2
#undef BTN_PINKIE
#undef BTN_BASE
#undef BTN_BASE2
#undef BTN_BASE3
#undef BTN_BASE4
#undef BTN_BASE5
#undef BTN_BASE6
#undef BTN_DEAD
#undef BTN_GAMEPAD
#undef BTN_SOUTH
#undef BTN_A
#undef BTN_EAST
#undef BTN_B
#undef BTN_C
#undef BTN_NORTH
#undef BTN_X
#undef BTN_WEST
#undef BTN_Y
#undef BTN_Z
#undef BTN_TL
#undef BTN_TR
#undef BTN_TL2
#undef BTN_TR2
#undef BTN_SELECT
#undef BTN_START
#undef BTN_MODE
#undef BTN_THUMBL
#undef BTN_THUMBR
#undef BTN_DIGI
#undef BTN_TOOL_PEN
#undef BTN_TOOL_RUBBER
#undef BTN_TOOL_BRUSH
#undef BTN_TOOL_PENCIL
#undef BTN_TOOL_AIRBRUSH
#undef BTN_TOOL_FINGER
#undef BTN_TOOL_MOUSE
#undef BTN_TOOL_LENS
#undef BTN_TOOL_QUINTTAP
#undef BTN_TOUCH
#undef BTN_STYLUS
#undef BTN_STYLUS2
#undef BTN_TOOL_DOUBLETAP
#undef BTN_TOOL_TRIPLETAP
#undef BTN_TOOL_QUADTAP
#undef BTN_WHEEL
#undef BTN_GEAR_DOWN
#undef BTN_GEAR_UP
#undef KEY_OK
#undef KEY_SELECT
#undef KEY_GOTO
#undef KEY_CLEAR
#undef KEY_POWER2
#undef KEY_OPTION
#undef KEY_INFO
#undef KEY_TIME
#undef KEY_VENDOR
#undef KEY_ARCHIVE
#undef KEY_PROGRAM
#undef KEY_CHANNEL
#undef KEY_FAVORITES
#undef KEY_EPG
#undef KEY_PVR
#undef KEY_MHP
#undef KEY_LANGUAGE
#undef KEY_TITLE
#undef KEY_SUBTITLE
#undef KEY_ANGLE
#undef KEY_ZOOM
#undef KEY_MODE
#undef KEY_KEYBOARD
#undef KEY_SCREEN
#undef KEY_PC
#undef KEY_TV
#undef KEY_TV2
#undef KEY_VCR
#undef KEY_VCR2
#undef KEY_SAT
#undef KEY_SAT2
#undef KEY_CD
#undef KEY_TAPE
#undef KEY_RADIO
#undef KEY_TUNER
#undef KEY_PLAYER
#undef KEY_TEXT
#undef KEY_DVD
#undef KEY_AUX
#undef KEY_MP3
#undef KEY_AUDIO
#undef KEY_VIDEO
#undef KEY_DIRECTORY
#undef KEY_LIST
#undef KEY_MEMO
#undef KEY_CALENDAR
#undef KEY_RED
#undef KEY_GREEN
#undef KEY_YELLOW
#undef KEY_BLUE
#undef KEY_CHANNELUP
#undef KEY_CHANNELDOWN
#undef KEY_FIRST
#undef KEY_LAST
#undef KEY_AB
#undef KEY_NEXT
#undef KEY_RESTART
#undef KEY_SLOW
#undef KEY_SHUFFLE
#undef KEY_BREAK
#undef KEY_PREVIOUS
#undef KEY_DIGITS
#undef KEY_TEEN
#undef KEY_TWEN
#undef KEY_VIDEOPHONE
#undef KEY_GAMES
#undef KEY_ZOOMIN
#undef KEY_ZOOMOUT
#undef KEY_ZOOMRESET
#undef KEY_WORDPROCESSOR
#undef KEY_EDITOR
#undef KEY_SPREADSHEET
#undef KEY_GRAPHICSEDITOR
#undef KEY_PRESENTATION
#undef KEY_DATABASE
#undef KEY_NEWS
#undef KEY_VOICEMAIL
#undef KEY_ADDRESSBOOK
#undef KEY_MESSENGER
#undef KEY_DISPLAYTOGGLE
#undef KEY_BRIGHTNESS_TOGGLE
#undef KEY_SPELLCHECK
#undef KEY_LOGOFF
#undef KEY_DOLLAR
#undef KEY_EURO
#undef KEY_FRAMEBACK
#undef KEY_FRAMEFORWARD
#undef KEY_CONTEXT_MENU
#undef KEY_MEDIA_REPEAT
#undef KEY_10CHANNELSUP
#undef KEY_10CHANNELSDOWN
#undef KEY_IMAGES
#undef KEY_DEL_EOL
#undef KEY_DEL_EOS
#undef KEY_INS_LINE
#undef KEY_DEL_LINE
#undef KEY_FN
#undef KEY_FN_ESC
#undef KEY_FN_F1
#undef KEY_FN_F2
#undef KEY_FN_F3
#undef KEY_FN_F4
#undef KEY_FN_F5
#undef KEY_FN_F6
#undef KEY_FN_F7
#undef KEY_FN_F8
#undef KEY_FN_F9
#undef KEY_FN_F10
#undef KEY_FN_F11
#undef KEY_FN_F12
#undef KEY_FN_1
#undef KEY_FN_2
#undef KEY_FN_D
#undef KEY_FN_E
#undef KEY_FN_F
#undef KEY_FN_S
#undef KEY_FN_B
#undef KEY_BRL_DOT1
#undef KEY_BRL_DOT2
#undef KEY_BRL_DOT3
#undef KEY_BRL_DOT4
#undef KEY_BRL_DOT5
#undef KEY_BRL_DOT6
#undef KEY_BRL_DOT7
#undef KEY_BRL_DOT8
#undef KEY_BRL_DOT9
#undef KEY_BRL_DOT10
#undef KEY_NUMERIC_0
#undef KEY_NUMERIC_1
#undef KEY_NUMERIC_2
#undef KEY_NUMERIC_3
#undef KEY_NUMERIC_4
#undef KEY_NUMERIC_5
#undef KEY_NUMERIC_6
#undef KEY_NUMERIC_7
#undef KEY_NUMERIC_8
#undef KEY_NUMERIC_9
#undef KEY_NUMERIC_STAR
#undef KEY_NUMERIC_POUND
#undef KEY_CAMERA_FOCUS
#undef KEY_WPS_BUTTON
#undef KEY_TOUCHPAD_TOGGLE
#undef KEY_TOUCHPAD_ON
#undef KEY_TOUCHPAD_OFF
#undef KEY_CAMERA_ZOOMIN
#undef KEY_CAMERA_ZOOMOUT
#undef KEY_CAMERA_UP
#undef KEY_CAMERA_DOWN
#undef KEY_CAMERA_LEFT
#undef KEY_CAMERA_RIGHT
#undef KEY_ATTENDANT_ON
#undef KEY_ATTENDANT_OFF
#undef KEY_ATTENDANT_TOGGLE
#undef KEY_LIGHTS_TOGGLE
#undef BTN_DPAD_UP
#undef BTN_DPAD_DOWN
#undef BTN_DPAD_LEFT
#undef BTN_DPAD_RIGHT
#undef KEY_ALS_TOGGLE
#undef KEY_BUTTONCONFIG
#undef KEY_TASKMANAGER
#undef KEY_JOURNAL
#undef KEY_CONTROLPANEL
#undef KEY_APPSELECT
#undef KEY_SCREENSAVER
#undef KEY_VOICECOMMAND
#undef KEY_BRIGHTNESS_MIN
#undef KEY_BRIGHTNESS_MAX
#undef BTN_TRIGGER_HAPPY
#undef BTN_TRIGGER_HAPPY1
#undef BTN_TRIGGER_HAPPY2
#undef BTN_TRIGGER_HAPPY3
#undef BTN_TRIGGER_HAPPY4
#undef BTN_TRIGGER_HAPPY5
#undef BTN_TRIGGER_HAPPY6
#undef BTN_TRIGGER_HAPPY7
#undef BTN_TRIGGER_HAPPY8
#undef BTN_TRIGGER_HAPPY9
#undef BTN_TRIGGER_HAPPY10
#undef BTN_TRIGGER_HAPPY11
#undef BTN_TRIGGER_HAPPY12
#undef BTN_TRIGGER_HAPPY13
#undef BTN_TRIGGER_HAPPY14
#undef BTN_TRIGGER_HAPPY15
#undef BTN_TRIGGER_HAPPY16
#undef BTN_TRIGGER_HAPPY17
#undef BTN_TRIGGER_HAPPY18
#undef BTN_TRIGGER_HAPPY19
#undef BTN_TRIGGER_HAPPY20
#undef BTN_TRIGGER_HAPPY21
#undef BTN_TRIGGER_HAPPY22
#undef BTN_TRIGGER_HAPPY23
#undef BTN_TRIGGER_HAPPY24
#undef BTN_TRIGGER_HAPPY25
#undef BTN_TRIGGER_HAPPY26
#undef BTN_TRIGGER_HAPPY27
#undef BTN_TRIGGER_HAPPY28
#undef BTN_TRIGGER_HAPPY29
#undef BTN_TRIGGER_HAPPY30
#undef BTN_TRIGGER_HAPPY31
#undef BTN_TRIGGER_HAPPY32
#undef BTN_TRIGGER_HAPPY33
#undef BTN_TRIGGER_HAPPY34
#undef BTN_TRIGGER_HAPPY35
#undef BTN_TRIGGER_HAPPY36
#undef BTN_TRIGGER_HAPPY37
#undef BTN_TRIGGER_HAPPY38
#undef BTN_TRIGGER_HAPPY39
#undef BTN_TRIGGER_HAPPY40
#undef KEY_MIN_INTERESTING
#undef KEY_MAX
#undef KEY_CNT
#undef REL_X
#undef REL_Y
#undef REL_Z
#undef REL_RX
#undef REL_RY
#undef REL_RZ
#undef REL_HWHEEL
#undef REL_DIAL
#undef REL_WHEEL
#undef REL_MISC
#undef REL_MAX
#undef REL_CNT
#undef ABS_X
#undef ABS_Y
#undef ABS_Z
#undef ABS_RX
#undef ABS_RY
#undef ABS_RZ
#undef ABS_THROTTLE
#undef ABS_RUDDER
#undef ABS_WHEEL
#undef ABS_GAS
#undef ABS_BRAKE
#undef ABS_HAT0X
#undef ABS_HAT0Y
#undef ABS_HAT1X
#undef ABS_HAT1Y
#undef ABS_HAT2X
#undef ABS_HAT2Y
#undef ABS_HAT3X
#undef ABS_HAT3Y
#undef ABS_PRESSURE
#undef ABS_DISTANCE
#undef ABS_TILT_X
#undef ABS_TILT_Y
#undef ABS_TOOL_WIDTH
#undef ABS_VOLUME
#undef ABS_MISC
#undef ABS_MT_SLOT
#undef ABS_MT_TOUCH_MAJOR
#undef ABS_MT_TOUCH_MINOR
#undef ABS_MT_WIDTH_MAJOR
#undef ABS_MT_WIDTH_MINOR
#undef ABS_MT_ORIENTATION
#undef ABS_MT_POSITION_X
#undef ABS_MT_POSITION_Y
#undef ABS_MT_TOOL_TYPE
#undef ABS_MT_BLOB_ID
#undef ABS_MT_TRACKING_ID
#undef ABS_MT_PRESSURE
#undef ABS_MT_DISTANCE
#undef ABS_MT_TOOL_X
#undef ABS_MT_TOOL_Y
#undef ABS_MAX
#undef ABS_CNT

////////////////////////////////////////////////////////////////////////////////
enum event
{
    KEY_RESERVED         = (EV_KEY << 16) + _imp::_KEY_RESERVED,
    KEY_ESC              = (EV_KEY << 16) + _imp::_KEY_ESC,
    KEY_1                = (EV_KEY << 16) + _imp::_KEY_1,
    KEY_2                = (EV_KEY << 16) + _imp::_KEY_2,
    KEY_3                = (EV_KEY << 16) + _imp::_KEY_3,
    KEY_4                = (EV_KEY << 16) + _imp::_KEY_4,
    KEY_5                = (EV_KEY << 16) + _imp::_KEY_5,
    KEY_6                = (EV_KEY << 16) + _imp::_KEY_6,
    KEY_7                = (EV_KEY << 16) + _imp::_KEY_7,
    KEY_8                = (EV_KEY << 16) + _imp::_KEY_8,
    KEY_9                = (EV_KEY << 16) + _imp::_KEY_9,
    KEY_0                = (EV_KEY << 16) + _imp::_KEY_0,
    KEY_MINUS            = (EV_KEY << 16) + _imp::_KEY_MINUS,
    KEY_EQUAL            = (EV_KEY << 16) + _imp::_KEY_EQUAL,
    KEY_BACKSPACE        = (EV_KEY << 16) + _imp::_KEY_BACKSPACE,
    KEY_TAB              = (EV_KEY << 16) + _imp::_KEY_TAB,
    KEY_Q                = (EV_KEY << 16) + _imp::_KEY_Q,
    KEY_W                = (EV_KEY << 16) + _imp::_KEY_W,
    KEY_E                = (EV_KEY << 16) + _imp::_KEY_E,
    KEY_R                = (EV_KEY << 16) + _imp::_KEY_R,
    KEY_T                = (EV_KEY << 16) + _imp::_KEY_T,
    KEY_Y                = (EV_KEY << 16) + _imp::_KEY_Y,
    KEY_U                = (EV_KEY << 16) + _imp::_KEY_U,
    KEY_I                = (EV_KEY << 16) + _imp::_KEY_I,
    KEY_O                = (EV_KEY << 16) + _imp::_KEY_O,
    KEY_P                = (EV_KEY << 16) + _imp::_KEY_P,
    KEY_LEFTBRACE        = (EV_KEY << 16) + _imp::_KEY_LEFTBRACE,
    KEY_RIGHTBRACE       = (EV_KEY << 16) + _imp::_KEY_RIGHTBRACE,
    KEY_ENTER            = (EV_KEY << 16) + _imp::_KEY_ENTER,
    KEY_LEFTCTRL         = (EV_KEY << 16) + _imp::_KEY_LEFTCTRL,
    KEY_A                = (EV_KEY << 16) + _imp::_KEY_A,
    KEY_S                = (EV_KEY << 16) + _imp::_KEY_S,
    KEY_D                = (EV_KEY << 16) + _imp::_KEY_D,
    KEY_F                = (EV_KEY << 16) + _imp::_KEY_F,
    KEY_G                = (EV_KEY << 16) + _imp::_KEY_G,
    KEY_H                = (EV_KEY << 16) + _imp::_KEY_H,
    KEY_J                = (EV_KEY << 16) + _imp::_KEY_J,
    KEY_K                = (EV_KEY << 16) + _imp::_KEY_K,
    KEY_L                = (EV_KEY << 16) + _imp::_KEY_L,
    KEY_SEMICOLON        = (EV_KEY << 16) + _imp::_KEY_SEMICOLON,
    KEY_APOSTROPHE       = (EV_KEY << 16) + _imp::_KEY_APOSTROPHE,
    KEY_GRAVE            = (EV_KEY << 16) + _imp::_KEY_GRAVE,
    KEY_LEFTSHIFT        = (EV_KEY << 16) + _imp::_KEY_LEFTSHIFT,
    KEY_BACKSLASH        = (EV_KEY << 16) + _imp::_KEY_BACKSLASH,
    KEY_Z                = (EV_KEY << 16) + _imp::_KEY_Z,
    KEY_X                = (EV_KEY << 16) + _imp::_KEY_X,
    KEY_C                = (EV_KEY << 16) + _imp::_KEY_C,
    KEY_V                = (EV_KEY << 16) + _imp::_KEY_V,
    KEY_B                = (EV_KEY << 16) + _imp::_KEY_B,
    KEY_N                = (EV_KEY << 16) + _imp::_KEY_N,
    KEY_M                = (EV_KEY << 16) + _imp::_KEY_M,
    KEY_COMMA            = (EV_KEY << 16) + _imp::_KEY_COMMA,
    KEY_DOT              = (EV_KEY << 16) + _imp::_KEY_DOT,
    KEY_SLASH            = (EV_KEY << 16) + _imp::_KEY_SLASH,
    KEY_RIGHTSHIFT       = (EV_KEY << 16) + _imp::_KEY_RIGHTSHIFT,
    KEY_KPASTERISK       = (EV_KEY << 16) + _imp::_KEY_KPASTERISK,
    KEY_LEFTALT          = (EV_KEY << 16) + _imp::_KEY_LEFTALT,
    KEY_SPACE            = (EV_KEY << 16) + _imp::_KEY_SPACE,
    KEY_CAPSLOCK         = (EV_KEY << 16) + _imp::_KEY_CAPSLOCK,
    KEY_F1               = (EV_KEY << 16) + _imp::_KEY_F1,
    KEY_F2               = (EV_KEY << 16) + _imp::_KEY_F2,
    KEY_F3               = (EV_KEY << 16) + _imp::_KEY_F3,
    KEY_F4               = (EV_KEY << 16) + _imp::_KEY_F4,
    KEY_F5               = (EV_KEY << 16) + _imp::_KEY_F5,
    KEY_F6               = (EV_KEY << 16) + _imp::_KEY_F6,
    KEY_F7               = (EV_KEY << 16) + _imp::_KEY_F7,
    KEY_F8               = (EV_KEY << 16) + _imp::_KEY_F8,
    KEY_F9               = (EV_KEY << 16) + _imp::_KEY_F9,
    KEY_F10              = (EV_KEY << 16) + _imp::_KEY_F10,
    KEY_NUMLOCK          = (EV_KEY << 16) + _imp::_KEY_NUMLOCK,
    KEY_SCROLLLOCK       = (EV_KEY << 16) + _imp::_KEY_SCROLLLOCK,
    KEY_KP7              = (EV_KEY << 16) + _imp::_KEY_KP7,
    KEY_KP8              = (EV_KEY << 16) + _imp::_KEY_KP8,
    KEY_KP9              = (EV_KEY << 16) + _imp::_KEY_KP9,
    KEY_KPMINUS          = (EV_KEY << 16) + _imp::_KEY_KPMINUS,
    KEY_KP4              = (EV_KEY << 16) + _imp::_KEY_KP4,
    KEY_KP5              = (EV_KEY << 16) + _imp::_KEY_KP5,
    KEY_KP6              = (EV_KEY << 16) + _imp::_KEY_KP6,
    KEY_KPPLUS           = (EV_KEY << 16) + _imp::_KEY_KPPLUS,
    KEY_KP1              = (EV_KEY << 16) + _imp::_KEY_KP1,
    KEY_KP2              = (EV_KEY << 16) + _imp::_KEY_KP2,
    KEY_KP3              = (EV_KEY << 16) + _imp::_KEY_KP3,
    KEY_KP0              = (EV_KEY << 16) + _imp::_KEY_KP0,
    KEY_KPDOT            = (EV_KEY << 16) + _imp::_KEY_KPDOT,
    KEY_ZENKAKUHANKAKU   = (EV_KEY << 16) + _imp::_KEY_ZENKAKUHANKAKU,
    KEY_102ND            = (EV_KEY << 16) + _imp::_KEY_102ND,
    KEY_F11              = (EV_KEY << 16) + _imp::_KEY_F11,
    KEY_F12              = (EV_KEY << 16) + _imp::_KEY_F12,
    KEY_RO               = (EV_KEY << 16) + _imp::_KEY_RO,
    KEY_KATAKANA         = (EV_KEY << 16) + _imp::_KEY_KATAKANA,
    KEY_HIRAGANA         = (EV_KEY << 16) + _imp::_KEY_HIRAGANA,
    KEY_HENKAN           = (EV_KEY << 16) + _imp::_KEY_HENKAN,
    KEY_KATAKANAHIRAGANA = (EV_KEY << 16) + _imp::_KEY_KATAKANAHIRAGANA,
    KEY_MUHENKAN         = (EV_KEY << 16) + _imp::_KEY_MUHENKAN,
    KEY_KPJPCOMMA        = (EV_KEY << 16) + _imp::_KEY_KPJPCOMMA,
    KEY_KPENTER          = (EV_KEY << 16) + _imp::_KEY_KPENTER,
    KEY_RIGHTCTRL        = (EV_KEY << 16) + _imp::_KEY_RIGHTCTRL,
    KEY_KPSLASH          = (EV_KEY << 16) + _imp::_KEY_KPSLASH,
    KEY_SYSRQ            = (EV_KEY << 16) + _imp::_KEY_SYSRQ,
    KEY_RIGHTALT         = (EV_KEY << 16) + _imp::_KEY_RIGHTALT,
    KEY_LINEFEED         = (EV_KEY << 16) + _imp::_KEY_LINEFEED,
    KEY_HOME             = (EV_KEY << 16) + _imp::_KEY_HOME,
    KEY_UP               = (EV_KEY << 16) + _imp::_KEY_UP,
    KEY_PAGEUP           = (EV_KEY << 16) + _imp::_KEY_PAGEUP,
    KEY_LEFT             = (EV_KEY << 16) + _imp::_KEY_LEFT,
    KEY_RIGHT            = (EV_KEY << 16) + _imp::_KEY_RIGHT,
    KEY_END              = (EV_KEY << 16) + _imp::_KEY_END,
    KEY_DOWN             = (EV_KEY << 16) + _imp::_KEY_DOWN,
    KEY_PAGEDOWN         = (EV_KEY << 16) + _imp::_KEY_PAGEDOWN,
    KEY_INSERT           = (EV_KEY << 16) + _imp::_KEY_INSERT,
    KEY_DELETE           = (EV_KEY << 16) + _imp::_KEY_DELETE,
    KEY_MACRO            = (EV_KEY << 16) + _imp::_KEY_MACRO,
    KEY_MUTE             = (EV_KEY << 16) + _imp::_KEY_MUTE,
    KEY_VOLUMEDOWN       = (EV_KEY << 16) + _imp::_KEY_VOLUMEDOWN,
    KEY_VOLUMEUP         = (EV_KEY << 16) + _imp::_KEY_VOLUMEUP,
    KEY_POWER            = (EV_KEY << 16) + _imp::_KEY_POWER,
    KEY_KPEQUAL          = (EV_KEY << 16) + _imp::_KEY_KPEQUAL,
    KEY_KPPLUSMINUS      = (EV_KEY << 16) + _imp::_KEY_KPPLUSMINUS,
    KEY_PAUSE            = (EV_KEY << 16) + _imp::_KEY_PAUSE,
    KEY_SCALE            = (EV_KEY << 16) + _imp::_KEY_SCALE,
    KEY_KPCOMMA          = (EV_KEY << 16) + _imp::_KEY_KPCOMMA,
    KEY_HANGEUL          = (EV_KEY << 16) + _imp::_KEY_HANGEUL,
    KEY_HANGUEL          = (EV_KEY << 16) + _imp::_KEY_HANGUEL,
    KEY_HANJA            = (EV_KEY << 16) + _imp::_KEY_HANJA,
    KEY_YEN              = (EV_KEY << 16) + _imp::_KEY_YEN,
    KEY_LEFTMETA         = (EV_KEY << 16) + _imp::_KEY_LEFTMETA,
    KEY_RIGHTMETA        = (EV_KEY << 16) + _imp::_KEY_RIGHTMETA,
    KEY_COMPOSE          = (EV_KEY << 16) + _imp::_KEY_COMPOSE,
    KEY_STOP             = (EV_KEY << 16) + _imp::_KEY_STOP,
    KEY_AGAIN            = (EV_KEY << 16) + _imp::_KEY_AGAIN,
    KEY_PROPS            = (EV_KEY << 16) + _imp::_KEY_PROPS,
    KEY_UNDO             = (EV_KEY << 16) + _imp::_KEY_UNDO,
    KEY_FRONT            = (EV_KEY << 16) + _imp::_KEY_FRONT,
    KEY_COPY             = (EV_KEY << 16) + _imp::_KEY_COPY,
    KEY_OPEN             = (EV_KEY << 16) + _imp::_KEY_OPEN,
    KEY_PASTE            = (EV_KEY << 16) + _imp::_KEY_PASTE,
    KEY_FIND             = (EV_KEY << 16) + _imp::_KEY_FIND,
    KEY_CUT              = (EV_KEY << 16) + _imp::_KEY_CUT,
    KEY_HELP             = (EV_KEY << 16) + _imp::_KEY_HELP,
    KEY_MENU             = (EV_KEY << 16) + _imp::_KEY_MENU,
    KEY_CALC             = (EV_KEY << 16) + _imp::_KEY_CALC,
    KEY_SETUP            = (EV_KEY << 16) + _imp::_KEY_SETUP,
    KEY_SLEEP            = (EV_KEY << 16) + _imp::_KEY_SLEEP,
    KEY_WAKEUP           = (EV_KEY << 16) + _imp::_KEY_WAKEUP,
    KEY_FILE             = (EV_KEY << 16) + _imp::_KEY_FILE,
    KEY_SENDFILE         = (EV_KEY << 16) + _imp::_KEY_SENDFILE,
    KEY_DELETEFILE       = (EV_KEY << 16) + _imp::_KEY_DELETEFILE,
    KEY_XFER             = (EV_KEY << 16) + _imp::_KEY_XFER,
    KEY_PROG1            = (EV_KEY << 16) + _imp::_KEY_PROG1,
    KEY_PROG2            = (EV_KEY << 16) + _imp::_KEY_PROG2,
    KEY_WWW              = (EV_KEY << 16) + _imp::_KEY_WWW,
    KEY_MSDOS            = (EV_KEY << 16) + _imp::_KEY_MSDOS,
    KEY_COFFEE           = (EV_KEY << 16) + _imp::_KEY_COFFEE,
    KEY_SCREENLOCK       = (EV_KEY << 16) + _imp::_KEY_SCREENLOCK,
    KEY_DIRECTION        = (EV_KEY << 16) + _imp::_KEY_DIRECTION,
    KEY_CYCLEWINDOWS     = (EV_KEY << 16) + _imp::_KEY_CYCLEWINDOWS,
    KEY_MAIL             = (EV_KEY << 16) + _imp::_KEY_MAIL,
    KEY_BOOKMARKS        = (EV_KEY << 16) + _imp::_KEY_BOOKMARKS,
    KEY_COMPUTER         = (EV_KEY << 16) + _imp::_KEY_COMPUTER,
    KEY_BACK             = (EV_KEY << 16) + _imp::_KEY_BACK,
    KEY_FORWARD          = (EV_KEY << 16) + _imp::_KEY_FORWARD,
    KEY_CLOSECD          = (EV_KEY << 16) + _imp::_KEY_CLOSECD,
    KEY_EJECTCD          = (EV_KEY << 16) + _imp::_KEY_EJECTCD,
    KEY_EJECTCLOSECD     = (EV_KEY << 16) + _imp::_KEY_EJECTCLOSECD,
    KEY_NEXTSONG         = (EV_KEY << 16) + _imp::_KEY_NEXTSONG,
    KEY_PLAYPAUSE        = (EV_KEY << 16) + _imp::_KEY_PLAYPAUSE,
    KEY_PREVIOUSSONG     = (EV_KEY << 16) + _imp::_KEY_PREVIOUSSONG,
    KEY_STOPCD           = (EV_KEY << 16) + _imp::_KEY_STOPCD,
    KEY_RECORD           = (EV_KEY << 16) + _imp::_KEY_RECORD,
    KEY_REWIND           = (EV_KEY << 16) + _imp::_KEY_REWIND,
    KEY_PHONE            = (EV_KEY << 16) + _imp::_KEY_PHONE,
    KEY_ISO              = (EV_KEY << 16) + _imp::_KEY_ISO,
    KEY_CONFIG           = (EV_KEY << 16) + _imp::_KEY_CONFIG,
    KEY_HOMEPAGE         = (EV_KEY << 16) + _imp::_KEY_HOMEPAGE,
    KEY_REFRESH          = (EV_KEY << 16) + _imp::_KEY_REFRESH,
    KEY_EXIT             = (EV_KEY << 16) + _imp::_KEY_EXIT,
    KEY_MOVE             = (EV_KEY << 16) + _imp::_KEY_MOVE,
    KEY_EDIT             = (EV_KEY << 16) + _imp::_KEY_EDIT,
    KEY_SCROLLUP         = (EV_KEY << 16) + _imp::_KEY_SCROLLUP,
    KEY_SCROLLDOWN       = (EV_KEY << 16) + _imp::_KEY_SCROLLDOWN,
    KEY_KPLEFTPAREN      = (EV_KEY << 16) + _imp::_KEY_KPLEFTPAREN,
    KEY_KPRIGHTPAREN     = (EV_KEY << 16) + _imp::_KEY_KPRIGHTPAREN,
    KEY_NEW              = (EV_KEY << 16) + _imp::_KEY_NEW,
    KEY_REDO             = (EV_KEY << 16) + _imp::_KEY_REDO,
    KEY_F13              = (EV_KEY << 16) + _imp::_KEY_F13,
    KEY_F14              = (EV_KEY << 16) + _imp::_KEY_F14,
    KEY_F15              = (EV_KEY << 16) + _imp::_KEY_F15,
    KEY_F16              = (EV_KEY << 16) + _imp::_KEY_F16,
    KEY_F17              = (EV_KEY << 16) + _imp::_KEY_F17,
    KEY_F18              = (EV_KEY << 16) + _imp::_KEY_F18,
    KEY_F19              = (EV_KEY << 16) + _imp::_KEY_F19,
    KEY_F20              = (EV_KEY << 16) + _imp::_KEY_F20,
    KEY_F21              = (EV_KEY << 16) + _imp::_KEY_F21,
    KEY_F22              = (EV_KEY << 16) + _imp::_KEY_F22,
    KEY_F23              = (EV_KEY << 16) + _imp::_KEY_F23,
    KEY_F24              = (EV_KEY << 16) + _imp::_KEY_F24,
    KEY_PLAYCD           = (EV_KEY << 16) + _imp::_KEY_PLAYCD,
    KEY_PAUSECD          = (EV_KEY << 16) + _imp::_KEY_PAUSECD,
    KEY_PROG3            = (EV_KEY << 16) + _imp::_KEY_PROG3,
    KEY_PROG4            = (EV_KEY << 16) + _imp::_KEY_PROG4,
    KEY_DASHBOARD        = (EV_KEY << 16) + _imp::_KEY_DASHBOARD,
    KEY_SUSPEND          = (EV_KEY << 16) + _imp::_KEY_SUSPEND,
    KEY_CLOSE            = (EV_KEY << 16) + _imp::_KEY_CLOSE,
    KEY_PLAY             = (EV_KEY << 16) + _imp::_KEY_PLAY,
    KEY_FASTFORWARD      = (EV_KEY << 16) + _imp::_KEY_FASTFORWARD,
    KEY_BASSBOOST        = (EV_KEY << 16) + _imp::_KEY_BASSBOOST,
    KEY_PRINT            = (EV_KEY << 16) + _imp::_KEY_PRINT,
    KEY_HP               = (EV_KEY << 16) + _imp::_KEY_HP,
    KEY_CAMERA           = (EV_KEY << 16) + _imp::_KEY_CAMERA,
    KEY_SOUND            = (EV_KEY << 16) + _imp::_KEY_SOUND,
    KEY_QUESTION         = (EV_KEY << 16) + _imp::_KEY_QUESTION,
    KEY_EMAIL            = (EV_KEY << 16) + _imp::_KEY_EMAIL,
    KEY_CHAT             = (EV_KEY << 16) + _imp::_KEY_CHAT,
    KEY_SEARCH           = (EV_KEY << 16) + _imp::_KEY_SEARCH,
    KEY_CONNECT          = (EV_KEY << 16) + _imp::_KEY_CONNECT,
    KEY_FINANCE          = (EV_KEY << 16) + _imp::_KEY_FINANCE,
    KEY_SPORT            = (EV_KEY << 16) + _imp::_KEY_SPORT,
    KEY_SHOP             = (EV_KEY << 16) + _imp::_KEY_SHOP,
    KEY_ALTERASE         = (EV_KEY << 16) + _imp::_KEY_ALTERASE,
    KEY_CANCEL           = (EV_KEY << 16) + _imp::_KEY_CANCEL,
    KEY_BRIGHTNESSDOWN   = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESSDOWN,
    KEY_BRIGHTNESSUP     = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESSUP,
    KEY_MEDIA            = (EV_KEY << 16) + _imp::_KEY_MEDIA,
    KEY_SWITCHVIDEOMODE  = (EV_KEY << 16) + _imp::_KEY_SWITCHVIDEOMODE,
    KEY_KBDILLUMTOGGLE   = (EV_KEY << 16) + _imp::_KEY_KBDILLUMTOGGLE,
    KEY_KBDILLUMDOWN     = (EV_KEY << 16) + _imp::_KEY_KBDILLUMDOWN,
    KEY_KBDILLUMUP       = (EV_KEY << 16) + _imp::_KEY_KBDILLUMUP,
    KEY_SEND             = (EV_KEY << 16) + _imp::_KEY_SEND,
    KEY_REPLY            = (EV_KEY << 16) + _imp::_KEY_REPLY,
    KEY_FORWARDMAIL      = (EV_KEY << 16) + _imp::_KEY_FORWARDMAIL,
    KEY_SAVE             = (EV_KEY << 16) + _imp::_KEY_SAVE,
    KEY_DOCUMENTS        = (EV_KEY << 16) + _imp::_KEY_DOCUMENTS,
    KEY_BATTERY          = (EV_KEY << 16) + _imp::_KEY_BATTERY,
    KEY_BLUETOOTH        = (EV_KEY << 16) + _imp::_KEY_BLUETOOTH,
    KEY_WLAN             = (EV_KEY << 16) + _imp::_KEY_WLAN,
    KEY_UWB              = (EV_KEY << 16) + _imp::_KEY_UWB,
    KEY_UNKNOWN          = (EV_KEY << 16) + _imp::_KEY_UNKNOWN,
    KEY_VIDEO_NEXT       = (EV_KEY << 16) + _imp::_KEY_VIDEO_NEXT,
    KEY_VIDEO_PREV       = (EV_KEY << 16) + _imp::_KEY_VIDEO_PREV,
    KEY_BRIGHTNESS_CYCLE = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_CYCLE,
    KEY_BRIGHTNESS_AUTO  = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_AUTO,
    KEY_BRIGHTNESS_ZERO  = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_ZERO,
    KEY_DISPLAY_OFF      = (EV_KEY << 16) + _imp::_KEY_DISPLAY_OFF,
    KEY_WWAN             = (EV_KEY << 16) + _imp::_KEY_WWAN,
    KEY_WIMAX            = (EV_KEY << 16) + _imp::_KEY_WIMAX,
    KEY_RFKILL           = (EV_KEY << 16) + _imp::_KEY_RFKILL,
    KEY_MICMUTE          = (EV_KEY << 16) + _imp::_KEY_MICMUTE,
    BTN_MISC             = (EV_BTN << 16) + _imp::_BTN_MISC,
    BTN_0                = (EV_BTN << 16) + _imp::_BTN_0,
    BTN_1                = (EV_BTN << 16) + _imp::_BTN_1,
    BTN_2                = (EV_BTN << 16) + _imp::_BTN_2,
    BTN_3                = (EV_BTN << 16) + _imp::_BTN_3,
    BTN_4                = (EV_BTN << 16) + _imp::_BTN_4,
    BTN_5                = (EV_BTN << 16) + _imp::_BTN_5,
    BTN_6                = (EV_BTN << 16) + _imp::_BTN_6,
    BTN_7                = (EV_BTN << 16) + _imp::_BTN_7,
    BTN_8                = (EV_BTN << 16) + _imp::_BTN_8,
    BTN_9                = (EV_BTN << 16) + _imp::_BTN_9,
    BTN_MOUSE            = (EV_BTN << 16) + _imp::_BTN_MOUSE,
    BTN_LEFT             = (EV_BTN << 16) + _imp::_BTN_LEFT,
    BTN_RIGHT            = (EV_BTN << 16) + _imp::_BTN_RIGHT,
    BTN_MIDDLE           = (EV_BTN << 16) + _imp::_BTN_MIDDLE,
    BTN_SIDE             = (EV_BTN << 16) + _imp::_BTN_SIDE,
    BTN_EXTRA            = (EV_BTN << 16) + _imp::_BTN_EXTRA,
    BTN_FORWARD          = (EV_BTN << 16) + _imp::_BTN_FORWARD,
    BTN_BACK             = (EV_BTN << 16) + _imp::_BTN_BACK,
    BTN_TASK             = (EV_BTN << 16) + _imp::_BTN_TASK,
    BTN_JOYSTICK         = (EV_BTN << 16) + _imp::_BTN_JOYSTICK,
    BTN_TRIGGER          = (EV_BTN << 16) + _imp::_BTN_TRIGGER,
    BTN_THUMB            = (EV_BTN << 16) + _imp::_BTN_THUMB,
    BTN_THUMB2           = (EV_BTN << 16) + _imp::_BTN_THUMB2,
    BTN_TOP              = (EV_BTN << 16) + _imp::_BTN_TOP,
    BTN_TOP2             = (EV_BTN << 16) + _imp::_BTN_TOP2,
    BTN_PINKIE           = (EV_BTN << 16) + _imp::_BTN_PINKIE,
    BTN_BASE             = (EV_BTN << 16) + _imp::_BTN_BASE,
    BTN_BASE2            = (EV_BTN << 16) + _imp::_BTN_BASE2,
    BTN_BASE3            = (EV_BTN << 16) + _imp::_BTN_BASE3,
    BTN_BASE4            = (EV_BTN << 16) + _imp::_BTN_BASE4,
    BTN_BASE5            = (EV_BTN << 16) + _imp::_BTN_BASE5,
    BTN_BASE6            = (EV_BTN << 16) + _imp::_BTN_BASE6,
    BTN_DEAD             = (EV_BTN << 16) + _imp::_BTN_DEAD,
    BTN_GAMEPAD          = (EV_BTN << 16) + _imp::_BTN_GAMEPAD,
    BTN_SOUTH            = (EV_BTN << 16) + _imp::_BTN_SOUTH,
    BTN_A                = (EV_BTN << 16) + _imp::_BTN_A,
    BTN_EAST             = (EV_BTN << 16) + _imp::_BTN_EAST,
    BTN_B                = (EV_BTN << 16) + _imp::_BTN_B,
    BTN_C                = (EV_BTN << 16) + _imp::_BTN_C,
    BTN_NORTH            = (EV_BTN << 16) + _imp::_BTN_NORTH,
    BTN_X                = (EV_BTN << 16) + _imp::_BTN_X,
    BTN_WEST             = (EV_BTN << 16) + _imp::_BTN_WEST,
    BTN_Y                = (EV_BTN << 16) + _imp::_BTN_Y,
    BTN_Z                = (EV_BTN << 16) + _imp::_BTN_Z,
    BTN_TL               = (EV_BTN << 16) + _imp::_BTN_TL,
    BTN_TR               = (EV_BTN << 16) + _imp::_BTN_TR,
    BTN_TL2              = (EV_BTN << 16) + _imp::_BTN_TL2,
    BTN_TR2              = (EV_BTN << 16) + _imp::_BTN_TR2,
    BTN_SELECT           = (EV_BTN << 16) + _imp::_BTN_SELECT,
    BTN_START            = (EV_BTN << 16) + _imp::_BTN_START,
    BTN_MODE             = (EV_BTN << 16) + _imp::_BTN_MODE,
    BTN_THUMBL           = (EV_BTN << 16) + _imp::_BTN_THUMBL,
    BTN_THUMBR           = (EV_BTN << 16) + _imp::_BTN_THUMBR,
    BTN_DIGI             = (EV_BTN << 16) + _imp::_BTN_DIGI,
    BTN_TOOL_PEN         = (EV_BTN << 16) + _imp::_BTN_TOOL_PEN,
    BTN_TOOL_RUBBER      = (EV_BTN << 16) + _imp::_BTN_TOOL_RUBBER,
    BTN_TOOL_BRUSH       = (EV_BTN << 16) + _imp::_BTN_TOOL_BRUSH,
    BTN_TOOL_PENCIL      = (EV_BTN << 16) + _imp::_BTN_TOOL_PENCIL,
    BTN_TOOL_AIRBRUSH    = (EV_BTN << 16) + _imp::_BTN_TOOL_AIRBRUSH,
    BTN_TOOL_FINGER      = (EV_BTN << 16) + _imp::_BTN_TOOL_FINGER,
    BTN_TOOL_MOUSE       = (EV_BTN << 16) + _imp::_BTN_TOOL_MOUSE,
    BTN_TOOL_LENS        = (EV_BTN << 16) + _imp::_BTN_TOOL_LENS,
    BTN_TOOL_QUINTTAP    = (EV_BTN << 16) + _imp::_BTN_TOOL_QUINTTAP,
    BTN_TOUCH            = (EV_BTN << 16) + _imp::_BTN_TOUCH,
    BTN_STYLUS           = (EV_BTN << 16) + _imp::_BTN_STYLUS,
    BTN_STYLUS2          = (EV_BTN << 16) + _imp::_BTN_STYLUS2,
    BTN_TOOL_DOUBLETAP   = (EV_BTN << 16) + _imp::_BTN_TOOL_DOUBLETAP,
    BTN_TOOL_TRIPLETAP   = (EV_BTN << 16) + _imp::_BTN_TOOL_TRIPLETAP,
    BTN_TOOL_QUADTAP     = (EV_BTN << 16) + _imp::_BTN_TOOL_QUADTAP,
    BTN_WHEEL            = (EV_BTN << 16) + _imp::_BTN_WHEEL,
    BTN_GEAR_DOWN        = (EV_BTN << 16) + _imp::_BTN_GEAR_DOWN,
    BTN_GEAR_UP          = (EV_BTN << 16) + _imp::_BTN_GEAR_UP,
    KEY_OK               = (EV_KEY << 16) + _imp::_KEY_OK,
    KEY_SELECT           = (EV_KEY << 16) + _imp::_KEY_SELECT,
    KEY_GOTO             = (EV_KEY << 16) + _imp::_KEY_GOTO,
    KEY_CLEAR            = (EV_KEY << 16) + _imp::_KEY_CLEAR,
    KEY_POWER2           = (EV_KEY << 16) + _imp::_KEY_POWER2,
    KEY_OPTION           = (EV_KEY << 16) + _imp::_KEY_OPTION,
    KEY_INFO             = (EV_KEY << 16) + _imp::_KEY_INFO,
    KEY_TIME             = (EV_KEY << 16) + _imp::_KEY_TIME,
    KEY_VENDOR           = (EV_KEY << 16) + _imp::_KEY_VENDOR,
    KEY_ARCHIVE          = (EV_KEY << 16) + _imp::_KEY_ARCHIVE,
    KEY_PROGRAM          = (EV_KEY << 16) + _imp::_KEY_PROGRAM,
    KEY_CHANNEL          = (EV_KEY << 16) + _imp::_KEY_CHANNEL,
    KEY_FAVORITES        = (EV_KEY << 16) + _imp::_KEY_FAVORITES,
    KEY_EPG              = (EV_KEY << 16) + _imp::_KEY_EPG,
    KEY_PVR              = (EV_KEY << 16) + _imp::_KEY_PVR,
    KEY_MHP              = (EV_KEY << 16) + _imp::_KEY_MHP,
    KEY_LANGUAGE         = (EV_KEY << 16) + _imp::_KEY_LANGUAGE,
    KEY_TITLE            = (EV_KEY << 16) + _imp::_KEY_TITLE,
    KEY_SUBTITLE         = (EV_KEY << 16) + _imp::_KEY_SUBTITLE,
    KEY_ANGLE            = (EV_KEY << 16) + _imp::_KEY_ANGLE,
    KEY_ZOOM             = (EV_KEY << 16) + _imp::_KEY_ZOOM,
    KEY_MODE             = (EV_KEY << 16) + _imp::_KEY_MODE,
    KEY_KEYBOARD         = (EV_KEY << 16) + _imp::_KEY_KEYBOARD,
    KEY_SCREEN           = (EV_KEY << 16) + _imp::_KEY_SCREEN,
    KEY_PC               = (EV_KEY << 16) + _imp::_KEY_PC,
    KEY_TV               = (EV_KEY << 16) + _imp::_KEY_TV,
    KEY_TV2              = (EV_KEY << 16) + _imp::_KEY_TV2,
    KEY_VCR              = (EV_KEY << 16) + _imp::_KEY_VCR,
    KEY_VCR2             = (EV_KEY << 16) + _imp::_KEY_VCR2,
    KEY_SAT              = (EV_KEY << 16) + _imp::_KEY_SAT,
    KEY_SAT2             = (EV_KEY << 16) + _imp::_KEY_SAT2,
    KEY_CD               = (EV_KEY << 16) + _imp::_KEY_CD,
    KEY_TAPE             = (EV_KEY << 16) + _imp::_KEY_TAPE,
    KEY_RADIO            = (EV_KEY << 16) + _imp::_KEY_RADIO,
    KEY_TUNER            = (EV_KEY << 16) + _imp::_KEY_TUNER,
    KEY_PLAYER           = (EV_KEY << 16) + _imp::_KEY_PLAYER,
    KEY_TEXT             = (EV_KEY << 16) + _imp::_KEY_TEXT,
    KEY_DVD              = (EV_KEY << 16) + _imp::_KEY_DVD,
    KEY_AUX              = (EV_KEY << 16) + _imp::_KEY_AUX,
    KEY_MP3              = (EV_KEY << 16) + _imp::_KEY_MP3,
    KEY_AUDIO            = (EV_KEY << 16) + _imp::_KEY_AUDIO,
    KEY_VIDEO            = (EV_KEY << 16) + _imp::_KEY_VIDEO,
    KEY_DIRECTORY        = (EV_KEY << 16) + _imp::_KEY_DIRECTORY,
    KEY_LIST             = (EV_KEY << 16) + _imp::_KEY_LIST,
    KEY_MEMO             = (EV_KEY << 16) + _imp::_KEY_MEMO,
    KEY_CALENDAR         = (EV_KEY << 16) + _imp::_KEY_CALENDAR,
    KEY_RED              = (EV_KEY << 16) + _imp::_KEY_RED,
    KEY_GREEN            = (EV_KEY << 16) + _imp::_KEY_GREEN,
    KEY_YELLOW           = (EV_KEY << 16) + _imp::_KEY_YELLOW,
    KEY_BLUE             = (EV_KEY << 16) + _imp::_KEY_BLUE,
    KEY_CHANNELUP        = (EV_KEY << 16) + _imp::_KEY_CHANNELUP,
    KEY_CHANNELDOWN      = (EV_KEY << 16) + _imp::_KEY_CHANNELDOWN,
    KEY_FIRST            = (EV_KEY << 16) + _imp::_KEY_FIRST,
    KEY_LAST             = (EV_KEY << 16) + _imp::_KEY_LAST,
    KEY_AB               = (EV_KEY << 16) + _imp::_KEY_AB,
    KEY_NEXT             = (EV_KEY << 16) + _imp::_KEY_NEXT,
    KEY_RESTART          = (EV_KEY << 16) + _imp::_KEY_RESTART,
    KEY_SLOW             = (EV_KEY << 16) + _imp::_KEY_SLOW,
    KEY_SHUFFLE          = (EV_KEY << 16) + _imp::_KEY_SHUFFLE,
    KEY_BREAK            = (EV_KEY << 16) + _imp::_KEY_BREAK,
    KEY_PREVIOUS         = (EV_KEY << 16) + _imp::_KEY_PREVIOUS,
    KEY_DIGITS           = (EV_KEY << 16) + _imp::_KEY_DIGITS,
    KEY_TEEN             = (EV_KEY << 16) + _imp::_KEY_TEEN,
    KEY_TWEN             = (EV_KEY << 16) + _imp::_KEY_TWEN,
    KEY_VIDEOPHONE       = (EV_KEY << 16) + _imp::_KEY_VIDEOPHONE,
    KEY_GAMES            = (EV_KEY << 16) + _imp::_KEY_GAMES,
    KEY_ZOOMIN           = (EV_KEY << 16) + _imp::_KEY_ZOOMIN,
    KEY_ZOOMOUT          = (EV_KEY << 16) + _imp::_KEY_ZOOMOUT,
    KEY_ZOOMRESET        = (EV_KEY << 16) + _imp::_KEY_ZOOMRESET,
    KEY_WORDPROCESSOR    = (EV_KEY << 16) + _imp::_KEY_WORDPROCESSOR,
    KEY_EDITOR           = (EV_KEY << 16) + _imp::_KEY_EDITOR,
    KEY_SPREADSHEET      = (EV_KEY << 16) + _imp::_KEY_SPREADSHEET,
    KEY_GRAPHICSEDITOR   = (EV_KEY << 16) + _imp::_KEY_GRAPHICSEDITOR,
    KEY_PRESENTATION     = (EV_KEY << 16) + _imp::_KEY_PRESENTATION,
    KEY_DATABASE         = (EV_KEY << 16) + _imp::_KEY_DATABASE,
    KEY_NEWS             = (EV_KEY << 16) + _imp::_KEY_NEWS,
    KEY_VOICEMAIL        = (EV_KEY << 16) + _imp::_KEY_VOICEMAIL,
    KEY_ADDRESSBOOK      = (EV_KEY << 16) + _imp::_KEY_ADDRESSBOOK,
    KEY_MESSENGER        = (EV_KEY << 16) + _imp::_KEY_MESSENGER,
    KEY_DISPLAYTOGGLE    = (EV_KEY << 16) + _imp::_KEY_DISPLAYTOGGLE,
    KEY_BRIGHTNESS_TOGGLE = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_TOGGLE,
    KEY_SPELLCHECK       = (EV_KEY << 16) + _imp::_KEY_SPELLCHECK,
    KEY_LOGOFF           = (EV_KEY << 16) + _imp::_KEY_LOGOFF,
    KEY_DOLLAR           = (EV_KEY << 16) + _imp::_KEY_DOLLAR,
    KEY_EURO             = (EV_KEY << 16) + _imp::_KEY_EURO,
    KEY_FRAMEBACK        = (EV_KEY << 16) + _imp::_KEY_FRAMEBACK,
    KEY_FRAMEFORWARD     = (EV_KEY << 16) + _imp::_KEY_FRAMEFORWARD,
    KEY_CONTEXT_MENU     = (EV_KEY << 16) + _imp::_KEY_CONTEXT_MENU,
    KEY_MEDIA_REPEAT     = (EV_KEY << 16) + _imp::_KEY_MEDIA_REPEAT,
    KEY_10CHANNELSUP     = (EV_KEY << 16) + _imp::_KEY_10CHANNELSUP,
    KEY_10CHANNELSDOWN   = (EV_KEY << 16) + _imp::_KEY_10CHANNELSDOWN,
    KEY_IMAGES           = (EV_KEY << 16) + _imp::_KEY_IMAGES,
    KEY_DEL_EOL          = (EV_KEY << 16) + _imp::_KEY_DEL_EOL,
    KEY_DEL_EOS          = (EV_KEY << 16) + _imp::_KEY_DEL_EOS,
    KEY_INS_LINE         = (EV_KEY << 16) + _imp::_KEY_INS_LINE,
    KEY_DEL_LINE         = (EV_KEY << 16) + _imp::_KEY_DEL_LINE,
    KEY_FN               = (EV_KEY << 16) + _imp::_KEY_FN,
    KEY_FN_ESC           = (EV_KEY << 16) + _imp::_KEY_FN_ESC,
    KEY_FN_F1            = (EV_KEY << 16) + _imp::_KEY_FN_F1,
    KEY_FN_F2            = (EV_KEY << 16) + _imp::_KEY_FN_F2,
    KEY_FN_F3            = (EV_KEY << 16) + _imp::_KEY_FN_F3,
    KEY_FN_F4            = (EV_KEY << 16) + _imp::_KEY_FN_F4,
    KEY_FN_F5            = (EV_KEY << 16) + _imp::_KEY_FN_F5,
    KEY_FN_F6            = (EV_KEY << 16) + _imp::_KEY_FN_F6,
    KEY_FN_F7            = (EV_KEY << 16) + _imp::_KEY_FN_F7,
    KEY_FN_F8            = (EV_KEY << 16) + _imp::_KEY_FN_F8,
    KEY_FN_F9            = (EV_KEY << 16) + _imp::_KEY_FN_F9,
    KEY_FN_F10           = (EV_KEY << 16) + _imp::_KEY_FN_F10,
    KEY_FN_F11           = (EV_KEY << 16) + _imp::_KEY_FN_F11,
    KEY_FN_F12           = (EV_KEY << 16) + _imp::_KEY_FN_F12,
    KEY_FN_1             = (EV_KEY << 16) + _imp::_KEY_FN_1,
    KEY_FN_2             = (EV_KEY << 16) + _imp::_KEY_FN_2,
    KEY_FN_D             = (EV_KEY << 16) + _imp::_KEY_FN_D,
    KEY_FN_E             = (EV_KEY << 16) + _imp::_KEY_FN_E,
    KEY_FN_F             = (EV_KEY << 16) + _imp::_KEY_FN_F,
    KEY_FN_S             = (EV_KEY << 16) + _imp::_KEY_FN_S,
    KEY_FN_B             = (EV_KEY << 16) + _imp::_KEY_FN_B,
    KEY_BRL_DOT1         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT1,
    KEY_BRL_DOT2         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT2,
    KEY_BRL_DOT3         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT3,
    KEY_BRL_DOT4         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT4,
    KEY_BRL_DOT5         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT5,
    KEY_BRL_DOT6         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT6,
    KEY_BRL_DOT7         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT7,
    KEY_BRL_DOT8         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT8,
    KEY_BRL_DOT9         = (EV_KEY << 16) + _imp::_KEY_BRL_DOT9,
    KEY_BRL_DOT10        = (EV_KEY << 16) + _imp::_KEY_BRL_DOT10,
    KEY_NUMERIC_0        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_0,
    KEY_NUMERIC_1        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_1,
    KEY_NUMERIC_2        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_2,
    KEY_NUMERIC_3        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_3,
    KEY_NUMERIC_4        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_4,
    KEY_NUMERIC_5        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_5,
    KEY_NUMERIC_6        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_6,
    KEY_NUMERIC_7        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_7,
    KEY_NUMERIC_8        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_8,
    KEY_NUMERIC_9        = (EV_KEY << 16) + _imp::_KEY_NUMERIC_9,
    KEY_NUMERIC_STAR     = (EV_KEY << 16) + _imp::_KEY_NUMERIC_STAR,
    KEY_NUMERIC_POUND    = (EV_KEY << 16) + _imp::_KEY_NUMERIC_POUND,
    KEY_CAMERA_FOCUS     = (EV_KEY << 16) + _imp::_KEY_CAMERA_FOCUS,
    KEY_WPS_BUTTON       = (EV_KEY << 16) + _imp::_KEY_WPS_BUTTON,
    KEY_TOUCHPAD_TOGGLE  = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_TOGGLE,
    KEY_TOUCHPAD_ON      = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_ON,
    KEY_TOUCHPAD_OFF     = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_OFF,
    KEY_CAMERA_ZOOMIN    = (EV_KEY << 16) + _imp::_KEY_CAMERA_ZOOMIN,
    KEY_CAMERA_ZOOMOUT   = (EV_KEY << 16) + _imp::_KEY_CAMERA_ZOOMOUT,
    KEY_CAMERA_UP        = (EV_KEY << 16) + _imp::_KEY_CAMERA_UP,
    KEY_CAMERA_DOWN      = (EV_KEY << 16) + _imp::_KEY_CAMERA_DOWN,
    KEY_CAMERA_LEFT      = (EV_KEY << 16) + _imp::_KEY_CAMERA_LEFT,
    KEY_CAMERA_RIGHT     = (EV_KEY << 16) + _imp::_KEY_CAMERA_RIGHT,
    KEY_ATTENDANT_ON     = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_ON,
    KEY_ATTENDANT_OFF    = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_OFF,
    KEY_ATTENDANT_TOGGLE = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_TOGGLE,
    KEY_LIGHTS_TOGGLE    = (EV_KEY << 16) + _imp::_KEY_LIGHTS_TOGGLE,
    BTN_DPAD_UP          = (EV_BTN << 16) + _imp::_BTN_DPAD_UP,
    BTN_DPAD_DOWN        = (EV_BTN << 16) + _imp::_BTN_DPAD_DOWN,
    BTN_DPAD_LEFT        = (EV_BTN << 16) + _imp::_BTN_DPAD_LEFT,
    BTN_DPAD_RIGHT       = (EV_BTN << 16) + _imp::_BTN_DPAD_RIGHT,
    KEY_ALS_TOGGLE       = (EV_KEY << 16) + _imp::_KEY_ALS_TOGGLE,
    KEY_BUTTONCONFIG     = (EV_KEY << 16) + _imp::_KEY_BUTTONCONFIG,
    KEY_TASKMANAGER      = (EV_KEY << 16) + _imp::_KEY_TASKMANAGER,
    KEY_JOURNAL          = (EV_KEY << 16) + _imp::_KEY_JOURNAL,
    KEY_CONTROLPANEL     = (EV_KEY << 16) + _imp::_KEY_CONTROLPANEL,
    KEY_APPSELECT        = (EV_KEY << 16) + _imp::_KEY_APPSELECT,
    KEY_SCREENSAVER      = (EV_KEY << 16) + _imp::_KEY_SCREENSAVER,
    KEY_VOICECOMMAND     = (EV_KEY << 16) + _imp::_KEY_VOICECOMMAND,
    KEY_BRIGHTNESS_MIN   = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_MIN,
    KEY_BRIGHTNESS_MAX   = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_MAX,
    BTN_TRIGGER_HAPPY    = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY,
    BTN_TRIGGER_HAPPY1   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY1,
    BTN_TRIGGER_HAPPY2   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY2,
    BTN_TRIGGER_HAPPY3   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY3,
    BTN_TRIGGER_HAPPY4   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY4,
    BTN_TRIGGER_HAPPY5   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY5,
    BTN_TRIGGER_HAPPY6   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY6,
    BTN_TRIGGER_HAPPY7   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY7,
    BTN_TRIGGER_HAPPY8   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY8,
    BTN_TRIGGER_HAPPY9   = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY9,
    BTN_TRIGGER_HAPPY10  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY10,
    BTN_TRIGGER_HAPPY11  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY11,
    BTN_TRIGGER_HAPPY12  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY12,
    BTN_TRIGGER_HAPPY13  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY13,
    BTN_TRIGGER_HAPPY14  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY14,
    BTN_TRIGGER_HAPPY15  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY15,
    BTN_TRIGGER_HAPPY16  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY16,
    BTN_TRIGGER_HAPPY17  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY17,
    BTN_TRIGGER_HAPPY18  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY18,
    BTN_TRIGGER_HAPPY19  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY19,
    BTN_TRIGGER_HAPPY20  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY20,
    BTN_TRIGGER_HAPPY21  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY21,
    BTN_TRIGGER_HAPPY22  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY22,
    BTN_TRIGGER_HAPPY23  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY23,
    BTN_TRIGGER_HAPPY24  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY24,
    BTN_TRIGGER_HAPPY25  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY25,
    BTN_TRIGGER_HAPPY26  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY26,
    BTN_TRIGGER_HAPPY27  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY27,
    BTN_TRIGGER_HAPPY28  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY28,
    BTN_TRIGGER_HAPPY29  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY29,
    BTN_TRIGGER_HAPPY30  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY30,
    BTN_TRIGGER_HAPPY31  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY31,
    BTN_TRIGGER_HAPPY32  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY32,
    BTN_TRIGGER_HAPPY33  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY33,
    BTN_TRIGGER_HAPPY34  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY34,
    BTN_TRIGGER_HAPPY35  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY35,
    BTN_TRIGGER_HAPPY36  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY36,
    BTN_TRIGGER_HAPPY37  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY37,
    BTN_TRIGGER_HAPPY38  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY38,
    BTN_TRIGGER_HAPPY39  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY39,
    BTN_TRIGGER_HAPPY40  = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY40,
    KEY_MIN_INTERESTING  = (EV_KEY << 16) + _imp::_KEY_MIN_INTERESTING,
    KEY_MAX              = (EV_KEY << 16) + _imp::_KEY_MAX,
    KEY_CNT              = (EV_KEY << 16) + _imp::_KEY_CNT,
    REL_X                = (EV_REL << 16) + _imp::_REL_X,
    REL_Y                = (EV_REL << 16) + _imp::_REL_Y,
    REL_Z                = (EV_REL << 16) + _imp::_REL_Z,
    REL_RX               = (EV_REL << 16) + _imp::_REL_RX,
    REL_RY               = (EV_REL << 16) + _imp::_REL_RY,
    REL_RZ               = (EV_REL << 16) + _imp::_REL_RZ,
    REL_HWHEEL           = (EV_REL << 16) + _imp::_REL_HWHEEL,
    REL_DIAL             = (EV_REL << 16) + _imp::_REL_DIAL,
    REL_WHEEL            = (EV_REL << 16) + _imp::_REL_WHEEL,
    REL_MISC             = (EV_REL << 16) + _imp::_REL_MISC,
    REL_MAX              = (EV_REL << 16) + _imp::_REL_MAX,
    REL_CNT              = (EV_REL << 16) + _imp::_REL_CNT,
    ABS_X                = (EV_ABS << 16) + _imp::_ABS_X,
    ABS_Y                = (EV_ABS << 16) + _imp::_ABS_Y,
    ABS_Z                = (EV_ABS << 16) + _imp::_ABS_Z,
    ABS_RX               = (EV_ABS << 16) + _imp::_ABS_RX,
    ABS_RY               = (EV_ABS << 16) + _imp::_ABS_RY,
    ABS_RZ               = (EV_ABS << 16) + _imp::_ABS_RZ,
    ABS_THROTTLE         = (EV_ABS << 16) + _imp::_ABS_THROTTLE,
    ABS_RUDDER           = (EV_ABS << 16) + _imp::_ABS_RUDDER,
    ABS_WHEEL            = (EV_ABS << 16) + _imp::_ABS_WHEEL,
    ABS_GAS              = (EV_ABS << 16) + _imp::_ABS_GAS,
    ABS_BRAKE            = (EV_ABS << 16) + _imp::_ABS_BRAKE,
    ABS_HAT0X            = (EV_ABS << 16) + _imp::_ABS_HAT0X,
    ABS_HAT0Y            = (EV_ABS << 16) + _imp::_ABS_HAT0Y,
    ABS_HAT1X            = (EV_ABS << 16) + _imp::_ABS_HAT1X,
    ABS_HAT1Y            = (EV_ABS << 16) + _imp::_ABS_HAT1Y,
    ABS_HAT2X            = (EV_ABS << 16) + _imp::_ABS_HAT2X,
    ABS_HAT2Y            = (EV_ABS << 16) + _imp::_ABS_HAT2Y,
    ABS_HAT3X            = (EV_ABS << 16) + _imp::_ABS_HAT3X,
    ABS_HAT3Y            = (EV_ABS << 16) + _imp::_ABS_HAT3Y,
    ABS_PRESSURE         = (EV_ABS << 16) + _imp::_ABS_PRESSURE,
    ABS_DISTANCE         = (EV_ABS << 16) + _imp::_ABS_DISTANCE,
    ABS_TILT_X           = (EV_ABS << 16) + _imp::_ABS_TILT_X,
    ABS_TILT_Y           = (EV_ABS << 16) + _imp::_ABS_TILT_Y,
    ABS_TOOL_WIDTH       = (EV_ABS << 16) + _imp::_ABS_TOOL_WIDTH,
    ABS_VOLUME           = (EV_ABS << 16) + _imp::_ABS_VOLUME,
    ABS_MISC             = (EV_ABS << 16) + _imp::_ABS_MISC,
    ABS_MT_SLOT          = (EV_ABS << 16) + _imp::_ABS_MT_SLOT,
    ABS_MT_TOUCH_MAJOR   = (EV_ABS << 16) + _imp::_ABS_MT_TOUCH_MAJOR,
    ABS_MT_TOUCH_MINOR   = (EV_ABS << 16) + _imp::_ABS_MT_TOUCH_MINOR,
    ABS_MT_WIDTH_MAJOR   = (EV_ABS << 16) + _imp::_ABS_MT_WIDTH_MAJOR,
    ABS_MT_WIDTH_MINOR   = (EV_ABS << 16) + _imp::_ABS_MT_WIDTH_MINOR,
    ABS_MT_ORIENTATION   = (EV_ABS << 16) + _imp::_ABS_MT_ORIENTATION,
    ABS_MT_POSITION_X    = (EV_ABS << 16) + _imp::_ABS_MT_POSITION_X,
    ABS_MT_POSITION_Y    = (EV_ABS << 16) + _imp::_ABS_MT_POSITION_Y,
    ABS_MT_TOOL_TYPE     = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_TYPE,
    ABS_MT_BLOB_ID       = (EV_ABS << 16) + _imp::_ABS_MT_BLOB_ID,
    ABS_MT_TRACKING_ID   = (EV_ABS << 16) + _imp::_ABS_MT_TRACKING_ID,
    ABS_MT_PRESSURE      = (EV_ABS << 16) + _imp::_ABS_MT_PRESSURE,
    ABS_MT_DISTANCE      = (EV_ABS << 16) + _imp::_ABS_MT_DISTANCE,
    ABS_MT_TOOL_X        = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_X,
    ABS_MT_TOOL_Y        = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_Y,
    ABS_MAX              = (EV_ABS << 16) + _imp::_ABS_MAX,
    ABS_CNT              = (EV_ABS << 16) + _imp::_ABS_CNT,
};

////////////////////////////////////////////////////////////////////////////////
const std::map<event, std::string> event_name =
{
    { KEY_RESERVED         , "KEY_RESERVED" },
    { KEY_ESC              , "KEY_ESC" },
    { KEY_1                , "KEY_1" },
    { KEY_2                , "KEY_2" },
    { KEY_3                , "KEY_3" },
    { KEY_4                , "KEY_4" },
    { KEY_5                , "KEY_5" },
    { KEY_6                , "KEY_6" },
    { KEY_7                , "KEY_7" },
    { KEY_8                , "KEY_8" },
    { KEY_9                , "KEY_9" },
    { KEY_0                , "KEY_0" },
    { KEY_MINUS            , "KEY_MINUS" },
    { KEY_EQUAL            , "KEY_EQUAL" },
    { KEY_BACKSPACE        , "KEY_BACKSPACE" },
    { KEY_TAB              , "KEY_TAB" },
    { KEY_Q                , "KEY_Q" },
    { KEY_W                , "KEY_W" },
    { KEY_E                , "KEY_E" },
    { KEY_R                , "KEY_R" },
    { KEY_T                , "KEY_T" },
    { KEY_Y                , "KEY_Y" },
    { KEY_U                , "KEY_U" },
    { KEY_I                , "KEY_I" },
    { KEY_O                , "KEY_O" },
    { KEY_P                , "KEY_P" },
    { KEY_LEFTBRACE        , "KEY_LEFTBRACE" },
    { KEY_RIGHTBRACE       , "KEY_RIGHTBRACE" },
    { KEY_ENTER            , "KEY_ENTER" },
    { KEY_LEFTCTRL         , "KEY_LEFTCTRL" },
    { KEY_A                , "KEY_A" },
    { KEY_S                , "KEY_S" },
    { KEY_D                , "KEY_D" },
    { KEY_F                , "KEY_F" },
    { KEY_G                , "KEY_G" },
    { KEY_H                , "KEY_H" },
    { KEY_J                , "KEY_J" },
    { KEY_K                , "KEY_K" },
    { KEY_L                , "KEY_L" },
    { KEY_SEMICOLON        , "KEY_SEMICOLON" },
    { KEY_APOSTROPHE       , "KEY_APOSTROPHE" },
    { KEY_GRAVE            , "KEY_GRAVE" },
    { KEY_LEFTSHIFT        , "KEY_LEFTSHIFT" },
    { KEY_BACKSLASH        , "KEY_BACKSLASH" },
    { KEY_Z                , "KEY_Z" },
    { KEY_X                , "KEY_X" },
    { KEY_C                , "KEY_C" },
    { KEY_V                , "KEY_V" },
    { KEY_B                , "KEY_B" },
    { KEY_N                , "KEY_N" },
    { KEY_M                , "KEY_M" },
    { KEY_COMMA            , "KEY_COMMA" },
    { KEY_DOT              , "KEY_DOT" },
    { KEY_SLASH            , "KEY_SLASH" },
    { KEY_RIGHTSHIFT       , "KEY_RIGHTSHIFT" },
    { KEY_KPASTERISK       , "KEY_KPASTERISK" },
    { KEY_LEFTALT          , "KEY_LEFTALT" },
    { KEY_SPACE            , "KEY_SPACE" },
    { KEY_CAPSLOCK         , "KEY_CAPSLOCK" },
    { KEY_F1               , "KEY_F1" },
    { KEY_F2               , "KEY_F2" },
    { KEY_F3               , "KEY_F3" },
    { KEY_F4               , "KEY_F4" },
    { KEY_F5               , "KEY_F5" },
    { KEY_F6               , "KEY_F6" },
    { KEY_F7               , "KEY_F7" },
    { KEY_F8               , "KEY_F8" },
    { KEY_F9               , "KEY_F9" },
    { KEY_F10              , "KEY_F10" },
    { KEY_NUMLOCK          , "KEY_NUMLOCK" },
    { KEY_SCROLLLOCK       , "KEY_SCROLLLOCK" },
    { KEY_KP7              , "KEY_KP7" },
    { KEY_KP8              , "KEY_KP8" },
    { KEY_KP9              , "KEY_KP9" },
    { KEY_KPMINUS          , "KEY_KPMINUS" },
    { KEY_KP4              , "KEY_KP4" },
    { KEY_KP5              , "KEY_KP5" },
    { KEY_KP6              , "KEY_KP6" },
    { KEY_KPPLUS           , "KEY_KPPLUS" },
    { KEY_KP1              , "KEY_KP1" },
    { KEY_KP2              , "KEY_KP2" },
    { KEY_KP3              , "KEY_KP3" },
    { KEY_KP0              , "KEY_KP0" },
    { KEY_KPDOT            , "KEY_KPDOT" },
    { KEY_ZENKAKUHANKAKU   , "KEY_ZENKAKUHANKAKU" },
    { KEY_102ND            , "KEY_102ND" },
    { KEY_F11              , "KEY_F11" },
    { KEY_F12              , "KEY_F12" },
    { KEY_RO               , "KEY_RO" },
    { KEY_KATAKANA         , "KEY_KATAKANA" },
    { KEY_HIRAGANA         , "KEY_HIRAGANA" },
    { KEY_HENKAN           , "KEY_HENKAN" },
    { KEY_KATAKANAHIRAGANA , "KEY_KATAKANAHIRAGANA" },
    { KEY_MUHENKAN         , "KEY_MUHENKAN" },
    { KEY_KPJPCOMMA        , "KEY_KPJPCOMMA" },
    { KEY_KPENTER          , "KEY_KPENTER" },
    { KEY_RIGHTCTRL        , "KEY_RIGHTCTRL" },
    { KEY_KPSLASH          , "KEY_KPSLASH" },
    { KEY_SYSRQ            , "KEY_SYSRQ" },
    { KEY_RIGHTALT         , "KEY_RIGHTALT" },
    { KEY_LINEFEED         , "KEY_LINEFEED" },
    { KEY_HOME             , "KEY_HOME" },
    { KEY_UP               , "KEY_UP" },
    { KEY_PAGEUP           , "KEY_PAGEUP" },
    { KEY_LEFT             , "KEY_LEFT" },
    { KEY_RIGHT            , "KEY_RIGHT" },
    { KEY_END              , "KEY_END" },
    { KEY_DOWN             , "KEY_DOWN" },
    { KEY_PAGEDOWN         , "KEY_PAGEDOWN" },
    { KEY_INSERT           , "KEY_INSERT" },
    { KEY_DELETE           , "KEY_DELETE" },
    { KEY_MACRO            , "KEY_MACRO" },
    { KEY_MUTE             , "KEY_MUTE" },
    { KEY_VOLUMEDOWN       , "KEY_VOLUMEDOWN" },
    { KEY_VOLUMEUP         , "KEY_VOLUMEUP" },
    { KEY_POWER            , "KEY_POWER" },
    { KEY_KPEQUAL          , "KEY_KPEQUAL" },
    { KEY_KPPLUSMINUS      , "KEY_KPPLUSMINUS" },
    { KEY_PAUSE            , "KEY_PAUSE" },
    { KEY_SCALE            , "KEY_SCALE" },
    { KEY_KPCOMMA          , "KEY_KPCOMMA" },
    { KEY_HANGEUL          , "KEY_HANGEUL" },
    { KEY_HANGUEL          , "KEY_HANGUEL" },
    { KEY_HANJA            , "KEY_HANJA" },
    { KEY_YEN              , "KEY_YEN" },
    { KEY_LEFTMETA         , "KEY_LEFTMETA" },
    { KEY_RIGHTMETA        , "KEY_RIGHTMETA" },
    { KEY_COMPOSE          , "KEY_COMPOSE" },
    { KEY_STOP             , "KEY_STOP" },
    { KEY_AGAIN            , "KEY_AGAIN" },
    { KEY_PROPS            , "KEY_PROPS" },
    { KEY_UNDO             , "KEY_UNDO" },
    { KEY_FRONT            , "KEY_FRONT" },
    { KEY_COPY             , "KEY_COPY" },
    { KEY_OPEN             , "KEY_OPEN" },
    { KEY_PASTE            , "KEY_PASTE" },
    { KEY_FIND             , "KEY_FIND" },
    { KEY_CUT              , "KEY_CUT" },
    { KEY_HELP             , "KEY_HELP" },
    { KEY_MENU             , "KEY_MENU" },
    { KEY_CALC             , "KEY_CALC" },
    { KEY_SETUP            , "KEY_SETUP" },
    { KEY_SLEEP            , "KEY_SLEEP" },
    { KEY_WAKEUP           , "KEY_WAKEUP" },
    { KEY_FILE             , "KEY_FILE" },
    { KEY_SENDFILE         , "KEY_SENDFILE" },
    { KEY_DELETEFILE       , "KEY_DELETEFILE" },
    { KEY_XFER             , "KEY_XFER" },
    { KEY_PROG1            , "KEY_PROG1" },
    { KEY_PROG2            , "KEY_PROG2" },
    { KEY_WWW              , "KEY_WWW" },
    { KEY_MSDOS            , "KEY_MSDOS" },
    { KEY_COFFEE           , "KEY_COFFEE" },
    { KEY_SCREENLOCK       , "KEY_SCREENLOCK" },
    { KEY_DIRECTION        , "KEY_DIRECTION" },
    { KEY_CYCLEWINDOWS     , "KEY_CYCLEWINDOWS" },
    { KEY_MAIL             , "KEY_MAIL" },
    { KEY_BOOKMARKS        , "KEY_BOOKMARKS" },
    { KEY_COMPUTER         , "KEY_COMPUTER" },
    { KEY_BACK             , "KEY_BACK" },
    { KEY_FORWARD          , "KEY_FORWARD" },
    { KEY_CLOSECD          , "KEY_CLOSECD" },
    { KEY_EJECTCD          , "KEY_EJECTCD" },
    { KEY_EJECTCLOSECD     , "KEY_EJECTCLOSECD" },
    { KEY_NEXTSONG         , "KEY_NEXTSONG" },
    { KEY_PLAYPAUSE        , "KEY_PLAYPAUSE" },
    { KEY_PREVIOUSSONG     , "KEY_PREVIOUSSONG" },
    { KEY_STOPCD           , "KEY_STOPCD" },
    { KEY_RECORD           , "KEY_RECORD" },
    { KEY_REWIND           , "KEY_REWIND" },
    { KEY_PHONE            , "KEY_PHONE" },
    { KEY_ISO              , "KEY_ISO" },
    { KEY_CONFIG           , "KEY_CONFIG" },
    { KEY_HOMEPAGE         , "KEY_HOMEPAGE" },
    { KEY_REFRESH          , "KEY_REFRESH" },
    { KEY_EXIT             , "KEY_EXIT" },
    { KEY_MOVE             , "KEY_MOVE" },
    { KEY_EDIT             , "KEY_EDIT" },
    { KEY_SCROLLUP         , "KEY_SCROLLUP" },
    { KEY_SCROLLDOWN       , "KEY_SCROLLDOWN" },
    { KEY_KPLEFTPAREN      , "KEY_KPLEFTPAREN" },
    { KEY_KPRIGHTPAREN     , "KEY_KPRIGHTPAREN" },
    { KEY_NEW              , "KEY_NEW" },
    { KEY_REDO             , "KEY_REDO" },
    { KEY_F13              , "KEY_F13" },
    { KEY_F14              , "KEY_F14" },
    { KEY_F15              , "KEY_F15" },
    { KEY_F16              , "KEY_F16" },
    { KEY_F17              , "KEY_F17" },
    { KEY_F18              , "KEY_F18" },
    { KEY_F19              , "KEY_F19" },
    { KEY_F20              , "KEY_F20" },
    { KEY_F21              , "KEY_F21" },
    { KEY_F22              , "KEY_F22" },
    { KEY_F23              , "KEY_F23" },
    { KEY_F24              , "KEY_F24" },
    { KEY_PLAYCD           , "KEY_PLAYCD" },
    { KEY_PAUSECD          , "KEY_PAUSECD" },
    { KEY_PROG3            , "KEY_PROG3" },
    { KEY_PROG4            , "KEY_PROG4" },
    { KEY_DASHBOARD        , "KEY_DASHBOARD" },
    { KEY_SUSPEND          , "KEY_SUSPEND" },
    { KEY_CLOSE            , "KEY_CLOSE" },
    { KEY_PLAY             , "KEY_PLAY" },
    { KEY_FASTFORWARD      , "KEY_FASTFORWARD" },
    { KEY_BASSBOOST        , "KEY_BASSBOOST" },
    { KEY_PRINT            , "KEY_PRINT" },
    { KEY_HP               , "KEY_HP" },
    { KEY_CAMERA           , "KEY_CAMERA" },
    { KEY_SOUND            , "KEY_SOUND" },
    { KEY_QUESTION         , "KEY_QUESTION" },
    { KEY_EMAIL            , "KEY_EMAIL" },
    { KEY_CHAT             , "KEY_CHAT" },
    { KEY_SEARCH           , "KEY_SEARCH" },
    { KEY_CONNECT          , "KEY_CONNECT" },
    { KEY_FINANCE          , "KEY_FINANCE" },
    { KEY_SPORT            , "KEY_SPORT" },
    { KEY_SHOP             , "KEY_SHOP" },
    { KEY_ALTERASE         , "KEY_ALTERASE" },
    { KEY_CANCEL           , "KEY_CANCEL" },
    { KEY_BRIGHTNESSDOWN   , "KEY_BRIGHTNESSDOWN" },
    { KEY_BRIGHTNESSUP     , "KEY_BRIGHTNESSUP" },
    { KEY_MEDIA            , "KEY_MEDIA" },
    { KEY_SWITCHVIDEOMODE  , "KEY_SWITCHVIDEOMODE" },
    { KEY_KBDILLUMTOGGLE   , "KEY_KBDILLUMTOGGLE" },
    { KEY_KBDILLUMDOWN     , "KEY_KBDILLUMDOWN" },
    { KEY_KBDILLUMUP       , "KEY_KBDILLUMUP" },
    { KEY_SEND             , "KEY_SEND" },
    { KEY_REPLY            , "KEY_REPLY" },
    { KEY_FORWARDMAIL      , "KEY_FORWARDMAIL" },
    { KEY_SAVE             , "KEY_SAVE" },
    { KEY_DOCUMENTS        , "KEY_DOCUMENTS" },
    { KEY_BATTERY          , "KEY_BATTERY" },
    { KEY_BLUETOOTH        , "KEY_BLUETOOTH" },
    { KEY_WLAN             , "KEY_WLAN" },
    { KEY_UWB              , "KEY_UWB" },
    { KEY_UNKNOWN          , "KEY_UNKNOWN" },
    { KEY_VIDEO_NEXT       , "KEY_VIDEO_NEXT" },
    { KEY_VIDEO_PREV       , "KEY_VIDEO_PREV" },
    { KEY_BRIGHTNESS_CYCLE , "KEY_BRIGHTNESS_CYCLE" },
    { KEY_BRIGHTNESS_AUTO  , "KEY_BRIGHTNESS_AUTO" },
    { KEY_BRIGHTNESS_ZERO  , "KEY_BRIGHTNESS_ZERO" },
    { KEY_DISPLAY_OFF      , "KEY_DISPLAY_OFF" },
    { KEY_WWAN             , "KEY_WWAN" },
    { KEY_WIMAX            , "KEY_WIMAX" },
    { KEY_RFKILL           , "KEY_RFKILL" },
    { KEY_MICMUTE          , "KEY_MICMUTE" },
    { BTN_MISC             , "BTN_MISC" },
    { BTN_0                , "BTN_0" },
    { BTN_1                , "BTN_1" },
    { BTN_2                , "BTN_2" },
    { BTN_3                , "BTN_3" },
    { BTN_4                , "BTN_4" },
    { BTN_5                , "BTN_5" },
    { BTN_6                , "BTN_6" },
    { BTN_7                , "BTN_7" },
    { BTN_8                , "BTN_8" },
    { BTN_9                , "BTN_9" },
    { BTN_MOUSE            , "BTN_MOUSE" },
    { BTN_LEFT             , "BTN_LEFT" },
    { BTN_RIGHT            , "BTN_RIGHT" },
    { BTN_MIDDLE           , "BTN_MIDDLE" },
    { BTN_SIDE             , "BTN_SIDE" },
    { BTN_EXTRA            , "BTN_EXTRA" },
    { BTN_FORWARD          , "BTN_FORWARD" },
    { BTN_BACK             , "BTN_BACK" },
    { BTN_TASK             , "BTN_TASK" },
    { BTN_JOYSTICK         , "BTN_JOYSTICK" },
    { BTN_TRIGGER          , "BTN_TRIGGER" },
    { BTN_THUMB            , "BTN_THUMB" },
    { BTN_THUMB2           , "BTN_THUMB2" },
    { BTN_TOP              , "BTN_TOP" },
    { BTN_TOP2             , "BTN_TOP2" },
    { BTN_PINKIE           , "BTN_PINKIE" },
    { BTN_BASE             , "BTN_BASE" },
    { BTN_BASE2            , "BTN_BASE2" },
    { BTN_BASE3            , "BTN_BASE3" },
    { BTN_BASE4            , "BTN_BASE4" },
    { BTN_BASE5            , "BTN_BASE5" },
    { BTN_BASE6            , "BTN_BASE6" },
    { BTN_DEAD             , "BTN_DEAD" },
    { BTN_GAMEPAD          , "BTN_GAMEPAD" },
    { BTN_SOUTH            , "BTN_SOUTH" },
    { BTN_A                , "BTN_A" },
    { BTN_EAST             , "BTN_EAST" },
    { BTN_B                , "BTN_B" },
    { BTN_C                , "BTN_C" },
    { BTN_NORTH            , "BTN_NORTH" },
    { BTN_X                , "BTN_X" },
    { BTN_WEST             , "BTN_WEST" },
    { BTN_Y                , "BTN_Y" },
    { BTN_Z                , "BTN_Z" },
    { BTN_TL               , "BTN_TL" },
    { BTN_TR               , "BTN_TR" },
    { BTN_TL2              , "BTN_TL2" },
    { BTN_TR2              , "BTN_TR2" },
    { BTN_SELECT           , "BTN_SELECT" },
    { BTN_START            , "BTN_START" },
    { BTN_MODE             , "BTN_MODE" },
    { BTN_THUMBL           , "BTN_THUMBL" },
    { BTN_THUMBR           , "BTN_THUMBR" },
    { BTN_DIGI             , "BTN_DIGI" },
    { BTN_TOOL_PEN         , "BTN_TOOL_PEN" },
    { BTN_TOOL_RUBBER      , "BTN_TOOL_RUBBER" },
    { BTN_TOOL_BRUSH       , "BTN_TOOL_BRUSH" },
    { BTN_TOOL_PENCIL      , "BTN_TOOL_PENCIL" },
    { BTN_TOOL_AIRBRUSH    , "BTN_TOOL_AIRBRUSH" },
    { BTN_TOOL_FINGER      , "BTN_TOOL_FINGER" },
    { BTN_TOOL_MOUSE       , "BTN_TOOL_MOUSE" },
    { BTN_TOOL_LENS        , "BTN_TOOL_LENS" },
    { BTN_TOOL_QUINTTAP    , "BTN_TOOL_QUINTTAP" },
    { BTN_TOUCH            , "BTN_TOUCH" },
    { BTN_STYLUS           , "BTN_STYLUS" },
    { BTN_STYLUS2          , "BTN_STYLUS2" },
    { BTN_TOOL_DOUBLETAP   , "BTN_TOOL_DOUBLETAP" },
    { BTN_TOOL_TRIPLETAP   , "BTN_TOOL_TRIPLETAP" },
    { BTN_TOOL_QUADTAP     , "BTN_TOOL_QUADTAP" },
    { BTN_WHEEL            , "BTN_WHEEL" },
    { BTN_GEAR_DOWN        , "BTN_GEAR_DOWN" },
    { BTN_GEAR_UP          , "BTN_GEAR_UP" },
    { KEY_OK               , "KEY_OK" },
    { KEY_SELECT           , "KEY_SELECT" },
    { KEY_GOTO             , "KEY_GOTO" },
    { KEY_CLEAR            , "KEY_CLEAR" },
    { KEY_POWER2           , "KEY_POWER2" },
    { KEY_OPTION           , "KEY_OPTION" },
    { KEY_INFO             , "KEY_INFO" },
    { KEY_TIME             , "KEY_TIME" },
    { KEY_VENDOR           , "KEY_VENDOR" },
    { KEY_ARCHIVE          , "KEY_ARCHIVE" },
    { KEY_PROGRAM          , "KEY_PROGRAM" },
    { KEY_CHANNEL          , "KEY_CHANNEL" },
    { KEY_FAVORITES        , "KEY_FAVORITES" },
    { KEY_EPG              , "KEY_EPG" },
    { KEY_PVR              , "KEY_PVR" },
    { KEY_MHP              , "KEY_MHP" },
    { KEY_LANGUAGE         , "KEY_LANGUAGE" },
    { KEY_TITLE            , "KEY_TITLE" },
    { KEY_SUBTITLE         , "KEY_SUBTITLE" },
    { KEY_ANGLE            , "KEY_ANGLE" },
    { KEY_ZOOM             , "KEY_ZOOM" },
    { KEY_MODE             , "KEY_MODE" },
    { KEY_KEYBOARD         , "KEY_KEYBOARD" },
    { KEY_SCREEN           , "KEY_SCREEN" },
    { KEY_PC               , "KEY_PC" },
    { KEY_TV               , "KEY_TV" },
    { KEY_TV2              , "KEY_TV2" },
    { KEY_VCR              , "KEY_VCR" },
    { KEY_VCR2             , "KEY_VCR2" },
    { KEY_SAT              , "KEY_SAT" },
    { KEY_SAT2             , "KEY_SAT2" },
    { KEY_CD               , "KEY_CD" },
    { KEY_TAPE             , "KEY_TAPE" },
    { KEY_RADIO            , "KEY_RADIO" },
    { KEY_TUNER            , "KEY_TUNER" },
    { KEY_PLAYER           , "KEY_PLAYER" },
    { KEY_TEXT             , "KEY_TEXT" },
    { KEY_DVD              , "KEY_DVD" },
    { KEY_AUX              , "KEY_AUX" },
    { KEY_MP3              , "KEY_MP3" },
    { KEY_AUDIO            , "KEY_AUDIO" },
    { KEY_VIDEO            , "KEY_VIDEO" },
    { KEY_DIRECTORY        , "KEY_DIRECTORY" },
    { KEY_LIST             , "KEY_LIST" },
    { KEY_MEMO             , "KEY_MEMO" },
    { KEY_CALENDAR         , "KEY_CALENDAR" },
    { KEY_RED              , "KEY_RED" },
    { KEY_GREEN            , "KEY_GREEN" },
    { KEY_YELLOW           , "KEY_YELLOW" },
    { KEY_BLUE             , "KEY_BLUE" },
    { KEY_CHANNELUP        , "KEY_CHANNELUP" },
    { KEY_CHANNELDOWN      , "KEY_CHANNELDOWN" },
    { KEY_FIRST            , "KEY_FIRST" },
    { KEY_LAST             , "KEY_LAST" },
    { KEY_AB               , "KEY_AB" },
    { KEY_NEXT             , "KEY_NEXT" },
    { KEY_RESTART          , "KEY_RESTART" },
    { KEY_SLOW             , "KEY_SLOW" },
    { KEY_SHUFFLE          , "KEY_SHUFFLE" },
    { KEY_BREAK            , "KEY_BREAK" },
    { KEY_PREVIOUS         , "KEY_PREVIOUS" },
    { KEY_DIGITS           , "KEY_DIGITS" },
    { KEY_TEEN             , "KEY_TEEN" },
    { KEY_TWEN             , "KEY_TWEN" },
    { KEY_VIDEOPHONE       , "KEY_VIDEOPHONE" },
    { KEY_GAMES            , "KEY_GAMES" },
    { KEY_ZOOMIN           , "KEY_ZOOMIN" },
    { KEY_ZOOMOUT          , "KEY_ZOOMOUT" },
    { KEY_ZOOMRESET        , "KEY_ZOOMRESET" },
    { KEY_WORDPROCESSOR    , "KEY_WORDPROCESSOR" },
    { KEY_EDITOR           , "KEY_EDITOR" },
    { KEY_SPREADSHEET      , "KEY_SPREADSHEET" },
    { KEY_GRAPHICSEDITOR   , "KEY_GRAPHICSEDITOR" },
    { KEY_PRESENTATION     , "KEY_PRESENTATION" },
    { KEY_DATABASE         , "KEY_DATABASE" },
    { KEY_NEWS             , "KEY_NEWS" },
    { KEY_VOICEMAIL        , "KEY_VOICEMAIL" },
    { KEY_ADDRESSBOOK      , "KEY_ADDRESSBOOK" },
    { KEY_MESSENGER        , "KEY_MESSENGER" },
    { KEY_DISPLAYTOGGLE    , "KEY_DISPLAYTOGGLE" },
    { KEY_BRIGHTNESS_TOGGLE , "KEY_BRIGHTNESS_TOGGLE" },
    { KEY_SPELLCHECK       , "KEY_SPELLCHECK" },
    { KEY_LOGOFF           , "KEY_LOGOFF" },
    { KEY_DOLLAR           , "KEY_DOLLAR" },
    { KEY_EURO             , "KEY_EURO" },
    { KEY_FRAMEBACK        , "KEY_FRAMEBACK" },
    { KEY_FRAMEFORWARD     , "KEY_FRAMEFORWARD" },
    { KEY_CONTEXT_MENU     , "KEY_CONTEXT_MENU" },
    { KEY_MEDIA_REPEAT     , "KEY_MEDIA_REPEAT" },
    { KEY_10CHANNELSUP     , "KEY_10CHANNELSUP" },
    { KEY_10CHANNELSDOWN   , "KEY_10CHANNELSDOWN" },
    { KEY_IMAGES           , "KEY_IMAGES" },
    { KEY_DEL_EOL          , "KEY_DEL_EOL" },
    { KEY_DEL_EOS          , "KEY_DEL_EOS" },
    { KEY_INS_LINE         , "KEY_INS_LINE" },
    { KEY_DEL_LINE         , "KEY_DEL_LINE" },
    { KEY_FN               , "KEY_FN" },
    { KEY_FN_ESC           , "KEY_FN_ESC" },
    { KEY_FN_F1            , "KEY_FN_F1" },
    { KEY_FN_F2            , "KEY_FN_F2" },
    { KEY_FN_F3            , "KEY_FN_F3" },
    { KEY_FN_F4            , "KEY_FN_F4" },
    { KEY_FN_F5            , "KEY_FN_F5" },
    { KEY_FN_F6            , "KEY_FN_F6" },
    { KEY_FN_F7            , "KEY_FN_F7" },
    { KEY_FN_F8            , "KEY_FN_F8" },
    { KEY_FN_F9            , "KEY_FN_F9" },
    { KEY_FN_F10           , "KEY_FN_F10" },
    { KEY_FN_F11           , "KEY_FN_F11" },
    { KEY_FN_F12           , "KEY_FN_F12" },
    { KEY_FN_1             , "KEY_FN_1" },
    { KEY_FN_2             , "KEY_FN_2" },
    { KEY_FN_D             , "KEY_FN_D" },
    { KEY_FN_E             , "KEY_FN_E" },
    { KEY_FN_F             , "KEY_FN_F" },
    { KEY_FN_S             , "KEY_FN_S" },
    { KEY_FN_B             , "KEY_FN_B" },
    { KEY_BRL_DOT1         , "KEY_BRL_DOT1" },
    { KEY_BRL_DOT2         , "KEY_BRL_DOT2" },
    { KEY_BRL_DOT3         , "KEY_BRL_DOT3" },
    { KEY_BRL_DOT4         , "KEY_BRL_DOT4" },
    { KEY_BRL_DOT5         , "KEY_BRL_DOT5" },
    { KEY_BRL_DOT6         , "KEY_BRL_DOT6" },
    { KEY_BRL_DOT7         , "KEY_BRL_DOT7" },
    { KEY_BRL_DOT8         , "KEY_BRL_DOT8" },
    { KEY_BRL_DOT9         , "KEY_BRL_DOT9" },
    { KEY_BRL_DOT10        , "KEY_BRL_DOT10" },
    { KEY_NUMERIC_0        , "KEY_NUMERIC_0" },
    { KEY_NUMERIC_1        , "KEY_NUMERIC_1" },
    { KEY_NUMERIC_2        , "KEY_NUMERIC_2" },
    { KEY_NUMERIC_3        , "KEY_NUMERIC_3" },
    { KEY_NUMERIC_4        , "KEY_NUMERIC_4" },
    { KEY_NUMERIC_5        , "KEY_NUMERIC_5" },
    { KEY_NUMERIC_6        , "KEY_NUMERIC_6" },
    { KEY_NUMERIC_7        , "KEY_NUMERIC_7" },
    { KEY_NUMERIC_8        , "KEY_NUMERIC_8" },
    { KEY_NUMERIC_9        , "KEY_NUMERIC_9" },
    { KEY_NUMERIC_STAR     , "KEY_NUMERIC_STAR" },
    { KEY_NUMERIC_POUND    , "KEY_NUMERIC_POUND" },
    { KEY_CAMERA_FOCUS     , "KEY_CAMERA_FOCUS" },
    { KEY_WPS_BUTTON       , "KEY_WPS_BUTTON" },
    { KEY_TOUCHPAD_TOGGLE  , "KEY_TOUCHPAD_TOGGLE" },
    { KEY_TOUCHPAD_ON      , "KEY_TOUCHPAD_ON" },
    { KEY_TOUCHPAD_OFF     , "KEY_TOUCHPAD_OFF" },
    { KEY_CAMERA_ZOOMIN    , "KEY_CAMERA_ZOOMIN" },
    { KEY_CAMERA_ZOOMOUT   , "KEY_CAMERA_ZOOMOUT" },
    { KEY_CAMERA_UP        , "KEY_CAMERA_UP" },
    { KEY_CAMERA_DOWN      , "KEY_CAMERA_DOWN" },
    { KEY_CAMERA_LEFT      , "KEY_CAMERA_LEFT" },
    { KEY_CAMERA_RIGHT     , "KEY_CAMERA_RIGHT" },
    { KEY_ATTENDANT_ON     , "KEY_ATTENDANT_ON" },
    { KEY_ATTENDANT_OFF    , "KEY_ATTENDANT_OFF" },
    { KEY_ATTENDANT_TOGGLE , "KEY_ATTENDANT_TOGGLE" },
    { KEY_LIGHTS_TOGGLE    , "KEY_LIGHTS_TOGGLE" },
    { BTN_DPAD_UP          , "BTN_DPAD_UP" },
    { BTN_DPAD_DOWN        , "BTN_DPAD_DOWN" },
    { BTN_DPAD_LEFT        , "BTN_DPAD_LEFT" },
    { BTN_DPAD_RIGHT       , "BTN_DPAD_RIGHT" },
    { KEY_ALS_TOGGLE       , "KEY_ALS_TOGGLE" },
    { KEY_BUTTONCONFIG     , "KEY_BUTTONCONFIG" },
    { KEY_TASKMANAGER      , "KEY_TASKMANAGER" },
    { KEY_JOURNAL          , "KEY_JOURNAL" },
    { KEY_CONTROLPANEL     , "KEY_CONTROLPANEL" },
    { KEY_APPSELECT        , "KEY_APPSELECT" },
    { KEY_SCREENSAVER      , "KEY_SCREENSAVER" },
    { KEY_VOICECOMMAND     , "KEY_VOICECOMMAND" },
    { KEY_BRIGHTNESS_MIN   , "KEY_BRIGHTNESS_MIN" },
    { KEY_BRIGHTNESS_MAX   , "KEY_BRIGHTNESS_MAX" },
    { BTN_TRIGGER_HAPPY    , "BTN_TRIGGER_HAPPY" },
    { BTN_TRIGGER_HAPPY1   , "BTN_TRIGGER_HAPPY1" },
    { BTN_TRIGGER_HAPPY2   , "BTN_TRIGGER_HAPPY2" },
    { BTN_TRIGGER_HAPPY3   , "BTN_TRIGGER_HAPPY3" },
    { BTN_TRIGGER_HAPPY4   , "BTN_TRIGGER_HAPPY4" },
    { BTN_TRIGGER_HAPPY5   , "BTN_TRIGGER_HAPPY5" },
    { BTN_TRIGGER_HAPPY6   , "BTN_TRIGGER_HAPPY6" },
    { BTN_TRIGGER_HAPPY7   , "BTN_TRIGGER_HAPPY7" },
    { BTN_TRIGGER_HAPPY8   , "BTN_TRIGGER_HAPPY8" },
    { BTN_TRIGGER_HAPPY9   , "BTN_TRIGGER_HAPPY9" },
    { BTN_TRIGGER_HAPPY10  , "BTN_TRIGGER_HAPPY10" },
    { BTN_TRIGGER_HAPPY11  , "BTN_TRIGGER_HAPPY11" },
    { BTN_TRIGGER_HAPPY12  , "BTN_TRIGGER_HAPPY12" },
    { BTN_TRIGGER_HAPPY13  , "BTN_TRIGGER_HAPPY13" },
    { BTN_TRIGGER_HAPPY14  , "BTN_TRIGGER_HAPPY14" },
    { BTN_TRIGGER_HAPPY15  , "BTN_TRIGGER_HAPPY15" },
    { BTN_TRIGGER_HAPPY16  , "BTN_TRIGGER_HAPPY16" },
    { BTN_TRIGGER_HAPPY17  , "BTN_TRIGGER_HAPPY17" },
    { BTN_TRIGGER_HAPPY18  , "BTN_TRIGGER_HAPPY18" },
    { BTN_TRIGGER_HAPPY19  , "BTN_TRIGGER_HAPPY19" },
    { BTN_TRIGGER_HAPPY20  , "BTN_TRIGGER_HAPPY20" },
    { BTN_TRIGGER_HAPPY21  , "BTN_TRIGGER_HAPPY21" },
    { BTN_TRIGGER_HAPPY22  , "BTN_TRIGGER_HAPPY22" },
    { BTN_TRIGGER_HAPPY23  , "BTN_TRIGGER_HAPPY23" },
    { BTN_TRIGGER_HAPPY24  , "BTN_TRIGGER_HAPPY24" },
    { BTN_TRIGGER_HAPPY25  , "BTN_TRIGGER_HAPPY25" },
    { BTN_TRIGGER_HAPPY26  , "BTN_TRIGGER_HAPPY26" },
    { BTN_TRIGGER_HAPPY27  , "BTN_TRIGGER_HAPPY27" },
    { BTN_TRIGGER_HAPPY28  , "BTN_TRIGGER_HAPPY28" },
    { BTN_TRIGGER_HAPPY29  , "BTN_TRIGGER_HAPPY29" },
    { BTN_TRIGGER_HAPPY30  , "BTN_TRIGGER_HAPPY30" },
    { BTN_TRIGGER_HAPPY31  , "BTN_TRIGGER_HAPPY31" },
    { BTN_TRIGGER_HAPPY32  , "BTN_TRIGGER_HAPPY32" },
    { BTN_TRIGGER_HAPPY33  , "BTN_TRIGGER_HAPPY33" },
    { BTN_TRIGGER_HAPPY34  , "BTN_TRIGGER_HAPPY34" },
    { BTN_TRIGGER_HAPPY35  , "BTN_TRIGGER_HAPPY35" },
    { BTN_TRIGGER_HAPPY36  , "BTN_TRIGGER_HAPPY36" },
    { BTN_TRIGGER_HAPPY37  , "BTN_TRIGGER_HAPPY37" },
    { BTN_TRIGGER_HAPPY38  , "BTN_TRIGGER_HAPPY38" },
    { BTN_TRIGGER_HAPPY39  , "BTN_TRIGGER_HAPPY39" },
    { BTN_TRIGGER_HAPPY40  , "BTN_TRIGGER_HAPPY40" },
    { KEY_MIN_INTERESTING  , "KEY_MIN_INTERESTING" },
    { KEY_MAX              , "KEY_MAX" },
    { KEY_CNT              , "KEY_CNT" },
    { REL_X                , "REL_X" },
    { REL_Y                , "REL_Y" },
    { REL_Z                , "REL_Z" },
    { REL_RX               , "REL_RX" },
    { REL_RY               , "REL_RY" },
    { REL_RZ               , "REL_RZ" },
    { REL_HWHEEL           , "REL_HWHEEL" },
    { REL_DIAL             , "REL_DIAL" },
    { REL_WHEEL            , "REL_WHEEL" },
    { REL_MISC             , "REL_MISC" },
    { REL_MAX              , "REL_MAX" },
    { REL_CNT              , "REL_CNT" },
    { ABS_X                , "ABS_X" },
    { ABS_Y                , "ABS_Y" },
    { ABS_Z                , "ABS_Z" },
    { ABS_RX               , "ABS_RX" },
    { ABS_RY               , "ABS_RY" },
    { ABS_RZ               , "ABS_RZ" },
    { ABS_THROTTLE         , "ABS_THROTTLE" },
    { ABS_RUDDER           , "ABS_RUDDER" },
    { ABS_WHEEL            , "ABS_WHEEL" },
    { ABS_GAS              , "ABS_GAS" },
    { ABS_BRAKE            , "ABS_BRAKE" },
    { ABS_HAT0X            , "ABS_HAT0X" },
    { ABS_HAT0Y            , "ABS_HAT0Y" },
    { ABS_HAT1X            , "ABS_HAT1X" },
    { ABS_HAT1Y            , "ABS_HAT1Y" },
    { ABS_HAT2X            , "ABS_HAT2X" },
    { ABS_HAT2Y            , "ABS_HAT2Y" },
    { ABS_HAT3X            , "ABS_HAT3X" },
    { ABS_HAT3Y            , "ABS_HAT3Y" },
    { ABS_PRESSURE         , "ABS_PRESSURE" },
    { ABS_DISTANCE         , "ABS_DISTANCE" },
    { ABS_TILT_X           , "ABS_TILT_X" },
    { ABS_TILT_Y           , "ABS_TILT_Y" },
    { ABS_TOOL_WIDTH       , "ABS_TOOL_WIDTH" },
    { ABS_VOLUME           , "ABS_VOLUME" },
    { ABS_MISC             , "ABS_MISC" },
    { ABS_MT_SLOT          , "ABS_MT_SLOT" },
    { ABS_MT_TOUCH_MAJOR   , "ABS_MT_TOUCH_MAJOR" },
    { ABS_MT_TOUCH_MINOR   , "ABS_MT_TOUCH_MINOR" },
    { ABS_MT_WIDTH_MAJOR   , "ABS_MT_WIDTH_MAJOR" },
    { ABS_MT_WIDTH_MINOR   , "ABS_MT_WIDTH_MINOR" },
    { ABS_MT_ORIENTATION   , "ABS_MT_ORIENTATION" },
    { ABS_MT_POSITION_X    , "ABS_MT_POSITION_X" },
    { ABS_MT_POSITION_Y    , "ABS_MT_POSITION_Y" },
    { ABS_MT_TOOL_TYPE     , "ABS_MT_TOOL_TYPE" },
    { ABS_MT_BLOB_ID       , "ABS_MT_BLOB_ID" },
    { ABS_MT_TRACKING_ID   , "ABS_MT_TRACKING_ID" },
    { ABS_MT_PRESSURE      , "ABS_MT_PRESSURE" },
    { ABS_MT_DISTANCE      , "ABS_MT_DISTANCE" },
    { ABS_MT_TOOL_X        , "ABS_MT_TOOL_X" },
    { ABS_MT_TOOL_Y        , "ABS_MT_TOOL_Y" },
    { ABS_MAX              , "ABS_MAX" },
    { ABS_CNT              , "ABS_CNT" },
};

////////////////////////////////////////////////////////////////////////////////
#endif
