#include <iostream>

//notice return type is int
int main() //main function
{
    //always end with semicolon

    //this is how to print to console..the cornerstone of testing
    std::cout << "Hello World\n";
    //standard 

    //return 0 means nothing went wrong...in machine language
    //its also optional, code will still compile without it.
    return 0;
}
//https://youtu.be/_bYFu9mBnr4?t=901
//compile using                               g++ <filename>
//run the compiled result in the terminal:    ./a.out

//std is an example of a namespace(a grouping of code)
/*namespaces are like bins for code, they solve naming conflicts
because two functions of the same name can both be imported,
    if they belong to different namespaces
    namespace1::my_fn
    namesspace2::my_fn

basically:
cout must be prefaced with std:: to show which namespace cout comes from

can also import entire namespace with a "using directive"
    using namespace std;
    then you can just say cout<<"hello world/n"
    for larger applications this is bad because in multiple imported namespaces, some functions might have same name
    It's preferable to preface objects with namespaces to avoid any potential naming conflicts

next time you see "::"
it means class::object

---------------what's a "using declaration"------------
if you don't have to always preface objects with classes
and also wish to avoid naming conflicts
try a "using declaration"
    using std::cout
    format is using class::object
    and you can just use cout w/o preface

---------------OOP
cout is an example of an object
objects describe things
cout is a tool used to reach the console stream

in OOP, objects come from classes
cout comes from ostream


--------------operator
operators work on operands
<< is the operator, takes "hello world" and gives it to cout
"hello world" is the operand



*/