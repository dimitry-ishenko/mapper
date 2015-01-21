////////////////////////////////////////////////////////////////////////////////
// DEFINE INPUT AND OUTPUT DEVICES
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_DEVICE

////////////////////////////////////////////////////////////////////////////////
// Define input devices using the following macros:
//
// ADD_INPUT_DEVICE(id, path);
// ADD_EXCLUSIVE_DEVICE(id, path);
//
// Where 'id' is an arbitrary number assigned to the device.
// And 'path' is the path to the device, usually somewhere in /dev/input/...
// Use ADD_EXCLUSIVE_DEVICE macro to open the device in exclusive mode.
//
// Example:
//
// ADD_INPUT_DEVICE(0, /dev/input/event1);
// ADD_INPUT_DEVICE(7, /dev/input/event7);
// ADD_EXCLUSIVE_DEVICE(42, /dev/input/by-id/usb-The_Ultimate_Answer);



////////////////////////////////////////////////////////////////////////////////
// Define output devices using the following macros:
//
// ADD_OUTPUT_KEYBOARD(id);
// ADD_OUTPUT_MOUSE(id);
// ADD_OUTPUT_JOYSTICK(id);
//
// Where 'id' is an arbitrary number assigned to the device.
//
// Example:
//
// ADD_OUTPUT_KEYBOARD(0);
// ADD_OUTPUT_MOUSE(69);
// ADD_OUTPUT_JOYSTICK(88);



#endif

////////////////////////////////////////////////////////////////////////////////
// DEFINE MAPPINGS
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_MAPPING
#endif
