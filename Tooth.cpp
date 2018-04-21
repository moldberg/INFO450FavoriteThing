#include "stdafx.h"
#include "Tooth.h" 
#include <string>


Tooth::Tooth()
{
	species = "";
	toothType = "";
	price = 0;
	quality = 0;
	note = "";
}

//Complete constructor, overloaded
Tooth::Tooth(string animal, string toothCat, double cost, double rating, string comment)
{
	species = animal;
	toothType = toothCat;
	price = cost;
	quality = rating;
	note = comment;
}

Tooth::~Tooth()
{
	cout << "If you can read this, you're in start-without-debugging mode\n";
}

int Tooth::getTooth()
{
	cout << "\nSpecies of animal (e.g. Walrus) that this tooth comes from : ";
	getline(cin, species);

	cout << "\nType of tooth (e.g. Tusk) : ";
	getline(cin, toothType);

	cout << "\nEstimated price value: $";
	cin >> price;
	if (!cin.good()) //Error check
	{
		cout << "\nPrice error." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		return -11;
	}

	cout << "\nQuality from 0-10, where 10 is mint(y) condition : ";
	cin >> quality;
	if (!cin.good()) //Error check
	{
		cout << "\nQuality error." << endl;
		cin.clear();
		cin.ignore(256, '\n');
		return -22;
	}
	cin.clear();
	cin.ignore();
	if (quality < 0) //Correcting quality input mistakes
		quality *= -1;
	if (quality > 10)
		quality = 10;

	cout << "\nEnter additional note: ";
	getline(cin, note);
	return 0;
}



/*
int Tooth::addTooth(int num)
{
	if (num < 0)
		return -33;
	quality += num;
	return 0;
}


int Tooth::shipInventory(int num)
{
if (num < 0 || num > quality)
return -11;

quality -= num;
return 0;
}
*/

//Gets tooth's unique identifying info
string Tooth::getToothID()
{
//	string concat = species + "~" + toothType;
	return species + " " + toothType;
}
/*
//Setters
void Tooth::setSpecies(string animal)
{
	species = animal;
}
void Tooth::setToothType(string toothCat)
{
	toothType = toothCat;
}
void Tooth::setPrice(double cost)
{
	price = cost;
}
void Tooth::setQuality(double rating)
{
	quality = rating;
}

void Tooth::setNote(string comment)
{
	note = comment;
}

*/

//Friend function overloading "<<" to use private Tooth object fields
//Function sits outside of class definitions
ostream & operator<<(ostream &os, const Tooth &item)
{
	os << "*********************************************************" << endl;
	os << " *** *** *** *** *** *** *** *** *** *** *** *** *** *** " << endl;
	os << item.toothType << " of a(n) " << item.species << endl;
	os << "*       *       *       *       *       *       *       *" << endl;
	os << "Tooth quality: " << item.quality << " /10" << endl;
	os << "Dollar value: $" << item.price << endl;
	os << "Notes: " << item.note << endl;
	os << " *** *** *** *** *** *** *** *** *** *** *** *** *** *** " << endl;
	os << "*********************************************************" << endl;

	return os;
}