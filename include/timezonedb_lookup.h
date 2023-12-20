#pragma once

#include <timezonedb.h>
#include <stdlib.h>

const char *lookup_posix_timezone_tz(const char *zone_name)
{
    // Array must be sorted on item to do a bsearch
    auto tz_definition = (posix_timezone_tz_t *)bsearch(zone_name, posix_timezone_tzs, sizeof(posix_timezone_tzs) / sizeof(posix_timezone_tz_t), sizeof(posix_timezone_tz_t),
                                                        [](const void *e1, const void *e2)
                                                        {
                                                            return strcmp(((const posix_timezone_tz_t *)e1)->zone_name, ((const posix_timezone_tz_t *)e2)->zone_name);
                                                        });
    return tz_definition != nullptr ? tz_definition->posix_tz : nullptr;
}