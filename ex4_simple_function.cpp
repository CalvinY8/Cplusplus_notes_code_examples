#include <iostream>
#include <cmath> //allows using pow()

using std::cout;
using std::cin;

//function is declaring and defining
double power(double base, int exp){
    double res = 1;
    
    for (int i = 0; i < exp; i++){
        //cout << "res is " << res << std::endl;
        res = res * base;
    }

    return res;

}

//logging functions 
void print_pow(double base, int exp){
    double pwr = power(base, exp);
    cout << base << " ^ " << exp << " = " << pwr << std::endl;
}

int main()
{
    /*
    https://youtu.be/_bYFu9mBnr4?t=2879
    conventions and style guides..you already know these
    */
    int base, exp;

    cout << "what is the base?";
    cin >> base;

    cout << "what is the exponent?";
    cin >> exp;

    
    print_pow(base, exp);

    //double pwr = pow(base, exp);

    

    //https://youtu.be/_bYFu9mBnr4?t=4375

}

/*data types
a lot of data types (int, char, float, bool, array, classes)
some you probably not too familiar with
classes, structs, unions, vectors

*/