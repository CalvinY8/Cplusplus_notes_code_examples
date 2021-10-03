/*
creating struct
https://youtu.be/_bYFu9mBnr4?t=30979
*/
#include <string>
#include <vector> //need it
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::vector; //need it
using std::endl;

struct User{
    string fname;
    string lname;

    //normally structs wouldn't have methods
    //this is just to show how to access private members
    string get_status(){
        return status;
    }

    //this is how to set members to private
    private:
        string status = "Gold";
};

int main(){
    User me;
    me.fname = "caleb";
    me.lname = "curry";

    cout << "status: " << me.get_status() << endl;
}