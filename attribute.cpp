#include "attribute.h"
//For logging purposes
#include "Text_log.h"


//IS simple increment! Why not?
//But with max range
bool _Attribute::increment_Value ()
{
	if (this->value >= MAXATTRIBUTEVALUE)
		{
			Text_log ("Attribute already at MAX");
			return -1;
		}
	else
		{
		this -> value = this -> value + 1;
		}
	return 1;
}


int _Attribute::get_Skill()
{
	return 0; // TODO TODO TODO
}
