//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/bin/statusbar/torrrent",	1,		10}
	,
	{"", "~/bin/statusbar/music",		1,		10},

	{"", "~/bin/statusbar/volume",		1,		10},

	{"", "~/bin/statusbar/pacupdates",	1,		10},

	{"", "~/bin/statusbar/internet",	1,		10},

	{"", "~/bin/statusbar/clock",		5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
