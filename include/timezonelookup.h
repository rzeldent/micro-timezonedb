#pragma once

#include <timezonedb.h>
#include <stdlib.h>

const char *lookup_timezone_posix_tz(const char *zone_name)
{
    return bsearch((void *)zone_name, (void *)timezones, sizeof(timezones) / sizeof(timezone_t), sizeof(timezone_t),
                   [](const void *key, const void *element)
                   {
                       return strcmp(((const timezone_t *)key)->zone_name, ((const timezone_t *)element)->zone_name);
                   });
}