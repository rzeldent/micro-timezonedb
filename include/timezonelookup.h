#pragma once

#include <timezonedb.h>
#include <cstdlib.h>

template<size_t n>
const char *lookup_timezone_posix_tz(const char *zone_name)
{
    return bsearch((void*)zone_name, (void*)timezones, n, sizeof(timezone_t), [](const void *key, const void *element) { return strcmp(key, element);});
}