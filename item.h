#ifndef ITEM_H_
#define ITEM_H_ 

/*
Well do it
LCS WAY!
*/



class _Item
{
private:
	char * name;
	// properties?
	int price;
public:
	_Item() {}
	~_Item() {}
	bool get_name ();  // string ? TODO

	int get_price(); //There should be changes TODO
	
	bool set_price();

	bool destroy(); //why not

	_Item spawn (); //why not

	_Item use (); //virtual??

 };


#endif //ITEM_H_ 