#ifndef MATHUTILS
#define MATHUTILS

/*
making header file
https://youtu.be/_bYFu9mBnr4?t=27784
get rid of all the function bodies, add semicolons
*/

struct Rectangle
{
    double length;
    double width;
};

/*
custom namespace
https://youtu.be/_bYFu9mBnr4?t=29318
*/
namespace utilz{
    //for rects
    double area(double length, double width);

    //for squares
    double area(double length);

    //for passing in the rectangle itself
    double area(Rectangle rect);
}



#endif