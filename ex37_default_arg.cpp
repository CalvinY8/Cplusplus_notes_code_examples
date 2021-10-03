/*
default arguments
https://youtu.be/_bYFu9mBnr4?t=26784
aka default params


use default params whenever you can
use overloading as 2ndary option because it's more complex, more code

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

//---first example: using overloading to make the 'power' param optional

// //raises to param pow
// double pow(double base, int pow){
//     int total = 1;
//     for(int i = 0; i < pow; i++){
//         total *= base;
//     }
//     return total;
// }

// //raises to 2nd power if no pow given
// double pow(double base){

//     return base*base;
// }


//---2nd example: succinct solution using default parameter

//now the power is automatically 2 if no pow given
double pow(double base, int pow = 2){
    int total = 1;
    for(int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}

int main(){
    cout << pow(3,3) << endl;
    cout << pow(3) << endl;

}