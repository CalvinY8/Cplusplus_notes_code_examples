/*implmentation file for user
    to hold User class
https://youtu.be/_bYFu9mBnr4?t=35993
    data members removed(ie variables or variable declarations)
    class name and curly braces removed
    public keyword removed
    static keyword removed
    friend keyword removed

    add User:: to the signatures of each method
*/

#include "user.h"
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
    


        //static method can only access static members
        int User::get_user_count(){
            return number_of_users;
        }


        //getter
        string User::get_status(){
            return status;
        }
        //setter
        void User::set_status(string status){
            //https://stackoverflow.com/questions/571394/how-to-find-out-if-an-item-is-present-in-a-stdvector
            if(find(statuses.begin(), statuses.end(), status) != statuses.end()){
                this->status = status;
            } else {
                this->status = "bronze";
            }
        }
        //default constructor
        User::User(){

            cout << "user created\n";

            number_of_users++;
            //cout << "default constructor called\n";
        }

        //explicit constructor
        User::User(string fname, string lname, string status){
            this->fname = fname;
            this->lname = lname;
            this->status = status;
            //like php, assign params to data members using 'this' keyword
            
            number_of_users++;
            //cout << "explicit constructor has been called\n";
            
        }

        //destructor
        User::~User(){
            number_of_users--;
            //cout << "destructor called\n";
        }

        /*
        ------marked as friend functions------
        allows overloaded operators to access private members of class
        */
        ostream& operator << (ostream &output, const User user);
        
        istream& operator >> (istream &input, User &user);
        //-------

        

/*
if a class member has been labelled static within the class,
it must be defined outside the class.
explanation:
https://youtu.be/_bYFu9mBnr4?t=33954
*/
int User::number_of_users = 0;

//overload insert operator
ostream& operator << (ostream &output, const User user){
    output << "fname: " << user.fname << "\nlname: " <<
    
    //output continued from above
    user.lname << "\nStatus: " << user.status << endl;

    return output;
}


//overload extraction operator
istream& operator >> (istream &input, User &user){
    //enter data as space-separated firstname lastname status
        //cin operator uses space as separator
        //first word goes to user.fname
        //2nd word goes to user.lname
        //3rd word goes to user.status
    input >> user.fname >> user.lname >> user.status;
    return input;
}

