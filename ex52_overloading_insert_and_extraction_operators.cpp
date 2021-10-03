/*
ex52_overloading_<<_and_>>_operators
https://youtu.be/_bYFu9mBnr4?t=34877

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

//overload insert operator
ostream& operator << (ostream &output, const User user){
    output << "fname: " << user.fname << "\nlname: " << user.lname;
    return output;
}

//overload extraction operator
istream& operator >> (istream &input, User &user){
    //cin operator uses space as separator
    //enter data as space-separated firstname lastname
    //first word goes to user.fname
    //2nd word goes to user.lname
    input >> user.fname >> user.lname;
    return input;
}


int main(){
    User user;
    // user.fname = "caleb";
    // user.lname = "curry";
    // user.set_status("gold");

    //take in user class data from console
    //enter data as space-separated firstname lastname
    cin >> user;
    //https://youtu.be/_bYFu9mBnr4?t=35320

    //output user datafrom class
    cout << user << endl;

    
}
