/*
intro to namespaces
https://youtu.be/_bYFu9mBnr4?t=28892

---creating our own namespaces

namespace utilz{\
//everything defined here will be part of your custom namespace
//for example
double multiply()
}

---why have custom namespace
1) group things of common functionality (and to prevent naming conflicts)
2) a particular company or project
3) classifying your functions/categories


---how to call fn from custom namespace
utilz::multiply(1,2);
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

namespace utilz{
    void print_array(const int data[], int size){
        for(int i = 0; i < size; i++){
            cout << data[i] << "\t";
        }
        cout << "\n";
    }
}

//any using statement must come after the namespace defintion
//using namespace utilz;

int main(){
    int data[] = {1,2,3};
    utilz::print_array(data, 3);
    cout << data[0] << endl;
}
