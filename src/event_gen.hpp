#define EV_BTN EV_KEY

namespace _imp
{
constexpr int _KEY_RESERVED = KEY_RESERVED;
constexpr int _KEY_ESC = KEY_ESC;
constexpr int _KEY_1 = KEY_1;
constexpr int _KEY_2 = KEY_2;
constexpr int _KEY_3 = KEY_3;
constexpr int _KEY_4 = KEY_4;
constexpr int _KEY_5 = KEY_5;
constexpr int _KEY_6 = KEY_6;
constexpr int _KEY_7 = KEY_7;
constexpr int _KEY_8 = KEY_8;
constexpr int _KEY_9 = KEY_9;
constexpr int _KEY_0 = KEY_0;
constexpr int _KEY_MINUS = KEY_MINUS;
constexpr int _KEY_EQUAL = KEY_EQUAL;
constexpr int _KEY_BACKSPACE = KEY_BACKSPACE;
constexpr int _KEY_TAB = KEY_TAB;
constexpr int _KEY_Q = KEY_Q;
constexpr int _KEY_W = KEY_W;
constexpr int _KEY_E = KEY_E;
constexpr int _KEY_R = KEY_R;
constexpr int _KEY_T = KEY_T;
constexpr int _KEY_Y = KEY_Y;
constexpr int _KEY_U = KEY_U;
constexpr int _KEY_I = KEY_I;
constexpr int _KEY_O = KEY_O;
constexpr int _KEY_P = KEY_P;
constexpr int _KEY_LEFTBRACE = KEY_LEFTBRACE;
constexpr int _KEY_RIGHTBRACE = KEY_RIGHTBRACE;
constexpr int _KEY_ENTER = KEY_ENTER;
constexpr int _KEY_LEFTCTRL = KEY_LEFTCTRL;
constexpr int _KEY_A = KEY_A;
constexpr int _KEY_S = KEY_S;
constexpr int _KEY_D = KEY_D;
constexpr int _KEY_F = KEY_F;
constexpr int _KEY_G = KEY_G;
constexpr int _KEY_H = KEY_H;
constexpr int _KEY_J = KEY_J;
constexpr int _KEY_K = KEY_K;
constexpr int _KEY_L = KEY_L;
constexpr int _KEY_SEMICOLON = KEY_SEMICOLON;
constexpr int _KEY_APOSTROPHE = KEY_APOSTROPHE;
constexpr int _KEY_GRAVE = KEY_GRAVE;
constexpr int _KEY_LEFTSHIFT = KEY_LEFTSHIFT;
constexpr int _KEY_BACKSLASH = KEY_BACKSLASH;
constexpr int _KEY_Z = KEY_Z;
constexpr int _KEY_X = KEY_X;
constexpr int _KEY_C = KEY_C;
constexpr int _KEY_V = KEY_V;
constexpr int _KEY_B = KEY_B;
constexpr int _KEY_N = KEY_N;
constexpr int _KEY_M = KEY_M;
constexpr int _KEY_COMMA = KEY_COMMA;
constexpr int _KEY_DOT = KEY_DOT;
constexpr int _KEY_SLASH = KEY_SLASH;
constexpr int _KEY_RIGHTSHIFT = KEY_RIGHTSHIFT;
constexpr int _KEY_KPASTERISK = KEY_KPASTERISK;
constexpr int _KEY_LEFTALT = KEY_LEFTALT;
constexpr int _KEY_SPACE = KEY_SPACE;
constexpr int _KEY_CAPSLOCK = KEY_CAPSLOCK;
constexpr int _KEY_F1 = KEY_F1;
constexpr int _KEY_F2 = KEY_F2;
constexpr int _KEY_F3 = KEY_F3;
constexpr int _KEY_F4 = KEY_F4;
constexpr int _KEY_F5 = KEY_F5;
constexpr int _KEY_F6 = KEY_F6;
constexpr int _KEY_F7 = KEY_F7;
constexpr int _KEY_F8 = KEY_F8;
constexpr int _KEY_F9 = KEY_F9;
constexpr int _KEY_F10 = KEY_F10;
constexpr int _KEY_NUMLOCK = KEY_NUMLOCK;
constexpr int _KEY_SCROLLLOCK = KEY_SCROLLLOCK;
constexpr int _KEY_KP7 = KEY_KP7;
constexpr int _KEY_KP8 = KEY_KP8;
constexpr int _KEY_KP9 = KEY_KP9;
constexpr int _KEY_KPMINUS = KEY_KPMINUS;
constexpr int _KEY_KP4 = KEY_KP4;
constexpr int _KEY_KP5 = KEY_KP5;
constexpr int _KEY_KP6 = KEY_KP6;
constexpr int _KEY_KPPLUS = KEY_KPPLUS;
constexpr int _KEY_KP1 = KEY_KP1;
constexpr int _KEY_KP2 = KEY_KP2;
constexpr int _KEY_KP3 = KEY_KP3;
constexpr int _KEY_KP0 = KEY_KP0;
constexpr int _KEY_KPDOT = KEY_KPDOT;
constexpr int _KEY_ZENKAKUHANKAKU = KEY_ZENKAKUHANKAKU;
constexpr int _KEY_102ND = KEY_102ND;
constexpr int _KEY_F11 = KEY_F11;
constexpr int _KEY_F12 = KEY_F12;
constexpr int _KEY_RO = KEY_RO;
constexpr int _KEY_KATAKANA = KEY_KATAKANA;
constexpr int _KEY_HIRAGANA = KEY_HIRAGANA;
constexpr int _KEY_HENKAN = KEY_HENKAN;
constexpr int _KEY_KATAKANAHIRAGANA = KEY_KATAKANAHIRAGANA;
constexpr int _KEY_MUHENKAN = KEY_MUHENKAN;
constexpr int _KEY_KPJPCOMMA = KEY_KPJPCOMMA;
constexpr int _KEY_KPENTER = KEY_KPENTER;
constexpr int _KEY_RIGHTCTRL = KEY_RIGHTCTRL;
constexpr int _KEY_KPSLASH = KEY_KPSLASH;
constexpr int _KEY_SYSRQ = KEY_SYSRQ;
constexpr int _KEY_RIGHTALT = KEY_RIGHTALT;
constexpr int _KEY_LINEFEED = KEY_LINEFEED;
constexpr int _KEY_HOME = KEY_HOME;
constexpr int _KEY_UP = KEY_UP;
constexpr int _KEY_PAGEUP = KEY_PAGEUP;
constexpr int _KEY_LEFT = KEY_LEFT;
constexpr int _KEY_RIGHT = KEY_RIGHT;
constexpr int _KEY_END = KEY_END;
constexpr int _KEY_DOWN = KEY_DOWN;
constexpr int _KEY_PAGEDOWN = KEY_PAGEDOWN;
constexpr int _KEY_INSERT = KEY_INSERT;
constexpr int _KEY_DELETE = KEY_DELETE;
constexpr int _KEY_MACRO = KEY_MACRO;
constexpr int _KEY_MUTE = KEY_MUTE;
constexpr int _KEY_VOLUMEDOWN = KEY_VOLUMEDOWN;
constexpr int _KEY_VOLUMEUP = KEY_VOLUMEUP;
constexpr int _KEY_POWER = KEY_POWER;
constexpr int _KEY_KPEQUAL = KEY_KPEQUAL;
constexpr int _KEY_KPPLUSMINUS = KEY_KPPLUSMINUS;
constexpr int _KEY_PAUSE = KEY_PAUSE;
constexpr int _KEY_SCALE = KEY_SCALE;
constexpr int _KEY_KPCOMMA = KEY_KPCOMMA;
constexpr int _KEY_HANGEUL = KEY_HANGEUL;
constexpr int _KEY_HANGUEL = KEY_HANGUEL;
constexpr int _KEY_HANJA = KEY_HANJA;
constexpr int _KEY_YEN = KEY_YEN;
constexpr int _KEY_LEFTMETA = KEY_LEFTMETA;
constexpr int _KEY_RIGHTMETA = KEY_RIGHTMETA;
constexpr int _KEY_COMPOSE = KEY_COMPOSE;
constexpr int _KEY_STOP = KEY_STOP;
constexpr int _KEY_AGAIN = KEY_AGAIN;
constexpr int _KEY_PROPS = KEY_PROPS;
constexpr int _KEY_UNDO = KEY_UNDO;
constexpr int _KEY_FRONT = KEY_FRONT;
constexpr int _KEY_COPY = KEY_COPY;
constexpr int _KEY_OPEN = KEY_OPEN;
constexpr int _KEY_PASTE = KEY_PASTE;
constexpr int _KEY_FIND = KEY_FIND;
constexpr int _KEY_CUT = KEY_CUT;
constexpr int _KEY_HELP = KEY_HELP;
constexpr int _KEY_MENU = KEY_MENU;
constexpr int _KEY_CALC = KEY_CALC;
constexpr int _KEY_SETUP = KEY_SETUP;
constexpr int _KEY_SLEEP = KEY_SLEEP;
constexpr int _KEY_WAKEUP = KEY_WAKEUP;
constexpr int _KEY_FILE = KEY_FILE;
constexpr int _KEY_SENDFILE = KEY_SENDFILE;
constexpr int _KEY_DELETEFILE = KEY_DELETEFILE;
constexpr int _KEY_XFER = KEY_XFER;
constexpr int _KEY_PROG1 = KEY_PROG1;
constexpr int _KEY_PROG2 = KEY_PROG2;
constexpr int _KEY_WWW = KEY_WWW;
constexpr int _KEY_MSDOS = KEY_MSDOS;
constexpr int _KEY_COFFEE = KEY_COFFEE;
constexpr int _KEY_SCREENLOCK = KEY_SCREENLOCK;
constexpr int _KEY_DIRECTION = KEY_DIRECTION;
constexpr int _KEY_CYCLEWINDOWS = KEY_CYCLEWINDOWS;
constexpr int _KEY_MAIL = KEY_MAIL;
constexpr int _KEY_BOOKMARKS = KEY_BOOKMARKS;
constexpr int _KEY_COMPUTER = KEY_COMPUTER;
constexpr int _KEY_BACK = KEY_BACK;
constexpr int _KEY_FORWARD = KEY_FORWARD;
constexpr int _KEY_CLOSECD = KEY_CLOSECD;
constexpr int _KEY_EJECTCD = KEY_EJECTCD;
constexpr int _KEY_EJECTCLOSECD = KEY_EJECTCLOSECD;
constexpr int _KEY_NEXTSONG = KEY_NEXTSONG;
constexpr int _KEY_PLAYPAUSE = KEY_PLAYPAUSE;
constexpr int _KEY_PREVIOUSSONG = KEY_PREVIOUSSONG;
constexpr int _KEY_STOPCD = KEY_STOPCD;
constexpr int _KEY_RECORD = KEY_RECORD;
constexpr int _KEY_REWIND = KEY_REWIND;
constexpr int _KEY_PHONE = KEY_PHONE;
constexpr int _KEY_ISO = KEY_ISO;
constexpr int _KEY_CONFIG = KEY_CONFIG;
constexpr int _KEY_HOMEPAGE = KEY_HOMEPAGE;
constexpr int _KEY_REFRESH = KEY_REFRESH;
constexpr int _KEY_EXIT = KEY_EXIT;
constexpr int _KEY_MOVE = KEY_MOVE;
constexpr int _KEY_EDIT = KEY_EDIT;
constexpr int _KEY_SCROLLUP = KEY_SCROLLUP;
constexpr int _KEY_SCROLLDOWN = KEY_SCROLLDOWN;
constexpr int _KEY_KPLEFTPAREN = KEY_KPLEFTPAREN;
constexpr int _KEY_KPRIGHTPAREN = KEY_KPRIGHTPAREN;
constexpr int _KEY_NEW = KEY_NEW;
constexpr int _KEY_REDO = KEY_REDO;
constexpr int _KEY_F13 = KEY_F13;
constexpr int _KEY_F14 = KEY_F14;
constexpr int _KEY_F15 = KEY_F15;
constexpr int _KEY_F16 = KEY_F16;
constexpr int _KEY_F17 = KEY_F17;
constexpr int _KEY_F18 = KEY_F18;
constexpr int _KEY_F19 = KEY_F19;
constexpr int _KEY_F20 = KEY_F20;
constexpr int _KEY_F21 = KEY_F21;
constexpr int _KEY_F22 = KEY_F22;
constexpr int _KEY_F23 = KEY_F23;
constexpr int _KEY_F24 = KEY_F24;
constexpr int _KEY_PLAYCD = KEY_PLAYCD;
constexpr int _KEY_PAUSECD = KEY_PAUSECD;
constexpr int _KEY_PROG3 = KEY_PROG3;
constexpr int _KEY_PROG4 = KEY_PROG4;
constexpr int _KEY_DASHBOARD = KEY_DASHBOARD;
constexpr int _KEY_SUSPEND = KEY_SUSPEND;
constexpr int _KEY_CLOSE = KEY_CLOSE;
constexpr int _KEY_PLAY = KEY_PLAY;
constexpr int _KEY_FASTFORWARD = KEY_FASTFORWARD;
constexpr int _KEY_BASSBOOST = KEY_BASSBOOST;
constexpr int _KEY_PRINT = KEY_PRINT;
constexpr int _KEY_HP = KEY_HP;
constexpr int _KEY_CAMERA = KEY_CAMERA;
constexpr int _KEY_SOUND = KEY_SOUND;
constexpr int _KEY_QUESTION = KEY_QUESTION;
constexpr int _KEY_EMAIL = KEY_EMAIL;
constexpr int _KEY_CHAT = KEY_CHAT;
constexpr int _KEY_SEARCH = KEY_SEARCH;
constexpr int _KEY_CONNECT = KEY_CONNECT;
constexpr int _KEY_FINANCE = KEY_FINANCE;
constexpr int _KEY_SPORT = KEY_SPORT;
constexpr int _KEY_SHOP = KEY_SHOP;
constexpr int _KEY_ALTERASE = KEY_ALTERASE;
constexpr int _KEY_CANCEL = KEY_CANCEL;
constexpr int _KEY_BRIGHTNESSDOWN = KEY_BRIGHTNESSDOWN;
constexpr int _KEY_BRIGHTNESSUP = KEY_BRIGHTNESSUP;
constexpr int _KEY_MEDIA = KEY_MEDIA;
constexpr int _KEY_SWITCHVIDEOMODE = KEY_SWITCHVIDEOMODE;
constexpr int _KEY_KBDILLUMTOGGLE = KEY_KBDILLUMTOGGLE;
constexpr int _KEY_KBDILLUMDOWN = KEY_KBDILLUMDOWN;
constexpr int _KEY_KBDILLUMUP = KEY_KBDILLUMUP;
constexpr int _KEY_SEND = KEY_SEND;
constexpr int _KEY_REPLY = KEY_REPLY;
constexpr int _KEY_FORWARDMAIL = KEY_FORWARDMAIL;
constexpr int _KEY_SAVE = KEY_SAVE;
constexpr int _KEY_DOCUMENTS = KEY_DOCUMENTS;
constexpr int _KEY_BATTERY = KEY_BATTERY;
constexpr int _KEY_BLUETOOTH = KEY_BLUETOOTH;
constexpr int _KEY_WLAN = KEY_WLAN;
constexpr int _KEY_UWB = KEY_UWB;
constexpr int _KEY_UNKNOWN = KEY_UNKNOWN;
constexpr int _KEY_VIDEO_NEXT = KEY_VIDEO_NEXT;
constexpr int _KEY_VIDEO_PREV = KEY_VIDEO_PREV;
constexpr int _KEY_BRIGHTNESS_CYCLE = KEY_BRIGHTNESS_CYCLE;
constexpr int _KEY_BRIGHTNESS_AUTO = KEY_BRIGHTNESS_AUTO;
constexpr int _KEY_BRIGHTNESS_ZERO = KEY_BRIGHTNESS_ZERO;
constexpr int _KEY_DISPLAY_OFF = KEY_DISPLAY_OFF;
constexpr int _KEY_WWAN = KEY_WWAN;
constexpr int _KEY_WIMAX = KEY_WIMAX;
constexpr int _KEY_RFKILL = KEY_RFKILL;
constexpr int _KEY_MICMUTE = KEY_MICMUTE;
constexpr int _BTN_MISC = BTN_MISC;
constexpr int _BTN_0 = BTN_0;
constexpr int _BTN_1 = BTN_1;
constexpr int _BTN_2 = BTN_2;
constexpr int _BTN_3 = BTN_3;
constexpr int _BTN_4 = BTN_4;
constexpr int _BTN_5 = BTN_5;
constexpr int _BTN_6 = BTN_6;
constexpr int _BTN_7 = BTN_7;
constexpr int _BTN_8 = BTN_8;
constexpr int _BTN_9 = BTN_9;
constexpr int _BTN_MOUSE = BTN_MOUSE;
constexpr int _BTN_LEFT = BTN_LEFT;
constexpr int _BTN_RIGHT = BTN_RIGHT;
constexpr int _BTN_MIDDLE = BTN_MIDDLE;
constexpr int _BTN_SIDE = BTN_SIDE;
constexpr int _BTN_EXTRA = BTN_EXTRA;
constexpr int _BTN_FORWARD = BTN_FORWARD;
constexpr int _BTN_BACK = BTN_BACK;
constexpr int _BTN_TASK = BTN_TASK;
constexpr int _BTN_JOYSTICK = BTN_JOYSTICK;
constexpr int _BTN_TRIGGER = BTN_TRIGGER;
constexpr int _BTN_THUMB = BTN_THUMB;
constexpr int _BTN_THUMB2 = BTN_THUMB2;
constexpr int _BTN_TOP = BTN_TOP;
constexpr int _BTN_TOP2 = BTN_TOP2;
constexpr int _BTN_PINKIE = BTN_PINKIE;
constexpr int _BTN_BASE = BTN_BASE;
constexpr int _BTN_BASE2 = BTN_BASE2;
constexpr int _BTN_BASE3 = BTN_BASE3;
constexpr int _BTN_BASE4 = BTN_BASE4;
constexpr int _BTN_BASE5 = BTN_BASE5;
constexpr int _BTN_BASE6 = BTN_BASE6;
constexpr int _BTN_DEAD = BTN_DEAD;
constexpr int _BTN_GAMEPAD = BTN_GAMEPAD;
constexpr int _BTN_SOUTH = BTN_SOUTH;
constexpr int _BTN_A = BTN_A;
constexpr int _BTN_EAST = BTN_EAST;
constexpr int _BTN_B = BTN_B;
constexpr int _BTN_C = BTN_C;
constexpr int _BTN_NORTH = BTN_NORTH;
constexpr int _BTN_X = BTN_X;
constexpr int _BTN_WEST = BTN_WEST;
constexpr int _BTN_Y = BTN_Y;
constexpr int _BTN_Z = BTN_Z;
constexpr int _BTN_TL = BTN_TL;
constexpr int _BTN_TR = BTN_TR;
constexpr int _BTN_TL2 = BTN_TL2;
constexpr int _BTN_TR2 = BTN_TR2;
constexpr int _BTN_SELECT = BTN_SELECT;
constexpr int _BTN_START = BTN_START;
constexpr int _BTN_MODE = BTN_MODE;
constexpr int _BTN_THUMBL = BTN_THUMBL;
constexpr int _BTN_THUMBR = BTN_THUMBR;
constexpr int _BTN_DIGI = BTN_DIGI;
constexpr int _BTN_TOOL_PEN = BTN_TOOL_PEN;
constexpr int _BTN_TOOL_RUBBER = BTN_TOOL_RUBBER;
constexpr int _BTN_TOOL_BRUSH = BTN_TOOL_BRUSH;
constexpr int _BTN_TOOL_PENCIL = BTN_TOOL_PENCIL;
constexpr int _BTN_TOOL_AIRBRUSH = BTN_TOOL_AIRBRUSH;
constexpr int _BTN_TOOL_FINGER = BTN_TOOL_FINGER;
constexpr int _BTN_TOOL_MOUSE = BTN_TOOL_MOUSE;
constexpr int _BTN_TOOL_LENS = BTN_TOOL_LENS;
constexpr int _BTN_TOOL_QUINTTAP = BTN_TOOL_QUINTTAP;
constexpr int _BTN_TOUCH = BTN_TOUCH;
constexpr int _BTN_STYLUS = BTN_STYLUS;
constexpr int _BTN_STYLUS2 = BTN_STYLUS2;
constexpr int _BTN_TOOL_DOUBLETAP = BTN_TOOL_DOUBLETAP;
constexpr int _BTN_TOOL_TRIPLETAP = BTN_TOOL_TRIPLETAP;
constexpr int _BTN_TOOL_QUADTAP = BTN_TOOL_QUADTAP;
constexpr int _BTN_WHEEL = BTN_WHEEL;
constexpr int _BTN_GEAR_DOWN = BTN_GEAR_DOWN;
constexpr int _BTN_GEAR_UP = BTN_GEAR_UP;
constexpr int _KEY_OK = KEY_OK;
constexpr int _KEY_SELECT = KEY_SELECT;
constexpr int _KEY_GOTO = KEY_GOTO;
constexpr int _KEY_CLEAR = KEY_CLEAR;
constexpr int _KEY_POWER2 = KEY_POWER2;
constexpr int _KEY_OPTION = KEY_OPTION;
constexpr int _KEY_INFO = KEY_INFO;
constexpr int _KEY_TIME = KEY_TIME;
constexpr int _KEY_VENDOR = KEY_VENDOR;
constexpr int _KEY_ARCHIVE = KEY_ARCHIVE;
constexpr int _KEY_PROGRAM = KEY_PROGRAM;
constexpr int _KEY_CHANNEL = KEY_CHANNEL;
constexpr int _KEY_FAVORITES = KEY_FAVORITES;
constexpr int _KEY_EPG = KEY_EPG;
constexpr int _KEY_PVR = KEY_PVR;
constexpr int _KEY_MHP = KEY_MHP;
constexpr int _KEY_LANGUAGE = KEY_LANGUAGE;
constexpr int _KEY_TITLE = KEY_TITLE;
constexpr int _KEY_SUBTITLE = KEY_SUBTITLE;
constexpr int _KEY_ANGLE = KEY_ANGLE;
constexpr int _KEY_ZOOM = KEY_ZOOM;
constexpr int _KEY_MODE = KEY_MODE;
constexpr int _KEY_KEYBOARD = KEY_KEYBOARD;
constexpr int _KEY_SCREEN = KEY_SCREEN;
constexpr int _KEY_PC = KEY_PC;
constexpr int _KEY_TV = KEY_TV;
constexpr int _KEY_TV2 = KEY_TV2;
constexpr int _KEY_VCR = KEY_VCR;
constexpr int _KEY_VCR2 = KEY_VCR2;
constexpr int _KEY_SAT = KEY_SAT;
constexpr int _KEY_SAT2 = KEY_SAT2;
constexpr int _KEY_CD = KEY_CD;
constexpr int _KEY_TAPE = KEY_TAPE;
constexpr int _KEY_RADIO = KEY_RADIO;
constexpr int _KEY_TUNER = KEY_TUNER;
constexpr int _KEY_PLAYER = KEY_PLAYER;
constexpr int _KEY_TEXT = KEY_TEXT;
constexpr int _KEY_DVD = KEY_DVD;
constexpr int _KEY_AUX = KEY_AUX;
constexpr int _KEY_MP3 = KEY_MP3;
constexpr int _KEY_AUDIO = KEY_AUDIO;
constexpr int _KEY_VIDEO = KEY_VIDEO;
constexpr int _KEY_DIRECTORY = KEY_DIRECTORY;
constexpr int _KEY_LIST = KEY_LIST;
constexpr int _KEY_MEMO = KEY_MEMO;
constexpr int _KEY_CALENDAR = KEY_CALENDAR;
constexpr int _KEY_RED = KEY_RED;
constexpr int _KEY_GREEN = KEY_GREEN;
constexpr int _KEY_YELLOW = KEY_YELLOW;
constexpr int _KEY_BLUE = KEY_BLUE;
constexpr int _KEY_CHANNELUP = KEY_CHANNELUP;
constexpr int _KEY_CHANNELDOWN = KEY_CHANNELDOWN;
constexpr int _KEY_FIRST = KEY_FIRST;
constexpr int _KEY_LAST = KEY_LAST;
constexpr int _KEY_AB = KEY_AB;
constexpr int _KEY_NEXT = KEY_NEXT;
constexpr int _KEY_RESTART = KEY_RESTART;
constexpr int _KEY_SLOW = KEY_SLOW;
constexpr int _KEY_SHUFFLE = KEY_SHUFFLE;
constexpr int _KEY_BREAK = KEY_BREAK;
constexpr int _KEY_PREVIOUS = KEY_PREVIOUS;
constexpr int _KEY_DIGITS = KEY_DIGITS;
constexpr int _KEY_TEEN = KEY_TEEN;
constexpr int _KEY_TWEN = KEY_TWEN;
constexpr int _KEY_VIDEOPHONE = KEY_VIDEOPHONE;
constexpr int _KEY_GAMES = KEY_GAMES;
constexpr int _KEY_ZOOMIN = KEY_ZOOMIN;
constexpr int _KEY_ZOOMOUT = KEY_ZOOMOUT;
constexpr int _KEY_ZOOMRESET = KEY_ZOOMRESET;
constexpr int _KEY_WORDPROCESSOR = KEY_WORDPROCESSOR;
constexpr int _KEY_EDITOR = KEY_EDITOR;
constexpr int _KEY_SPREADSHEET = KEY_SPREADSHEET;
constexpr int _KEY_GRAPHICSEDITOR = KEY_GRAPHICSEDITOR;
constexpr int _KEY_PRESENTATION = KEY_PRESENTATION;
constexpr int _KEY_DATABASE = KEY_DATABASE;
constexpr int _KEY_NEWS = KEY_NEWS;
constexpr int _KEY_VOICEMAIL = KEY_VOICEMAIL;
constexpr int _KEY_ADDRESSBOOK = KEY_ADDRESSBOOK;
constexpr int _KEY_MESSENGER = KEY_MESSENGER;
constexpr int _KEY_DISPLAYTOGGLE = KEY_DISPLAYTOGGLE;
constexpr int _KEY_BRIGHTNESS_TOGGLE = KEY_BRIGHTNESS_TOGGLE;
constexpr int _KEY_SPELLCHECK = KEY_SPELLCHECK;
constexpr int _KEY_LOGOFF = KEY_LOGOFF;
constexpr int _KEY_DOLLAR = KEY_DOLLAR;
constexpr int _KEY_EURO = KEY_EURO;
constexpr int _KEY_FRAMEBACK = KEY_FRAMEBACK;
constexpr int _KEY_FRAMEFORWARD = KEY_FRAMEFORWARD;
constexpr int _KEY_CONTEXT_MENU = KEY_CONTEXT_MENU;
constexpr int _KEY_MEDIA_REPEAT = KEY_MEDIA_REPEAT;
constexpr int _KEY_10CHANNELSUP = KEY_10CHANNELSUP;
constexpr int _KEY_10CHANNELSDOWN = KEY_10CHANNELSDOWN;
constexpr int _KEY_IMAGES = KEY_IMAGES;
constexpr int _KEY_DEL_EOL = KEY_DEL_EOL;
constexpr int _KEY_DEL_EOS = KEY_DEL_EOS;
constexpr int _KEY_INS_LINE = KEY_INS_LINE;
constexpr int _KEY_DEL_LINE = KEY_DEL_LINE;
constexpr int _KEY_FN = KEY_FN;
constexpr int _KEY_FN_ESC = KEY_FN_ESC;
constexpr int _KEY_FN_F1 = KEY_FN_F1;
constexpr int _KEY_FN_F2 = KEY_FN_F2;
constexpr int _KEY_FN_F3 = KEY_FN_F3;
constexpr int _KEY_FN_F4 = KEY_FN_F4;
constexpr int _KEY_FN_F5 = KEY_FN_F5;
constexpr int _KEY_FN_F6 = KEY_FN_F6;
constexpr int _KEY_FN_F7 = KEY_FN_F7;
constexpr int _KEY_FN_F8 = KEY_FN_F8;
constexpr int _KEY_FN_F9 = KEY_FN_F9;
constexpr int _KEY_FN_F10 = KEY_FN_F10;
constexpr int _KEY_FN_F11 = KEY_FN_F11;
constexpr int _KEY_FN_F12 = KEY_FN_F12;
constexpr int _KEY_FN_1 = KEY_FN_1;
constexpr int _KEY_FN_2 = KEY_FN_2;
constexpr int _KEY_FN_D = KEY_FN_D;
constexpr int _KEY_FN_E = KEY_FN_E;
constexpr int _KEY_FN_F = KEY_FN_F;
constexpr int _KEY_FN_S = KEY_FN_S;
constexpr int _KEY_FN_B = KEY_FN_B;
constexpr int _KEY_BRL_DOT1 = KEY_BRL_DOT1;
constexpr int _KEY_BRL_DOT2 = KEY_BRL_DOT2;
constexpr int _KEY_BRL_DOT3 = KEY_BRL_DOT3;
constexpr int _KEY_BRL_DOT4 = KEY_BRL_DOT4;
constexpr int _KEY_BRL_DOT5 = KEY_BRL_DOT5;
constexpr int _KEY_BRL_DOT6 = KEY_BRL_DOT6;
constexpr int _KEY_BRL_DOT7 = KEY_BRL_DOT7;
constexpr int _KEY_BRL_DOT8 = KEY_BRL_DOT8;
constexpr int _KEY_BRL_DOT9 = KEY_BRL_DOT9;
constexpr int _KEY_BRL_DOT10 = KEY_BRL_DOT10;
constexpr int _KEY_NUMERIC_0 = KEY_NUMERIC_0;
constexpr int _KEY_NUMERIC_1 = KEY_NUMERIC_1;
constexpr int _KEY_NUMERIC_2 = KEY_NUMERIC_2;
constexpr int _KEY_NUMERIC_3 = KEY_NUMERIC_3;
constexpr int _KEY_NUMERIC_4 = KEY_NUMERIC_4;
constexpr int _KEY_NUMERIC_5 = KEY_NUMERIC_5;
constexpr int _KEY_NUMERIC_6 = KEY_NUMERIC_6;
constexpr int _KEY_NUMERIC_7 = KEY_NUMERIC_7;
constexpr int _KEY_NUMERIC_8 = KEY_NUMERIC_8;
constexpr int _KEY_NUMERIC_9 = KEY_NUMERIC_9;
constexpr int _KEY_NUMERIC_STAR = KEY_NUMERIC_STAR;
constexpr int _KEY_NUMERIC_POUND = KEY_NUMERIC_POUND;
constexpr int _KEY_CAMERA_FOCUS = KEY_CAMERA_FOCUS;
constexpr int _KEY_WPS_BUTTON = KEY_WPS_BUTTON;
constexpr int _KEY_TOUCHPAD_TOGGLE = KEY_TOUCHPAD_TOGGLE;
constexpr int _KEY_TOUCHPAD_ON = KEY_TOUCHPAD_ON;
constexpr int _KEY_TOUCHPAD_OFF = KEY_TOUCHPAD_OFF;
constexpr int _KEY_CAMERA_ZOOMIN = KEY_CAMERA_ZOOMIN;
constexpr int _KEY_CAMERA_ZOOMOUT = KEY_CAMERA_ZOOMOUT;
constexpr int _KEY_CAMERA_UP = KEY_CAMERA_UP;
constexpr int _KEY_CAMERA_DOWN = KEY_CAMERA_DOWN;
constexpr int _KEY_CAMERA_LEFT = KEY_CAMERA_LEFT;
constexpr int _KEY_CAMERA_RIGHT = KEY_CAMERA_RIGHT;
constexpr int _KEY_ATTENDANT_ON = KEY_ATTENDANT_ON;
constexpr int _KEY_ATTENDANT_OFF = KEY_ATTENDANT_OFF;
constexpr int _KEY_ATTENDANT_TOGGLE = KEY_ATTENDANT_TOGGLE;
constexpr int _KEY_LIGHTS_TOGGLE = KEY_LIGHTS_TOGGLE;
constexpr int _BTN_DPAD_UP = BTN_DPAD_UP;
constexpr int _BTN_DPAD_DOWN = BTN_DPAD_DOWN;
constexpr int _BTN_DPAD_LEFT = BTN_DPAD_LEFT;
constexpr int _BTN_DPAD_RIGHT = BTN_DPAD_RIGHT;
constexpr int _KEY_ALS_TOGGLE = KEY_ALS_TOGGLE;
constexpr int _KEY_BUTTONCONFIG = KEY_BUTTONCONFIG;
constexpr int _KEY_TASKMANAGER = KEY_TASKMANAGER;
constexpr int _KEY_JOURNAL = KEY_JOURNAL;
constexpr int _KEY_CONTROLPANEL = KEY_CONTROLPANEL;
constexpr int _KEY_APPSELECT = KEY_APPSELECT;
constexpr int _KEY_SCREENSAVER = KEY_SCREENSAVER;
constexpr int _KEY_VOICECOMMAND = KEY_VOICECOMMAND;
constexpr int _KEY_BRIGHTNESS_MIN = KEY_BRIGHTNESS_MIN;
constexpr int _KEY_BRIGHTNESS_MAX = KEY_BRIGHTNESS_MAX;
constexpr int _BTN_TRIGGER_HAPPY = BTN_TRIGGER_HAPPY;
constexpr int _BTN_TRIGGER_HAPPY1 = BTN_TRIGGER_HAPPY1;
constexpr int _BTN_TRIGGER_HAPPY2 = BTN_TRIGGER_HAPPY2;
constexpr int _BTN_TRIGGER_HAPPY3 = BTN_TRIGGER_HAPPY3;
constexpr int _BTN_TRIGGER_HAPPY4 = BTN_TRIGGER_HAPPY4;
constexpr int _BTN_TRIGGER_HAPPY5 = BTN_TRIGGER_HAPPY5;
constexpr int _BTN_TRIGGER_HAPPY6 = BTN_TRIGGER_HAPPY6;
constexpr int _BTN_TRIGGER_HAPPY7 = BTN_TRIGGER_HAPPY7;
constexpr int _BTN_TRIGGER_HAPPY8 = BTN_TRIGGER_HAPPY8;
constexpr int _BTN_TRIGGER_HAPPY9 = BTN_TRIGGER_HAPPY9;
constexpr int _BTN_TRIGGER_HAPPY10 = BTN_TRIGGER_HAPPY10;
constexpr int _BTN_TRIGGER_HAPPY11 = BTN_TRIGGER_HAPPY11;
constexpr int _BTN_TRIGGER_HAPPY12 = BTN_TRIGGER_HAPPY12;
constexpr int _BTN_TRIGGER_HAPPY13 = BTN_TRIGGER_HAPPY13;
constexpr int _BTN_TRIGGER_HAPPY14 = BTN_TRIGGER_HAPPY14;
constexpr int _BTN_TRIGGER_HAPPY15 = BTN_TRIGGER_HAPPY15;
constexpr int _BTN_TRIGGER_HAPPY16 = BTN_TRIGGER_HAPPY16;
constexpr int _BTN_TRIGGER_HAPPY17 = BTN_TRIGGER_HAPPY17;
constexpr int _BTN_TRIGGER_HAPPY18 = BTN_TRIGGER_HAPPY18;
constexpr int _BTN_TRIGGER_HAPPY19 = BTN_TRIGGER_HAPPY19;
constexpr int _BTN_TRIGGER_HAPPY20 = BTN_TRIGGER_HAPPY20;
constexpr int _BTN_TRIGGER_HAPPY21 = BTN_TRIGGER_HAPPY21;
constexpr int _BTN_TRIGGER_HAPPY22 = BTN_TRIGGER_HAPPY22;
constexpr int _BTN_TRIGGER_HAPPY23 = BTN_TRIGGER_HAPPY23;
constexpr int _BTN_TRIGGER_HAPPY24 = BTN_TRIGGER_HAPPY24;
constexpr int _BTN_TRIGGER_HAPPY25 = BTN_TRIGGER_HAPPY25;
constexpr int _BTN_TRIGGER_HAPPY26 = BTN_TRIGGER_HAPPY26;
constexpr int _BTN_TRIGGER_HAPPY27 = BTN_TRIGGER_HAPPY27;
constexpr int _BTN_TRIGGER_HAPPY28 = BTN_TRIGGER_HAPPY28;
constexpr int _BTN_TRIGGER_HAPPY29 = BTN_TRIGGER_HAPPY29;
constexpr int _BTN_TRIGGER_HAPPY30 = BTN_TRIGGER_HAPPY30;
constexpr int _BTN_TRIGGER_HAPPY31 = BTN_TRIGGER_HAPPY31;
constexpr int _BTN_TRIGGER_HAPPY32 = BTN_TRIGGER_HAPPY32;
constexpr int _BTN_TRIGGER_HAPPY33 = BTN_TRIGGER_HAPPY33;
constexpr int _BTN_TRIGGER_HAPPY34 = BTN_TRIGGER_HAPPY34;
constexpr int _BTN_TRIGGER_HAPPY35 = BTN_TRIGGER_HAPPY35;
constexpr int _BTN_TRIGGER_HAPPY36 = BTN_TRIGGER_HAPPY36;
constexpr int _BTN_TRIGGER_HAPPY37 = BTN_TRIGGER_HAPPY37;
constexpr int _BTN_TRIGGER_HAPPY38 = BTN_TRIGGER_HAPPY38;
constexpr int _BTN_TRIGGER_HAPPY39 = BTN_TRIGGER_HAPPY39;
constexpr int _BTN_TRIGGER_HAPPY40 = BTN_TRIGGER_HAPPY40;
constexpr int _KEY_MIN_INTERESTING = KEY_MIN_INTERESTING;
constexpr int _KEY_MAX = KEY_MAX;
constexpr int _KEY_CNT = KEY_CNT;
constexpr int _REL_X = REL_X;
constexpr int _REL_Y = REL_Y;
constexpr int _REL_Z = REL_Z;
constexpr int _REL_RX = REL_RX;
constexpr int _REL_RY = REL_RY;
constexpr int _REL_RZ = REL_RZ;
constexpr int _REL_HWHEEL = REL_HWHEEL;
constexpr int _REL_DIAL = REL_DIAL;
constexpr int _REL_WHEEL = REL_WHEEL;
constexpr int _REL_MISC = REL_MISC;
constexpr int _REL_MAX = REL_MAX;
constexpr int _REL_CNT = REL_CNT;
constexpr int _ABS_X = ABS_X;
constexpr int _ABS_Y = ABS_Y;
constexpr int _ABS_Z = ABS_Z;
constexpr int _ABS_RX = ABS_RX;
constexpr int _ABS_RY = ABS_RY;
constexpr int _ABS_RZ = ABS_RZ;
constexpr int _ABS_THROTTLE = ABS_THROTTLE;
constexpr int _ABS_RUDDER = ABS_RUDDER;
constexpr int _ABS_WHEEL = ABS_WHEEL;
constexpr int _ABS_GAS = ABS_GAS;
constexpr int _ABS_BRAKE = ABS_BRAKE;
constexpr int _ABS_HAT0X = ABS_HAT0X;
constexpr int _ABS_HAT0Y = ABS_HAT0Y;
constexpr int _ABS_HAT1X = ABS_HAT1X;
constexpr int _ABS_HAT1Y = ABS_HAT1Y;
constexpr int _ABS_HAT2X = ABS_HAT2X;
constexpr int _ABS_HAT2Y = ABS_HAT2Y;
constexpr int _ABS_HAT3X = ABS_HAT3X;
constexpr int _ABS_HAT3Y = ABS_HAT3Y;
constexpr int _ABS_PRESSURE = ABS_PRESSURE;
constexpr int _ABS_DISTANCE = ABS_DISTANCE;
constexpr int _ABS_TILT_X = ABS_TILT_X;
constexpr int _ABS_TILT_Y = ABS_TILT_Y;
constexpr int _ABS_TOOL_WIDTH = ABS_TOOL_WIDTH;
constexpr int _ABS_VOLUME = ABS_VOLUME;
constexpr int _ABS_MISC = ABS_MISC;
constexpr int _ABS_MT_SLOT = ABS_MT_SLOT;
constexpr int _ABS_MT_TOUCH_MAJOR = ABS_MT_TOUCH_MAJOR;
constexpr int _ABS_MT_TOUCH_MINOR = ABS_MT_TOUCH_MINOR;
constexpr int _ABS_MT_WIDTH_MAJOR = ABS_MT_WIDTH_MAJOR;
constexpr int _ABS_MT_WIDTH_MINOR = ABS_MT_WIDTH_MINOR;
constexpr int _ABS_MT_ORIENTATION = ABS_MT_ORIENTATION;
constexpr int _ABS_MT_POSITION_X = ABS_MT_POSITION_X;
constexpr int _ABS_MT_POSITION_Y = ABS_MT_POSITION_Y;
constexpr int _ABS_MT_TOOL_TYPE = ABS_MT_TOOL_TYPE;
constexpr int _ABS_MT_BLOB_ID = ABS_MT_BLOB_ID;
constexpr int _ABS_MT_TRACKING_ID = ABS_MT_TRACKING_ID;
constexpr int _ABS_MT_PRESSURE = ABS_MT_PRESSURE;
constexpr int _ABS_MT_DISTANCE = ABS_MT_DISTANCE;
constexpr int _ABS_MT_TOOL_X = ABS_MT_TOOL_X;
constexpr int _ABS_MT_TOOL_Y = ABS_MT_TOOL_Y;
constexpr int _ABS_MAX = ABS_MAX;
constexpr int _ABS_CNT = ABS_CNT;
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
}

enum event
{
EVT_NONE = 0,
EVT_SYNC = EV_SYN << 16,
KEY_RESERVED = (EV_KEY << 16) + _imp::_KEY_RESERVED,
KEY_ESC = (EV_KEY << 16) + _imp::_KEY_ESC,
KEY_1 = (EV_KEY << 16) + _imp::_KEY_1,
KEY_2 = (EV_KEY << 16) + _imp::_KEY_2,
KEY_3 = (EV_KEY << 16) + _imp::_KEY_3,
KEY_4 = (EV_KEY << 16) + _imp::_KEY_4,
KEY_5 = (EV_KEY << 16) + _imp::_KEY_5,
KEY_6 = (EV_KEY << 16) + _imp::_KEY_6,
KEY_7 = (EV_KEY << 16) + _imp::_KEY_7,
KEY_8 = (EV_KEY << 16) + _imp::_KEY_8,
KEY_9 = (EV_KEY << 16) + _imp::_KEY_9,
KEY_0 = (EV_KEY << 16) + _imp::_KEY_0,
KEY_MINUS = (EV_KEY << 16) + _imp::_KEY_MINUS,
KEY_EQUAL = (EV_KEY << 16) + _imp::_KEY_EQUAL,
KEY_BACKSPACE = (EV_KEY << 16) + _imp::_KEY_BACKSPACE,
KEY_TAB = (EV_KEY << 16) + _imp::_KEY_TAB,
KEY_Q = (EV_KEY << 16) + _imp::_KEY_Q,
KEY_W = (EV_KEY << 16) + _imp::_KEY_W,
KEY_E = (EV_KEY << 16) + _imp::_KEY_E,
KEY_R = (EV_KEY << 16) + _imp::_KEY_R,
KEY_T = (EV_KEY << 16) + _imp::_KEY_T,
KEY_Y = (EV_KEY << 16) + _imp::_KEY_Y,
KEY_U = (EV_KEY << 16) + _imp::_KEY_U,
KEY_I = (EV_KEY << 16) + _imp::_KEY_I,
KEY_O = (EV_KEY << 16) + _imp::_KEY_O,
KEY_P = (EV_KEY << 16) + _imp::_KEY_P,
KEY_LEFTBRACE = (EV_KEY << 16) + _imp::_KEY_LEFTBRACE,
KEY_RIGHTBRACE = (EV_KEY << 16) + _imp::_KEY_RIGHTBRACE,
KEY_ENTER = (EV_KEY << 16) + _imp::_KEY_ENTER,
KEY_LEFTCTRL = (EV_KEY << 16) + _imp::_KEY_LEFTCTRL,
KEY_A = (EV_KEY << 16) + _imp::_KEY_A,
KEY_S = (EV_KEY << 16) + _imp::_KEY_S,
KEY_D = (EV_KEY << 16) + _imp::_KEY_D,
KEY_F = (EV_KEY << 16) + _imp::_KEY_F,
KEY_G = (EV_KEY << 16) + _imp::_KEY_G,
KEY_H = (EV_KEY << 16) + _imp::_KEY_H,
KEY_J = (EV_KEY << 16) + _imp::_KEY_J,
KEY_K = (EV_KEY << 16) + _imp::_KEY_K,
KEY_L = (EV_KEY << 16) + _imp::_KEY_L,
KEY_SEMICOLON = (EV_KEY << 16) + _imp::_KEY_SEMICOLON,
KEY_APOSTROPHE = (EV_KEY << 16) + _imp::_KEY_APOSTROPHE,
KEY_GRAVE = (EV_KEY << 16) + _imp::_KEY_GRAVE,
KEY_LEFTSHIFT = (EV_KEY << 16) + _imp::_KEY_LEFTSHIFT,
KEY_BACKSLASH = (EV_KEY << 16) + _imp::_KEY_BACKSLASH,
KEY_Z = (EV_KEY << 16) + _imp::_KEY_Z,
KEY_X = (EV_KEY << 16) + _imp::_KEY_X,
KEY_C = (EV_KEY << 16) + _imp::_KEY_C,
KEY_V = (EV_KEY << 16) + _imp::_KEY_V,
KEY_B = (EV_KEY << 16) + _imp::_KEY_B,
KEY_N = (EV_KEY << 16) + _imp::_KEY_N,
KEY_M = (EV_KEY << 16) + _imp::_KEY_M,
KEY_COMMA = (EV_KEY << 16) + _imp::_KEY_COMMA,
KEY_DOT = (EV_KEY << 16) + _imp::_KEY_DOT,
KEY_SLASH = (EV_KEY << 16) + _imp::_KEY_SLASH,
KEY_RIGHTSHIFT = (EV_KEY << 16) + _imp::_KEY_RIGHTSHIFT,
KEY_KPASTERISK = (EV_KEY << 16) + _imp::_KEY_KPASTERISK,
KEY_LEFTALT = (EV_KEY << 16) + _imp::_KEY_LEFTALT,
KEY_SPACE = (EV_KEY << 16) + _imp::_KEY_SPACE,
KEY_CAPSLOCK = (EV_KEY << 16) + _imp::_KEY_CAPSLOCK,
KEY_F1 = (EV_KEY << 16) + _imp::_KEY_F1,
KEY_F2 = (EV_KEY << 16) + _imp::_KEY_F2,
KEY_F3 = (EV_KEY << 16) + _imp::_KEY_F3,
KEY_F4 = (EV_KEY << 16) + _imp::_KEY_F4,
KEY_F5 = (EV_KEY << 16) + _imp::_KEY_F5,
KEY_F6 = (EV_KEY << 16) + _imp::_KEY_F6,
KEY_F7 = (EV_KEY << 16) + _imp::_KEY_F7,
KEY_F8 = (EV_KEY << 16) + _imp::_KEY_F8,
KEY_F9 = (EV_KEY << 16) + _imp::_KEY_F9,
KEY_F10 = (EV_KEY << 16) + _imp::_KEY_F10,
KEY_NUMLOCK = (EV_KEY << 16) + _imp::_KEY_NUMLOCK,
KEY_SCROLLLOCK = (EV_KEY << 16) + _imp::_KEY_SCROLLLOCK,
KEY_KP7 = (EV_KEY << 16) + _imp::_KEY_KP7,
KEY_KP8 = (EV_KEY << 16) + _imp::_KEY_KP8,
KEY_KP9 = (EV_KEY << 16) + _imp::_KEY_KP9,
KEY_KPMINUS = (EV_KEY << 16) + _imp::_KEY_KPMINUS,
KEY_KP4 = (EV_KEY << 16) + _imp::_KEY_KP4,
KEY_KP5 = (EV_KEY << 16) + _imp::_KEY_KP5,
KEY_KP6 = (EV_KEY << 16) + _imp::_KEY_KP6,
KEY_KPPLUS = (EV_KEY << 16) + _imp::_KEY_KPPLUS,
KEY_KP1 = (EV_KEY << 16) + _imp::_KEY_KP1,
KEY_KP2 = (EV_KEY << 16) + _imp::_KEY_KP2,
KEY_KP3 = (EV_KEY << 16) + _imp::_KEY_KP3,
KEY_KP0 = (EV_KEY << 16) + _imp::_KEY_KP0,
KEY_KPDOT = (EV_KEY << 16) + _imp::_KEY_KPDOT,
KEY_ZENKAKUHANKAKU = (EV_KEY << 16) + _imp::_KEY_ZENKAKUHANKAKU,
KEY_102ND = (EV_KEY << 16) + _imp::_KEY_102ND,
KEY_F11 = (EV_KEY << 16) + _imp::_KEY_F11,
KEY_F12 = (EV_KEY << 16) + _imp::_KEY_F12,
KEY_RO = (EV_KEY << 16) + _imp::_KEY_RO,
KEY_KATAKANA = (EV_KEY << 16) + _imp::_KEY_KATAKANA,
KEY_HIRAGANA = (EV_KEY << 16) + _imp::_KEY_HIRAGANA,
KEY_HENKAN = (EV_KEY << 16) + _imp::_KEY_HENKAN,
KEY_KATAKANAHIRAGANA = (EV_KEY << 16) + _imp::_KEY_KATAKANAHIRAGANA,
KEY_MUHENKAN = (EV_KEY << 16) + _imp::_KEY_MUHENKAN,
KEY_KPJPCOMMA = (EV_KEY << 16) + _imp::_KEY_KPJPCOMMA,
KEY_KPENTER = (EV_KEY << 16) + _imp::_KEY_KPENTER,
KEY_RIGHTCTRL = (EV_KEY << 16) + _imp::_KEY_RIGHTCTRL,
KEY_KPSLASH = (EV_KEY << 16) + _imp::_KEY_KPSLASH,
KEY_SYSRQ = (EV_KEY << 16) + _imp::_KEY_SYSRQ,
KEY_RIGHTALT = (EV_KEY << 16) + _imp::_KEY_RIGHTALT,
KEY_LINEFEED = (EV_KEY << 16) + _imp::_KEY_LINEFEED,
KEY_HOME = (EV_KEY << 16) + _imp::_KEY_HOME,
KEY_UP = (EV_KEY << 16) + _imp::_KEY_UP,
KEY_PAGEUP = (EV_KEY << 16) + _imp::_KEY_PAGEUP,
KEY_LEFT = (EV_KEY << 16) + _imp::_KEY_LEFT,
KEY_RIGHT = (EV_KEY << 16) + _imp::_KEY_RIGHT,
KEY_END = (EV_KEY << 16) + _imp::_KEY_END,
KEY_DOWN = (EV_KEY << 16) + _imp::_KEY_DOWN,
KEY_PAGEDOWN = (EV_KEY << 16) + _imp::_KEY_PAGEDOWN,
KEY_INSERT = (EV_KEY << 16) + _imp::_KEY_INSERT,
KEY_DELETE = (EV_KEY << 16) + _imp::_KEY_DELETE,
KEY_MACRO = (EV_KEY << 16) + _imp::_KEY_MACRO,
KEY_MUTE = (EV_KEY << 16) + _imp::_KEY_MUTE,
KEY_VOLUMEDOWN = (EV_KEY << 16) + _imp::_KEY_VOLUMEDOWN,
KEY_VOLUMEUP = (EV_KEY << 16) + _imp::_KEY_VOLUMEUP,
KEY_POWER = (EV_KEY << 16) + _imp::_KEY_POWER,
KEY_KPEQUAL = (EV_KEY << 16) + _imp::_KEY_KPEQUAL,
KEY_KPPLUSMINUS = (EV_KEY << 16) + _imp::_KEY_KPPLUSMINUS,
KEY_PAUSE = (EV_KEY << 16) + _imp::_KEY_PAUSE,
KEY_SCALE = (EV_KEY << 16) + _imp::_KEY_SCALE,
KEY_KPCOMMA = (EV_KEY << 16) + _imp::_KEY_KPCOMMA,
KEY_HANGEUL = (EV_KEY << 16) + _imp::_KEY_HANGEUL,
KEY_HANGUEL = (EV_KEY << 16) + _imp::_KEY_HANGUEL,
KEY_HANJA = (EV_KEY << 16) + _imp::_KEY_HANJA,
KEY_YEN = (EV_KEY << 16) + _imp::_KEY_YEN,
KEY_LEFTMETA = (EV_KEY << 16) + _imp::_KEY_LEFTMETA,
KEY_RIGHTMETA = (EV_KEY << 16) + _imp::_KEY_RIGHTMETA,
KEY_COMPOSE = (EV_KEY << 16) + _imp::_KEY_COMPOSE,
KEY_STOP = (EV_KEY << 16) + _imp::_KEY_STOP,
KEY_AGAIN = (EV_KEY << 16) + _imp::_KEY_AGAIN,
KEY_PROPS = (EV_KEY << 16) + _imp::_KEY_PROPS,
KEY_UNDO = (EV_KEY << 16) + _imp::_KEY_UNDO,
KEY_FRONT = (EV_KEY << 16) + _imp::_KEY_FRONT,
KEY_COPY = (EV_KEY << 16) + _imp::_KEY_COPY,
KEY_OPEN = (EV_KEY << 16) + _imp::_KEY_OPEN,
KEY_PASTE = (EV_KEY << 16) + _imp::_KEY_PASTE,
KEY_FIND = (EV_KEY << 16) + _imp::_KEY_FIND,
KEY_CUT = (EV_KEY << 16) + _imp::_KEY_CUT,
KEY_HELP = (EV_KEY << 16) + _imp::_KEY_HELP,
KEY_MENU = (EV_KEY << 16) + _imp::_KEY_MENU,
KEY_CALC = (EV_KEY << 16) + _imp::_KEY_CALC,
KEY_SETUP = (EV_KEY << 16) + _imp::_KEY_SETUP,
KEY_SLEEP = (EV_KEY << 16) + _imp::_KEY_SLEEP,
KEY_WAKEUP = (EV_KEY << 16) + _imp::_KEY_WAKEUP,
KEY_FILE = (EV_KEY << 16) + _imp::_KEY_FILE,
KEY_SENDFILE = (EV_KEY << 16) + _imp::_KEY_SENDFILE,
KEY_DELETEFILE = (EV_KEY << 16) + _imp::_KEY_DELETEFILE,
KEY_XFER = (EV_KEY << 16) + _imp::_KEY_XFER,
KEY_PROG1 = (EV_KEY << 16) + _imp::_KEY_PROG1,
KEY_PROG2 = (EV_KEY << 16) + _imp::_KEY_PROG2,
KEY_WWW = (EV_KEY << 16) + _imp::_KEY_WWW,
KEY_MSDOS = (EV_KEY << 16) + _imp::_KEY_MSDOS,
KEY_COFFEE = (EV_KEY << 16) + _imp::_KEY_COFFEE,
KEY_SCREENLOCK = (EV_KEY << 16) + _imp::_KEY_SCREENLOCK,
KEY_DIRECTION = (EV_KEY << 16) + _imp::_KEY_DIRECTION,
KEY_CYCLEWINDOWS = (EV_KEY << 16) + _imp::_KEY_CYCLEWINDOWS,
KEY_MAIL = (EV_KEY << 16) + _imp::_KEY_MAIL,
KEY_BOOKMARKS = (EV_KEY << 16) + _imp::_KEY_BOOKMARKS,
KEY_COMPUTER = (EV_KEY << 16) + _imp::_KEY_COMPUTER,
KEY_BACK = (EV_KEY << 16) + _imp::_KEY_BACK,
KEY_FORWARD = (EV_KEY << 16) + _imp::_KEY_FORWARD,
KEY_CLOSECD = (EV_KEY << 16) + _imp::_KEY_CLOSECD,
KEY_EJECTCD = (EV_KEY << 16) + _imp::_KEY_EJECTCD,
KEY_EJECTCLOSECD = (EV_KEY << 16) + _imp::_KEY_EJECTCLOSECD,
KEY_NEXTSONG = (EV_KEY << 16) + _imp::_KEY_NEXTSONG,
KEY_PLAYPAUSE = (EV_KEY << 16) + _imp::_KEY_PLAYPAUSE,
KEY_PREVIOUSSONG = (EV_KEY << 16) + _imp::_KEY_PREVIOUSSONG,
KEY_STOPCD = (EV_KEY << 16) + _imp::_KEY_STOPCD,
KEY_RECORD = (EV_KEY << 16) + _imp::_KEY_RECORD,
KEY_REWIND = (EV_KEY << 16) + _imp::_KEY_REWIND,
KEY_PHONE = (EV_KEY << 16) + _imp::_KEY_PHONE,
KEY_ISO = (EV_KEY << 16) + _imp::_KEY_ISO,
KEY_CONFIG = (EV_KEY << 16) + _imp::_KEY_CONFIG,
KEY_HOMEPAGE = (EV_KEY << 16) + _imp::_KEY_HOMEPAGE,
KEY_REFRESH = (EV_KEY << 16) + _imp::_KEY_REFRESH,
KEY_EXIT = (EV_KEY << 16) + _imp::_KEY_EXIT,
KEY_MOVE = (EV_KEY << 16) + _imp::_KEY_MOVE,
KEY_EDIT = (EV_KEY << 16) + _imp::_KEY_EDIT,
KEY_SCROLLUP = (EV_KEY << 16) + _imp::_KEY_SCROLLUP,
KEY_SCROLLDOWN = (EV_KEY << 16) + _imp::_KEY_SCROLLDOWN,
KEY_KPLEFTPAREN = (EV_KEY << 16) + _imp::_KEY_KPLEFTPAREN,
KEY_KPRIGHTPAREN = (EV_KEY << 16) + _imp::_KEY_KPRIGHTPAREN,
KEY_NEW = (EV_KEY << 16) + _imp::_KEY_NEW,
KEY_REDO = (EV_KEY << 16) + _imp::_KEY_REDO,
KEY_F13 = (EV_KEY << 16) + _imp::_KEY_F13,
KEY_F14 = (EV_KEY << 16) + _imp::_KEY_F14,
KEY_F15 = (EV_KEY << 16) + _imp::_KEY_F15,
KEY_F16 = (EV_KEY << 16) + _imp::_KEY_F16,
KEY_F17 = (EV_KEY << 16) + _imp::_KEY_F17,
KEY_F18 = (EV_KEY << 16) + _imp::_KEY_F18,
KEY_F19 = (EV_KEY << 16) + _imp::_KEY_F19,
KEY_F20 = (EV_KEY << 16) + _imp::_KEY_F20,
KEY_F21 = (EV_KEY << 16) + _imp::_KEY_F21,
KEY_F22 = (EV_KEY << 16) + _imp::_KEY_F22,
KEY_F23 = (EV_KEY << 16) + _imp::_KEY_F23,
KEY_F24 = (EV_KEY << 16) + _imp::_KEY_F24,
KEY_PLAYCD = (EV_KEY << 16) + _imp::_KEY_PLAYCD,
KEY_PAUSECD = (EV_KEY << 16) + _imp::_KEY_PAUSECD,
KEY_PROG3 = (EV_KEY << 16) + _imp::_KEY_PROG3,
KEY_PROG4 = (EV_KEY << 16) + _imp::_KEY_PROG4,
KEY_DASHBOARD = (EV_KEY << 16) + _imp::_KEY_DASHBOARD,
KEY_SUSPEND = (EV_KEY << 16) + _imp::_KEY_SUSPEND,
KEY_CLOSE = (EV_KEY << 16) + _imp::_KEY_CLOSE,
KEY_PLAY = (EV_KEY << 16) + _imp::_KEY_PLAY,
KEY_FASTFORWARD = (EV_KEY << 16) + _imp::_KEY_FASTFORWARD,
KEY_BASSBOOST = (EV_KEY << 16) + _imp::_KEY_BASSBOOST,
KEY_PRINT = (EV_KEY << 16) + _imp::_KEY_PRINT,
KEY_HP = (EV_KEY << 16) + _imp::_KEY_HP,
KEY_CAMERA = (EV_KEY << 16) + _imp::_KEY_CAMERA,
KEY_SOUND = (EV_KEY << 16) + _imp::_KEY_SOUND,
KEY_QUESTION = (EV_KEY << 16) + _imp::_KEY_QUESTION,
KEY_EMAIL = (EV_KEY << 16) + _imp::_KEY_EMAIL,
KEY_CHAT = (EV_KEY << 16) + _imp::_KEY_CHAT,
KEY_SEARCH = (EV_KEY << 16) + _imp::_KEY_SEARCH,
KEY_CONNECT = (EV_KEY << 16) + _imp::_KEY_CONNECT,
KEY_FINANCE = (EV_KEY << 16) + _imp::_KEY_FINANCE,
KEY_SPORT = (EV_KEY << 16) + _imp::_KEY_SPORT,
KEY_SHOP = (EV_KEY << 16) + _imp::_KEY_SHOP,
KEY_ALTERASE = (EV_KEY << 16) + _imp::_KEY_ALTERASE,
KEY_CANCEL = (EV_KEY << 16) + _imp::_KEY_CANCEL,
KEY_BRIGHTNESSDOWN = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESSDOWN,
KEY_BRIGHTNESSUP = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESSUP,
KEY_MEDIA = (EV_KEY << 16) + _imp::_KEY_MEDIA,
KEY_SWITCHVIDEOMODE = (EV_KEY << 16) + _imp::_KEY_SWITCHVIDEOMODE,
KEY_KBDILLUMTOGGLE = (EV_KEY << 16) + _imp::_KEY_KBDILLUMTOGGLE,
KEY_KBDILLUMDOWN = (EV_KEY << 16) + _imp::_KEY_KBDILLUMDOWN,
KEY_KBDILLUMUP = (EV_KEY << 16) + _imp::_KEY_KBDILLUMUP,
KEY_SEND = (EV_KEY << 16) + _imp::_KEY_SEND,
KEY_REPLY = (EV_KEY << 16) + _imp::_KEY_REPLY,
KEY_FORWARDMAIL = (EV_KEY << 16) + _imp::_KEY_FORWARDMAIL,
KEY_SAVE = (EV_KEY << 16) + _imp::_KEY_SAVE,
KEY_DOCUMENTS = (EV_KEY << 16) + _imp::_KEY_DOCUMENTS,
KEY_BATTERY = (EV_KEY << 16) + _imp::_KEY_BATTERY,
KEY_BLUETOOTH = (EV_KEY << 16) + _imp::_KEY_BLUETOOTH,
KEY_WLAN = (EV_KEY << 16) + _imp::_KEY_WLAN,
KEY_UWB = (EV_KEY << 16) + _imp::_KEY_UWB,
KEY_UNKNOWN = (EV_KEY << 16) + _imp::_KEY_UNKNOWN,
KEY_VIDEO_NEXT = (EV_KEY << 16) + _imp::_KEY_VIDEO_NEXT,
KEY_VIDEO_PREV = (EV_KEY << 16) + _imp::_KEY_VIDEO_PREV,
KEY_BRIGHTNESS_CYCLE = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_CYCLE,
KEY_BRIGHTNESS_AUTO = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_AUTO,
KEY_BRIGHTNESS_ZERO = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_ZERO,
KEY_DISPLAY_OFF = (EV_KEY << 16) + _imp::_KEY_DISPLAY_OFF,
KEY_WWAN = (EV_KEY << 16) + _imp::_KEY_WWAN,
KEY_WIMAX = (EV_KEY << 16) + _imp::_KEY_WIMAX,
KEY_RFKILL = (EV_KEY << 16) + _imp::_KEY_RFKILL,
KEY_MICMUTE = (EV_KEY << 16) + _imp::_KEY_MICMUTE,
BTN_MISC = (EV_BTN << 16) + _imp::_BTN_MISC,
BTN_0 = (EV_BTN << 16) + _imp::_BTN_0,
BTN_1 = (EV_BTN << 16) + _imp::_BTN_1,
BTN_2 = (EV_BTN << 16) + _imp::_BTN_2,
BTN_3 = (EV_BTN << 16) + _imp::_BTN_3,
BTN_4 = (EV_BTN << 16) + _imp::_BTN_4,
BTN_5 = (EV_BTN << 16) + _imp::_BTN_5,
BTN_6 = (EV_BTN << 16) + _imp::_BTN_6,
BTN_7 = (EV_BTN << 16) + _imp::_BTN_7,
BTN_8 = (EV_BTN << 16) + _imp::_BTN_8,
BTN_9 = (EV_BTN << 16) + _imp::_BTN_9,
BTN_MOUSE = (EV_BTN << 16) + _imp::_BTN_MOUSE,
BTN_LEFT = (EV_BTN << 16) + _imp::_BTN_LEFT,
BTN_RIGHT = (EV_BTN << 16) + _imp::_BTN_RIGHT,
BTN_MIDDLE = (EV_BTN << 16) + _imp::_BTN_MIDDLE,
BTN_SIDE = (EV_BTN << 16) + _imp::_BTN_SIDE,
BTN_EXTRA = (EV_BTN << 16) + _imp::_BTN_EXTRA,
BTN_FORWARD = (EV_BTN << 16) + _imp::_BTN_FORWARD,
BTN_BACK = (EV_BTN << 16) + _imp::_BTN_BACK,
BTN_TASK = (EV_BTN << 16) + _imp::_BTN_TASK,
BTN_JOYSTICK = (EV_BTN << 16) + _imp::_BTN_JOYSTICK,
BTN_TRIGGER = (EV_BTN << 16) + _imp::_BTN_TRIGGER,
BTN_THUMB = (EV_BTN << 16) + _imp::_BTN_THUMB,
BTN_THUMB2 = (EV_BTN << 16) + _imp::_BTN_THUMB2,
BTN_TOP = (EV_BTN << 16) + _imp::_BTN_TOP,
BTN_TOP2 = (EV_BTN << 16) + _imp::_BTN_TOP2,
BTN_PINKIE = (EV_BTN << 16) + _imp::_BTN_PINKIE,
BTN_BASE = (EV_BTN << 16) + _imp::_BTN_BASE,
BTN_BASE2 = (EV_BTN << 16) + _imp::_BTN_BASE2,
BTN_BASE3 = (EV_BTN << 16) + _imp::_BTN_BASE3,
BTN_BASE4 = (EV_BTN << 16) + _imp::_BTN_BASE4,
BTN_BASE5 = (EV_BTN << 16) + _imp::_BTN_BASE5,
BTN_BASE6 = (EV_BTN << 16) + _imp::_BTN_BASE6,
BTN_DEAD = (EV_BTN << 16) + _imp::_BTN_DEAD,
BTN_GAMEPAD = (EV_BTN << 16) + _imp::_BTN_GAMEPAD,
BTN_SOUTH = (EV_BTN << 16) + _imp::_BTN_SOUTH,
BTN_A = (EV_BTN << 16) + _imp::_BTN_A,
BTN_EAST = (EV_BTN << 16) + _imp::_BTN_EAST,
BTN_B = (EV_BTN << 16) + _imp::_BTN_B,
BTN_C = (EV_BTN << 16) + _imp::_BTN_C,
BTN_NORTH = (EV_BTN << 16) + _imp::_BTN_NORTH,
BTN_X = (EV_BTN << 16) + _imp::_BTN_X,
BTN_WEST = (EV_BTN << 16) + _imp::_BTN_WEST,
BTN_Y = (EV_BTN << 16) + _imp::_BTN_Y,
BTN_Z = (EV_BTN << 16) + _imp::_BTN_Z,
BTN_TL = (EV_BTN << 16) + _imp::_BTN_TL,
BTN_TR = (EV_BTN << 16) + _imp::_BTN_TR,
BTN_TL2 = (EV_BTN << 16) + _imp::_BTN_TL2,
BTN_TR2 = (EV_BTN << 16) + _imp::_BTN_TR2,
BTN_SELECT = (EV_BTN << 16) + _imp::_BTN_SELECT,
BTN_START = (EV_BTN << 16) + _imp::_BTN_START,
BTN_MODE = (EV_BTN << 16) + _imp::_BTN_MODE,
BTN_THUMBL = (EV_BTN << 16) + _imp::_BTN_THUMBL,
BTN_THUMBR = (EV_BTN << 16) + _imp::_BTN_THUMBR,
BTN_DIGI = (EV_BTN << 16) + _imp::_BTN_DIGI,
BTN_TOOL_PEN = (EV_BTN << 16) + _imp::_BTN_TOOL_PEN,
BTN_TOOL_RUBBER = (EV_BTN << 16) + _imp::_BTN_TOOL_RUBBER,
BTN_TOOL_BRUSH = (EV_BTN << 16) + _imp::_BTN_TOOL_BRUSH,
BTN_TOOL_PENCIL = (EV_BTN << 16) + _imp::_BTN_TOOL_PENCIL,
BTN_TOOL_AIRBRUSH = (EV_BTN << 16) + _imp::_BTN_TOOL_AIRBRUSH,
BTN_TOOL_FINGER = (EV_BTN << 16) + _imp::_BTN_TOOL_FINGER,
BTN_TOOL_MOUSE = (EV_BTN << 16) + _imp::_BTN_TOOL_MOUSE,
BTN_TOOL_LENS = (EV_BTN << 16) + _imp::_BTN_TOOL_LENS,
BTN_TOOL_QUINTTAP = (EV_BTN << 16) + _imp::_BTN_TOOL_QUINTTAP,
BTN_TOUCH = (EV_BTN << 16) + _imp::_BTN_TOUCH,
BTN_STYLUS = (EV_BTN << 16) + _imp::_BTN_STYLUS,
BTN_STYLUS2 = (EV_BTN << 16) + _imp::_BTN_STYLUS2,
BTN_TOOL_DOUBLETAP = (EV_BTN << 16) + _imp::_BTN_TOOL_DOUBLETAP,
BTN_TOOL_TRIPLETAP = (EV_BTN << 16) + _imp::_BTN_TOOL_TRIPLETAP,
BTN_TOOL_QUADTAP = (EV_BTN << 16) + _imp::_BTN_TOOL_QUADTAP,
BTN_WHEEL = (EV_BTN << 16) + _imp::_BTN_WHEEL,
BTN_GEAR_DOWN = (EV_BTN << 16) + _imp::_BTN_GEAR_DOWN,
BTN_GEAR_UP = (EV_BTN << 16) + _imp::_BTN_GEAR_UP,
KEY_OK = (EV_KEY << 16) + _imp::_KEY_OK,
KEY_SELECT = (EV_KEY << 16) + _imp::_KEY_SELECT,
KEY_GOTO = (EV_KEY << 16) + _imp::_KEY_GOTO,
KEY_CLEAR = (EV_KEY << 16) + _imp::_KEY_CLEAR,
KEY_POWER2 = (EV_KEY << 16) + _imp::_KEY_POWER2,
KEY_OPTION = (EV_KEY << 16) + _imp::_KEY_OPTION,
KEY_INFO = (EV_KEY << 16) + _imp::_KEY_INFO,
KEY_TIME = (EV_KEY << 16) + _imp::_KEY_TIME,
KEY_VENDOR = (EV_KEY << 16) + _imp::_KEY_VENDOR,
KEY_ARCHIVE = (EV_KEY << 16) + _imp::_KEY_ARCHIVE,
KEY_PROGRAM = (EV_KEY << 16) + _imp::_KEY_PROGRAM,
KEY_CHANNEL = (EV_KEY << 16) + _imp::_KEY_CHANNEL,
KEY_FAVORITES = (EV_KEY << 16) + _imp::_KEY_FAVORITES,
KEY_EPG = (EV_KEY << 16) + _imp::_KEY_EPG,
KEY_PVR = (EV_KEY << 16) + _imp::_KEY_PVR,
KEY_MHP = (EV_KEY << 16) + _imp::_KEY_MHP,
KEY_LANGUAGE = (EV_KEY << 16) + _imp::_KEY_LANGUAGE,
KEY_TITLE = (EV_KEY << 16) + _imp::_KEY_TITLE,
KEY_SUBTITLE = (EV_KEY << 16) + _imp::_KEY_SUBTITLE,
KEY_ANGLE = (EV_KEY << 16) + _imp::_KEY_ANGLE,
KEY_ZOOM = (EV_KEY << 16) + _imp::_KEY_ZOOM,
KEY_MODE = (EV_KEY << 16) + _imp::_KEY_MODE,
KEY_KEYBOARD = (EV_KEY << 16) + _imp::_KEY_KEYBOARD,
KEY_SCREEN = (EV_KEY << 16) + _imp::_KEY_SCREEN,
KEY_PC = (EV_KEY << 16) + _imp::_KEY_PC,
KEY_TV = (EV_KEY << 16) + _imp::_KEY_TV,
KEY_TV2 = (EV_KEY << 16) + _imp::_KEY_TV2,
KEY_VCR = (EV_KEY << 16) + _imp::_KEY_VCR,
KEY_VCR2 = (EV_KEY << 16) + _imp::_KEY_VCR2,
KEY_SAT = (EV_KEY << 16) + _imp::_KEY_SAT,
KEY_SAT2 = (EV_KEY << 16) + _imp::_KEY_SAT2,
KEY_CD = (EV_KEY << 16) + _imp::_KEY_CD,
KEY_TAPE = (EV_KEY << 16) + _imp::_KEY_TAPE,
KEY_RADIO = (EV_KEY << 16) + _imp::_KEY_RADIO,
KEY_TUNER = (EV_KEY << 16) + _imp::_KEY_TUNER,
KEY_PLAYER = (EV_KEY << 16) + _imp::_KEY_PLAYER,
KEY_TEXT = (EV_KEY << 16) + _imp::_KEY_TEXT,
KEY_DVD = (EV_KEY << 16) + _imp::_KEY_DVD,
KEY_AUX = (EV_KEY << 16) + _imp::_KEY_AUX,
KEY_MP3 = (EV_KEY << 16) + _imp::_KEY_MP3,
KEY_AUDIO = (EV_KEY << 16) + _imp::_KEY_AUDIO,
KEY_VIDEO = (EV_KEY << 16) + _imp::_KEY_VIDEO,
KEY_DIRECTORY = (EV_KEY << 16) + _imp::_KEY_DIRECTORY,
KEY_LIST = (EV_KEY << 16) + _imp::_KEY_LIST,
KEY_MEMO = (EV_KEY << 16) + _imp::_KEY_MEMO,
KEY_CALENDAR = (EV_KEY << 16) + _imp::_KEY_CALENDAR,
KEY_RED = (EV_KEY << 16) + _imp::_KEY_RED,
KEY_GREEN = (EV_KEY << 16) + _imp::_KEY_GREEN,
KEY_YELLOW = (EV_KEY << 16) + _imp::_KEY_YELLOW,
KEY_BLUE = (EV_KEY << 16) + _imp::_KEY_BLUE,
KEY_CHANNELUP = (EV_KEY << 16) + _imp::_KEY_CHANNELUP,
KEY_CHANNELDOWN = (EV_KEY << 16) + _imp::_KEY_CHANNELDOWN,
KEY_FIRST = (EV_KEY << 16) + _imp::_KEY_FIRST,
KEY_LAST = (EV_KEY << 16) + _imp::_KEY_LAST,
KEY_AB = (EV_KEY << 16) + _imp::_KEY_AB,
KEY_NEXT = (EV_KEY << 16) + _imp::_KEY_NEXT,
KEY_RESTART = (EV_KEY << 16) + _imp::_KEY_RESTART,
KEY_SLOW = (EV_KEY << 16) + _imp::_KEY_SLOW,
KEY_SHUFFLE = (EV_KEY << 16) + _imp::_KEY_SHUFFLE,
KEY_BREAK = (EV_KEY << 16) + _imp::_KEY_BREAK,
KEY_PREVIOUS = (EV_KEY << 16) + _imp::_KEY_PREVIOUS,
KEY_DIGITS = (EV_KEY << 16) + _imp::_KEY_DIGITS,
KEY_TEEN = (EV_KEY << 16) + _imp::_KEY_TEEN,
KEY_TWEN = (EV_KEY << 16) + _imp::_KEY_TWEN,
KEY_VIDEOPHONE = (EV_KEY << 16) + _imp::_KEY_VIDEOPHONE,
KEY_GAMES = (EV_KEY << 16) + _imp::_KEY_GAMES,
KEY_ZOOMIN = (EV_KEY << 16) + _imp::_KEY_ZOOMIN,
KEY_ZOOMOUT = (EV_KEY << 16) + _imp::_KEY_ZOOMOUT,
KEY_ZOOMRESET = (EV_KEY << 16) + _imp::_KEY_ZOOMRESET,
KEY_WORDPROCESSOR = (EV_KEY << 16) + _imp::_KEY_WORDPROCESSOR,
KEY_EDITOR = (EV_KEY << 16) + _imp::_KEY_EDITOR,
KEY_SPREADSHEET = (EV_KEY << 16) + _imp::_KEY_SPREADSHEET,
KEY_GRAPHICSEDITOR = (EV_KEY << 16) + _imp::_KEY_GRAPHICSEDITOR,
KEY_PRESENTATION = (EV_KEY << 16) + _imp::_KEY_PRESENTATION,
KEY_DATABASE = (EV_KEY << 16) + _imp::_KEY_DATABASE,
KEY_NEWS = (EV_KEY << 16) + _imp::_KEY_NEWS,
KEY_VOICEMAIL = (EV_KEY << 16) + _imp::_KEY_VOICEMAIL,
KEY_ADDRESSBOOK = (EV_KEY << 16) + _imp::_KEY_ADDRESSBOOK,
KEY_MESSENGER = (EV_KEY << 16) + _imp::_KEY_MESSENGER,
KEY_DISPLAYTOGGLE = (EV_KEY << 16) + _imp::_KEY_DISPLAYTOGGLE,
KEY_BRIGHTNESS_TOGGLE = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_TOGGLE,
KEY_SPELLCHECK = (EV_KEY << 16) + _imp::_KEY_SPELLCHECK,
KEY_LOGOFF = (EV_KEY << 16) + _imp::_KEY_LOGOFF,
KEY_DOLLAR = (EV_KEY << 16) + _imp::_KEY_DOLLAR,
KEY_EURO = (EV_KEY << 16) + _imp::_KEY_EURO,
KEY_FRAMEBACK = (EV_KEY << 16) + _imp::_KEY_FRAMEBACK,
KEY_FRAMEFORWARD = (EV_KEY << 16) + _imp::_KEY_FRAMEFORWARD,
KEY_CONTEXT_MENU = (EV_KEY << 16) + _imp::_KEY_CONTEXT_MENU,
KEY_MEDIA_REPEAT = (EV_KEY << 16) + _imp::_KEY_MEDIA_REPEAT,
KEY_10CHANNELSUP = (EV_KEY << 16) + _imp::_KEY_10CHANNELSUP,
KEY_10CHANNELSDOWN = (EV_KEY << 16) + _imp::_KEY_10CHANNELSDOWN,
KEY_IMAGES = (EV_KEY << 16) + _imp::_KEY_IMAGES,
KEY_DEL_EOL = (EV_KEY << 16) + _imp::_KEY_DEL_EOL,
KEY_DEL_EOS = (EV_KEY << 16) + _imp::_KEY_DEL_EOS,
KEY_INS_LINE = (EV_KEY << 16) + _imp::_KEY_INS_LINE,
KEY_DEL_LINE = (EV_KEY << 16) + _imp::_KEY_DEL_LINE,
KEY_FN = (EV_KEY << 16) + _imp::_KEY_FN,
KEY_FN_ESC = (EV_KEY << 16) + _imp::_KEY_FN_ESC,
KEY_FN_F1 = (EV_KEY << 16) + _imp::_KEY_FN_F1,
KEY_FN_F2 = (EV_KEY << 16) + _imp::_KEY_FN_F2,
KEY_FN_F3 = (EV_KEY << 16) + _imp::_KEY_FN_F3,
KEY_FN_F4 = (EV_KEY << 16) + _imp::_KEY_FN_F4,
KEY_FN_F5 = (EV_KEY << 16) + _imp::_KEY_FN_F5,
KEY_FN_F6 = (EV_KEY << 16) + _imp::_KEY_FN_F6,
KEY_FN_F7 = (EV_KEY << 16) + _imp::_KEY_FN_F7,
KEY_FN_F8 = (EV_KEY << 16) + _imp::_KEY_FN_F8,
KEY_FN_F9 = (EV_KEY << 16) + _imp::_KEY_FN_F9,
KEY_FN_F10 = (EV_KEY << 16) + _imp::_KEY_FN_F10,
KEY_FN_F11 = (EV_KEY << 16) + _imp::_KEY_FN_F11,
KEY_FN_F12 = (EV_KEY << 16) + _imp::_KEY_FN_F12,
KEY_FN_1 = (EV_KEY << 16) + _imp::_KEY_FN_1,
KEY_FN_2 = (EV_KEY << 16) + _imp::_KEY_FN_2,
KEY_FN_D = (EV_KEY << 16) + _imp::_KEY_FN_D,
KEY_FN_E = (EV_KEY << 16) + _imp::_KEY_FN_E,
KEY_FN_F = (EV_KEY << 16) + _imp::_KEY_FN_F,
KEY_FN_S = (EV_KEY << 16) + _imp::_KEY_FN_S,
KEY_FN_B = (EV_KEY << 16) + _imp::_KEY_FN_B,
KEY_BRL_DOT1 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT1,
KEY_BRL_DOT2 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT2,
KEY_BRL_DOT3 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT3,
KEY_BRL_DOT4 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT4,
KEY_BRL_DOT5 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT5,
KEY_BRL_DOT6 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT6,
KEY_BRL_DOT7 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT7,
KEY_BRL_DOT8 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT8,
KEY_BRL_DOT9 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT9,
KEY_BRL_DOT10 = (EV_KEY << 16) + _imp::_KEY_BRL_DOT10,
KEY_NUMERIC_0 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_0,
KEY_NUMERIC_1 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_1,
KEY_NUMERIC_2 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_2,
KEY_NUMERIC_3 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_3,
KEY_NUMERIC_4 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_4,
KEY_NUMERIC_5 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_5,
KEY_NUMERIC_6 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_6,
KEY_NUMERIC_7 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_7,
KEY_NUMERIC_8 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_8,
KEY_NUMERIC_9 = (EV_KEY << 16) + _imp::_KEY_NUMERIC_9,
KEY_NUMERIC_STAR = (EV_KEY << 16) + _imp::_KEY_NUMERIC_STAR,
KEY_NUMERIC_POUND = (EV_KEY << 16) + _imp::_KEY_NUMERIC_POUND,
KEY_CAMERA_FOCUS = (EV_KEY << 16) + _imp::_KEY_CAMERA_FOCUS,
KEY_WPS_BUTTON = (EV_KEY << 16) + _imp::_KEY_WPS_BUTTON,
KEY_TOUCHPAD_TOGGLE = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_TOGGLE,
KEY_TOUCHPAD_ON = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_ON,
KEY_TOUCHPAD_OFF = (EV_KEY << 16) + _imp::_KEY_TOUCHPAD_OFF,
KEY_CAMERA_ZOOMIN = (EV_KEY << 16) + _imp::_KEY_CAMERA_ZOOMIN,
KEY_CAMERA_ZOOMOUT = (EV_KEY << 16) + _imp::_KEY_CAMERA_ZOOMOUT,
KEY_CAMERA_UP = (EV_KEY << 16) + _imp::_KEY_CAMERA_UP,
KEY_CAMERA_DOWN = (EV_KEY << 16) + _imp::_KEY_CAMERA_DOWN,
KEY_CAMERA_LEFT = (EV_KEY << 16) + _imp::_KEY_CAMERA_LEFT,
KEY_CAMERA_RIGHT = (EV_KEY << 16) + _imp::_KEY_CAMERA_RIGHT,
KEY_ATTENDANT_ON = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_ON,
KEY_ATTENDANT_OFF = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_OFF,
KEY_ATTENDANT_TOGGLE = (EV_KEY << 16) + _imp::_KEY_ATTENDANT_TOGGLE,
KEY_LIGHTS_TOGGLE = (EV_KEY << 16) + _imp::_KEY_LIGHTS_TOGGLE,
BTN_DPAD_UP = (EV_BTN << 16) + _imp::_BTN_DPAD_UP,
BTN_DPAD_DOWN = (EV_BTN << 16) + _imp::_BTN_DPAD_DOWN,
BTN_DPAD_LEFT = (EV_BTN << 16) + _imp::_BTN_DPAD_LEFT,
BTN_DPAD_RIGHT = (EV_BTN << 16) + _imp::_BTN_DPAD_RIGHT,
KEY_ALS_TOGGLE = (EV_KEY << 16) + _imp::_KEY_ALS_TOGGLE,
KEY_BUTTONCONFIG = (EV_KEY << 16) + _imp::_KEY_BUTTONCONFIG,
KEY_TASKMANAGER = (EV_KEY << 16) + _imp::_KEY_TASKMANAGER,
KEY_JOURNAL = (EV_KEY << 16) + _imp::_KEY_JOURNAL,
KEY_CONTROLPANEL = (EV_KEY << 16) + _imp::_KEY_CONTROLPANEL,
KEY_APPSELECT = (EV_KEY << 16) + _imp::_KEY_APPSELECT,
KEY_SCREENSAVER = (EV_KEY << 16) + _imp::_KEY_SCREENSAVER,
KEY_VOICECOMMAND = (EV_KEY << 16) + _imp::_KEY_VOICECOMMAND,
KEY_BRIGHTNESS_MIN = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_MIN,
KEY_BRIGHTNESS_MAX = (EV_KEY << 16) + _imp::_KEY_BRIGHTNESS_MAX,
BTN_TRIGGER_HAPPY = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY,
BTN_TRIGGER_HAPPY1 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY1,
BTN_TRIGGER_HAPPY2 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY2,
BTN_TRIGGER_HAPPY3 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY3,
BTN_TRIGGER_HAPPY4 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY4,
BTN_TRIGGER_HAPPY5 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY5,
BTN_TRIGGER_HAPPY6 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY6,
BTN_TRIGGER_HAPPY7 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY7,
BTN_TRIGGER_HAPPY8 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY8,
BTN_TRIGGER_HAPPY9 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY9,
BTN_TRIGGER_HAPPY10 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY10,
BTN_TRIGGER_HAPPY11 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY11,
BTN_TRIGGER_HAPPY12 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY12,
BTN_TRIGGER_HAPPY13 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY13,
BTN_TRIGGER_HAPPY14 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY14,
BTN_TRIGGER_HAPPY15 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY15,
BTN_TRIGGER_HAPPY16 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY16,
BTN_TRIGGER_HAPPY17 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY17,
BTN_TRIGGER_HAPPY18 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY18,
BTN_TRIGGER_HAPPY19 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY19,
BTN_TRIGGER_HAPPY20 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY20,
BTN_TRIGGER_HAPPY21 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY21,
BTN_TRIGGER_HAPPY22 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY22,
BTN_TRIGGER_HAPPY23 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY23,
BTN_TRIGGER_HAPPY24 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY24,
BTN_TRIGGER_HAPPY25 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY25,
BTN_TRIGGER_HAPPY26 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY26,
BTN_TRIGGER_HAPPY27 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY27,
BTN_TRIGGER_HAPPY28 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY28,
BTN_TRIGGER_HAPPY29 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY29,
BTN_TRIGGER_HAPPY30 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY30,
BTN_TRIGGER_HAPPY31 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY31,
BTN_TRIGGER_HAPPY32 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY32,
BTN_TRIGGER_HAPPY33 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY33,
BTN_TRIGGER_HAPPY34 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY34,
BTN_TRIGGER_HAPPY35 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY35,
BTN_TRIGGER_HAPPY36 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY36,
BTN_TRIGGER_HAPPY37 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY37,
BTN_TRIGGER_HAPPY38 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY38,
BTN_TRIGGER_HAPPY39 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY39,
BTN_TRIGGER_HAPPY40 = (EV_BTN << 16) + _imp::_BTN_TRIGGER_HAPPY40,
KEY_MIN_INTERESTING = (EV_KEY << 16) + _imp::_KEY_MIN_INTERESTING,
KEY_MAX = (EV_KEY << 16) + _imp::_KEY_MAX,
KEY_CNT = (EV_KEY << 16) + _imp::_KEY_CNT,
REL_X = (EV_REL << 16) + _imp::_REL_X,
REL_Y = (EV_REL << 16) + _imp::_REL_Y,
REL_Z = (EV_REL << 16) + _imp::_REL_Z,
REL_RX = (EV_REL << 16) + _imp::_REL_RX,
REL_RY = (EV_REL << 16) + _imp::_REL_RY,
REL_RZ = (EV_REL << 16) + _imp::_REL_RZ,
REL_HWHEEL = (EV_REL << 16) + _imp::_REL_HWHEEL,
REL_DIAL = (EV_REL << 16) + _imp::_REL_DIAL,
REL_WHEEL = (EV_REL << 16) + _imp::_REL_WHEEL,
REL_MISC = (EV_REL << 16) + _imp::_REL_MISC,
REL_MAX = (EV_REL << 16) + _imp::_REL_MAX,
REL_CNT = (EV_REL << 16) + _imp::_REL_CNT,
ABS_X = (EV_ABS << 16) + _imp::_ABS_X,
ABS_Y = (EV_ABS << 16) + _imp::_ABS_Y,
ABS_Z = (EV_ABS << 16) + _imp::_ABS_Z,
ABS_RX = (EV_ABS << 16) + _imp::_ABS_RX,
ABS_RY = (EV_ABS << 16) + _imp::_ABS_RY,
ABS_RZ = (EV_ABS << 16) + _imp::_ABS_RZ,
ABS_THROTTLE = (EV_ABS << 16) + _imp::_ABS_THROTTLE,
ABS_RUDDER = (EV_ABS << 16) + _imp::_ABS_RUDDER,
ABS_WHEEL = (EV_ABS << 16) + _imp::_ABS_WHEEL,
ABS_GAS = (EV_ABS << 16) + _imp::_ABS_GAS,
ABS_BRAKE = (EV_ABS << 16) + _imp::_ABS_BRAKE,
ABS_HAT0X = (EV_ABS << 16) + _imp::_ABS_HAT0X,
ABS_HAT0Y = (EV_ABS << 16) + _imp::_ABS_HAT0Y,
ABS_HAT1X = (EV_ABS << 16) + _imp::_ABS_HAT1X,
ABS_HAT1Y = (EV_ABS << 16) + _imp::_ABS_HAT1Y,
ABS_HAT2X = (EV_ABS << 16) + _imp::_ABS_HAT2X,
ABS_HAT2Y = (EV_ABS << 16) + _imp::_ABS_HAT2Y,
ABS_HAT3X = (EV_ABS << 16) + _imp::_ABS_HAT3X,
ABS_HAT3Y = (EV_ABS << 16) + _imp::_ABS_HAT3Y,
ABS_PRESSURE = (EV_ABS << 16) + _imp::_ABS_PRESSURE,
ABS_DISTANCE = (EV_ABS << 16) + _imp::_ABS_DISTANCE,
ABS_TILT_X = (EV_ABS << 16) + _imp::_ABS_TILT_X,
ABS_TILT_Y = (EV_ABS << 16) + _imp::_ABS_TILT_Y,
ABS_TOOL_WIDTH = (EV_ABS << 16) + _imp::_ABS_TOOL_WIDTH,
ABS_VOLUME = (EV_ABS << 16) + _imp::_ABS_VOLUME,
ABS_MISC = (EV_ABS << 16) + _imp::_ABS_MISC,
ABS_MT_SLOT = (EV_ABS << 16) + _imp::_ABS_MT_SLOT,
ABS_MT_TOUCH_MAJOR = (EV_ABS << 16) + _imp::_ABS_MT_TOUCH_MAJOR,
ABS_MT_TOUCH_MINOR = (EV_ABS << 16) + _imp::_ABS_MT_TOUCH_MINOR,
ABS_MT_WIDTH_MAJOR = (EV_ABS << 16) + _imp::_ABS_MT_WIDTH_MAJOR,
ABS_MT_WIDTH_MINOR = (EV_ABS << 16) + _imp::_ABS_MT_WIDTH_MINOR,
ABS_MT_ORIENTATION = (EV_ABS << 16) + _imp::_ABS_MT_ORIENTATION,
ABS_MT_POSITION_X = (EV_ABS << 16) + _imp::_ABS_MT_POSITION_X,
ABS_MT_POSITION_Y = (EV_ABS << 16) + _imp::_ABS_MT_POSITION_Y,
ABS_MT_TOOL_TYPE = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_TYPE,
ABS_MT_BLOB_ID = (EV_ABS << 16) + _imp::_ABS_MT_BLOB_ID,
ABS_MT_TRACKING_ID = (EV_ABS << 16) + _imp::_ABS_MT_TRACKING_ID,
ABS_MT_PRESSURE = (EV_ABS << 16) + _imp::_ABS_MT_PRESSURE,
ABS_MT_DISTANCE = (EV_ABS << 16) + _imp::_ABS_MT_DISTANCE,
ABS_MT_TOOL_X = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_X,
ABS_MT_TOOL_Y = (EV_ABS << 16) + _imp::_ABS_MT_TOOL_Y,
ABS_MAX = (EV_ABS << 16) + _imp::_ABS_MAX,
ABS_CNT = (EV_ABS << 16) + _imp::_ABS_CNT,
};

const std::map<event, std::string> event_name =
{
{ KEY_RESERVED, "KEY_RESERVED" },
{ KEY_ESC, "KEY_ESC" },
{ KEY_1, "KEY_1" },
{ KEY_2, "KEY_2" },
{ KEY_3, "KEY_3" },
{ KEY_4, "KEY_4" },
{ KEY_5, "KEY_5" },
{ KEY_6, "KEY_6" },
{ KEY_7, "KEY_7" },
{ KEY_8, "KEY_8" },
{ KEY_9, "KEY_9" },
{ KEY_0, "KEY_0" },
{ KEY_MINUS, "KEY_MINUS" },
{ KEY_EQUAL, "KEY_EQUAL" },
{ KEY_BACKSPACE, "KEY_BACKSPACE" },
{ KEY_TAB, "KEY_TAB" },
{ KEY_Q, "KEY_Q" },
{ KEY_W, "KEY_W" },
{ KEY_E, "KEY_E" },
{ KEY_R, "KEY_R" },
{ KEY_T, "KEY_T" },
{ KEY_Y, "KEY_Y" },
{ KEY_U, "KEY_U" },
{ KEY_I, "KEY_I" },
{ KEY_O, "KEY_O" },
{ KEY_P, "KEY_P" },
{ KEY_LEFTBRACE, "KEY_LEFTBRACE" },
{ KEY_RIGHTBRACE, "KEY_RIGHTBRACE" },
{ KEY_ENTER, "KEY_ENTER" },
{ KEY_LEFTCTRL, "KEY_LEFTCTRL" },
{ KEY_A, "KEY_A" },
{ KEY_S, "KEY_S" },
{ KEY_D, "KEY_D" },
{ KEY_F, "KEY_F" },
{ KEY_G, "KEY_G" },
{ KEY_H, "KEY_H" },
{ KEY_J, "KEY_J" },
{ KEY_K, "KEY_K" },
{ KEY_L, "KEY_L" },
{ KEY_SEMICOLON, "KEY_SEMICOLON" },
{ KEY_APOSTROPHE, "KEY_APOSTROPHE" },
{ KEY_GRAVE, "KEY_GRAVE" },
{ KEY_LEFTSHIFT, "KEY_LEFTSHIFT" },
{ KEY_BACKSLASH, "KEY_BACKSLASH" },
{ KEY_Z, "KEY_Z" },
{ KEY_X, "KEY_X" },
{ KEY_C, "KEY_C" },
{ KEY_V, "KEY_V" },
{ KEY_B, "KEY_B" },
{ KEY_N, "KEY_N" },
{ KEY_M, "KEY_M" },
{ KEY_COMMA, "KEY_COMMA" },
{ KEY_DOT, "KEY_DOT" },
{ KEY_SLASH, "KEY_SLASH" },
{ KEY_RIGHTSHIFT, "KEY_RIGHTSHIFT" },
{ KEY_KPASTERISK, "KEY_KPASTERISK" },
{ KEY_LEFTALT, "KEY_LEFTALT" },
{ KEY_SPACE, "KEY_SPACE" },
{ KEY_CAPSLOCK, "KEY_CAPSLOCK" },
{ KEY_F1, "KEY_F1" },
{ KEY_F2, "KEY_F2" },
{ KEY_F3, "KEY_F3" },
{ KEY_F4, "KEY_F4" },
{ KEY_F5, "KEY_F5" },
{ KEY_F6, "KEY_F6" },
{ KEY_F7, "KEY_F7" },
{ KEY_F8, "KEY_F8" },
{ KEY_F9, "KEY_F9" },
{ KEY_F10, "KEY_F10" },
{ KEY_NUMLOCK, "KEY_NUMLOCK" },
{ KEY_SCROLLLOCK, "KEY_SCROLLLOCK" },
{ KEY_KP7, "KEY_KP7" },
{ KEY_KP8, "KEY_KP8" },
{ KEY_KP9, "KEY_KP9" },
{ KEY_KPMINUS, "KEY_KPMINUS" },
{ KEY_KP4, "KEY_KP4" },
{ KEY_KP5, "KEY_KP5" },
{ KEY_KP6, "KEY_KP6" },
{ KEY_KPPLUS, "KEY_KPPLUS" },
{ KEY_KP1, "KEY_KP1" },
{ KEY_KP2, "KEY_KP2" },
{ KEY_KP3, "KEY_KP3" },
{ KEY_KP0, "KEY_KP0" },
{ KEY_KPDOT, "KEY_KPDOT" },
{ KEY_ZENKAKUHANKAKU, "KEY_ZENKAKUHANKAKU" },
{ KEY_102ND, "KEY_102ND" },
{ KEY_F11, "KEY_F11" },
{ KEY_F12, "KEY_F12" },
{ KEY_RO, "KEY_RO" },
{ KEY_KATAKANA, "KEY_KATAKANA" },
{ KEY_HIRAGANA, "KEY_HIRAGANA" },
{ KEY_HENKAN, "KEY_HENKAN" },
{ KEY_KATAKANAHIRAGANA, "KEY_KATAKANAHIRAGANA" },
{ KEY_MUHENKAN, "KEY_MUHENKAN" },
{ KEY_KPJPCOMMA, "KEY_KPJPCOMMA" },
{ KEY_KPENTER, "KEY_KPENTER" },
{ KEY_RIGHTCTRL, "KEY_RIGHTCTRL" },
{ KEY_KPSLASH, "KEY_KPSLASH" },
{ KEY_SYSRQ, "KEY_SYSRQ" },
{ KEY_RIGHTALT, "KEY_RIGHTALT" },
{ KEY_LINEFEED, "KEY_LINEFEED" },
{ KEY_HOME, "KEY_HOME" },
{ KEY_UP, "KEY_UP" },
{ KEY_PAGEUP, "KEY_PAGEUP" },
{ KEY_LEFT, "KEY_LEFT" },
{ KEY_RIGHT, "KEY_RIGHT" },
{ KEY_END, "KEY_END" },
{ KEY_DOWN, "KEY_DOWN" },
{ KEY_PAGEDOWN, "KEY_PAGEDOWN" },
{ KEY_INSERT, "KEY_INSERT" },
{ KEY_DELETE, "KEY_DELETE" },
{ KEY_MACRO, "KEY_MACRO" },
{ KEY_MUTE, "KEY_MUTE" },
{ KEY_VOLUMEDOWN, "KEY_VOLUMEDOWN" },
{ KEY_VOLUMEUP, "KEY_VOLUMEUP" },
{ KEY_POWER, "KEY_POWER" },
{ KEY_KPEQUAL, "KEY_KPEQUAL" },
{ KEY_KPPLUSMINUS, "KEY_KPPLUSMINUS" },
{ KEY_PAUSE, "KEY_PAUSE" },
{ KEY_SCALE, "KEY_SCALE" },
{ KEY_KPCOMMA, "KEY_KPCOMMA" },
{ KEY_HANGEUL, "KEY_HANGEUL" },
{ KEY_HANGUEL, "KEY_HANGUEL" },
{ KEY_HANJA, "KEY_HANJA" },
{ KEY_YEN, "KEY_YEN" },
{ KEY_LEFTMETA, "KEY_LEFTMETA" },
{ KEY_RIGHTMETA, "KEY_RIGHTMETA" },
{ KEY_COMPOSE, "KEY_COMPOSE" },
{ KEY_STOP, "KEY_STOP" },
{ KEY_AGAIN, "KEY_AGAIN" },
{ KEY_PROPS, "KEY_PROPS" },
{ KEY_UNDO, "KEY_UNDO" },
{ KEY_FRONT, "KEY_FRONT" },
{ KEY_COPY, "KEY_COPY" },
{ KEY_OPEN, "KEY_OPEN" },
{ KEY_PASTE, "KEY_PASTE" },
{ KEY_FIND, "KEY_FIND" },
{ KEY_CUT, "KEY_CUT" },
{ KEY_HELP, "KEY_HELP" },
{ KEY_MENU, "KEY_MENU" },
{ KEY_CALC, "KEY_CALC" },
{ KEY_SETUP, "KEY_SETUP" },
{ KEY_SLEEP, "KEY_SLEEP" },
{ KEY_WAKEUP, "KEY_WAKEUP" },
{ KEY_FILE, "KEY_FILE" },
{ KEY_SENDFILE, "KEY_SENDFILE" },
{ KEY_DELETEFILE, "KEY_DELETEFILE" },
{ KEY_XFER, "KEY_XFER" },
{ KEY_PROG1, "KEY_PROG1" },
{ KEY_PROG2, "KEY_PROG2" },
{ KEY_WWW, "KEY_WWW" },
{ KEY_MSDOS, "KEY_MSDOS" },
{ KEY_COFFEE, "KEY_COFFEE" },
{ KEY_SCREENLOCK, "KEY_SCREENLOCK" },
{ KEY_DIRECTION, "KEY_DIRECTION" },
{ KEY_CYCLEWINDOWS, "KEY_CYCLEWINDOWS" },
{ KEY_MAIL, "KEY_MAIL" },
{ KEY_BOOKMARKS, "KEY_BOOKMARKS" },
{ KEY_COMPUTER, "KEY_COMPUTER" },
{ KEY_BACK, "KEY_BACK" },
{ KEY_FORWARD, "KEY_FORWARD" },
{ KEY_CLOSECD, "KEY_CLOSECD" },
{ KEY_EJECTCD, "KEY_EJECTCD" },
{ KEY_EJECTCLOSECD, "KEY_EJECTCLOSECD" },
{ KEY_NEXTSONG, "KEY_NEXTSONG" },
{ KEY_PLAYPAUSE, "KEY_PLAYPAUSE" },
{ KEY_PREVIOUSSONG, "KEY_PREVIOUSSONG" },
{ KEY_STOPCD, "KEY_STOPCD" },
{ KEY_RECORD, "KEY_RECORD" },
{ KEY_REWIND, "KEY_REWIND" },
{ KEY_PHONE, "KEY_PHONE" },
{ KEY_ISO, "KEY_ISO" },
{ KEY_CONFIG, "KEY_CONFIG" },
{ KEY_HOMEPAGE, "KEY_HOMEPAGE" },
{ KEY_REFRESH, "KEY_REFRESH" },
{ KEY_EXIT, "KEY_EXIT" },
{ KEY_MOVE, "KEY_MOVE" },
{ KEY_EDIT, "KEY_EDIT" },
{ KEY_SCROLLUP, "KEY_SCROLLUP" },
{ KEY_SCROLLDOWN, "KEY_SCROLLDOWN" },
{ KEY_KPLEFTPAREN, "KEY_KPLEFTPAREN" },
{ KEY_KPRIGHTPAREN, "KEY_KPRIGHTPAREN" },
{ KEY_NEW, "KEY_NEW" },
{ KEY_REDO, "KEY_REDO" },
{ KEY_F13, "KEY_F13" },
{ KEY_F14, "KEY_F14" },
{ KEY_F15, "KEY_F15" },
{ KEY_F16, "KEY_F16" },
{ KEY_F17, "KEY_F17" },
{ KEY_F18, "KEY_F18" },
{ KEY_F19, "KEY_F19" },
{ KEY_F20, "KEY_F20" },
{ KEY_F21, "KEY_F21" },
{ KEY_F22, "KEY_F22" },
{ KEY_F23, "KEY_F23" },
{ KEY_F24, "KEY_F24" },
{ KEY_PLAYCD, "KEY_PLAYCD" },
{ KEY_PAUSECD, "KEY_PAUSECD" },
{ KEY_PROG3, "KEY_PROG3" },
{ KEY_PROG4, "KEY_PROG4" },
{ KEY_DASHBOARD, "KEY_DASHBOARD" },
{ KEY_SUSPEND, "KEY_SUSPEND" },
{ KEY_CLOSE, "KEY_CLOSE" },
{ KEY_PLAY, "KEY_PLAY" },
{ KEY_FASTFORWARD, "KEY_FASTFORWARD" },
{ KEY_BASSBOOST, "KEY_BASSBOOST" },
{ KEY_PRINT, "KEY_PRINT" },
{ KEY_HP, "KEY_HP" },
{ KEY_CAMERA, "KEY_CAMERA" },
{ KEY_SOUND, "KEY_SOUND" },
{ KEY_QUESTION, "KEY_QUESTION" },
{ KEY_EMAIL, "KEY_EMAIL" },
{ KEY_CHAT, "KEY_CHAT" },
{ KEY_SEARCH, "KEY_SEARCH" },
{ KEY_CONNECT, "KEY_CONNECT" },
{ KEY_FINANCE, "KEY_FINANCE" },
{ KEY_SPORT, "KEY_SPORT" },
{ KEY_SHOP, "KEY_SHOP" },
{ KEY_ALTERASE, "KEY_ALTERASE" },
{ KEY_CANCEL, "KEY_CANCEL" },
{ KEY_BRIGHTNESSDOWN, "KEY_BRIGHTNESSDOWN" },
{ KEY_BRIGHTNESSUP, "KEY_BRIGHTNESSUP" },
{ KEY_MEDIA, "KEY_MEDIA" },
{ KEY_SWITCHVIDEOMODE, "KEY_SWITCHVIDEOMODE" },
{ KEY_KBDILLUMTOGGLE, "KEY_KBDILLUMTOGGLE" },
{ KEY_KBDILLUMDOWN, "KEY_KBDILLUMDOWN" },
{ KEY_KBDILLUMUP, "KEY_KBDILLUMUP" },
{ KEY_SEND, "KEY_SEND" },
{ KEY_REPLY, "KEY_REPLY" },
{ KEY_FORWARDMAIL, "KEY_FORWARDMAIL" },
{ KEY_SAVE, "KEY_SAVE" },
{ KEY_DOCUMENTS, "KEY_DOCUMENTS" },
{ KEY_BATTERY, "KEY_BATTERY" },
{ KEY_BLUETOOTH, "KEY_BLUETOOTH" },
{ KEY_WLAN, "KEY_WLAN" },
{ KEY_UWB, "KEY_UWB" },
{ KEY_UNKNOWN, "KEY_UNKNOWN" },
{ KEY_VIDEO_NEXT, "KEY_VIDEO_NEXT" },
{ KEY_VIDEO_PREV, "KEY_VIDEO_PREV" },
{ KEY_BRIGHTNESS_CYCLE, "KEY_BRIGHTNESS_CYCLE" },
{ KEY_BRIGHTNESS_AUTO, "KEY_BRIGHTNESS_AUTO" },
{ KEY_BRIGHTNESS_ZERO, "KEY_BRIGHTNESS_ZERO" },
{ KEY_DISPLAY_OFF, "KEY_DISPLAY_OFF" },
{ KEY_WWAN, "KEY_WWAN" },
{ KEY_WIMAX, "KEY_WIMAX" },
{ KEY_RFKILL, "KEY_RFKILL" },
{ KEY_MICMUTE, "KEY_MICMUTE" },
{ BTN_MISC, "BTN_MISC" },
{ BTN_0, "BTN_0" },
{ BTN_1, "BTN_1" },
{ BTN_2, "BTN_2" },
{ BTN_3, "BTN_3" },
{ BTN_4, "BTN_4" },
{ BTN_5, "BTN_5" },
{ BTN_6, "BTN_6" },
{ BTN_7, "BTN_7" },
{ BTN_8, "BTN_8" },
{ BTN_9, "BTN_9" },
{ BTN_MOUSE, "BTN_MOUSE" },
{ BTN_LEFT, "BTN_LEFT" },
{ BTN_RIGHT, "BTN_RIGHT" },
{ BTN_MIDDLE, "BTN_MIDDLE" },
{ BTN_SIDE, "BTN_SIDE" },
{ BTN_EXTRA, "BTN_EXTRA" },
{ BTN_FORWARD, "BTN_FORWARD" },
{ BTN_BACK, "BTN_BACK" },
{ BTN_TASK, "BTN_TASK" },
{ BTN_JOYSTICK, "BTN_JOYSTICK" },
{ BTN_TRIGGER, "BTN_TRIGGER" },
{ BTN_THUMB, "BTN_THUMB" },
{ BTN_THUMB2, "BTN_THUMB2" },
{ BTN_TOP, "BTN_TOP" },
{ BTN_TOP2, "BTN_TOP2" },
{ BTN_PINKIE, "BTN_PINKIE" },
{ BTN_BASE, "BTN_BASE" },
{ BTN_BASE2, "BTN_BASE2" },
{ BTN_BASE3, "BTN_BASE3" },
{ BTN_BASE4, "BTN_BASE4" },
{ BTN_BASE5, "BTN_BASE5" },
{ BTN_BASE6, "BTN_BASE6" },
{ BTN_DEAD, "BTN_DEAD" },
{ BTN_GAMEPAD, "BTN_GAMEPAD" },
{ BTN_SOUTH, "BTN_SOUTH" },
{ BTN_A, "BTN_A" },
{ BTN_EAST, "BTN_EAST" },
{ BTN_B, "BTN_B" },
{ BTN_C, "BTN_C" },
{ BTN_NORTH, "BTN_NORTH" },
{ BTN_X, "BTN_X" },
{ BTN_WEST, "BTN_WEST" },
{ BTN_Y, "BTN_Y" },
{ BTN_Z, "BTN_Z" },
{ BTN_TL, "BTN_TL" },
{ BTN_TR, "BTN_TR" },
{ BTN_TL2, "BTN_TL2" },
{ BTN_TR2, "BTN_TR2" },
{ BTN_SELECT, "BTN_SELECT" },
{ BTN_START, "BTN_START" },
{ BTN_MODE, "BTN_MODE" },
{ BTN_THUMBL, "BTN_THUMBL" },
{ BTN_THUMBR, "BTN_THUMBR" },
{ BTN_DIGI, "BTN_DIGI" },
{ BTN_TOOL_PEN, "BTN_TOOL_PEN" },
{ BTN_TOOL_RUBBER, "BTN_TOOL_RUBBER" },
{ BTN_TOOL_BRUSH, "BTN_TOOL_BRUSH" },
{ BTN_TOOL_PENCIL, "BTN_TOOL_PENCIL" },
{ BTN_TOOL_AIRBRUSH, "BTN_TOOL_AIRBRUSH" },
{ BTN_TOOL_FINGER, "BTN_TOOL_FINGER" },
{ BTN_TOOL_MOUSE, "BTN_TOOL_MOUSE" },
{ BTN_TOOL_LENS, "BTN_TOOL_LENS" },
{ BTN_TOOL_QUINTTAP, "BTN_TOOL_QUINTTAP" },
{ BTN_TOUCH, "BTN_TOUCH" },
{ BTN_STYLUS, "BTN_STYLUS" },
{ BTN_STYLUS2, "BTN_STYLUS2" },
{ BTN_TOOL_DOUBLETAP, "BTN_TOOL_DOUBLETAP" },
{ BTN_TOOL_TRIPLETAP, "BTN_TOOL_TRIPLETAP" },
{ BTN_TOOL_QUADTAP, "BTN_TOOL_QUADTAP" },
{ BTN_WHEEL, "BTN_WHEEL" },
{ BTN_GEAR_DOWN, "BTN_GEAR_DOWN" },
{ BTN_GEAR_UP, "BTN_GEAR_UP" },
{ KEY_OK, "KEY_OK" },
{ KEY_SELECT, "KEY_SELECT" },
{ KEY_GOTO, "KEY_GOTO" },
{ KEY_CLEAR, "KEY_CLEAR" },
{ KEY_POWER2, "KEY_POWER2" },
{ KEY_OPTION, "KEY_OPTION" },
{ KEY_INFO, "KEY_INFO" },
{ KEY_TIME, "KEY_TIME" },
{ KEY_VENDOR, "KEY_VENDOR" },
{ KEY_ARCHIVE, "KEY_ARCHIVE" },
{ KEY_PROGRAM, "KEY_PROGRAM" },
{ KEY_CHANNEL, "KEY_CHANNEL" },
{ KEY_FAVORITES, "KEY_FAVORITES" },
{ KEY_EPG, "KEY_EPG" },
{ KEY_PVR, "KEY_PVR" },
{ KEY_MHP, "KEY_MHP" },
{ KEY_LANGUAGE, "KEY_LANGUAGE" },
{ KEY_TITLE, "KEY_TITLE" },
{ KEY_SUBTITLE, "KEY_SUBTITLE" },
{ KEY_ANGLE, "KEY_ANGLE" },
{ KEY_ZOOM, "KEY_ZOOM" },
{ KEY_MODE, "KEY_MODE" },
{ KEY_KEYBOARD, "KEY_KEYBOARD" },
{ KEY_SCREEN, "KEY_SCREEN" },
{ KEY_PC, "KEY_PC" },
{ KEY_TV, "KEY_TV" },
{ KEY_TV2, "KEY_TV2" },
{ KEY_VCR, "KEY_VCR" },
{ KEY_VCR2, "KEY_VCR2" },
{ KEY_SAT, "KEY_SAT" },
{ KEY_SAT2, "KEY_SAT2" },
{ KEY_CD, "KEY_CD" },
{ KEY_TAPE, "KEY_TAPE" },
{ KEY_RADIO, "KEY_RADIO" },
{ KEY_TUNER, "KEY_TUNER" },
{ KEY_PLAYER, "KEY_PLAYER" },
{ KEY_TEXT, "KEY_TEXT" },
{ KEY_DVD, "KEY_DVD" },
{ KEY_AUX, "KEY_AUX" },
{ KEY_MP3, "KEY_MP3" },
{ KEY_AUDIO, "KEY_AUDIO" },
{ KEY_VIDEO, "KEY_VIDEO" },
{ KEY_DIRECTORY, "KEY_DIRECTORY" },
{ KEY_LIST, "KEY_LIST" },
{ KEY_MEMO, "KEY_MEMO" },
{ KEY_CALENDAR, "KEY_CALENDAR" },
{ KEY_RED, "KEY_RED" },
{ KEY_GREEN, "KEY_GREEN" },
{ KEY_YELLOW, "KEY_YELLOW" },
{ KEY_BLUE, "KEY_BLUE" },
{ KEY_CHANNELUP, "KEY_CHANNELUP" },
{ KEY_CHANNELDOWN, "KEY_CHANNELDOWN" },
{ KEY_FIRST, "KEY_FIRST" },
{ KEY_LAST, "KEY_LAST" },
{ KEY_AB, "KEY_AB" },
{ KEY_NEXT, "KEY_NEXT" },
{ KEY_RESTART, "KEY_RESTART" },
{ KEY_SLOW, "KEY_SLOW" },
{ KEY_SHUFFLE, "KEY_SHUFFLE" },
{ KEY_BREAK, "KEY_BREAK" },
{ KEY_PREVIOUS, "KEY_PREVIOUS" },
{ KEY_DIGITS, "KEY_DIGITS" },
{ KEY_TEEN, "KEY_TEEN" },
{ KEY_TWEN, "KEY_TWEN" },
{ KEY_VIDEOPHONE, "KEY_VIDEOPHONE" },
{ KEY_GAMES, "KEY_GAMES" },
{ KEY_ZOOMIN, "KEY_ZOOMIN" },
{ KEY_ZOOMOUT, "KEY_ZOOMOUT" },
{ KEY_ZOOMRESET, "KEY_ZOOMRESET" },
{ KEY_WORDPROCESSOR, "KEY_WORDPROCESSOR" },
{ KEY_EDITOR, "KEY_EDITOR" },
{ KEY_SPREADSHEET, "KEY_SPREADSHEET" },
{ KEY_GRAPHICSEDITOR, "KEY_GRAPHICSEDITOR" },
{ KEY_PRESENTATION, "KEY_PRESENTATION" },
{ KEY_DATABASE, "KEY_DATABASE" },
{ KEY_NEWS, "KEY_NEWS" },
{ KEY_VOICEMAIL, "KEY_VOICEMAIL" },
{ KEY_ADDRESSBOOK, "KEY_ADDRESSBOOK" },
{ KEY_MESSENGER, "KEY_MESSENGER" },
{ KEY_DISPLAYTOGGLE, "KEY_DISPLAYTOGGLE" },
{ KEY_BRIGHTNESS_TOGGLE, "KEY_BRIGHTNESS_TOGGLE" },
{ KEY_SPELLCHECK, "KEY_SPELLCHECK" },
{ KEY_LOGOFF, "KEY_LOGOFF" },
{ KEY_DOLLAR, "KEY_DOLLAR" },
{ KEY_EURO, "KEY_EURO" },
{ KEY_FRAMEBACK, "KEY_FRAMEBACK" },
{ KEY_FRAMEFORWARD, "KEY_FRAMEFORWARD" },
{ KEY_CONTEXT_MENU, "KEY_CONTEXT_MENU" },
{ KEY_MEDIA_REPEAT, "KEY_MEDIA_REPEAT" },
{ KEY_10CHANNELSUP, "KEY_10CHANNELSUP" },
{ KEY_10CHANNELSDOWN, "KEY_10CHANNELSDOWN" },
{ KEY_IMAGES, "KEY_IMAGES" },
{ KEY_DEL_EOL, "KEY_DEL_EOL" },
{ KEY_DEL_EOS, "KEY_DEL_EOS" },
{ KEY_INS_LINE, "KEY_INS_LINE" },
{ KEY_DEL_LINE, "KEY_DEL_LINE" },
{ KEY_FN, "KEY_FN" },
{ KEY_FN_ESC, "KEY_FN_ESC" },
{ KEY_FN_F1, "KEY_FN_F1" },
{ KEY_FN_F2, "KEY_FN_F2" },
{ KEY_FN_F3, "KEY_FN_F3" },
{ KEY_FN_F4, "KEY_FN_F4" },
{ KEY_FN_F5, "KEY_FN_F5" },
{ KEY_FN_F6, "KEY_FN_F6" },
{ KEY_FN_F7, "KEY_FN_F7" },
{ KEY_FN_F8, "KEY_FN_F8" },
{ KEY_FN_F9, "KEY_FN_F9" },
{ KEY_FN_F10, "KEY_FN_F10" },
{ KEY_FN_F11, "KEY_FN_F11" },
{ KEY_FN_F12, "KEY_FN_F12" },
{ KEY_FN_1, "KEY_FN_1" },
{ KEY_FN_2, "KEY_FN_2" },
{ KEY_FN_D, "KEY_FN_D" },
{ KEY_FN_E, "KEY_FN_E" },
{ KEY_FN_F, "KEY_FN_F" },
{ KEY_FN_S, "KEY_FN_S" },
{ KEY_FN_B, "KEY_FN_B" },
{ KEY_BRL_DOT1, "KEY_BRL_DOT1" },
{ KEY_BRL_DOT2, "KEY_BRL_DOT2" },
{ KEY_BRL_DOT3, "KEY_BRL_DOT3" },
{ KEY_BRL_DOT4, "KEY_BRL_DOT4" },
{ KEY_BRL_DOT5, "KEY_BRL_DOT5" },
{ KEY_BRL_DOT6, "KEY_BRL_DOT6" },
{ KEY_BRL_DOT7, "KEY_BRL_DOT7" },
{ KEY_BRL_DOT8, "KEY_BRL_DOT8" },
{ KEY_BRL_DOT9, "KEY_BRL_DOT9" },
{ KEY_BRL_DOT10, "KEY_BRL_DOT10" },
{ KEY_NUMERIC_0, "KEY_NUMERIC_0" },
{ KEY_NUMERIC_1, "KEY_NUMERIC_1" },
{ KEY_NUMERIC_2, "KEY_NUMERIC_2" },
{ KEY_NUMERIC_3, "KEY_NUMERIC_3" },
{ KEY_NUMERIC_4, "KEY_NUMERIC_4" },
{ KEY_NUMERIC_5, "KEY_NUMERIC_5" },
{ KEY_NUMERIC_6, "KEY_NUMERIC_6" },
{ KEY_NUMERIC_7, "KEY_NUMERIC_7" },
{ KEY_NUMERIC_8, "KEY_NUMERIC_8" },
{ KEY_NUMERIC_9, "KEY_NUMERIC_9" },
{ KEY_NUMERIC_STAR, "KEY_NUMERIC_STAR" },
{ KEY_NUMERIC_POUND, "KEY_NUMERIC_POUND" },
{ KEY_CAMERA_FOCUS, "KEY_CAMERA_FOCUS" },
{ KEY_WPS_BUTTON, "KEY_WPS_BUTTON" },
{ KEY_TOUCHPAD_TOGGLE, "KEY_TOUCHPAD_TOGGLE" },
{ KEY_TOUCHPAD_ON, "KEY_TOUCHPAD_ON" },
{ KEY_TOUCHPAD_OFF, "KEY_TOUCHPAD_OFF" },
{ KEY_CAMERA_ZOOMIN, "KEY_CAMERA_ZOOMIN" },
{ KEY_CAMERA_ZOOMOUT, "KEY_CAMERA_ZOOMOUT" },
{ KEY_CAMERA_UP, "KEY_CAMERA_UP" },
{ KEY_CAMERA_DOWN, "KEY_CAMERA_DOWN" },
{ KEY_CAMERA_LEFT, "KEY_CAMERA_LEFT" },
{ KEY_CAMERA_RIGHT, "KEY_CAMERA_RIGHT" },
{ KEY_ATTENDANT_ON, "KEY_ATTENDANT_ON" },
{ KEY_ATTENDANT_OFF, "KEY_ATTENDANT_OFF" },
{ KEY_ATTENDANT_TOGGLE, "KEY_ATTENDANT_TOGGLE" },
{ KEY_LIGHTS_TOGGLE, "KEY_LIGHTS_TOGGLE" },
{ BTN_DPAD_UP, "BTN_DPAD_UP" },
{ BTN_DPAD_DOWN, "BTN_DPAD_DOWN" },
{ BTN_DPAD_LEFT, "BTN_DPAD_LEFT" },
{ BTN_DPAD_RIGHT, "BTN_DPAD_RIGHT" },
{ KEY_ALS_TOGGLE, "KEY_ALS_TOGGLE" },
{ KEY_BUTTONCONFIG, "KEY_BUTTONCONFIG" },
{ KEY_TASKMANAGER, "KEY_TASKMANAGER" },
{ KEY_JOURNAL, "KEY_JOURNAL" },
{ KEY_CONTROLPANEL, "KEY_CONTROLPANEL" },
{ KEY_APPSELECT, "KEY_APPSELECT" },
{ KEY_SCREENSAVER, "KEY_SCREENSAVER" },
{ KEY_VOICECOMMAND, "KEY_VOICECOMMAND" },
{ KEY_BRIGHTNESS_MIN, "KEY_BRIGHTNESS_MIN" },
{ KEY_BRIGHTNESS_MAX, "KEY_BRIGHTNESS_MAX" },
{ BTN_TRIGGER_HAPPY, "BTN_TRIGGER_HAPPY" },
{ BTN_TRIGGER_HAPPY1, "BTN_TRIGGER_HAPPY1" },
{ BTN_TRIGGER_HAPPY2, "BTN_TRIGGER_HAPPY2" },
{ BTN_TRIGGER_HAPPY3, "BTN_TRIGGER_HAPPY3" },
{ BTN_TRIGGER_HAPPY4, "BTN_TRIGGER_HAPPY4" },
{ BTN_TRIGGER_HAPPY5, "BTN_TRIGGER_HAPPY5" },
{ BTN_TRIGGER_HAPPY6, "BTN_TRIGGER_HAPPY6" },
{ BTN_TRIGGER_HAPPY7, "BTN_TRIGGER_HAPPY7" },
{ BTN_TRIGGER_HAPPY8, "BTN_TRIGGER_HAPPY8" },
{ BTN_TRIGGER_HAPPY9, "BTN_TRIGGER_HAPPY9" },
{ BTN_TRIGGER_HAPPY10, "BTN_TRIGGER_HAPPY10" },
{ BTN_TRIGGER_HAPPY11, "BTN_TRIGGER_HAPPY11" },
{ BTN_TRIGGER_HAPPY12, "BTN_TRIGGER_HAPPY12" },
{ BTN_TRIGGER_HAPPY13, "BTN_TRIGGER_HAPPY13" },
{ BTN_TRIGGER_HAPPY14, "BTN_TRIGGER_HAPPY14" },
{ BTN_TRIGGER_HAPPY15, "BTN_TRIGGER_HAPPY15" },
{ BTN_TRIGGER_HAPPY16, "BTN_TRIGGER_HAPPY16" },
{ BTN_TRIGGER_HAPPY17, "BTN_TRIGGER_HAPPY17" },
{ BTN_TRIGGER_HAPPY18, "BTN_TRIGGER_HAPPY18" },
{ BTN_TRIGGER_HAPPY19, "BTN_TRIGGER_HAPPY19" },
{ BTN_TRIGGER_HAPPY20, "BTN_TRIGGER_HAPPY20" },
{ BTN_TRIGGER_HAPPY21, "BTN_TRIGGER_HAPPY21" },
{ BTN_TRIGGER_HAPPY22, "BTN_TRIGGER_HAPPY22" },
{ BTN_TRIGGER_HAPPY23, "BTN_TRIGGER_HAPPY23" },
{ BTN_TRIGGER_HAPPY24, "BTN_TRIGGER_HAPPY24" },
{ BTN_TRIGGER_HAPPY25, "BTN_TRIGGER_HAPPY25" },
{ BTN_TRIGGER_HAPPY26, "BTN_TRIGGER_HAPPY26" },
{ BTN_TRIGGER_HAPPY27, "BTN_TRIGGER_HAPPY27" },
{ BTN_TRIGGER_HAPPY28, "BTN_TRIGGER_HAPPY28" },
{ BTN_TRIGGER_HAPPY29, "BTN_TRIGGER_HAPPY29" },
{ BTN_TRIGGER_HAPPY30, "BTN_TRIGGER_HAPPY30" },
{ BTN_TRIGGER_HAPPY31, "BTN_TRIGGER_HAPPY31" },
{ BTN_TRIGGER_HAPPY32, "BTN_TRIGGER_HAPPY32" },
{ BTN_TRIGGER_HAPPY33, "BTN_TRIGGER_HAPPY33" },
{ BTN_TRIGGER_HAPPY34, "BTN_TRIGGER_HAPPY34" },
{ BTN_TRIGGER_HAPPY35, "BTN_TRIGGER_HAPPY35" },
{ BTN_TRIGGER_HAPPY36, "BTN_TRIGGER_HAPPY36" },
{ BTN_TRIGGER_HAPPY37, "BTN_TRIGGER_HAPPY37" },
{ BTN_TRIGGER_HAPPY38, "BTN_TRIGGER_HAPPY38" },
{ BTN_TRIGGER_HAPPY39, "BTN_TRIGGER_HAPPY39" },
{ BTN_TRIGGER_HAPPY40, "BTN_TRIGGER_HAPPY40" },
{ KEY_MIN_INTERESTING, "KEY_MIN_INTERESTING" },
{ KEY_MAX, "KEY_MAX" },
{ KEY_CNT, "KEY_CNT" },
{ REL_X, "REL_X" },
{ REL_Y, "REL_Y" },
{ REL_Z, "REL_Z" },
{ REL_RX, "REL_RX" },
{ REL_RY, "REL_RY" },
{ REL_RZ, "REL_RZ" },
{ REL_HWHEEL, "REL_HWHEEL" },
{ REL_DIAL, "REL_DIAL" },
{ REL_WHEEL, "REL_WHEEL" },
{ REL_MISC, "REL_MISC" },
{ REL_MAX, "REL_MAX" },
{ REL_CNT, "REL_CNT" },
{ ABS_X, "ABS_X" },
{ ABS_Y, "ABS_Y" },
{ ABS_Z, "ABS_Z" },
{ ABS_RX, "ABS_RX" },
{ ABS_RY, "ABS_RY" },
{ ABS_RZ, "ABS_RZ" },
{ ABS_THROTTLE, "ABS_THROTTLE" },
{ ABS_RUDDER, "ABS_RUDDER" },
{ ABS_WHEEL, "ABS_WHEEL" },
{ ABS_GAS, "ABS_GAS" },
{ ABS_BRAKE, "ABS_BRAKE" },
{ ABS_HAT0X, "ABS_HAT0X" },
{ ABS_HAT0Y, "ABS_HAT0Y" },
{ ABS_HAT1X, "ABS_HAT1X" },
{ ABS_HAT1Y, "ABS_HAT1Y" },
{ ABS_HAT2X, "ABS_HAT2X" },
{ ABS_HAT2Y, "ABS_HAT2Y" },
{ ABS_HAT3X, "ABS_HAT3X" },
{ ABS_HAT3Y, "ABS_HAT3Y" },
{ ABS_PRESSURE, "ABS_PRESSURE" },
{ ABS_DISTANCE, "ABS_DISTANCE" },
{ ABS_TILT_X, "ABS_TILT_X" },
{ ABS_TILT_Y, "ABS_TILT_Y" },
{ ABS_TOOL_WIDTH, "ABS_TOOL_WIDTH" },
{ ABS_VOLUME, "ABS_VOLUME" },
{ ABS_MISC, "ABS_MISC" },
{ ABS_MT_SLOT, "ABS_MT_SLOT" },
{ ABS_MT_TOUCH_MAJOR, "ABS_MT_TOUCH_MAJOR" },
{ ABS_MT_TOUCH_MINOR, "ABS_MT_TOUCH_MINOR" },
{ ABS_MT_WIDTH_MAJOR, "ABS_MT_WIDTH_MAJOR" },
{ ABS_MT_WIDTH_MINOR, "ABS_MT_WIDTH_MINOR" },
{ ABS_MT_ORIENTATION, "ABS_MT_ORIENTATION" },
{ ABS_MT_POSITION_X, "ABS_MT_POSITION_X" },
{ ABS_MT_POSITION_Y, "ABS_MT_POSITION_Y" },
{ ABS_MT_TOOL_TYPE, "ABS_MT_TOOL_TYPE" },
{ ABS_MT_BLOB_ID, "ABS_MT_BLOB_ID" },
{ ABS_MT_TRACKING_ID, "ABS_MT_TRACKING_ID" },
{ ABS_MT_PRESSURE, "ABS_MT_PRESSURE" },
{ ABS_MT_DISTANCE, "ABS_MT_DISTANCE" },
{ ABS_MT_TOOL_X, "ABS_MT_TOOL_X" },
{ ABS_MT_TOOL_Y, "ABS_MT_TOOL_Y" },
{ ABS_MAX, "ABS_MAX" },
{ ABS_CNT, "ABS_CNT" },
};
