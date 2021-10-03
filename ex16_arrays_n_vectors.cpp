/*
types of collections
https://youtu.be/_bYFu9mBnr4?t=17136
can use to keep track of guesses during gameplay (see ex15)

array
    int guesses[size]
    //in c++, arrays are statically sized

templetized array
    array wrapped in an object
    easier to keep track of size of array

vector(recommended)
    in other languages known as 'lists' or 'arraylists'
    aka dynamically sized array
    knows it size

*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    //init an array of size 20
    // int guesses[20];

    //alternatively declare size and fill array at once
    int guesses[5] = {1,2,3};

    int num_elements = 3;

    //indexing like python
    //cout << guesses[0] << endl;

    /*
    however in c++ arrays don't have .size() or .length()
    using sizeof() will return number of bytes
    divide total bytes in array by bytes in an integer
    to get number of integers in array
    */

    //int size = sizeof(guesses) / sizeof(int);
    
    //^however if array is not full capacity, this won't work.
    
    //suggestion to keep track of number of elements in separate var "num_elements"
    for(int i = 0; i<num_elements; i++){
        cout << guesses[i] << "\t";//tab esc char
    }


     
}