#include <iostream> //allows cin cout
#include <cmath> //allows using math
using std::cout;
/*constants
https://youtu.be/_bYFu9mBnr4?t=8124
https://youtu.be/_bYFu9mBnr4?t=10532
/*math operators
https://youtu.be/_bYFu9mBnr4?t=8478
*/

int main()
{
   //-------------conversion between different bases
   //-------------creating literals for base (base 16, base 8...etc)
   /*---hex and octal---you are here
   hex is base 16, we go through numbers 1-16
   any number above 9 is represented A-F, then a multiple of ten
   so hex is 1,2,3...8,9,9A,9B,9C...9F,10
            11, 12, 13......19, 1A, 1B, 1C....1F, 20....etc

    octal is base 8
    octal goes 1,2,3,...7,10
               11, 12,13...17,20
               etc

    https://youtu.be/_bYFu9mBnr4?t=10856

    so, to create literals for these bases
   */

    int num = 30; //decimal number thirty
    int hex_num = 0x30; //16 x 3 is forty eight
    int octal_num=030; //8 x 3 is twenty four
    /*if you print any of the above, you will get decimal.
        so by default cout will convert numbers to decimal*/
    std::cout<<num<<std::endl;
    /*https://youtu.be/_bYFu9mBnr4?t=10985*/


    /*to print in non-decimal format */
    //std::cout << std::hex << num<<std::endl;

    //std::cout << std::oct << num<<std::endl;







    /*
    ---method overloading and types
    can have different versions of a method that get called depending on data type of the arguments
    */



    //common math operators
    //sqrt()
    //pow()
    //remainder()
    //  %    modulus...doesn't work with floating point values

    //fmod()  has some minor differences with fmod..mostly to do with rounding vs truncation

    //fmax(a, b), fmin(a, b) gives highest/lowest of values passed. can also use comparison

    //trunc() to remove deicmals
    //std::cout << trunc(-3.25) << std::endl;


    //---more negative = less, more postive = greater---

    //floor() returns largest int that is not greater than x
    std::cout << floor(-3.25) << std::endl; //gives -4

    //ceil() returns smallest int that is not less than x
    std::cout << ceil(-3.25) << std::endl; //gives -3 

    //round() works as expected




    /*constant, its read-only after being declared. so assign it value in the declaration*/
    /*5 would be a literal constant
    
    if you put the word "const", its a symbolic constant*/
    const int x = 5;

    /*enum const*/
    enum {y = 2};





    /*
    ---CONSTANTS AND TYPES---
    literal constants are hard coded
    quoted constants --characters or strings
    there are also constants for different bases (ex: constants for hex, octal numbers)
    */

    /*
    5 is an int. 
    5U  the U is to specify Unsigned int, using auto keyword,
     which tries to determine data type from constant value
     however it requires c++11
     so for it to work, g++ filename.cpp -std=c++11
     
    auto x = 5U

     btw, x is still statically typed, x has a type
     in the above example it's an unsigned int
     cannot assign a string to x later on


    can also put L to signify "long"
    5UL is 5 as an unsigned long
    reasons to be specific is for readability and technical correctness

    so LL means "long long"

    5.0 will be auto'd to a double

    ---see ex5.cpp for review of number data types such as unsigned/signed and long long types-----
    */


}