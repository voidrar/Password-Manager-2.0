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
		system("cls");
		menu();
	}
	else {
		system("cls");
		Discord();
	}
}

	

void VRC()
{
	cout << "Enter Your VRCHAT Password To Be Saved" << "\n";
	cin >> VRCPass;
	Decor();
	cout <<  VRCPass << "\n";
	Decor();
	cout << "Is this correct?    Yes|No \n";
	cin >> UV;
	if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
	{
		system("cls");
		VRC();
	}
	else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
	{
		system("cls");
		menu();
	}
	else
	{
		system("cls");
		VRC();
	}

}
void Uni()
{
	cout << "Enter The Password You Need Saved";
	cin >> Universal;
	cout << "\n" << "Is This Correct?      Yes|No";
	cin >> UV;
	if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
	{
		system("cls");
		Uni();
	}
	else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
	{
		system("cls");
		menu();
	}
	else
	{
		system("cls");
		Uni();
	}
}




















void CreatePassword()
{
	system("cls");
	cout << "Enter The Password You Would Like To Save\n";
	cout << "Discord | VRCHAT | UNIVERSAL\n";


	cin >> CreatePass;
	if (CreatePass == "Discord" || CreatePass == "discord" || CreatePass == "disc" || CreatePass == "Disc" || CreatePass == "Dis" || CreatePass == "dis")
	{

		Discord();

	}
	else if (CreatePass == "VRC" || CreatePass == "vrc" || CreatePass == "VRChat" || CreatePass == "vrchat")
	{


		VRC();

	}
	else if (CreatePass == "Universal" || CreatePass == "universal")
	{



		
		Uni();


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

