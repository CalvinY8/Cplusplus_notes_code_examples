/*
loops

---while loop---
Initialize, i = 0
Condition, while i>0
Update, i++

while loop--  used if you don't know how many times sth. will be executed

for loop -- used if you know how many times you want to run

---for loop--
for (int i = 0; i < 0; i++){
    //code
}

*/

#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main()
{
    //recall factorials
    //5! = 5 x 4 x 3 x 2 x 1



    int factorial = 10;
    int i = 1;
    
    //using while loop
    while (i < 10){

        //cout << i << endl;

        cout << "calculating " << factorial << " * " << i << endl;

        factorial *= i;

        i++;
    }





    //using for loop
    /*
    for (int i = factorial - 1; i > 0; i--){

        //cout << i << endl;

        cout << "calculating " << factorial << " * " << i << endl;

        factorial *= i;
        
    }
    */

    cout << "factorial found: " << factorial << endl;

}

//currently at https://youtu.be/_bYFu9mBnr4?t=14654