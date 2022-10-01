//*******************************************************************************
// Timezonedb.h
//
//*******************************************************************************

typedef struct timezone {
    const char *zone_name;
    const char *posix_tz;
} timezone_t;

const timezone_t timezones[] = {
    {"Africa/Abidjan", "GMT0"},
    {"Africa/Accra", "GMT0"},
    {"Africa/Addis Ababa", "EAT-3"},
    {"Africa/Algiers", "CET-1"},
    {"Africa/Asmara", "EAT-3"},
    {"Africa/Asmera", "EAT-3"},
    {"Africa/Bamako", "GMT0"},
    {"Africa/Bangui", "WAT-1"},
    {"Africa/Banjul", "GMT0"},
    {"Africa/Bissau", "GMT0"},
    {"Africa/Blantyre", "CAT-2"},
    {"Africa/Brazzaville", "WAT-1"},
    {"Africa/Bujumbura", "CAT-2"},
    {"Africa/Cairo", "EET-2"},
    {"Africa/Casablanca", "<+01>-1"},
    {"Africa/Ceuta", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Africa/Conakry", "GMT0"},
    {"Africa/Dakar", "GMT0"},
    {"Africa/Dar es Salaam", "EAT-3"},
    {"Africa/Djibouti", "EAT-3"},
    {"Africa/Douala", "WAT-1"},
    {"Africa/El Aaiun", "<+01>-1"},
    {"Africa/Freetown", "GMT0"},
    {"Africa/Gaborone", "CAT-2"},
    {"Africa/Harare", "CAT-2"},
    {"Africa/Johannesburg", "SAST-2"},
    {"Africa/Juba", "CAT-2"},
    {"Africa/Kampala", "EAT-3"},
    {"Africa/Khartoum", "CAT-2"},
    {"Africa/Kigali", "CAT-2"},
    {"Africa/Kinshasa", "WAT-1"},
    {"Africa/Lagos", "WAT-1"},
    {"Africa/Libreville", "WAT-1"},
    {"Africa/Lome", "GMT0"},
    {"Africa/Luanda", "WAT-1"},
    {"Africa/Lubumbashi", "CAT-2"},
    {"Africa/Lusaka", "CAT-2"},
    {"Africa/Malabo", "WAT-1"},
    {"Africa/Maputo", "CAT-2"},
    {"Africa/Maseru", "SAST-2"},
    {"Africa/Mbabane", "SAST-2"},
    {"Africa/Mogadishu", "EAT-3"},
    {"Africa/Monrovia", "GMT0"},
    {"Africa/Nairobi", "EAT-3"},
    {"Africa/Ndjamena", "WAT-1"},
    {"Africa/Niamey", "WAT-1"},
    {"Africa/Nouakchott", "GMT0"},
    {"Africa/Ouagadougou", "GMT0"},
    {"Africa/Porto-Novo", "WAT-1"},
    {"Africa/Sao Tome", "GMT0"},
    {"Africa/Timbuktu", "GMT0"},
    {"Africa/Tripoli", "EET-2"},
    {"Africa/Tunis", "CET-1"},
    {"Africa/Windhoek", "CAT-2"},
    {"America/Adak", "HST10HDT,M3.2.0,M11.1.0"},
    {"America/Anchorage", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/Anguilla", "AST4"},
    {"America/Antigua", "AST4"},
    {"America/Araguaina", "<-03>3"},
    {"America/Argentina/Buenos Aires", "<-03>3"},
    {"America/Argentina/Catamarca", "<-03>3"},
    {"America/Argentina/ComodRivadavia", "<-03>3"},
    {"America/Argentina/Cordoba", "<-03>3"},
    {"America/Argentina/Jujuy", "<-03>3"},
    {"America/Argentina/La Rioja", "<-03>3"},
    {"America/Argentina/Mendoza", "<-03>3"},
    {"America/Argentina/Rio Gallegos", "<-03>3"},
    {"America/Argentina/Salta", "<-03>3"},
    {"America/Argentina/San Juan", "<-03>3"},
    {"America/Argentina/San Luis", "<-03>3"},
    {"America/Argentina/Tucuman", "<-03>3"},
    {"America/Argentina/Ushuaia", "<-03>3"},
    {"America/Aruba", "AST4"},
    {"America/Asuncion", "<-04>4<-03>,M10.1.0/0,M3.4.0/0"},
    {"America/Atikokan", "EST5"},
    {"America/Atka", "HST10HDT,M3.2.0,M11.1.0"},
    {"America/Bahia", "<-03>3"},
    {"America/Bahia Banderas", "CST6CDT,M4.1.0,M10.5.0"},
    {"America/Barbados", "AST4"},
    {"America/Belem", "<-03>3"},
    {"America/Belize", "CST6"},
    {"America/Blanc-Sablon", "AST4"},
    {"America/Boa Vista", "<-04>4"},
    {"America/Bogota", "<-05>5"},
    {"America/Boise", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Buenos Aires", "<-03>3"},
    {"America/Cambridge Bay", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Campo Grande", "<-04>4"},
    {"America/Cancun", "EST5"},
    {"America/Caracas", "<-04>4"},
    {"America/Catamarca", "<-03>3"},
    {"America/Cayenne", "<-03>3"},
    {"America/Cayman", "EST5"},
    {"America/Chicago", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Chihuahua", "MST7MDT,M4.1.0,M10.5.0"},
    {"America/Coral Harbour", "EST5"},
    {"America/Cordoba", "<-03>3"},
    {"America/Costa Rica", "CST6"},
    {"America/Creston", "MST7"},
    {"America/Cuiaba", "<-04>4"},
    {"America/Curacao", "AST4"},
    {"America/Danmarkshavn", "GMT0"},
    {"America/Dawson", "MST7"},
    {"America/Dawson Creek", "MST7"},
    {"America/Denver", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Detroit", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Dominica", "AST4"},
    {"America/Edmonton", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Eirunepe", "<-05>5"},
    {"America/El Salvador", "CST6"},
    {"America/Ensenada", "PST8PDT,M3.2.0,M11.1.0"},
    {"America/Fort Nelson", "MST7"},
    {"America/Fort Wayne", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Fortaleza", "<-03>3"},
    {"America/Glace Bay", "AST4ADT,M3.2.0,M11.1.0"},
    {"America/Godthab", "<-03>3<-02>,M3.5.0/-2,M10.5.0/-1"},
    {"America/Goose Bay", "AST4ADT,M3.2.0,M11.1.0"},
    {"America/Grand Turk", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Grenada", "AST4"},
    {"America/Guadeloupe", "AST4"},
    {"America/Guatemala", "CST6"},
    {"America/Guayaquil", "<-05>5"},
    {"America/Guyana", "<-04>4"},
    {"America/Halifax", "AST4ADT,M3.2.0,M11.1.0"},
    {"America/Havana", "CST5CDT,M3.2.0/0,M11.1.0/1"},
    {"America/Hermosillo", "MST7"},
    {"America/Indiana/Indianapolis", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Knox", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Marengo", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Petersburg", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Tell City", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Vevay", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Vincennes", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indiana/Winamac", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Indianapolis", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Inuvik", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Iqaluit", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Jamaica", "EST5"},
    {"America/Jujuy", "<-03>3"},
    {"America/Juneau", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/Kentucky/Louisville", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Kentucky/Monticello", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Knox IN", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Kralendijk", "AST4"},
    {"America/La Paz", "<-04>4"},
    {"America/Lima", "<-05>5"},
    {"America/Los Angeles", "PST8PDT,M3.2.0,M11.1.0"},
    {"America/Louisville", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Lower Princes", "AST4"},
    {"America/Maceio", "<-03>3"},
    {"America/Managua", "CST6"},
    {"America/Manaus", "<-04>4"},
    {"America/Marigot", "AST4"},
    {"America/Martinique", "AST4"},
    {"America/Matamoros", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Mazatlan", "MST7MDT,M4.1.0,M10.5.0"},
    {"America/Mendoza", "<-03>3"},
    {"America/Menominee", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Merida", "CST6CDT,M4.1.0,M10.5.0"},
    {"America/Metlakatla", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/Mexico City", "CST6CDT,M4.1.0,M10.5.0"},
    {"America/Miquelon", "<-03>3<-02>,M3.2.0,M11.1.0"},
    {"America/Moncton", "AST4ADT,M3.2.0,M11.1.0"},
    {"America/Monterrey", "CST6CDT,M4.1.0,M10.5.0"},
    {"America/Montevideo", "<-03>3"},
    {"America/Montreal", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Montserrat", "AST4"},
    {"America/Nassau", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/New York", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Nipigon", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Nome", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/Noronha", "<-02>2"},
    {"America/North Dakota/Beulah", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/North Dakota/Center", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/North Dakota/New Salem", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Nuuk", "<-03>3<-02>,M3.5.0/-2,M10.5.0/-1"},
    {"America/Ojinaga", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Panama", "EST5"},
    {"America/Pangnirtung", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Paramaribo", "<-03>3"},
    {"America/Phoenix", "MST7"},
    {"America/Port of Spain", "AST4"},
    {"America/Port-au-Prince", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Porto Acre", "<-05>5"},
    {"America/Porto Velho", "<-04>4"},
    {"America/Puerto Rico", "AST4"},
    {"America/Punta Arenas", "<-03>3"},
    {"America/Rainy River", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Rankin Inlet", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Recife", "<-03>3"},
    {"America/Regina", "CST6"},
    {"America/Resolute", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Rio Branco", "<-05>5"},
    {"America/Rosario", "<-03>3"},
    {"America/Santa Isabel", "PST8PDT,M3.2.0,M11.1.0"},
    {"America/Santarem", "<-03>3"},
    {"America/Santiago", "<-04>4<-03>,M9.1.6/24,M4.1.6/24"},
    {"America/Santo Domingo", "AST4"},
    {"America/Sao Paulo", "<-03>3"},
    {"America/Scoresbysund", "<-01>1<+00>,M3.5.0/0,M10.5.0/1"},
    {"America/Shiprock", "MST7MDT,M3.2.0,M11.1.0"},
    {"America/Sitka", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/St Barthelemy", "AST4"},
    {"America/St Johns", "NST3:30NDT,M3.2.0,M11.1.0"},
    {"America/St Kitts", "AST4"},
    {"America/St Lucia", "AST4"},
    {"America/St Thomas", "AST4"},
    {"America/St Vincent", "AST4"},
    {"America/Swift Current", "CST6"},
    {"America/Tegucigalpa", "CST6"},
    {"America/Thule", "AST4ADT,M3.2.0,M11.1.0"},
    {"America/Thunder Bay", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Tijuana", "PST8PDT,M3.2.0,M11.1.0"},
    {"America/Toronto", "EST5EDT,M3.2.0,M11.1.0"},
    {"America/Tortola", "AST4"},
    {"America/Vancouver", "PST8PDT,M3.2.0,M11.1.0"},
    {"America/Virgin", "AST4"},
    {"America/Whitehorse", "MST7"},
    {"America/Winnipeg", "CST6CDT,M3.2.0,M11.1.0"},
    {"America/Yakutat", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"America/Yellowknife", "MST7MDT,M3.2.0,M11.1.0"},
    {"Antarctica/Casey", "<+11>-11"},
    {"Antarctica/Davis", "<+07>-7"},
    {"Antarctica/DumontDUrville", "<+10>-10"},
    {"Antarctica/Macquarie", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Antarctica/Mawson", "<+05>-5"},
    {"Antarctica/McMurdo", "NZST-12NZDT,M9.5.0,M4.1.0/3"},
    {"Antarctica/Palmer", "<-03>3"},
    {"Antarctica/Rothera", "<-03>3"},
    {"Antarctica/South Pole", "NZST-12NZDT,M9.5.0,M4.1.0/3"},
    {"Antarctica/Syowa", "<+03>-3"},
    {"Antarctica/Troll", "<+00>0<+02>-2,M3.5.0/1,M10.5.0/3"},
    {"Antarctica/Vostok", "<+06>-6"},
    {"Arctic/Longyearbyen", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Asia/Aden", "<+03>-3"},
    {"Asia/Almaty", "<+06>-6"},
    {"Asia/Amman", "EET-2EEST,M2.5.4/24,M10.5.5/1"},
    {"Asia/Anadyr", "<+12>-12"},
    {"Asia/Aqtau", "<+05>-5"},
    {"Asia/Aqtobe", "<+05>-5"},
    {"Asia/Ashgabat", "<+05>-5"},
    {"Asia/Ashkhabad", "<+05>-5"},
    {"Asia/Atyrau", "<+05>-5"},
    {"Asia/Baghdad", "<+03>-3"},
    {"Asia/Bahrain", "<+03>-3"},
    {"Asia/Baku", "<+04>-4"},
    {"Asia/Bangkok", "<+07>-7"},
    {"Asia/Barnaul", "<+07>-7"},
    {"Asia/Beirut", "EET-2EEST,M3.5.0/0,M10.5.0/0"},
    {"Asia/Bishkek", "<+06>-6"},
    {"Asia/Brunei", "<+08>-8"},
    {"Asia/Calcutta", "IST-5:30"},
    {"Asia/Chita", "<+09>-9"},
    {"Asia/Choibalsan", "<+08>-8"},
    {"Asia/Chongqing", "CST-8"},
    {"Asia/Chungking", "CST-8"},
    {"Asia/Colombo", "<+0530>-5:30"},
    {"Asia/Dacca", "<+06>-6"},
    {"Asia/Damascus", "EET-2EEST,M3.5.5/0,M10.5.5/0"},
    {"Asia/Dhaka", "<+06>-6"},
    {"Asia/Dili", "<+09>-9"},
    {"Asia/Dubai", "<+04>-4"},
    {"Asia/Dushanbe", "<+05>-5"},
    {"Asia/Famagusta", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Asia/Gaza", "EET-2EEST,M3.4.4/72,M10.4.4/25"},
    {"Asia/Harbin", "CST-8"},
    {"Asia/Hebron", "EET-2EEST,M3.4.4/72,M10.4.4/25"},
    {"Asia/Ho Chi Minh", "<+07>-7"},
    {"Asia/Hong Kong", "HKT-8"},
    {"Asia/Hovd", "<+07>-7"},
    {"Asia/Irkutsk", "<+08>-8"},
    {"Asia/Istanbul", "<+03>-3"},
    {"Asia/Jakarta", "WIB-7"},
    {"Asia/Jayapura", "WIT-9"},
    {"Asia/Jerusalem", "IST-2IDT,M3.4.4/26,M10.5.0"},
    {"Asia/Kabul", "<+0430>-4:30"},
    {"Asia/Kamchatka", "<+12>-12"},
    {"Asia/Karachi", "PKT-5"},
    {"Asia/Kashgar", "<+06>-6"},
    {"Asia/Kathmandu", "<+0545>-5:45"},
    {"Asia/Katmandu", "<+0545>-5:45"},
    {"Asia/Khandyga", "<+09>-9"},
    {"Asia/Kolkata", "IST-5:30"},
    {"Asia/Krasnoyarsk", "<+07>-7"},
    {"Asia/Kuala Lumpur", "<+08>-8"},
    {"Asia/Kuching", "<+08>-8"},
    {"Asia/Kuwait", "<+03>-3"},
    {"Asia/Macao", "CST-8"},
    {"Asia/Macau", "CST-8"},
    {"Asia/Magadan", "<+11>-11"},
    {"Asia/Makassar", "WITA-8"},
    {"Asia/Manila", "PST-8"},
    {"Asia/Muscat", "<+04>-4"},
    {"Asia/Nicosia", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Asia/Novokuznetsk", "<+07>-7"},
    {"Asia/Novosibirsk", "<+07>-7"},
    {"Asia/Omsk", "<+06>-6"},
    {"Asia/Oral", "<+05>-5"},
    {"Asia/Phnom Penh", "<+07>-7"},
    {"Asia/Pontianak", "WIB-7"},
    {"Asia/Pyongyang", "KST-9"},
    {"Asia/Qatar", "<+03>-3"},
    {"Asia/Qostanay", "<+06>-6"},
    {"Asia/Qyzylorda", "<+05>-5"},
    {"Asia/Rangoon", "<+0630>-6:30"},
    {"Asia/Riyadh", "<+03>-3"},
    {"Asia/Saigon", "<+07>-7"},
    {"Asia/Sakhalin", "<+11>-11"},
    {"Asia/Samarkand", "<+05>-5"},
    {"Asia/Seoul", "KST-9"},
    {"Asia/Shanghai", "CST-8"},
    {"Asia/Singapore", "<+08>-8"},
    {"Asia/Srednekolymsk", "<+11>-11"},
    {"Asia/Taipei", "CST-8"},
    {"Asia/Tashkent", "<+05>-5"},
    {"Asia/Tbilisi", "<+04>-4"},
    {"Asia/Tehran", "<+0330>-3:30"},
    {"Asia/Tel Aviv", "IST-2IDT,M3.4.4/26,M10.5.0"},
    {"Asia/Thimbu", "<+06>-6"},
    {"Asia/Thimphu", "<+06>-6"},
    {"Asia/Tokyo", "JST-9"},
    {"Asia/Tomsk", "<+07>-7"},
    {"Asia/Ujung Pandang", "WITA-8"},
    {"Asia/Ulaanbaatar", "<+08>-8"},
    {"Asia/Ulan Bator", "<+08>-8"},
    {"Asia/Urumqi", "<+06>-6"},
    {"Asia/Ust-Nera", "<+10>-10"},
    {"Asia/Vientiane", "<+07>-7"},
    {"Asia/Vladivostok", "<+10>-10"},
    {"Asia/Yakutsk", "<+09>-9"},
    {"Asia/Yangon", "<+0630>-6:30"},
    {"Asia/Yekaterinburg", "<+05>-5"},
    {"Asia/Yerevan", "<+04>-4"},
    {"Atlantic/Azores", "<-01>1<+00>,M3.5.0/0,M10.5.0/1"},
    {"Atlantic/Bermuda", "AST4ADT,M3.2.0,M11.1.0"},
    {"Atlantic/Canary", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Atlantic/Cape Verde", "<-01>1"},
    {"Atlantic/Faeroe", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Atlantic/Faroe", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Atlantic/Jan Mayen", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Atlantic/Madeira", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Atlantic/Reykjavik", "GMT0"},
    {"Atlantic/South Georgia", "<-02>2"},
    {"Atlantic/St Helena", "GMT0"},
    {"Atlantic/Stanley", "<-03>3"},
    {"Australia/ACT", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/Adelaide", "ACST-9:30ACDT,M10.1.0,M4.1.0/3"},
    {"Australia/Brisbane", "AEST-10"},
    {"Australia/Broken Hill", "ACST-9:30ACDT,M10.1.0,M4.1.0/3"},
    {"Australia/Canberra", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/Currie", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/Darwin", "ACST-9:30"},
    {"Australia/Eucla", "<+0845>-8:45"},
    {"Australia/Hobart", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/LHI", "<+1030>-10:30<+11>-11,M10.1.0,M4.1.0"},
    {"Australia/Lindeman", "AEST-10"},
    {"Australia/Lord Howe", "<+1030>-10:30<+11>-11,M10.1.0,M4.1.0"},
    {"Australia/Melbourne", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/NSW", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/North", "ACST-9:30"},
    {"Australia/Perth", "AWST-8"},
    {"Australia/Queensland", "AEST-10"},
    {"Australia/South", "ACST-9:30ACDT,M10.1.0,M4.1.0/3"},
    {"Australia/Sydney", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/Tasmania", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/Victoria", "AEST-10AEDT,M10.1.0,M4.1.0/3"},
    {"Australia/West", "AWST-8"},
    {"Australia/Yancowinna", "ACST-9:30ACDT,M10.1.0,M4.1.0/3"},
    {"Brazil/Acre", "<-05>5"},
    {"Brazil/DeNoronha", "<-02>2"},
    {"Brazil/East", "<-03>3"},
    {"Brazil/West", "<-04>4"},
    {"CET", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"CST6CDT", "CST6CDT,M3.2.0,M11.1.0"},
    {"Canada/Atlantic", "AST4ADT,M3.2.0,M11.1.0"},
    {"Canada/Central", "CST6CDT,M3.2.0,M11.1.0"},
    {"Canada/Eastern", "EST5EDT,M3.2.0,M11.1.0"},
    {"Canada/Mountain", "MST7MDT,M3.2.0,M11.1.0"},
    {"Canada/Newfoundland", "NST3:30NDT,M3.2.0,M11.1.0"},
    {"Canada/Pacific", "PST8PDT,M3.2.0,M11.1.0"},
    {"Canada/Saskatchewan", "CST6"},
    {"Canada/Yukon", "MST7"},
    {"Chile/Continental", "<-04>4<-03>,M9.1.6/24,M4.1.6/24"},
    {"Chile/EasterIsland", "<-06>6<-05>,M9.1.6/22,M4.1.6/22"},
    {"Cuba", "CST5CDT,M3.2.0/0,M11.1.0/1"},
    {"EET", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"EST", "EST5"},
    {"EST5EDT", "EST5EDT,M3.2.0,M11.1.0"},
    {"Egypt", "EET-2"},
    {"Eire", "IST-1GMT0,M10.5.0,M3.5.0/1"},
    {"Etc/GMT", "GMT0"},
    {"Etc/GMT+0", "GMT0"},
    {"Etc/GMT+1", "<-01>1"},
    {"Etc/GMT+10", "<-10>10"},
    {"Etc/GMT+11", "<-11>11"},
    {"Etc/GMT+12", "<-12>12"},
    {"Etc/GMT+2", "<-02>2"},
    {"Etc/GMT+3", "<-03>3"},
    {"Etc/GMT+4", "<-04>4"},
    {"Etc/GMT+5", "<-05>5"},
    {"Etc/GMT+6", "<-06>6"},
    {"Etc/GMT+7", "<-07>7"},
    {"Etc/GMT+8", "<-08>8"},
    {"Etc/GMT+9", "<-09>9"},
    {"Etc/GMT-0", "GMT0"},
    {"Etc/GMT-1", "<+01>-1"},
    {"Etc/GMT-10", "<+10>-10"},
    {"Etc/GMT-11", "<+11>-11"},
    {"Etc/GMT-12", "<+12>-12"},
    {"Etc/GMT-13", "<+13>-13"},
    {"Etc/GMT-14", "<+14>-14"},
    {"Etc/GMT-2", "<+02>-2"},
    {"Etc/GMT-3", "<+03>-3"},
    {"Etc/GMT-4", "<+04>-4"},
    {"Etc/GMT-5", "<+05>-5"},
    {"Etc/GMT-6", "<+06>-6"},
    {"Etc/GMT-7", "<+07>-7"},
    {"Etc/GMT-8", "<+08>-8"},
    {"Etc/GMT-9", "<+09>-9"},
    {"Etc/GMT0", "GMT0"},
    {"Etc/Greenwich", "GMT0"},
    {"Etc/UCT", "UTC0"},
    {"Etc/UTC", "UTC0"},
    {"Etc/Universal", "UTC0"},
    {"Etc/Zulu", "UTC0"},
    {"Europe/Amsterdam", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Andorra", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Astrakhan", "<+04>-4"},
    {"Europe/Athens", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Belfast", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"Europe/Belgrade", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Berlin", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Bratislava", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Brussels", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Bucharest", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Budapest", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Busingen", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Chisinau", "EET-2EEST,M3.5.0,M10.5.0/3"},
    {"Europe/Copenhagen", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Dublin", "IST-1GMT0,M10.5.0,M3.5.0/1"},
    {"Europe/Gibraltar", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Guernsey", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"Europe/Helsinki", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Isle of Man", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"Europe/Istanbul", "<+03>-3"},
    {"Europe/Jersey", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"Europe/Kaliningrad", "EET-2"},
    {"Europe/Kiev", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Kirov", "<+03>-3"},
    {"Europe/Kyiv", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Lisbon", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Europe/Ljubljana", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/London", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"Europe/Luxembourg", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Madrid", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Malta", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Mariehamn", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Minsk", "<+03>-3"},
    {"Europe/Monaco", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Moscow", "MSK-3"},
    {"Europe/Nicosia", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Oslo", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Paris", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Podgorica", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Prague", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Riga", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Rome", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Samara", "<+04>-4"},
    {"Europe/San Marino", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Sarajevo", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Saratov", "<+04>-4"},
    {"Europe/Simferopol", "MSK-3"},
    {"Europe/Skopje", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Sofia", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Stockholm", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Tallinn", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Tirane", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Tiraspol", "EET-2EEST,M3.5.0,M10.5.0/3"},
    {"Europe/Ulyanovsk", "<+04>-4"},
    {"Europe/Uzhgorod", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Vaduz", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Vatican", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Vienna", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Vilnius", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Volgograd", "<+03>-3"},
    {"Europe/Warsaw", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Zagreb", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Europe/Zaporozhye", "EET-2EEST,M3.5.0/3,M10.5.0/4"},
    {"Europe/Zurich", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Factory", "<-00>0"},
    {"GB", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"GB-Eire", "GMT0BST,M3.5.0/1,M10.5.0"},
    {"GMT", "GMT0"},
    {"GMT+0", "GMT0"},
    {"GMT-0", "GMT0"},
    {"GMT0", "GMT0"},
    {"Greenwich", "GMT0"},
    {"HST", "HST10"},
    {"Hongkong", "HKT-8"},
    {"Iceland", "GMT0"},
    {"Indian/Antananarivo", "EAT-3"},
    {"Indian/Chagos", "<+06>-6"},
    {"Indian/Christmas", "<+07>-7"},
    {"Indian/Cocos", "<+0630>-6:30"},
    {"Indian/Comoro", "EAT-3"},
    {"Indian/Kerguelen", "<+05>-5"},
    {"Indian/Mahe", "<+04>-4"},
    {"Indian/Maldives", "<+05>-5"},
    {"Indian/Mauritius", "<+04>-4"},
    {"Indian/Mayotte", "EAT-3"},
    {"Indian/Reunion", "<+04>-4"},
    {"Iran", "<+0330>-3:30"},
    {"Israel", "IST-2IDT,M3.4.4/26,M10.5.0"},
    {"Jamaica", "EST5"},
    {"Japan", "JST-9"},
    {"Kwajalein", "<+12>-12"},
    {"Libya", "EET-2"},
    {"MET", "MET-1MEST,M3.5.0,M10.5.0/3"},
    {"MST", "MST7"},
    {"MST7MDT", "MST7MDT,M3.2.0,M11.1.0"},
    {"Mexico/BajaNorte", "PST8PDT,M3.2.0,M11.1.0"},
    {"Mexico/BajaSur", "MST7MDT,M4.1.0,M10.5.0"},
    {"Mexico/General", "CST6CDT,M4.1.0,M10.5.0"},
    {"NZ", "NZST-12NZDT,M9.5.0,M4.1.0/3"},
    {"NZ-CHAT", "<+1245>-12:45<+1345>,M9.5.0/2:45,M4.1.0/3:45"},
    {"Navajo", "MST7MDT,M3.2.0,M11.1.0"},
    {"PRC", "CST-8"},
    {"PST8PDT", "PST8PDT,M3.2.0,M11.1.0"},
    {"Pacific/Apia", "<+13>-13"},
    {"Pacific/Auckland", "NZST-12NZDT,M9.5.0,M4.1.0/3"},
    {"Pacific/Bougainville", "<+11>-11"},
    {"Pacific/Chatham", "<+1245>-12:45<+1345>,M9.5.0/2:45,M4.1.0/3:45"},
    {"Pacific/Chuuk", "<+10>-10"},
    {"Pacific/Easter", "<-06>6<-05>,M9.1.6/22,M4.1.6/22"},
    {"Pacific/Efate", "<+11>-11"},
    {"Pacific/Enderbury", "<+13>-13"},
    {"Pacific/Fakaofo", "<+13>-13"},
    {"Pacific/Fiji", "<+12>-12<+13>,M11.2.0,M1.2.3/99"},
    {"Pacific/Funafuti", "<+12>-12"},
    {"Pacific/Galapagos", "<-06>6"},
    {"Pacific/Gambier", "<-09>9"},
    {"Pacific/Guadalcanal", "<+11>-11"},
    {"Pacific/Guam", "ChST-10"},
    {"Pacific/Honolulu", "HST10"},
    {"Pacific/Johnston", "HST10"},
    {"Pacific/Kanton", "<+13>-13"},
    {"Pacific/Kiritimati", "<+14>-14"},
    {"Pacific/Kosrae", "<+11>-11"},
    {"Pacific/Kwajalein", "<+12>-12"},
    {"Pacific/Majuro", "<+12>-12"},
    {"Pacific/Marquesas", "<-0930>9:30"},
    {"Pacific/Midway", "SST11"},
    {"Pacific/Nauru", "<+12>-12"},
    {"Pacific/Niue", "<-11>11"},
    {"Pacific/Norfolk", "<+11>-11<+12>,M10.1.0,M4.1.0/3"},
    {"Pacific/Noumea", "<+11>-11"},
    {"Pacific/Pago Pago", "SST11"},
    {"Pacific/Palau", "<+09>-9"},
    {"Pacific/Pitcairn", "<-08>8"},
    {"Pacific/Pohnpei", "<+11>-11"},
    {"Pacific/Ponape", "<+11>-11"},
    {"Pacific/Port Moresby", "<+10>-10"},
    {"Pacific/Rarotonga", "<-10>10"},
    {"Pacific/Saipan", "ChST-10"},
    {"Pacific/Samoa", "SST11"},
    {"Pacific/Tahiti", "<-10>10"},
    {"Pacific/Tarawa", "<+12>-12"},
    {"Pacific/Tongatapu", "<+13>-13"},
    {"Pacific/Truk", "<+10>-10"},
    {"Pacific/Wake", "<+12>-12"},
    {"Pacific/Wallis", "<+12>-12"},
    {"Pacific/Yap", "<+10>-10"},
    {"Poland", "CET-1CEST,M3.5.0,M10.5.0/3"},
    {"Portugal", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"ROC", "CST-8"},
    {"ROK", "KST-9"},
    {"Singapore", "<+08>-8"},
    {"Turkey", "<+03>-3"},
    {"UCT", "UTC0"},
    {"US/Alaska", "AKST9AKDT,M3.2.0,M11.1.0"},
    {"US/Aleutian", "HST10HDT,M3.2.0,M11.1.0"},
    {"US/Arizona", "MST7"},
    {"US/Central", "CST6CDT,M3.2.0,M11.1.0"},
    {"US/East-Indiana", "EST5EDT,M3.2.0,M11.1.0"},
    {"US/Eastern", "EST5EDT,M3.2.0,M11.1.0"},
    {"US/Hawaii", "HST10"},
    {"US/Indiana-Starke", "CST6CDT,M3.2.0,M11.1.0"},
    {"US/Michigan", "EST5EDT,M3.2.0,M11.1.0"},
    {"US/Mountain", "MST7MDT,M3.2.0,M11.1.0"},
    {"US/Pacific", "PST8PDT,M3.2.0,M11.1.0"},
    {"US/Samoa", "SST11"},
    {"UTC", "UTC0"},
    {"Universal", "UTC0"},
    {"W-SU", "MSK-3"},
    {"WET", "WET0WEST,M3.5.0/1,M10.5.0"},
    {"Zulu", "UTC0"}
};