//ToothCollector.cpp : Program for maintaining a collection of catalogue
//  entries about a favorite thing (teeth). Has a Tooth class for representing
//  each entry. And a SetOfTeeth class for an object spanning the tooth
//  collection a user makes.

#include "stdafx.h"
#include "Tooth.h"
#include "SetOfTeeth.h"

using namespace std;

void displayGreeting();

int main()
{
	char answer;
	SetOfTeeth collection;
	displayGreeting();
	do
	{
		cout << "\n\nYou can either insert a tooth into the collection,\n";
		cout << "Or marvel at your amassed collection.\n";
		cout << "\nEnter 'c' to Catalogue, or 'v' to View: ";
		cin >> answer;
		cin.ignore(500, '\n');
		cin.clear();
		while (tolower(answer) == 'c')
		{
			if (collection.addTooth() < 0)
				break;
			cout << "\nEnter 'c' to Continue adding teeth, ";
			cout << "or 'v' to View your tooth collection: ";
			cin >> answer;
			cin.ignore(500, '\n');
			cin.clear();
		}
		if (tolower(answer) == 'v')
		{
			collection.displayList();
		}
		cout << "\Keep going? Enter 'y' to return to your menu options.\n";
		cout << "Otherwise exit. Enter 's' to save to file before exit.";
		cin >> answer;
		cin.ignore(500, '\n');
		cin.clear();
		if (tolower(answer) == 's')
			collection.save();
	} while (tolower(answer) == 'y');
}

void displayGreeting()
{
	cout << " ^ ^ ^  Is your tooth collection getting out of hand?  ^ ^ ^ \n";
	cout << "^ ^Is listing your teeth out verbally becoming a mouthful?^ ^\n";
	cout << "Need a digital catalogue able to store an over-byte database?\n";
	cout << "Join the chattering class of raving tooth collectors and...\n\n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
	cout << "       _____ _                   __     __\n";
	cout << "      / ____| |                  \\ \\   / /\n";
	cout << "     | (___ | |__   _____      __ \\ \\_/ /__  _   _ _ __ \n";
	cout << "      \\___ \\| '_ \\ / _ \\ \\ /\\ / /  \\   / _ \\| | | | '__|\n";
	cout << "      ____) | | | | (_) \\ V  V /    | | (_) | |_| | |\n";
	cout << "     |_____/|_| |_|\\___/ \\_/\\_/     |_|\\___/ \\__,_|_|\n\n";
	cout << "      _______   _______   _______   _______   __   __ \n";
	cout << "     |       | |       | |       | |       | |  | |  |\n";
	cout << "     |_     _| |    ___| |    ___| |_     _| |  |_|  |\n";
	cout << "       |   |   |   |___  |   |___    |   |   |       |\n";
	cout << "       |   |   |    ___| |    ___|   |   |   |       |\n";
	cout << "       |   |   |   |___  |   |___    |   |   |   _   |\n";
	cout << "       |___|   |_______| |_______|   |___|   |__| |__|\n\n";
	cout << "The tooth collector program that catalogs your favorite teeth\n";
	cout << " ^ ^ Keep track and show off your teeth to your friends! ^ ^ \n";
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";

}