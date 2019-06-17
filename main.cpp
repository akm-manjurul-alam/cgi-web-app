#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <fstream>
#include <string>
#pragma warning(disable:4996)

using namespace std;


int main() {

    char username[50 +1];
    char password[50 +1];

      char K[1000];
     cin >> K;



     for (int i = 0; K[i] != '\0'; i++) {
         if (K[i] == '&') {
             K[i] = ' ';
         }
     }

     sscanf(K, " username=%s, password=%s", username, password);
     string usr( username );
     string pass( password );

     cin >> usr;
     cin >> pass;

    // TODO find username= string n postdata string -> string operations
    // TODO find password= string n postdata string -> string operations


    ifstream read("C:\\xampp\\htdocs\\cgi-app\\cgi-bin\\test.txt"); // Remember to replace this with the location of your test data before compiling
    string us, pw;
    getline (read, us);
    getline (read, pw);

    cout << us;
    cout << pw;



    if (us == usr && pw == pass)
        // TODO redirect to other html page
        system ( "start http://localhost/Termin/pages/login.html"); // replace this with your homehtml link
    else
        // TODO dont do anything
        system ( "start http://localhost/Termin/pages/reset-password.html"); // replace this with your login html link


    return 0;
}

