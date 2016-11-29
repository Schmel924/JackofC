#ifndef T_CHARACTERISTIC_H_
#define T_CHARACTERISTIC_H_ 

#include <string> 



class t_characteristic
{
protected:
	int value;  //The only attribute characteristic that matters
	
public:
	t_characteristic() {value=0;}
	~t_characteristic() {}
	bool set_value (int _Value); //0-test here, also shouldn't really be used
	int get_value ();  // Plainly returns value. 
	virtual	bool increment_value (); //Virtual because of MAXVALUE restrictions
	bool decrement_value (); //Why not?
 };


#endif //T_CHARACTERISTIC_H_