/*multidimensional arrays and nested vectors*/
#include <string>
#include <vector> //need it
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;
using std::vector; //need it
using std::endl;

int main(){
    /*
    ---array of arrays
    can init multiple sets of elements
    */
    //int grades[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    //must include inner array size


    //---nested vectors
    vector<vector<int>> grades = {{1,2,3}, {4,5,6}, {7,8,9}};


    //to iterate, use a nested for loop
    for(int i = 0; i< 3; i++)//for each row
    {
        for(int j = 0; j< 3; j++)//for each column
        {
            cout << grades[i][j] << "\t";
        }
        cout << "\n";
    }
}