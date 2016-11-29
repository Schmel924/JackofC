#include "t_characteristic.h"
//For logging purposes
#include "Text_log.h"

bool t_characteristic::set_value (int _Value)
{
	if (_Value > 0)
		{
			this->value=_Value;
			return true;
		}
	else
		return false;
}


int t_characteristic::get_value ()
{
	return this->value;
}


//IS simple increment! Why not?
bool t_characteristic::increment_value ()
{
		this -> value = this -> value + 1;
		return true;
}

bool t_characteristic::decrement_value ()
{
	if (this->value <= 1)
		{
			Text_log ("characteristic already at MIN");
			return false;
		}
	else
		this -> value = this -> value - 1;
		return true;
}
