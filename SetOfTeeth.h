//Set of Teeth class: Work with a collection of user-created Tooth objects

#pragma once

#include "stdafx.h"
#include "Tooth.h"

class SetOfTeeth
{
private:
	Tooth toothArray[100];
	int listSize;
public:
	SetOfTeeth();
	~SetOfTeeth();
	int addTooth();
	bool isUnique(Tooth chomper);
	void displayList();
	void save();
};