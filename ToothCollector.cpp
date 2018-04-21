// ToothCollector.cpp : Defines the entry point for the console application. 
//

#include "stdafx.h"
#include "Tooth.h"
#include "SetOfTeeth.h"
#include <string>

using namespace std;

void displayGreeting();
//void pullToothInfo(Tooth chomper);

int main()
{
	Tooth *blah = new Tooth;
	*blah = Tooth("test", "tesssst", 4, 2, "aheadfs asdf a;kdslf j;lksadjf ;lksadf");
	cout << *blah;
	char answer;
	SetOfTeeth collection;
	displayGreeting();
	do
	{
		cout << "You can either insert a tooth into the collection,\n";
		cout << "Or marvel at your amassed collection.\n\n";
		cout << "Enter 'c' to Catalogue, or 'v' to View: ";
		cin >> answer;
		cin.ignore(500, '\n');
		cin.clear();
		while (tolower(answer) == 'c')
		{
			collection.addTooth();
			//Note: Use the int that addtooth returns, 0 if good etc
			cout << "Enter 'c' to Continue adding teeth, ";
			cout << "or 'v' to View your tooth collection: ";
			cin >> answer;
			cin.ignore(500, '\n');
			cin.clear();
		}
		if (tolower(answer) == 'v')
		{
			collection.displayList();
		}
		cout << "\nKeep going? Enter 'y' to return to your menu options: ";
		cin >> answer;
		cin.ignore(500, '\n');
		cin.clear();
	} while (tolower(answer) == 'y');
}

void displayGreeting()
{
	cout << "Is your tooth collection getting out of hand?\n";
	cout << "Is listing out your teeth verbally becoming too much of a mouthful ?\n";
	cout << "Need a digital catalogue that can store an over-byte database?\n";
	cout << "Then get with the chattering classes of tooth collectors and...\n\n";
	cout << "*******************************************************\n";
	cout << "   _____ _                   __     __\n";
	cout << "  / ____| |                  \\ \\   / /\n";
	cout << " | (___ | |__   _____      __ \\ \\_/ /__  _   _ _ __ \n";
	cout << "  \\___ \\| '_ \\ / _ \\ \\ /\\ / /  \\   / _ \\| | | | '__|\n";
	cout << "  ____) | | | | (_) \\ V  V /    | | (_) | |_| | |\n";
	cout << " |_____/|_| |_|\\___/ \\_/\\_/     |_|\\___/ \\__,_|_|\n\n";
	cout << "  _______   _______   _______   _______   __   __ \n";
	cout << " |       | |       | |       | |       | |  | |  |\n";
	cout << " |_     _| |    ___| |    ___| |_     _| |  |_|  |\n";
	cout << "   |   |   |   |___  |   |___    |   |   |       |\n";
	cout << "   |   |   |    ___| |    ___|   |   |   |       |\n";
	cout << "   |   |   |   |___  |   |___    |   |   |   _   |\n";
	cout << "   |___|   |_______| |_______|   |___|   |__| |__|\n\n";
	cout << "The tooth collector program that catalogs your favorite teeth\n";
	cout << "Keep track and show off your teeth to your friends\n\n";
	cout << "*******************************************************\n";

}

//void pullToothInfo(Tooth chomper)
//{
//
//}
