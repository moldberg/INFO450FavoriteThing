#include "stdafx.h"
#include "Tooth.h"

//Default dummy constructor
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
}

//Gets user to fill in field data for a new Tooth entry. Checks for errors
//  in certain field values as the user goes.
int Tooth::pullToothInfo()
{
	cout << "\nSpecies of animal (e.g. Walrus) that this tooth comes from : ";
	getline(cin, species);

	cout << "\nType of tooth (e.g. Tusk) : ";
	getline(cin, toothType);

	cout << "\nEstimated price value: $";
	cin >> price;
	if (!cin.good()) //Error check
	{
		cout << "\nPrice error.";
		cin.clear();
		cin.ignore(256, '\n');
		return -11;
	}

	cout << "\nQuality from 0-10, where 10 is mint(y) condition : ";
	cin >> quality;
	if (!cin.good()) //Error check
	{
		cout << "\nQuality error.";
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

//Gets tooth's unique identifying info
string Tooth::getToothID()
{
	return species + " " + toothType;
}

//Friend function overloading "<<" to display private Tooth object fields.
//  Function sits outside of class definitions
ostream & operator<<(ostream &os, const Tooth &item)
{
	os << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	os << " ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ " << endl;
	os << "\t\t" << item.toothType << " of a(n) " << item.species << endl;
	os << "^       ^       ^       ^       ^       ^       ^       ^" << endl;
	os << "\tTooth quality: " << item.quality << " /10" << endl;
	os << "\tDollar value: $" << item.price << endl;
	os << "\tNotes: " << item.note << endl;
	os << " ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ ^^^ " << endl;
	os << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;

	return os;
}