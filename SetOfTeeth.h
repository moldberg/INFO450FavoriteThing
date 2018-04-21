#pragma once 

#include "stdafx.h"
#include "Tooth.h"
#include <string>

class SetOfTeeth
{
private:
	Tooth toothArray[100];
	int listSize;
public:
	SetOfTeeth();
	int addTooth();
	bool isUnique(Tooth chomper);
	void displayList();
//	int getIndex();
};