#ifndef CHARACTER_H_
#define CHARACTER_H_ 
#include "attribute.h"
#include "skill.h"
#include "inventory.h"

struct s_Status
{
	int mood;
	bool alive;
	bool asleep;
	//TODO
};

class character
{
protected:
	s_Status status;
	
	char * Name;
	class _Skill skills [SKILLNUM];
	class _Attribute attributes [ATTRIBUTENUM];
	
	_Inventory_slot inventory [INV_NUM];
public:
	character();
	~character();
	
	//some actions!
	//TODO
	/* data */
};


#endif //CHARACTER_H_