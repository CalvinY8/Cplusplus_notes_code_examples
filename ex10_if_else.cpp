/*operators
https://youtu.be/_bYFu9mBnr4?t=11089

associativity

example:
x = 10;
(y = x) = 100;   //means y=x; y = 100;
at this point in the code, x is still 10, y is 100

most o the time assignment is left to right
but sometimes like this example it's right to left.
*/


/*control flow, branching and looping*/
/*branching is done w/ if statement/switch statement

in c++, switches are limited than if statement,
because switches can only accept int.
the cases of the switch only accept exact value (case: 5), not comparisons(case: x < 5)
*/
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main()
{
    //recall if statement you can do two returns
    // int age = 17;
    // if (age < 13){
    //     std::cout << "you're not old enough\n";
    //     return -1;
    // }
    // std::cout << "always\n";
    // return 0;

    //or you can use 'else'


    /*demo of logical and comparison operators*/
    string name = "Caleb";
    string name_guess;

    int age = 63;
    int age_guess;

    cout << "Guess name: "; //print to console
    cin >> name_guess; //get user input, assign to guess

    cout << "Guess age: ";
    cin >> age_guess;

    //like python, operators you can use 
    //&& and ||
    //!=       the not operator
    //<= >= 
    if (name_guess == name && age_guess == age){
        cout << "correct\n";
    }

    return 0;
}


