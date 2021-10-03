/*
intro to constructors
https://youtu.be/_bYFu9mBnr4?t=32412

as seen in ex48, if the constructor isn't define explicitly
    //User user1;
    it will do the minimum to instantiate new object
>the implicit default constructor will only work if we don't define an explicit constructor.

---explicit constructor
//notice lack of return type. That is how to identify the constructor.
user(){
    //stuff
}

---destructor
~User(){
    //stuff
}


constructors and destructors
https://youtu.be/_bYFu9mBnr4?t=32719
*/
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

class User{
    //class members are private by default, unlike struct members
    string status;

    //declare public to access data members outside of definition
    public:
        string fname;
        string lname;

        //how to access private members
        string get_status(){
            return status;
        }

        //explicit constructor
        User(string fname, string lname, string status){
            this->fname = fname;
            this->lname = lname;
            this->status = status;
            //like php, assign params to class members using 'this' keyword
            cout << "explicit constructor has been called\n";
        }

        //destructor
        ~User(){
            cout << "destructor\n";
        }
};

int main(){

    
    User user("caleb", "curry", "gold");


    //eturns '1' cause that's the index of existing user jake
    //function returns index of user in vector
    cout << "user name: " << user.fname << endl;
    cout << "status: " << user.get_status() << endl;

    //explicit constructor allows us to set value of private members
    //value of private members still cannot be set outside of the class
}

