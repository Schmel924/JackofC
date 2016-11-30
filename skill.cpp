#include "skill.h"
//For logging purposes
#include "Text_log.h"


//Should be simple increment, 
//but training will become harder TODO
bool _Skill::train_Skill ()
{
	if (this->value >= MAXSKILLVALUE)
		{
			Text_log ("Skill already at MAX");
			return -1;
		}
	else
		{
			this -> value = this -> value + 1;
		}
	return 1;
}

//IS simple increment! Why not?
bool _Skill::increment_Value ()
{
	if (this->value >= MAXSKILLVALUE)
		{
			Text_log ("Skill already at MAX");
			return -1;
		}
	else
		{
		this -> value = this -> value + 1;
		}
	return 1;
}


int _Skill::get_Attribute()
{
	return 0; // TODO TODO TODO
}
