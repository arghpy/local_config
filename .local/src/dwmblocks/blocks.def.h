//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "disk_usage",		30,		16},
	{"", "memory",			5,		10},
	{"", "cpu_stats",		30,		15},
	{"", "cpu_temp",		5,		12},
	{"", "battery",			30,		11},
	{"", "volume",			0,		13},
	{"", "wifi",			10,		17},
	{"", "date_hour",		5,		14},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
