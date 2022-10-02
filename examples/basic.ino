#include <Arduino.h>
#include <time.h>

#include <timezonelookup.h>

void setup()
{
    configTime(0, 0, "pool.ntp.org");
    auto tz = lookup_posix_timezone_tz("Africa/Luanda");
    setenv("TZ", tz, 1);
    tzset();
}

void loop()
{
}