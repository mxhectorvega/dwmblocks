//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/	 	/*Update Interval*/	/*Update Signal*/

	{" ", "music",	5,	5},

	{" ", "clima",	60,	5},

	{" ", "wifi",	60,	5},

/*	{" ", "cpu",	5,	5}, */
	
	{" ", "memory",	5,	5},

	{" ", "volume",	1,	5},

	{" ", "clock",	1,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';



