/*
-------------integral data types and signed vs unsigned
https://youtu.be/_bYFu9mBnr4?t=5841

size of data types can change depending on OS
and that size limit determines how many possible numbers we can store

32 bit has got many factors of 2 times more possiblities than 16 bit   

    int is usually 32 bits, sometimes its 16 bits

negative numbers are stored using 2's complement
    the leftmost bit is a 'sign bit'
    however, it also cuts in half the max possible numbers we otherwise would have w/o sign bit
    so, signed bit is used to represent values that regularly are negative
    and unsigned bit is used for always positive values

----------------------integral data types, sizeof, climit
https://youtu.be/_bYFu9mBnr4?t=6282

*/

#include <iostream>
#include <list>
#include <climits> //"cee-limits"
using std::cout;

int main()
{
    //four primary integral signed data types
    //recall signed integers have a signed bit
    //allowing negative #'s, at cost of fewer total possbile #'s
    short a;
    int b;
    long c;
    long long d;

    //  , each with an unsigned counterpart
    //these can only do postive numbers
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long dd;

    /*sizeof operator returns number of bytes
    return number of bits */

    /*but this is only accurate for your specific OS*/
    //cout << "short is " << sizeof(short) * 16 << " bits " << std::endl;


    /*-------------to see the truth, use climit--------------
        see the total possible positive or negative numbers of data type short*/
    cout << "short is " << SHRT_MAX << " possbilities " <<  std::endl;
    cout << "negative short is " << SHRT_MIN << " possibilities " <<  std::endl;

    /*here is the maximum possbile numbers for unsigned short
    trying to do USHRT_MIN will give error. unsinged short data type doesn't support negative numbers*/
    cout << "negative short is " << USHRT_MAX << " possib. " <<  std::endl;

    /*in general, preface with U- to represent unsigned(meaning, positive #'s  only)
    
    */

   cout << "long long is " << ULLONG_MAX << " possib. " <<  std::endl;
}