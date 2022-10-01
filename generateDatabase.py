#! /usr/bin/python3

# This script only runs on Linux platforms.
# The /usr/share/zoneinfo/posix directory contains the files with the posix strings

import os

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
timezone_values = ',\n'.join(f'    {{"{timezone}", "{timezones[timezone]}"}}' for timezone in timezones)

print(f'Writing output file: {output_file}');
with open(output_file, 'w') as output:
    output.write(
        '//*******************************************************************************\n'
        '// Timezonedb.h\n'
        '//\n'
        '//*******************************************************************************\n'
        '\n'
        'typedef struct timezone {\n'
        '    const char *zone_name;\n'
        '    const char *posix_tz;\n'
        '} timezone_t;\n'
        '\n'
        'const timezone_t timezones[] = {\n'
        f'{timezone_values}\n'
        '};'
        )
