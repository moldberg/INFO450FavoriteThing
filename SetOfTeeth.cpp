#include "stdafx.h"
#include "SetOfTeeth.h"
#include <iostream>
#include <fstream>
using namespace std;

//Default constructor
SetOfTeeth::SetOfTeeth()
{
	listSize = 0;
}

SetOfTeeth::~SetOfTeeth()
{
	cout << "\nDestroying your collection\n";
}

//Gets new Tooth object made, tests entry validity, and adds to collection
int SetOfTeeth::addTooth()
{
	if (toothArray[listSize].pullToothInfo() == 0
		&& isUnique(toothArray[listSize]))
	{
		listSize++; //Includes successfully created object in collection list
		return 0;
	}
	else
	{
		cout << " Entry aborted.";
		return -33;
	}
}

//Compares newly created Tooth object with all objects in collection to ensure
//  unique species/tooth-type combinations in the catalogue.
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

//Puts together entries and prints it all to console.
void SetOfTeeth::displayList()
{
	//Alphabetical list insertion sort, by species, then tooth type
	//Alhabetization rewards consistency in uppercase/lowercase use!
	for (int outer = 1; outer < listSize; outer++)
	{
		int inner = outer;
		while (inner > 0 &&
			toothArray[inner].getToothID() < toothArray[inner - 1].getToothID())
		{
			Tooth temp = toothArray[inner];
			toothArray[inner] = toothArray[inner - 1];
			toothArray[inner - 1] = temp;
			inner--;
		}
	}
	cout << "Here is your collection. It has " << listSize << " teeth!\n\n";
	for (int i = 0; i < listSize; i++)
	{
		cout << toothArray[i];
		cout << endl << endl;
	}
}

//Saves Tooth array entry display to text file.
	//Note: Analogous to but independent of displayList function.
void SetOfTeeth::save()
{
	string fileName;
	ofstream toothFile;

	cout << "Give a name to your file, e.g. mylist: ";
	getline(cin, fileName);
	toothFile.open(fileName + ".txt"); 

	//Redundant code mimicking displayList, could be improved...
	for (int outer = 1; outer < listSize; outer++)
	{
		int inner = outer;
		while (inner > 0 &&
			toothArray[inner].getToothID() < toothArray[inner - 1].getToothID())
		{
			Tooth temp = toothArray[inner];
			toothArray[inner] = toothArray[inner - 1];
			toothArray[inner - 1] = temp;
			inner--;
		}
	}
	toothFile << "Here is your collection. It has " << listSize << " teeth!\n\n";
	for (int i = 0; i < listSize; i++)
	{
		toothFile << toothArray[i];
		toothFile << endl << endl;
	}

	toothFile.close();
	cout << "Saved!\n";
}
