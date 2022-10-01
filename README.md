# Micro TimezoneDb

![status badge](https://github.com/rzeldent/micro-timezonedb/actions/workflows/main.yml/badge.svg?event=push)

Minimal timezone database implementation for Arduino and other micro controllers.

## Introduction

Implementing NTP (Network Time Protocol) on the ESP8266 and ESP32 is easy.
However then to display the date and time in the local time... That's another problem and requires a database to perform these conversions.

The ESP8266 and ESP32 standard library already contain the functionality to perform these calculations and this library with the timezones.

More information can be found at: [https://randomnerdtutorials.com/esp32-ntp-timezones-daylight-saving/](https://randomnerdtutorials.com/esp32-ntp-timezones-daylight-saving/).

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
auto tz = lookup_posix_timezone_tz("Africa/Luanda");
```

Next, the data required to calculate to the local time can be set and loaded:
```
setenv("TZ", tz.posix_tz, 1);
tzset();
```
## Build script
Included there is a little Python script to generate the database.
This can only be done on Linux systems because they contain the IANA database files.

## Collaboration
Collaboration is appreciated and bug reports or feature requests are welcome!
