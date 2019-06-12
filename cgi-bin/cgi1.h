#include <iostream> 
#include <stdio.h>  
#include <stdlib.h> 
#pragma warning(disable:4996)

using namespace std;

bool valid_login()
{
	FILE *f = fopen("C:\\temp\\test.txt", "r");
	char buffer[100] = " ";
	char line[100] = "";
	char pointer;
	if (f == NULL)
	{
		cout << "Fehler beim einlesen der Datei";
		return NULL;
	}

	while (!feof(f))
	{
		fread(buffer, sizeof(line), 20, f);
	}
	char username[20];
	char password[20];

	cout << "username:";
	cin.getline(username, 20);
	cout << "password:";
	cin.getline(password, 20);

	strcat(line, username);
	strcat(line, " ");
	strcat(line, password);
	strcat(line, "\n");

	if (strstr(buffer, line) == NULL)
		return false;
	else
		return true;
}