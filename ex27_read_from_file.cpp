/*
https://youtu.be/_bYFu9mBnr4?t=23118
*/
#include <iostream>//for cin/cout
#include <fstream>//filestream to deal with files
#include <vector>
#include <string>
using std::ifstream;
using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;



//notice return type is int
int main() //main function
{
    /*
    when reading from files,
        if file no exist,
        it won't be created
    */

    ifstream file ("ex26_hello.txt");
    //get each line into vector
    
    //vector to store names
    vector<string> names;
    
    //type we want to read
    string input;
    
    // /*
    // ------A------
    // file >> input eval true if read from file successful
    // so while that is true, keep reading new lines
    // and when that is false, the reading stops
    // ---
    // because this while loop tries to store strings in a collection
    // it separates words by any non-string character, specifically whitespace
    // */
    // while(file >> input){
    //     names.push_back(input);
    // }
    


    /*
    there are other ways to get info, getline and get
    */


    //------getline------
    string line;
    getline(file, line);

    //------get------
    // char temp = file.get();
    // cout << temp << "\n";


    //print to see what was read
    for(string n : names){
        cout << n << endl;
    }



}