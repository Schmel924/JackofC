#include "Text_log.h"

//For textoutputing, yeah
#include "textoutput.h"
//it takes SDL with him... should i move it out? TODO

void Text_log (const char * log_string)
{
	text_output (log_string);
	//TODO logfile
}