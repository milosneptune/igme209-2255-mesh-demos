// Inheritance_pt2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#include <iostream>
#include <vector>

#include "Character.h"
#include "Cleric.h"
using namespace std;

void wrapper();


int main()
{
	wrapper();

	if (_CrtDumpMemoryLeaks())
		cout << "\nMEMORY LEAKS!" << endl;
	else
		cout << "\nNo memory leaks. :)" << endl;
}

void wrapper()
{
	cout << "~~ CREATE ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	Character parentObj = Character("Lacy");
	cout << endl;

	Cleric childObj = Cleric("Pax", "Attention");
	cout << endl;

	// you could change this to cleric*
	// but we arent changing code to make aiden print correctly
	// fix is how classes are defined.... ohhh
	// like virtual and override.... OHHH
	Character* parentPtrToChildObj = new Cleric("Aiden","Food");
	cout << endl;

	cout << "~~ PRINT ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	parentObj.PrintData();
	parentObj.PrintType();
	cout << endl;

	childObj.PrintData();
	childObj.PrintType();
	cout << endl;

	parentPtrToChildObj->PrintData();
	parentPtrToChildObj->PrintType();
	cout << endl;

	cout << "~~ CLEAN UP ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	delete parentPtrToChildObj;
	cout << endl;
}