/*
ex57 polymorphism
https://youtu.be/_bYFu9mBnr4?t=37017

---HOW TO USE---
//cd into folder
cd ex57_polymorphism

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

//ampersand to pass by reference so user will be recognized as the object itself
//otherwise all classes will be treated as a user
void do_something(User &user){
    user.output();
}

int main(){

    Teacher teacher;

    //because teacher is also a user
    //we are able to assign teacher to type user
    User& u = teacher;

    //https://youtu.be/_bYFu9mBnr4?t=37158
    /*
    the working of output() depends on keyword 'virtual' in front of the output() in User class(in user.h)
        "A virtual function allows derived classes to replace the implementation provided by the base class."
        --https://isocpp.org/wiki/faq/virtual-functions

    so the virtual keyword allows instance 'teacher' to call output() of the subclass, and not the superclass
    */
    //u.output();



    //-----------new experiment----------
    User user;

    //we have declared a user and a teacher
    //using ampersand to pass by reference in line 30,
    //  each object will claim it's class to be:
    do_something(user); //I am a user
    do_something(teacher); //I am a teacher


    //---main concept---
    //you can treat objects as subclass or superclass depending on how you code it
}

