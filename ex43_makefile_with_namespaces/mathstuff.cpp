/*
copied from ex35
separated into 3 files in this dir

so, to compile
cd ex39_folder
g++ mathstuff.cpp mathutils.cpp


and run the resulting a.out
./a.out

---
there is another way for cimpiling
.o files are used when you want to distribute code w/o giving away the source code

https://youtu.be/_bYFu9mBnr4

g++ -c mathstuff.cpp mathutils.cpp

and that will create mathstuff.o and mathutils.o
both of which are compiled c++ code(humans can't read)
and then do

g++ mathstuff.o mathutils.o

./a.out

*/

#include "mathutils.h"

#include <string>
#include <vector>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;


int main(){
    Rectangle rect;
    rect.length = 10;
    rect.width = 10;

    /*
    custom namespace
    https://youtu.be/_bYFu9mBnr4?t=29341
    */
    //depending on the input, different versions of area() are called
    cout << utilz::area(rect.length, rect.width) << endl;

    cout << utilz::area(rect.length) << endl;

    cout << utilz::area(rect) << endl;
}