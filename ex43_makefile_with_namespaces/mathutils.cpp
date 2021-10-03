#include "mathutils.h"
/*
namespace must be placed in header file and implementation file
in this case, mathutils.h and mathutils.cpp
*/

/*
non-main functions copied from mathstuff.cpp

if any of your functions have i/o, need include iostream

any structs stay in header file

if any functions use default params, remove it.
*/

/*
custom namespace
https://youtu.be/_bYFu9mBnr4?t=29324
*/
namespace utilz{
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
}


