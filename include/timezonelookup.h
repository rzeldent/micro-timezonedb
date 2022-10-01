#pragma once

#include <timezonedb.h>
#include <stdlib.h>

const timezone_t *lookup_timezone_posix_tz(const char *zone_name)
{
    // Array must be sorted on item to do a bsearch
    timezone_t key = {zone_name = zone_name};
    return (timezone_t *)bsearch(&key, timezones, sizeof(timezones) / sizeof(timezone_t), sizeof(timezone_t),
                                 [](const void *e1, const void *e2)
                                 {
                                     return strcmp(((timezone_t *)e1)->zone_name, ((timezone_t *)e2)->zone_name);
                                 });
}