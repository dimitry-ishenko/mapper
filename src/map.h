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
//output_device(KEY_1, KEYBOARD_KEYS);


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
// send_event_mod(name, modifier, event, value);
//
// map(name_from, event_from, name_to, event_to, value_to);
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
//map(JOY_0,  BTN_TRIGGER, KEY_1,        KEY_A, value_in);
//map(JOY_0,    BTN_THUMB, KEY_1,        KEY_B, value_in);
//map(JOY_0,   BTN_THUMB2, KEY_1,        KEY_C, value_in);
//map(JOY_0,      BTN_TOP, KEY_1,        KEY_D, value_in);
//map(JOY_0,     BTN_TOP2, KEY_1,        KEY_E, value_in);
//map(JOY_0,   BTN_PINKIE, KEY_1,        KEY_F, value_in);
//map(JOY_0,     BTN_BASE, KEY_1,        KEY_G, value_in);
//map(JOY_0,    BTN_BASE2, KEY_1,        KEY_H, value_in);
//map(JOY_0,    BTN_BASE3, KEY_1,        KEY_I, value_in);
//map(JOY_0,    BTN_BASE4, KEY_1,        KEY_J, value_in);
//map(JOY_0,    BTN_BASE5, KEY_1,        KEY_K, value_in);
//map(JOY_0,    BTN_BASE6, KEY_1,        KEY_L, value_in);
//
//when(number_in == JOY_0 && event_in == ABS_HAT0X,
//    static event prev = event(0);
//    if(value_in)
//    {
//        prev = (value_in < 0) ? KEY_KP4 : KEY_KP6;
//        send_event_mod(KEY_1, KEY_LEFTALT, prev, 1);
//    }
//    else
//    {
//        send_event_mod(KEY_1, KEY_LEFTALT, prev, 0);
//        prev = event(0);
//    }
//)
//
//when(number_in == JOY_0 && event_in == ABS_HAT0Y,
//    static event prev = event(0);
//    if(value_in)
//    {
//        prev = (value_in < 0) ? KEY_KP2 : KEY_KP8;
//        send_event_mod(KEY_1, KEY_LEFTALT, prev, 1);
//    }
//    else
//    {
//        send_event_mod(KEY_1, KEY_LEFTALT, prev, 0);
//        prev = event(0);
//    }
//)


#endif
