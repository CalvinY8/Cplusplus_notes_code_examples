/*
classes and objects
https://youtu.be/_bYFu9mBnr4?t=31593

there is no new keyword in c++
User user1; //to make a new class

it is possible to overload an operator, say, to compare two instances of a class
user1 == user2;
or other operators like + plus operator

static members
    not associated with instances
    describe class in general, associated w/ class
    ex: number_of_users for User class

creating a class
https://youtu.be/_bYFu9mBnr4?t=31799
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
    //declare public to access outside of definition
    public:
        string fname;
        string lname;

        //how to access private members
        string get_status(){
            return status;
        }

    //members are private by default
    string status = "Gold";
};


//no matter if user already exist, return index of user
//& to pass by reference and modify vector
int add_user_if_not_exist(vector<User> &users, User newuser){
    bool user_in_users = false;

    for (int i = 0;i<users.size(); i++){
        if (users[i].fname == newuser.fname &&
            users[i].lname == newuser.lname)
        {
            return i;
        }
    }
    //code reaches here if no matching name found in for loop

    //add user if not found
    users.push_back(newuser);
    //return index of user, which is the last index
    return users.size() - 1;

}

int main(){
    // User me;
    // me.fname = "caleb";
    // me.lname = "curry";

    vector<User> users;
    // users.push_back(me);
    
    //can also generate a blank user into users list
    //users.push_back(User());
    //the way it is now, user will have empty member data

    User user1, user2, user3;
    user1.fname = "sally";
    user1.lname = "swan";

    user2.fname = "jake";
    user2.lname = "johnson";
    
    user3.fname = "caleb";
    user3.lname = "curry";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    //test add_user_if_not_exist() by trying to add new user
    User user;
    user.fname = "jake";
    user.lname = "johnson";

    //eturns '1' cause that's the index of existing user jake
    //function returns index of user in vector
    cout << "user index: " << add_user_if_not_exist(users, user) << endl;
}