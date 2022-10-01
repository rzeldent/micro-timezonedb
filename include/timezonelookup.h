#pragma once

#include <timezonedb.h>
#include <stdlib.h>

const posix_timezone_t *lookup_posix_timezone_tz(const char *zone_name)
{
    // Array must be sorted on item to do a bsearch
    posix_timezone_t key = {zone_name = zone_name};
    return (timezone_t *)bsearch(&key, timezones, sizeof(timezones) / sizeof(posix_timezone_t), sizeof(posix_timezone_t),
                                 [](const void *e1, const void *e2)
                                 {
                                     return strcmp(((posix_timezone_t *)e1)->zone_name, ((posix_timezone_t *)e2)->zone_name);
                                 });
}