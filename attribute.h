#ifndef ATTRIBUTE_H_
#define ATTRIBUTE_H_ 

#include <string> 
#include "t_characteristic.h"

#define MAXATTRIBUTEVALUE 5
/*
Well do it
LCS WAY!
*/
enum Character_Attribute //Class Attribute {....	CreatureAttribute attribute;....}
					 //Class Creature {attribute attributes[attributeNUM]}
{
	ZERO_ATTRIBUTE = 0,
	STAMINA,
	SENSITIVITY,
	TEMPER,
	INTELLECT,
	EGO,
	EXOTIC,
	FAT,

	OBEDIENCE,
	CUSTOM,
	PRIDE,
	SPOIL,
	ATTRIBUTENUM
};


class _Attribute : public t_characteristic
{
private:
	//int value;  //from t_characteristic
	Character_Attribute attribute; // enum'ed name of the attribute. range From ZERO_attribute to attributeNUM

public:
	_Attribute() {attribute=ZERO_ATTRIBUTE; value=0;}
	~_Attribute() {}
	bool increment_Value (); //Why not?
	int get_Skill(); //There should be changes TODO
	std::string get_Attribute_name (); // String? TODO
 };


#endif //ATTRIBUTE_H_