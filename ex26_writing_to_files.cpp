/*
https://youtu.be/_bYFu9mBnr4?t=22579
*/
#include <iostream>//for cin/cout
#include <fstream>//filestream to deal with files
#include <vector>
#include <string>
using std::ofstream;
using std::vector;
using std::string;
using std::endl;
using std::cout;
using std::cin;

//adding ampersand in order to pass by reference
void write_to_file(ofstream &file){
    //declare vector called names, fill it
    vector<string> names;
    names.push_back("caleb");
    names.push_back("amy");
    names.push_back("susan");

    //use a range-based for loop, aka for-each loop
    for(string n : names){
        file << n << endl;
    }

    file << "hey\n";//arrow << like cout, except we send to file instead of console
    
    
    file.close();//to be explicit. usually file is closed automatically.
}



//notice return type is int
int main() //main function
{
    /*
    unlike cout/cin, we must make a new object to work w/ files
        make an instance of ofstream called file
        open it and pass in a filename
        file will be auto created if not exist
    */

    string filename;
    cout << "enter full filename ex:hello.txt\n";

    cin >> filename; //accept filename from user

    ofstream file;
    file.open(filename.c_str(), std::ios::app);
    //^can do this in one line
    //ofstream file("hello.txt");
    //, std::ios::app is used to append text instead of overwriting whatever is in your txt


    //able to check if file was opened
    if(file.is_open()){
        cout << "success n00b\n";
        write_to_file(file);
        
    } else {
        cout << "cannot open file\n";
    }

    



}