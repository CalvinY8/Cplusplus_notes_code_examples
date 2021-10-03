/*
https://youtu.be/_bYFu9mBnr4?t=35578
if you need to access private members of a class
    it might be best to use a getter

if not, use a friend function
turn your attention to line 90
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
            //cout << "default constructor called\n";
        }

        //explicit constructor
        User(string fname, string lname, string status){
            this->fname = fname;
            this->lname = lname;
            this->status = status;
            //like php, assign params to data members using 'this' keyword
            
            number_of_users++;
            //cout << "explicit constructor has been called\n";
            
        }

        //destructor
        ~User(){
            number_of_users--;
            //cout << "destructor called\n";
        }

        /*
        ------marked as friend functions------
        allows overloaded operators to access private members of class
        */
        friend ostream& operator << (ostream &output, const User user);
        
        friend istream& operator >> (istream &input, User &user);
        //-------

        
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

int main(){
    User user;
    //showing both overloaded << and >> operators, marked as friend function, can now access private members of class
    //------

    //enter data as space-separated firstname lastname status
    // >> operator taking user input from console to modify a private member called 'status'
    cin >> user;

    // << operator's accessing private member, 'status', to output it to console
    cout << user <<endl;


}

