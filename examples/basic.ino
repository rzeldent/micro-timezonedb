#include <Arduino.h>
#include <time.h>

#include <timezonelookup.h>

void setup()
{
    configTime(0, 0, "pool.ntp.org");
    auto tz_data = lookup_posix_timezone_tz("Africa/Luanda");
    setenv("TZ", tz_data->posix_tz, 1);
    tzset();
}

void loop()
{
}