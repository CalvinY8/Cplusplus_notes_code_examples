//header file
#ifndef USER_H
#define USER_H


#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>
#include <algorithm>


using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;
using std::find;
using std::ostream;
using std::istream;

class User{
    /*
    static data members
    https://youtu.be/_bYFu9mBnr4?t=33769
        statics can only be used to access other statics (and vice versa for non-statics)
        can be made private and public
    associated w/ class rather than individual instances
    */
    static int number_of_users;


    //class members are private by default, unlike struct members
    string status;
    

    //declare public to access data members outside of definition
    public:
        //static method can only access static members
        static int get_user_count();

        vector<string> statuses = {"gold", "silver", "bronze"};

        string fname;
        string lname;

        //getter
        string get_status();

        //setter
        void set_status(string status);

        //default constructor
        User();

        //explicit constructor
        User(string fname, string lname, string status);

        //destructor
        ~User();

        /*
        ------marked as friend functions------
        allows overloaded operators to access private members of class
        */
        friend ostream& operator << (ostream &output, const User user);
        
        friend istream& operator >> (istream &input, User &user);
        //-------

        
};
#endif