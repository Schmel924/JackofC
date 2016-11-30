#ifndef SKILL_H_
#define SKILL_H_ 

#include <string> 
#include "t_characteristic.h"

#define MAXSKILLVALUE 5
/*
Well do it
LCS WAY!
*/
enum Character_Skill //Class skill {....	CreatureSkill skill;....}
					 //Class Creature {skill skills[SKILLNUM]}
{
	ZERO_SKILL = 0,
	EXPRESSION,
	PET,
	DRESSAGE,
	NURSE,
	SERVICE,
	COOK,
	ROLEPLAY,
	GLADIATRIX,
	ENCHANTER,
	CALLISTHENICS,
	VOCAL,
	MUSIC,
	SECRETARY,

	ORAL,
	PENETRATION,
	PETTING,
	ORGY,
	XENOPHILY,
	FETISHISM,
	SKILLNUM
};


//class t_characteristic;
class _Skill : public t_characteristic
{
private:
	//int value;  //from t_characteristic
	Character_Skill skill; // enum'ed name of the skill. range From ZERO_SKILL to SKILLNUM

public:
	_Skill() {skill=ZERO_SKILL; value=0;}
	~_Skill() {}
	bool train_Skill (); // after action "Train skill" - should just incrememt Value 
	bool increment_Value (); //Why not?
	int get_Attribute(); //There should be changes TODO
	std::string get_Skill_name (); // String? TODO
 };


#endif //SKILL_H_