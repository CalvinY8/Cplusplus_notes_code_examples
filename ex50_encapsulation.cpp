/*
encapsulation
https://youtu.be/_bYFu9mBnr4?t=32996

idea that private members of class can be hidden
    abstraction - driver doesn't need to know inner details of a car
    control - control the way the class is used (ex: setter and getter to control private data member)

getters and setters
https://youtu.be/_bYFu9mBnr4?t=33342

*/
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
        static int get_user_count(){
            return number_of_users;
        }

        vector<string> statuses = {"gold", "silver", "bronze"};

        string fname;
        string lname;

        //getter
        string get_status(){
            return status;
        }
        //setter
        void set_status(string status){
            //https://stackoverflow.com/questions/571394/how-to-find-out-if-an-item-is-present-in-a-stdvector
            if(find(statuses.begin(), statuses.end(), status) != statuses.end()){
                this->status = status;
            } else {
                this->status = "bronze";
            }
        }
        //default constructor
        User(){
            number_of_users++;
            cout << "default constructor called\n";
        }

        //explicit constructor
        User(string fname, string lname, string status){
            this->fname = fname;
            this->lname = lname;
            this->status = status;
            //like php, assign params to data members using 'this' keyword
            
            number_of_users++;
            cout << "explicit constructor has been called\n";
            
        }

        //destructor
        ~User(){
            number_of_users--;
            cout << "destructor called\n";
        }
};

/*
if a class member has been labelled static within the class,
it must be defined outside the class.
explanation:
https://youtu.be/_bYFu9mBnr4?t=33954
*/
int User::number_of_users = 0;


int main(){
    User user;
    user.set_status("tacos");

    //test set_status's ability to control value assigned to class member
    cout << user.get_status() << endl;


    cout << "number of users" << user.get_user_count() << endl;
}
