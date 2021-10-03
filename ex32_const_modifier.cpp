/*
const modifier, different that constants
https://youtu.be/_bYFu9mBnr4?t=25293

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
c++ arrays when passed to functions:
    -any changes to the array made in a fn(), will also change the array in main()
    
    -do not know their size
*/

/*
fn meant to print, not modify, the arr
so use const w/ param to ensure arr isn't modified
https://youtu.be/_bYFu9mBnr4?t=25326

and any <fn taking data as param> called by printArr must also use const

const is used for arrays
    because vectors and templatized arrays are, default behavior, pass by value(make a copy) when passed to functions
    It is possible to use & to make vectors and templatized arrays use pass by reference(ie modify the variable itself)
*/
void printArr(const int data[], int size){
    for(int i = 0; i< 3; i++){
        cout << data[i] << "\t";
    }
}

int main(){
    int data[] = {1,2,3};
    printArr(data, 3);
}
