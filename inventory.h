#ifndef INVENTORY_H_
#define INVENTORY_H_ 
class _Item; //forewarding fron item.h
/*
Well do it
LCS WAY!
*/
enum inventory_slots 
{	INV_ZERO,
	HEAD,
	SHOULDER,
	BREASTPLATE,
	LEFT_HAND,
	RIGHT_HAND,
	NECK,
	SHOES,
	GLOVES,
	RING,
	INV_NUM
};



class _Inventory_slot
{
private:
	//??
public:
	_Inventory_slot() {}
	~_Inventory_slot() {}
	bool set_item ( _Item ); 
	_Item get_item(); //There should be changes TODO
	bool empty (); // String? TODO
 };


#endif //INVENTORY_H_