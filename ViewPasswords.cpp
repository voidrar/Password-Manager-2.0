#include <iostream>
#include <limits>	
#include <stdlib.h>
#include <string>
#include <fstream>
#include "passwords.h"
#include "ViewPasswords.h"
#include "menu.h"
using namespace std;
string ViewPass;


void ViewPassword()
{
	cout << " Which Password Would You Like To See\n";
	cin >> ViewPass;
	if (ViewPass == "Discord" || ViewPass == "discord" || ViewPass == "disc" || ViewPass == "Disc" || ViewPass == "Dis" || ViewPass == "dis")
	{

		Decor();
		cout << DiscordPass << "\n";
		Decor();
		cout << "Here Is Your Password!\n";

		cout << "Want To View A Different Password          Yes|No         \n";
		cin >> UV;

		if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
		{
			system("cls");
			menu();
		}
		else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
		{
			system("cls");
			ViewPassword();
		}
		
	}
	else if (ViewPass == "VRC" || ViewPass == "vrc" || ViewPass == "VRChat" || ViewPass == "vrchat")
	{


		Decor();
		cout << VRCPass << "\n";
		Decor();
		cout << "Here Is Your Password!\n";

		cout << "Want To View A Different Password          Yes|No         \n";
		cin >> UV;

		if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
		{
			system("cls");
			menu();
		}
		else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
		{
			system("cls");
			ViewPassword();
		}


	}
	else if (ViewPass == "Universal" || ViewPass == "universal")
	{


		Decor();
		cout << Uni << "\n";
		Decor();
		cout << "Here Is Your Password!\n";

		cout << "Want To View A Different Password          Yes|No         \n";
		cin >> UV;

		if (UV == "No" || UV == "no" || UV == "n" || UV == "N")
		{
			system("cls");
			menu();
		}
		else if (UV == "Yes" || UV == "yes" || UV == "Y" || UV == "y")
		{
			system("cls");
			ViewPassword();
		}



	}
	else {
		ViewPassword();
	}
}
