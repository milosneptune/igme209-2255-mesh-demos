#include "Cleric.h"
#include <iostream>
using namespace std;


Cleric::Cleric() : Cleric("Cleric", "Binky")
{
	// this should be printing out when created?
	#ifdef CHAR_DEBUG_ON // pre processor directive. this line of code
	// is only gonna get included in the code that is compiled, if that char_debug_on is defined somewhere.
	// so since char debug aint defined, we dont see this directive anywhere
	// doing if/bools takes performance, so this is more efficient 
	cout << "+Cleric" << endl;
	#endif
}

Cleric::Cleric(std::string _name, std::string _deity)
	: Character(_name)
{
	#ifdef CHAR_DEBUG_ON 
	cout << "+Cleric(" << _name << ")" << endl;
	#endif
	deity = _deity;
	childDynamicData = new int(24);
}

Cleric::~Cleric()
{
#ifdef CHAR_DEBUG_ON 
	cout << "~Cleric(" << name << ")" << endl;
#endif
	delete childDynamicData;
}


void Cleric::PrintData()
{
	Character::PrintData();
	cout << "\tBelieves In: " << deity << " (" << *childDynamicData << ")" << endl;
}


void Cleric::PrintType()
{
	cout << "\tType: Cleric!" << endl;
}
