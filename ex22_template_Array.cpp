/*
templatized arrays
https://youtu.be/_bYFu9mBnr4?t=20655

similar to vectors, templatized arr has got length method
using.size() to tell how many elements
unlike C++ arrays.


when arrays are passed to functions, pointer gets passed into function
    Arrays decays to pointers when passed into a function
        unclear if c++ array is pass by ref or by value

when vectors and templatized arrays are passed to functions, they are copied
    they are pass by value
    Pass by value sends a COPY of the data stored in the variable you specify



However, note both templatized arrays and arrays are both statically sized
use a vector if you want static sizing

templatized arr differs from regular arr in that:
    it is pass by value
    has size() method

std::array<int, 5> ages = {1,2,3}
can access by index like normal


*/
#include <string>
#include <array>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::array;
using std::endl;

//placing ampersand next to parameter turns it to pass-by-reference
//so any changes are done on the memory location, not a copy

void print_templatized_arr(array<int, 20> data){

    for(int i = 1; i<data.size(); i++){
        cout << data[i] << "\t";
    }
}

int main(){
    array<int, 20> ages = {1,2,3};
    
    
    
    print_templatized_arr(ages);
    return 0;
}