/*
pass by reference and pass by value
https://youtu.be/_bYFu9mBnr4?t=25475


pass by value
in c++, when variables are passed to functions
var is pass by value(a copy is passed in, original not modified)
in C++, pass by value is the default for everything except arrays

---
c++ arrays are pass by pointer
"decay to a pointer"
the pointer points to the initial array
the array is not copied into the parameter of the function
    any changes done to array in the function, will alter the array outside the function


---
passing by reference
vectors and templatized arrays are pass by value (by default)
We can make them pass by refrence using ampersand(&) in front of the param



*/

/*
https://youtu.be/_bYFu9mBnr4?t=25904
swap function w/ pass by ref
*/
#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

//demo of using & to pass by reference
//swap made in swap() function will also affect vars in main()
void swap(int &a, int &b){
    int temp = a; //store value of a in temporary var to use later
    a = b; //give a value of b
    b = temp; //give b value of a

    
}


int main(){
    int a = 10;
    int b = 20;

    swap(a, b);
    
    cout << "a: " << a << "\t" << "b: " << b << "\n";
}