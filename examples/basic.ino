#include <Arduino.h>

#include <timezonelookup.h>

void setup()
{
    auto tz = lookup_timezone_posix_tz("Africa/Luanda");
}

void loop()
{
}