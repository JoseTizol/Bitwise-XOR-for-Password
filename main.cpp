
/**************************************************************************
 Author: Jose Tizol
 Visual Studio 2010
 Version 1.2
 Date: 12/10/2014
 
 Source.cpp
 **************************************************************************/

#include <iostream>
#include "MYLIB.h"
using namespace std;



int main()
{
    PASSWORD OBJ;
    
    OBJ.Initialize_buffer();
    OBJ.get_Password();
    
    system("pause");
    return 0;
}

/*---------------------- Initialize the buffer(s) -----------------------*/
void PASSWORD::Initialize_buffer() {
   SystemPassword = "x1z33r";
}


/*------------------------- Enter user password -------------------------*/
// password will be compared to system password
void PASSWORD::get_Password() {
    cout << "Enter password: ";
    cin >> UserPassword;
    
    int UserPwSize = UserPassword.size();
    cout << "Size of string entered: " << UserPwSize << endl;
    Compare_Passwords();
}

/*--------------------- Compared the two passwords ----------------------*/
void PASSWORD::Compare_Passwords() {
    int check = SystemPassword.length() ^ UserPassword.length();  // determines if both password have the same length
    //determines if both password are string
    for(int i = 0; i < SystemPassword.length() && i < UserPassword.length(); i++)     
        check |= SystemPassword[i] ^ UserPassword[i];
    // this prevents a timing attack
    if (check == 0)
        cout << "Your password has been authenticated!" << endl;
    else
        cout << "Wrong password" << endl;
}

