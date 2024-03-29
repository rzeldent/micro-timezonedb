#! /usr/bin/python3

# Only runs on Linux platforms. There the zoneinfo directory contains the posix strings

import os
import re

tzfile_dir = '/usr/share/zoneinfo/posix'
output_file = 'include/timezonedb.h'

timezones = {}
for root, dirs, files in os.walk(tzfile_dir):
    for filename in files: 
        filepath = os.path.join(root,filename)
        zone_name = filepath[len(tzfile_dir) + 1:].replace('_', ' ')
        print(f"Processing: {zone_name}");
        with open(filepath, 'rb') as f:
            posix_tz = f.read().split(b'\n')[-2].decode('utf-8')
            timezones[zone_name] = posix_tz

# Sort by zone_name
timezones = {k: v for k, v in sorted(timezones.items())}
# Generate values
max_zone_name = max(len(x) for x in timezones)
timezone_values = ',\n'.join(f'    {{ "{timezone}", "{timezones[timezone]}" }}' for timezone in timezones)

print(f'Writing output file: {output_file}');
with open(output_file, 'w') as output:
    output.write(
        '//*******************************************************************************\n'
        '// Timezonedb.h\n'
        '//\n'
        '//*******************************************************************************\n'
        '\n'
        f'typedef const char timezone_name[{max_zone_name + 1}];\n'
        '\n'
        'typedef struct posix_timezone_tz {\n'
        '    timezone_name zone_name;\n'
        '    const char *posix_tz;\n'
        '} posix_timezone_tz_t;\n'
        '\n'
        'constexpr posix_timezone_tz_t posix_timezone_tzs[] = {\n'
        f'{timezone_values}\n'
        '};'
        )