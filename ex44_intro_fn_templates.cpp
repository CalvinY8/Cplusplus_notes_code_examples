/*
intro to function templates
https://youtu.be/_bYFu9mBnr4?t=29463
templatizing, aka generics (for fns and classes)

fns require param types
to accept different types, overloading comes in
an alternative is generics

template <typename T> //specify generic type name is T
void swap (T &x, T &y)  //works for ints and strings
{
    T temp = x
    //use T like any other type
}
*/

/*
creating a function template
https://youtu.be/_bYFu9mBnr4?t=29795



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

//function will now work with ints and strings
template <typename T>
void swap(T &a, T &b){
    T temp = a; //store value of a in temporary var to use later
    a = b; //give a value of b
    b = temp; //give b value of a


}


int main(){
    //---swap ints
    int a = 10;
    int b = 20;

    swap(a, b);
    
    cout << "a: " << a << "\t" << "b: " << b << "\n";


    //---swap strings
    string fname = "caleb";
    string lname = "curry";

    swap(fname, lname);

    cout << "fname: " << fname << "\t" << "lname: " << lname << "\n";

}