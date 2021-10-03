/*
intro to vectors
https://youtu.be/_bYFu9mBnr4?t=19555

passing vectors to functions
https://youtu.be/_bYFu9mBnr4?t=19962


size is dynamic

common usages
    how to declare/define
    vector<int> mcVectorFace = {1,2,3}

    how to append to vector
    mcVectorFace.push_back(100)

    can use indexing
    mcVectorFace[2] //fetch 3rd item

    most conveniently, they have size operator
    mcVectorFace.size()


    recall indices start at 0
    and this is how to get last item in vector
    mcVectorFace[mcVectorFace.size() - 1]


the <angle brackets> when declaring a vector mean its part of the standard template library
    a collection of classes giving us functionalities for c++ development
    
    one of which is templatized data structures
    also known as a generic
    ex: ability to pass in type when declaring a vector
        vector<int>
tldr: vectors are generics



when passed to a function as a param
    the entire vector will be copied over into that variable
    more on pass by reference later.


*/

#include <string>
#include <vector> //need it
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::vector; //need it
using std::endl;

void print_vector(vector<int> data){
    data.push_back(12);
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << "\t";
    }
    cout << "\n";
}


int main(){

    //dynamic size to match number of elements it holds
    vector<int> data = {1,2,3};

    //append to end of vector
    data.push_back(12);

    //print last ele
    //cout<<data[data.size() - 1]<<endl;

    //remove from end of vector
    data.pop_back();

    print_vector(data);
    print_vector(data);
    print_vector(data);

    /*
    the 2nd line of print_vector appends to the vector

    when the vector was passed to the function,
    by default it will 'pass by value'
    Pass by value sends a COPY of the data stored in the variable you specify
    thus the underlying variable is NOT modified
    
        each time we print vector, we get
        1,2,3,12
        1,2,3,12
        1,2,3,12


    in the fn, use &
    print_vector(vector<int> &data)
    that ampersand will cause 'pass by reference'
    so, the memory location is passed
    and any changes to the vector in the function will change the variable

        each time we print vector, we get
        1,2,3,12
        1,2,3,12,12
        1,2,3,12,12,12
    
    */
}