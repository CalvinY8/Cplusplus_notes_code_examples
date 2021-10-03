/*main file


class across multiple files
from
https://youtu.be/_bYFu9mBnr4?t=35797

to
https://youtu.be/_bYFu9mBnr4?t=36093

as seen in ex53_cont, everything in one file gets pretty messy
*/

#include "user.h"
#include <iostream>
#include <string>


using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    User user;
    //showing both overloaded << and >> operators, marked as friend function, can now access private members of class
    //------

    //enter data as space-separated firstname lastname status
    // >> operator taking user input from console to modify a private member called 'status'
    cin >> user;

    // << operator's accessing private member, 'status', to output it to console
    cout << user << endl;


}