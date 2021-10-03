/*https://youtu.be/_bYFu9mBnr4?t=18263*/
/*HOW TO ENTER USER INPUT INTO ARRAY*/
#include <string>
#include <iostream>
#include <limits> //demonstrated on line 68

#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::endl;

/*goal is to only accept number of elements we input into array*/
void printArr(int arr[], int count){
   for(int i = 0; i<count; i++){
       cout << arr[i] << "\t";
   }
}

int main(){
    /*
    take user input, put into arr
        enter a few intgers, press enter each time
        this app can hold up to 100 numbers from user input
        *** press a non-integer key to tell this app you are done inputting
    */
    const int SIZE = 100;
    int guesses[SIZE];
    
    int count = 0;
    
    for(int i = 0; i<SIZE; i++){

        //cin -> true if input valid, and vice versa
        if(std::cin >> guesses[i]){
            //input must be int to be valid
            
            count++;
            //keep track of characters entered into array

        } else {
            //invalid character
            break;
        }
    }

    //when filled array from user input, print the array
    printArr(guesses, count);
    
    /*  ***
        issue A
        when user presses any non-int character key,
        cin will be left in a state of false
        clear that state*/
    cin.clear();
    /*
        issue B
        the non-int stuff entered on the console will be left in the input stream
        meaning next time you try to accept user input via cin
        the cin will just use the non-int stuff
        so we must clear the input stream
    */
    cin.ignore(10000, '\n'); //this will clear input stream of 1000 characters


    //there is an alternative way to clear all characters, not just 1000
    //and this requires #include <limits>
    //https://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



   //to demonstrate the input stream has been cleared and works normally
   //the next few lines will ask for input and repeat it to user
   string test;
   cin >> test;
   cout << test << endl; 


    //https://youtu.be/_bYFu9mBnr4?t=18890
}