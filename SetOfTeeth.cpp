#include "stdafx.h"
#include "SetOfTeeth.h"
#include <iostream>
#include <string>
using namespace std;

SetOfTeeth::SetOfTeeth()
{
	listSize = 0;
}

int SetOfTeeth::addTooth()
{
	if (toothArray[listSize].getTooth() == 0)
	{
		if (isUnique(toothArray[listSize]))
		{
			listSize++;
			return 0;
		}
	}
	else
	{
		cout << "Tooth operation error. Try again at your own risk." << endl;
		return -33;
	}
}

//int SetOfTeeth::getIndex()
//{
//	return listSize + 1;
//}
bool SetOfTeeth::isUnique(Tooth chomper)
{
	for (int i = 0; i < listSize; i++)
	{
		if (chomper.getToothID() == toothArray[i].getToothID())
		{
			cout << "\nIt's not normal to collect more than one of a tooth";
			cout << " type from any given species. Please try to be more ";
			cout << "normal.\nWe will help by not letting you record this ";
			cout << "redundant " << chomper.getToothID() << " in your ";
			cout << "collection of favorite teeth.\n";
			return false;
		}
	}
	return true;
}

void SetOfTeeth::displayList()
{
	int i;

	//for (int outer = 1; outer < listSize + 1; outer++)
	//{
	//	int inner = outer;
	//	while (inner > 0 && (toothArray[inner].getToothID < toothArray[inner - 1].getToothID))
	//	{
	//		Tooth temp = toothArray[inner];
	//		toothArray[inner] = toothArray[inner - 1];
	//		toothArray[inner - 1] = temp;
	//		inner--; 
	//	}
	//}

	for (i = 0; i < listSize; i++)
	{
		cout << toothArray[i];
		cout << endl << endl;
	}
}
