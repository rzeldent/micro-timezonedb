# Micro TimezoneDb

![status badge](https://github.com/rzeldent/micro-timezonedb/actions/workflows/main.yml/badge.svg?event=push)

Minimal timezone database implementation for Arduino and other micro controllers.

## Introduction

Implementing NTP (Network Time Protocol) on the ESP8266 and ESP32 is easy.
However then to display the date and time in the local time... That's another problem and requires a database to perform these conversions.

The ESP8266 and ESP32 standard library already contain the functionality to perform these calculations.
Together with this library with timezones, it will be easier to implement this.

More information can be found at:
- [https://randomnerdtutorials.com/esp32-ntp-timezones-daylight-saving](https://randomnerdtutorials.com/esp32-ntp-timezones-daylight-saving).
- [https://www.iana.org/time-zones](https://www.iana.org/time-zones)

## Using the library

Include the header files:

```
#include <time.h>
#include <timezonelookup.h>
```

In the Arduino code, there has to be an valid time. This can be done by connecting to NTP servers:
```
configTime(0, 0, "pool.ntp.org");
```
Then, the Posix timezone data for a IANA timezone name has to be retrieved:
```
auto tz_data = lookup_posix_timezone_tz("Africa/Luanda");
```

Next, the data required to calculate to the local time can be set and loaded:
```
setenv("TZ", tz_data->posix_tz, 1);
tzset();
```

## Database details

The database contains two arrays:
  - const char timezone_names[][33], that contains all the zone names (fixed length)
  - const posix_timezone_tz_t posix_timezone_tzs[], that contains all the zones and their posix tz definition

This is duplicate information but is done to have a fixed-size array of all the names.
The compiler will optimize the duplicate zone names.

The database is composed of posix_timezone_tz_t structure to store the posix data for a timezone:
```
typedef struct posix_timezone_tz {
    const char *zone_name;
    const char *posix_tz;
} posix_timezone_tz_t;
```
## Build script
Included there is a little Python script to generate the database header file.
This can only be done on Linux systems because they contain the IANA database files.

## Collaboration
Collaboration is appreciated and bug reports or feature requests are welcome!
