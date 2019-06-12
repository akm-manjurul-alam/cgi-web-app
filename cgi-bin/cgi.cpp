#include <iostream>   
#include <stdio.h>  
#include <stdlib.h> 
#include "cgi1.h"

using namespace cgi1.h;
using namespace std;

int main() {
	bool valid_login();

	cout << "Content-type:text/html\r\n\r\n";
	cout << "<html>\n";
	cout << "<head>\n";
	cout << "<title>Using GET and POST Methods</title>\n";
	cout << "</head>\n";
	cout << "<body>\n";
	cin.getline(username, 20);
	cin.getline(password, 20);
	cout << "<br/>\n";
	cout << "</body>\n";
	cout << "</html>\n";

	return 0;
}