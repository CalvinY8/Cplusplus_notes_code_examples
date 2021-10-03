#include <iostream>

using std::cout;

int main()
{

    /*
    int slices = 5;
    the above line can be rewritte as declaration and initialization
    */
    int slices;
    slices = 10;

    cout << "your pizza has" << slices << std::endl;
    /*endl is a modifier which will add \n; at the end
    << operator can be used for
        passing variables and strings to cout

    
    most things in c also work in c++
    printf("%i\n","slices");


    --------------more on operators << and >>--------------
    std::cout << 5; /*write int 5 to standard output

    int x;
    std::cin>>x; /*read int from standard input

    operators can be overloaded to print certain objects(recall an object is an instance of a class)
    Overloaded operators are distinct from overloaded functions
    https://www.ibm.com/docs/en/zos/2.4.0?topic=only-overloading-operators-c

    */
}