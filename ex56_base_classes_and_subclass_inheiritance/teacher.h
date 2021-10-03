/*
header file for teachers
https://youtu.be/_bYFu9mBnr4?t=36613
*/


#ifndef TEACHER_H
#define TEACHER_H

#include "user.h"//important
#include <string>
#include <vector>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::vector;

//public keyword allows inheriting User members w/ no change
class Teacher : public User{
    public:
        vector<string> classes_taught;
        void output();
        Teacher();//call default constructor
};

#endif