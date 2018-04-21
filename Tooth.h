//Tooth class: Work with a catalogue entry for a console user's favorite tooth

#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Tooth
{
private:
	string species;
	string toothType;
	double price;
	double quality;
	string note;
public:
	Tooth();
	Tooth(string animal, string toothCat, double cost, double rating, string comment);
	~Tooth();

	int pullToothInfo();
	string getToothID();

	friend ostream & operator<<(ostream &os, const Tooth &item);

};