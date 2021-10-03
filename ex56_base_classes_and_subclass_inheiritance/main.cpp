/*
ex56_base_classes_and_subclass_inheiritance
https://youtu.be/_bYFu9mBnr4

---HOW TO USE---
//cd into folder
cd ex56_base_classes_and_subclass_inheiritance

//do multi file compilation
g++ main.cpp user.cpp teacher.cpp

//run it
./a.out

*/

#include "user.h"
#include "teacher.h"
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    //showing both overloaded << and >> operators, marked as friend function, can now access private members of class
    //------

    //User user;
    //enter data as space-separated firstname lastname status
    // >> operator taking user input from console to modify a private member called 'status'
    //cin >> user;

    // << operator's accessing private member, 'status', to output it to console
    //cout << user << endl;

    Teacher teacher;
    teacher.output();

    //notice Teacher inheirts fname & lname from User class
    //https://youtu.be/_bYFu9mBnr4?t=36882

    teacher.fname = "caleb";
    cout << teacher.fname << endl;


    /*order of instantiation when Teacher created(line 40):
    https://youtu.be/_bYFu9mBnr4?t=36972
    User constructor called, then Teacher constructor called

    generalized:
    superclass constructor called, then subclass constructor
    */

}

