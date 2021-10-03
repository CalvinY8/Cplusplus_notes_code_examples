/*https://youtu.be/_bYFu9mBnr4?t=18263*/
/*using arrays in functions, and the sizeof operator*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::endl;

void printArr(int arr[], int size){
    //cout << sizeof(arr) << endl; //returns size of pointer(pointing to arr)
    
    /*
    https://youtu.be/_bYFu9mBnr4?t=18463
    c++ conveniently doesn't use pointers as much as c
    but in this case
        when we pass an arr to fn, the arr decays to a pointer
        so we can't use sizeof() in functions

    soln here is we pass in integer size
        vectors and templatized arrays don't decay to pointers
        so this is only a problem for C++ arrays

    */
   for(int i = 0; i<size; i++){
       cout << arr[i] << "\t";
   }

   /*^ ** this soln will not work if the array is not initialized at full capacity
   
   another note: if you declare the array guesses[];
    but don't initialize it, ie don't give it any initial value(s)
    you will get undefined values when trying to print.
   */
   
}

int main(){
    int guesses[] = {1,2,3};
    int size = sizeof(guesses) / sizeof(int);//**
    cout << sizeof(guesses) << endl; //returns size of guesses
    printArr(guesses, size);
    
}