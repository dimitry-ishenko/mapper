////////////////////////////////////////////////////////////////////////////////
// DEFINE INPUT AND OUTPUT DEVICES
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_DEVICE

////////////////////////////////////////////////////////////////////////////////
// Define input devices using the following macros:
//
// ADD_INPUT_DEVICE(id, path);
// ADD_EXCLUSIVE_INPUT_DEVICE(id, path);
//
// Where 'id' is an arbitrary number assigned to the device.
// And 'path' is the path to the device, usually somewhere in /dev/input/...
// ADD_EXCLUSIVE_INPUT_DEVICE macro caused the device to be open in exclusive mode.
//
// Example:
//
// ADD_INPUT_DEVICE(0, /dev/input/event1);
// ADD_EXCLUSIVE_INPUT_DEVICE(7, /dev/input/event7);
// ADD_INPUT_DEVICE(42, /dev/input/by-id/usb-The_Ultimate_Answer);



////////////////////////////////////////////////////////////////////////////////
// Define output devices and their type using the following macros:
//
// ADD_OUTPUT_DEVICE(id, type [ | type ... ]);
// ADD_OUTPUT_JOYSTICK(id , type [ | type ... ]);
//
// Where 'id' is an arbitrary number assigned to the device.
// And 'type' is one or more of the following: KEY, REL, ABS.
//
// Example:
//
// ADD_OUTPUT_DEVICE(0, KEY);
// ADD_OUTPUT_DEVICE(69, KEY | REL);
// ADD_OUTPUT_JOYSTICK(88, ABS);



#endif

////////////////////////////////////////////////////////////////////////////////
// DEFINE MAPPINGS
////////////////////////////////////////////////////////////////////////////////
#ifdef DEFINE_MAPPING
#endif
