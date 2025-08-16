#include <iostream>
#include <limits>	
#include <stdlib.h>
#include <string>
#include <fstream>
#include "passwords.h"
#include "ViewPasswords.h"
using namespace std;
string menus;
void menu()
{
	std::cout << R"(
 /$$$$$$$$                               /$$$$$$$                           
|_____ $$                               | $$__  $$                          
     /$$/   /$$$$$$   /$$$$$$   /$$$$$$ | $$  \ $$  /$$$$$$  /$$   /$$      
    /$$/   /$$__  $$ /$$__  $$ /$$__  $$| $$  | $$ |____  $$| $$  | $$      
   /$$/   | $$$$$$$$| $$  \__/| $$  \ $$| $$  | $$  /$$$$$$$| $$  | $$      
  /$$/    | $$_____/| $$      | $$  | $$| $$  | $$ /$$__  $$| $$  | $$      
 /$$$$$$$$|  $$$$$$$| $$      |  $$$$$$/| $$$$$$$/|  $$$$$$$|  $$$$$$$      
|________/ \_______/|__/       \______/ |_______/  \_______/ \____  $$      
                                                             /$$  | $$      
                                                            |  $$$$$$/      
                                                             \______/       
)" << "\n";




	cout << "are We viewing or setting a password? \n";
	
	cin >> menus;
	system("cls");
	if (menus == "Viewing" || menus == "viewing")
	{
		
		ViewPassword();
	}
	else if (menus == "Setting" || menus == "setting")
	{
		system("cls");
		CreatePassword();
	}
	else
		menu();
}
