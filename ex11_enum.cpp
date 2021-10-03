/*example of enum and switch
https://youtu.be/_bYFu9mBnr4?t=13858
*/

    /*
    https://stackoverflow.com/questions/18335861/why-is-enum-class-preferred-over-plain-enum
    */

#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
int main()
{
    //in ex10, I said c++ switches only accept type int
    //which fits this example, cause enums store values as int

    enum class Season{summer, spring, fall, winter};
    Season current = Season::winter;

    switch(current)
    {
        case Season::summer:
            break;

        case Season::spring:
            break;

        case Season::fall:
            break;

        case Season::winter:
            cout << "winter has come\n";
            break;

    }

    //could also do this with regular enums
    //using _2 to represent 2nd example and avoid naming conflict w/ above example
    enum Season_2{summer_2, spring_2, fall_2, winter_2};
    Season_2 current_2 = winter_2;

    switch(current_2)
    {
        case summer_2:
            break;

        case spring_2:
            break;

        case fall_2:
            break;

        case winter_2:
            cout << "winter has come\n";
            break;

    }


}