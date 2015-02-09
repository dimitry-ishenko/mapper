////////////////////////////////////////////////////////////////////////////////
// DEFINE INPUT AND OUTPUT DEVICES
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_DEVICE

////////////////////////////////////////////////////////////////////////////////
// Define input devices using the following macros:
//
// input_device(name, path);
// exclusive_device(name, path);
//
// Where 'name' is an arbitrary unique name, which is used later to refer to
// this device. And 'path' is the path to the device, usually somewhere in
// /dev/input/...
// The 'exclusive_device' grabs the device in exclusive mode (using EVIOCGRAB
// ioctl).

exclusive_device(JOY_0, /dev/input/by-id/usb-Thrustmaster_T.Flight_Hotas_X-event-joystick);

////////////////////////////////////////////////////////////////////////////////
// Define output devices using the following macros:
//
// output_device(name, events);
//
// Where 'name' is an arbitrary unique name, which is used later to refer to
// this device. And 'events' is a list of one or more events supported by the
// device. Use the | (pipe) symbol to combine the events, eg: ABS_X | ABS_Y.
//
// Following is the list of supported events:
//
//  KEYBOARD_KEYS       ( KEY_ESCAPE to KEY_UNKNOWN )
//  MOUSE_BUTTONS       ( BTN_LEFT to BTN_TASK )
//  JOYSTICK_BUTTONS    ( BTN_TRIGGER to BTN_DEAD )
//  GAMEPAD_BUTTONS     ( BTN_SOUTH to BTN_THUMBR )
//  KEY_...             ( see event_gen.hpp )
//  BTN_...             ( see event_gen.hpp )
//  REL_...             ( see event_gen.hpp )
//  ABS_...             ( see event_gen.hpp )

output_device(JOY_1,  ABS_X |  ABS_Y |  ABS_Z
                   | ABS_RX | ABS_RY | ABS_RZ
                   | ABS_THROTTLE
                   | ABS_HAT0X
                   | ABS_HAT0Y
                   | BTN_JOYSTICK );
output_device(KBD_1, KEYBOARD_KEYS);

#endif

////////////////////////////////////////////////////////////////////////////////
// DEFINE MAPPINGS
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_MAPPING

////////////////////////////////////////////////////////////////////////////////
// Define mappings using the following macros:
//
// when(condition,
//     action;
// );
//
// When 'condition' is satisfied, 'action' is performed. Where 'condition' is
// a boolean expression and 'action' is one or more statements.
//
// send_event(name, event, value [, modifiers]);
//
// Send event to device. 'name' is the unique name of the device specified
// above. 'event' is one of KEY_, BTN_, ABS_ or REL_ events (see event_gen.hpp)
// The meaning of 'value' depends on the type of the event.
// Optional 'modifiers' parameter is one or more additional events (usually
// Ctrl, Shift and/or Alt keys) to be sent along.
//
// send_sync(name);
//
// Send sync event to device. Where 'name' is the unique name of the device
// specified above.
//
// map(name_in, event_in, name_out, event_out, value_out [, modifiers]);
//
// When 'event_in' is received from 'name_in' device, send 'event_out' event
// to 'device_out' device with 'value_out', adding optional 'modifiers'.
// 'name_in' and 'name_out' are the unique names of the devices specified
// above. 'event_in' and 'event_out' are one of KEY_, BTN_, ABS_ or REL_
// events (see event_gen.hpp). The meaning of 'value_out' depends on the type
// of the event. Optional 'modifiers' parameter is one or more additional
// events (usually Ctrl, Shift and/or Alt keys) to be sent along.
//
// Following variables/functions/constants can be used in any of the above
// macros:
//
//  name_in
//  event_in
//  value_in
//  KEY_...
//  BTN_...
//  REL_...
//  ABS_...
//  is_kbd()
//  is_rel()
//  is_abs()

// KEY_LEFTALT counter
static auto counter = 0;

map(JOY_0,        ABS_X, JOY_1,        ABS_X, value_in);
map(JOY_0,        ABS_Y, JOY_1,        ABS_Y, value_in);
map(JOY_0,        ABS_Z, JOY_1,        ABS_Z, value_in);
map(JOY_0,       ABS_RZ, JOY_1,       ABS_RZ, value_in);
map(JOY_0, ABS_THROTTLE, JOY_1, ABS_THROTTLE, value_in);

map(JOY_0,  BTN_TRIGGER, KBD_1,        KEY_K, value_in);
map(JOY_0,    BTN_THUMB, KBD_1,        KEY_D, value_in, KEY_LEFTCTRL);
map(JOY_0,   BTN_THUMB2, JOY_1, BTN_JOYSTICK, value_in);
map(JOY_0,      BTN_TOP, KBD_1,      KEY_KP5, value_in);
map(JOY_0,     BTN_TOP2, KBD_1,      KEY_KP0, value_in);
map(JOY_0,   BTN_PINKIE, KBD_1,    KEY_KPDOT, value_in);
map(JOY_0,     BTN_BASE, KBD_1,  KEY_KPMINUS, value_in);

map(JOY_0,    BTN_BASE2, KBD_1,        KEY_G, value_in);

when(name_in == JOY_0 && event_in == BTN_BASE3,
    send_event(KBD_1, KEY_KP9, value_in, counter, KEY_LEFTALT);
);
when(name_in == JOY_0 && event_in == BTN_BASE4,
    send_event(KBD_1, KEY_KP3, value_in, counter, KEY_LEFTALT);
);

map(JOY_0,    BTN_BASE5, KBD_1,        KEY_A, value_in);
map(JOY_0,    BTN_BASE6, KBD_1,        KEY_L, value_in);

when(name_in == JOY_0 && event_in == ABS_HAT0X,
    static auto prev = EVT_NONE;
    if(value_in)
    {
        prev = (value_in < 0) ? KEY_KP4 : KEY_KP6;
        send_event(KBD_1, prev, true, counter, KEY_LEFTALT);
    }
    else
    {
        send_event(KBD_1, prev, false, counter, KEY_LEFTALT);
        prev = EVT_NONE;
    }
);

when(name_in == JOY_0 && event_in == ABS_HAT0Y,
    static auto prev = EVT_NONE;
    if(value_in)
    {
        prev = (value_in < 0) ? KEY_KP8 : KEY_KP2;
        send_event(KBD_1, prev, true, counter, KEY_LEFTALT);
    }
    else
    {
        send_event(KBD_1, prev, false, counter, KEY_LEFTALT);
        prev = EVT_NONE;
    }
);

#endif
