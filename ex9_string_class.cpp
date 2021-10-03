#include <iostream>
#include <string> //need to work with strings
using std::string;
/*string class and c strings
https://youtu.be/_bYFu9mBnr4?t=8919
*/

int main()
{
    string greeting = "hello";
    
    //can use indicing
    //std::cout << greeting[0] << std::endl;

    //can concatenate
    string total_greeting = greeting + " world";

    //can append
    total_greeting += "!";

    //std::cout << total_greeting << std::endl;

    /*because every string is member of string class
    you can call methods of that string class via dot notation
    */

    //std::cout << total_greeting.length() << std::endl;


    /*
    can also accept user input using cin
    by default uses whitespace as terminating character
        meaning it default only grabs first word of user input
    
    solution is getline()
    */
    std::string usr_input;
    getline(std::cin, usr_input);
    std::cout << "captured input: " << usr_input << std::endl;
    
    /*
    ---more dot-notation methods for string instances/objects---
    
    
    substr(5, 2) //get a substring. starting at index 5, 2 characters will be returned
    find("findme")
    replace(starting_index, length, "replacement")
    length()
    size()
    += or append("anything")
    insert(3, " ")   anything at or above index 3 will be moved to make room,.
    erase(3, 1) 1 character at index 3 will be erased

    here is how to erase last character
    mystr.pop_back()    or use     mystr.erase(mystr.length()-1)
    
    find and replace
    example of combining find() and replace()
    */
    greeting.replace(greeting.find("hell"), 4, "****");
    std::cout << greeting << std::endl;




    /*
    find_first_of()
    search string for the first character that matches any of the characters specified 

    if (mystring.find_first_of("!") == -1 {
        std::cout << "string not found" << std::endl;
    }
    
    */


    /*compare strings using == operator is okay in c++
    because in c++ == will compare the values
    
    uhhh this doesn't work for java, which you should use equals()
    */


    
    /*
    ---c string is a c-style string.
    recommended to use string class in c++ rather than c string
    example of a c string
    https://youtu.be/_bYFu9mBnr4?t=9318
    */

    char name[] = "Caleb";
    /*c string is array of characters "Caleb\0" meaning 6 characters
    disadvantage: c string will not let you assign it another value shorter/longer than 6 char limit
    https://youtu.be/_bYFu9mBnr4?t=9395
    */
}