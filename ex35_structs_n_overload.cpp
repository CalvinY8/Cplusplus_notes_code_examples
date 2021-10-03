/*
working with structs and overloading
https://youtu.be/_bYFu9mBnr4?t=26578



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

struct Rectangle
{
    double length;
    double width;
};

//for rects
double area(double length, double width){
    return length * width;
}

//for squares
double area(double length){
    return length * length;
}

//for passing in the rectangle itself
double area(Rectangle rect){
    return rect.length * rect.width;
}



int main(){
    Rectangle rect;
    rect.length = 10;
    rect.width = 10;

    //depending on the input, different versions of area() are called
    cout << area(rect.length, rect.width) << endl;

    cout << area(rect.length) << endl;

    cout << area(rect) << endl;
}