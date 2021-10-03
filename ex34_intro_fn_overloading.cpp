/*
https://youtu.be/_bYFu9mBnr4?t=26072
intro to function overloading

same function name, different params
different version of function called depending on what we pass in

double area(int length)
double area(int length, int width)
double area(Rect myrectangle)

ex: different versions of area fn for different shapes

*/

/*overloading example
https://youtu.be/_bYFu9mBnr4?t=26382
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



void swap(int &a, int &b){
    int temp = a; //store value of a in temporary var to use later
    a = b; //give a value of b
    b = temp; //give b value of a


}

void swap(string &a, string &b){
    string temp = a;
    a = b;
    b = temp;
}


int main(){
    int a = 10;
    int b = 20;

    swap(a, b);
    
    //cout << "a: " << a << "\t" << "b: " << b << "\n";


    string fname = "caleb";
    string lname = "curry";

    swap(fname, lname);

    cout << "fname: " << fname << "\t" << "lname: " << lname << "\n";

}