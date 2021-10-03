/*
ex45_overloading_function_template
https://youtu.be/_bYFu9mBnr4?t=29921

two versions of swap()
one is for variables (ints and strings)
one is for arrays

both are templatized functions
the appropriate function gets called depending on the parameters provided
    specifically the array swap() requires int size as third param
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

/*
function will now work with ints and strings
    recall ampersand is used to make variables pass-by-reference
*/
template <typename T>
void swap(T &a, T &b){
    T temp = a; //store value of a in temporary var to use later
    a = b; //give a value of b
    b = temp; //give b value of a


}

/*
this fn is for arrays
arrays passed to functions decay to pointers
    any changes made in the function will change the array itself
    so no need ampersand
*/
template<typename T>
void swap(T a[], T b[], int size){

    for(int i = 0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

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

    //---swap arrays
    int const SIZE = 3;
    int nines[] = {9, 9, 9};
    int ones[] = {1, 1, 1};

    //before swap
    for(int i = 0; i < SIZE; i++){
        cout << nines[i] << ones[i] << "\t";
    }
    cout << "\n\n";

    swap(nines, ones, SIZE);
    /*
    in overloading, different functions get called depending on the parameters
    so, passing in that size integer, in this case 3, means the array swap function gets called
    */

    //after swap
    for(int i = 0; i < SIZE; i++){
        cout << nines[i] << ones[i] << "\t";
    }
    cout << "\n\n";


    
}