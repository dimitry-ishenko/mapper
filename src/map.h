////////////////////////////////////////////////////////////////////////////////
// DEFINE INPUT AND OUTPUT DEVICES
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_DEVICE

////////////////////////////////////////////////////////////////////////////////
// Define input devices using the following macros:
//
// input_device(name, path);
// exclusive_device(name, path);

//exclusive_device(JOY_0, /dev/input/by-id/usb-Thrustmaster_T.Flight_Hotas_X-event-joystick);

////////////////////////////////////////////////////////////////////////////////
// Define output devices using the following macros:
//
// output_device(name, events);
//
//  KEYBOARD_KEYS
//  MOUSE_BUTTONS
//  JOYSTICK_BUTTONS
//  GAMEPAD_BUTTONS
//  KEY_...
//  BTN_...
//  REL_...
//  ABS_...

//output_device(JOY_1, ABS_X | ABS_Y | ABS_Z | ABS_RZ | ABS_THROTTLE | ABS_HAT0X | ABS_HAT0Y | JOYSTICK_BUTTONS );
//output_device(KBD_1, KEYBOARD_KEYS);

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
// send_event(name, event, value);
// send_event(name, event, value, { modifier [, modifier ...] });
//
// map(name_from, event_from, name_to, event_to, value_to);
// map(name_from, event_from, name_to, event_to, value_to, { modifier_to [, modifier_to ...] });
//
//  number_in
//  event_in
//  value_in
//  KEY_...
//  BTN_...
//  REL_...
//  ABS_...
//  is_kbd()
//  is_rel()
//  is_abs()

//map(JOY_0,        ABS_X, JOY_1,        ABS_X, value_in);
//map(JOY_0,        ABS_Y, JOY_1,        ABS_Y, value_in);
//map(JOY_0,        ABS_Z, JOY_1,        ABS_Z, value_in);
//map(JOY_0,       ABS_RZ, JOY_1,       ABS_RZ, value_in);
//map(JOY_0, ABS_THROTTLE, JOY_1, ABS_THROTTLE, value_in);
//
//map(JOY_0,  BTN_TRIGGER, JOY_1,  BTN_TRIGGER, value_in);
//map(JOY_0,    BTN_THUMB, JOY_1,    BTN_THUMB, value_in);
//map(JOY_0,   BTN_THUMB2, JOY_1,   BTN_THUMB2, value_in);
//map(JOY_0,      BTN_TOP, JOY_1,      BTN_TOP, value_in);
//map(JOY_0,     BTN_TOP2, JOY_1,     BTN_TOP2, value_in);
//map(JOY_0,   BTN_PINKIE, JOY_1,   BTN_PINKIE, value_in);
//map(JOY_0,     BTN_BASE, JOY_1,     BTN_BASE, value_in);
//
//map(JOY_0,    BTN_BASE2, KBD_1,        KEY_G, value_in);
//map(JOY_0,    BTN_BASE3, KBD_1,      KEY_KP9, value_in, KEY_LEFTALT);
//map(JOY_0,    BTN_BASE4, KBD_1,      KEY_KP3, value_in, KEY_LEFTALT);
//
//map(JOY_0,    BTN_BASE5, JOY_1,    BTN_BASE5, value_in);
//map(JOY_0,    BTN_BASE6, JOY_1,    BTN_BASE6, value_in);
//
//when(number_in == JOY_0 && event_in == ABS_HAT0X,
//    static event prev = event(0);
//    if(value_in)
//    {
//        prev = (value_in < 0) ? KEY_KP4 : KEY_KP6;
//        send_event(KBD_1, prev, 1, KEY_LEFTALT);
//    }
//    else
//    {
//        send_event(KBD_1, prev, 0, KEY_LEFTALT);
//        prev = event(0);
//    }
//);
//
//when(number_in == JOY_0 && event_in == ABS_HAT0Y,
//    static event prev = event(0);
//    if(value_in)
//    {
//        prev = (value_in < 0) ? KEY_KP8 : KEY_KP2;
//        send_event(KBD_1, prev, 1, KEY_LEFTALT);
//    }
//    else
//    {
//        send_event(KBD_1, prev, 0, KEY_LEFTALT);
//        prev = event(0);
//    }
//);

#endif
