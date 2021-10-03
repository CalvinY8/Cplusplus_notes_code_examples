/*
cin to read input from user

*/

#include <iostream>

//known as a "using declaration"
using std::cout;
using std::cin;

int main()
{

    /*
    can recall which operators to use for cin and cout
    by the direction of data flow
    cwhatever representing the console
    so cin >> data moving from console to be assigned to variable
    cout << data moving to console
    */
    int slices;

    cin >> slices;

    cout << "your pizza has " << slices << " slices" << std::endl;
    /*
    cin and cout are objects
    cin is an instance of istream and cout is from ostream
    */
}