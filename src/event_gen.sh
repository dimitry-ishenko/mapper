#!/bin/bash

name="event_gen.hpp"
truncate --size=0 "${name}"

cout() { cat - >> "${name}"; }

events=$(sed -rne 's/^(\s*)(#define\s+)((KEY|BTN|REL|ABS)_[a-zA-Z0-9_]+)(\s+.*)$/\3/p' "/usr/include/linux/input.h")

cout <<EOF
#define EV_BTN EV_KEY

namespace _imp
{
EOF
for event in ${events}; do
    cout <<< "constexpr int _${event} = ${event};"
done
for event in ${events}; do
    cout <<< "#undef ${event}"
done
cout <<EOF
}

enum event
{
EOF
for event in ${events}; do
    cout <<< "${event} = (EV_${event:0:3} << 16) + _imp::_${event},"
done
cout <<EOF
};
EOF