#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <fstream>
#include "menu.h"
using namespace std;

string CreatePass;
string DiscordPass;
string VRCPass;
string Universal;
string UV;


void CreatePassword();


void Decor()
{
	cout << "|||||||||||||\n";
}



void Discord()
{
	cout << "Enter Your Discord Password To Save It\n";
	cin >> DiscordPass;
	cout << "\n";
	Decor();
	cout << " " << DiscordPass;
	cout << "\n";
	Decor();
	cout << "\n" << "Is This Correct?		Yes|No\n";
	cin >> UV;
	if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
	{
		system("cls");
		Discord();
	}
	else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
	{
		menu();
	}
}


void VRC()
{

}
void Uni()
{

}



















void CreatePassword()
{

	cout << "Enter The Password You Would Like To Save\n";
	cin >> CreatePass;
	if (CreatePass == "Discord" || CreatePass == "discord" || CreatePass == "disc" || CreatePass == "Disc" || CreatePass == "Dis" || CreatePass == "dis")
	{

		Discord();


		if (CreatePass == "VRC" || CreatePass == "vrc" || CreatePass == "VRChat" || CreatePass == "vrchat")
		{





			if (CreatePass == "Universal" || CreatePass == "universal")
			{







			}
		}


	}
	else
	{
		system("cls");
		CreatePassword();
	}

}

void AddEmail2Pass()
{


}

