/*
intro to operator overloading
https://youtu.be/_bYFu9mBnr4?t=34202

define behavior for common operator(==, +, etc) to work w/ custom types(ie classes)
define it inside the class

ex: adding two points of x,y
//notice the return type is Point
Point operator + (Point pointB){

    //define new point to hold result
    Point result_point,

    //define the x and y and return it
    result_point.x = x + pointB.x
    result_point.y = y + pointB.y
    return point;
}

operator overloading == and +
https://youtu.be/_bYFu9mBnr4?t=34449
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

class Position{
    public:
        int x = 10;
        int y = 20;

        //overloaded operator
        Position operator + (Position pos){
            Position result_pos;

            //             x refers to the instance's x value
            result_pos.x = x + pos.x;

            //             y refers to the instance's y value
            result_pos.y = y + pos.y;
            
            return result_pos;
        }


        //overloaded operator
        bool operator == (Position pos){
            
            return (x == pos.x && y == pos.y);
        }


};//classes and structs need ; at end

int main(){
    Position pos1, pos2;

    //overloaded operator and it's operands(x and y class members) must be public for this to work
    Position pos3 = pos1 + pos2;

    //since pos1 and pos2 are (10, 20), expecting pos3 to be (20, 40)
    cout << pos3.x << ", " << pos3.y << endl;

    //overload the == operator
    if(pos1 == pos2){
        cout << "points are equal" << endl;
    }

    //it is possible to overload the << operator
    //see ex52
}