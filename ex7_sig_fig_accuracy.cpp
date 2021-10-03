#include <iostream>
#include <list>
#include <float.h>
using std::cout;
/*representing numbers and accurate sig figs
https://youtu.be/_bYFu9mBnr4?t=7731
*/

int main()
{
    

    float a = 10.0 / 3; //if a double interacts with an int, you get a double
    a = a * 1000000000;
    double b = 77000;  //77000 can be represented by  7.7E4    or    7.7 x 10^4
    long double c;

    //each way of storing numbers progressively stores more and more


/*
    escape sequences
    \n newline
    \  escape character
*/

    //cout << "\'" <<  std::endl;

    /*
    really big numbers will default to scientific notation,
    unless you use 'fixed'
    */
    cout << std::fixed << a << std::endl;


    cout << DBL_DIG << std::endl; //prints 6.
    /*------------important stuff
    there are a limited number of significant digits each type can hold
    which we can see via include float.h
-----------# of sig figs a data type is accurate to -------
    FLT_DIG   float has 6
    DBL_DIG   double has 16 //will serve most of your needs for storage space and accuracy
    LDBL_DIG  long double has 18
    */
}