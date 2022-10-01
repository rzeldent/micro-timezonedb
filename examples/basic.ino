#include <Arduino.h>

#include <timezonelookup.h>

void setup()
{
    auto tz = lookup_posix_timezone_tz("Africa/Luanda");
}

void loop()
{
}