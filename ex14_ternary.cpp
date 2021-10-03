#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
        //demo A
    // int points;
    // int ans = 11;
    // int guess;

    // cout << "enter a guess" << endl;
    // cin >> guess;

    // if(guess == ans){
    //     points = 10;
    // }
    // std::cout << "correct. you get " << points << " points" << std::endl;


    //demo B, alt way using ternary
    int points;
    int ans = 11;
    int guess;

    cout << "enter a guess" << endl;
    cin >> guess;

    //---this is the example of using ternary to assign value to a variable

    /*variable 'points' is assigned either
        value A or value B
        depending on COND true or false
        ---w/ this formula:---
        variable = (COND) ? valA : valB;
    */

    /*
    these brackets may help understanding
    int points = (guess == ans) ? 10 : 0;
    */

    points = guess == ans ? 10 : 0;

    cout << "you get " << points << " points" << endl;

    /*---another way is to print either A or B*/

    //   COND    ?       printA      :       printB
    guess == ans ? cout << "correct" : cout << "incorrect" << endl;
}