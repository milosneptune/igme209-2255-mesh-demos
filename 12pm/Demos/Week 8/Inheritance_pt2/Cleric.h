#pragma once

#include "Character.h"

class Cleric :
	public Character
{
public:
	Cleric();
	Cleric(std::string _name, std::string _deity);
	~Cleric();	// NEVER OVERRIDE, we want BOTH destructors to run

	void PrintData() override;
	void PrintType() override;

protected:
	std::string deity;

private:
	int* childDynamicData;
};
