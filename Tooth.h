#pragma once
#include "stdafx.h" 
#include <iostream>
#include <string> //////////only include string that was already there for kelo
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
	int getTooth();
//	int addTooth(int num);
	//	int shipInventory(int num);

	string getToothID();
	//void setSpecies(string animal);
	//void setToothType(string toothCat);
	//void setPrice(double cost);
	//void setQuality(double rating);
	//void setNote(string comment);

	friend ostream & operator<<(ostream &os, const Tooth &item);

};

