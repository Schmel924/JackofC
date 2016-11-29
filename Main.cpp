//Using SDL and standard IO

#include "main.h"
//For logging purposes
#include "Text_log.h"
#include "attribute.h"
int main( int argc, char* args[] )
{
	text_output("Hello World!\n");
	getch();
	_Attribute Humam;
	Humam.set_value(3);
	int a = Humam.get_value();
	printf("%d\n", a);
	getch();
	return 0;
}