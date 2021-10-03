/*
basic collections:
arrays
templatized arrays
vectors

able to assign to another variable of same type?
vector<int> stuff; //make a vector
vector<int> things = stuff; //copy first vector into 2nd vector

    only doable for vectors and templatized arrays
    with c++ arrays you might have to loop through and assign one at a time



when passed into functions,
    c++ arrays decay to a pointer
    c++ arrays are pass by pointer, they don't know their size

    vectors and templatized arrays are pass by value, meaning they pass a copy.
        although it is possible to make these pass by reference using ampersand in the function param


have size method?
    only c++ arrays cannot do this. you'd need another var to track this.


are dynamically size?
    only vectors have this. the other two don't.

just use vectors
they're overall easier to use
*/


/*
demo of range-based for loop
also known as for-each loop in other languages
it's only used for collections
https://youtu.be/_bYFu9mBnr4?t=21850
*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <array>
using std::cout;
using std::cin;
using std::array;
using std::string;
using std::endl;


int main(){
    int data[] = {1,2,3,4,5,6};

    //standard for loop
    // for (int i = 0; i < 6; i++){
    //     cout << data[i] << "\t";

    // }

    // cout << "\n";
//----------------------------------------
    //range-based for loop
    for (int n : data){
        cout << n << "\t";

    }

    /*
    warning: if collection's size > elements in collection,
    this for-each loop will print zeroes.

    also trying to do this in a function with a c++ array causes issues
        because c++ array decays to a pointer when passed to function
            and it doesn't know it's size, and cannot be used in for-each loop
    ---so, if you want to use a for-each loop with a C++ array, do it inside the function the array was decalred in.
    */

    
}