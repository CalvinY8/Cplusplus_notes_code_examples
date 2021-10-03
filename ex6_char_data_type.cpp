/*
-------------char data type---------------
https://youtu.be/_bYFu9mBnr4?t=6577

*/

#include <iostream>
#include <list>
using std::cout;

int main()
{

/*
primarily used to store chars...but you can use it for numbers as well
    short is 16 bits
    char is eight bits...smallest data type, if you store numbers, maximum possible number is pretty limited
        char literals require single quotes ''
        in c++, "double quotes are for strings"
*/

    char x = 'A';
    //cout << (int) x  <<  std::endl; //prints 65
    /*as we can see, every character can be cast to an int
        based on ASCII table (see decimal and char columns)*/

    char x = '55';
    cout << x  <<  std::endl;
    /*
    however if you store an int as a char
        must cast to (int)
        otherwise x will print as 7.
        because on the ASII table, 7 is the char equivalent(yes, numbers can also be stored as chars) of the decimal 55
    */

   /*---max decimal val stored in signed char is 127
    trying to store 128 will overflow, to the lowest number, -128

    ---however, unsigned char can store max val of 255
   */

}