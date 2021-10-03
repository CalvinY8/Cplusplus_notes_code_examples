/*
recall guessing game made in ex15
keep track of users guesses via array
https://youtu.be/_bYFu9mBnr4?t=19333
*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>//for seeding rand() to make random numbers
#include <array>
using std::cout;
using std::cin;
using std::array;
using std::string;
using std::endl;

//when game is won, print guesses made by user
//count is number of guesses
//reason we don't use size() is cause the array can have empty values
void print_arr(array<int, 250> stl_arr, int count){
    cout << "previous guesses:" << endl;
    for(int i = 0; i<count; i++){
       cout << stl_arr[i] << "\t";
    }
    cout << "\n";

}

void play_game(){
    /*
    ans is generated in range(0, 250) using modulus (%)
        cause % returns remainder
        rand only generates positive ints
            so if rand gives 251, modulus turns it into 0
    without seeding rand(), each time the application is run, it will generate the same sequence
    seeding rand() is demonstrated below in main()
    */
    //cout << "started..\n";
    array<int, 250> guesses;//init arr of size 250
    int guess_count = 0;//to keep track of how many guesses user has made

    int ans = rand() % 251;
    cout << ans << endl;

    int guess;

    //while loop to continually accept guess from user and give varied response
    //break when answer is correct
    cout << "enter a guess" << endl;

    while (true){
        
        cin >> guess;

        /*
        increment index to  enter each guess into array.

        putting ++ at the end causes "assign first, then increment"
            on first run of while loop, guess is assigned element at index 0
            this is the desired behavior.

            this is in contrast to ++guess_count,
             which would mean increment, then assign
             where guess is assigned element at index 1

        */
        guesses[guess_count++] = guess;
    

        if(guess == ans){
            cout << "correct" << endl;
            break;
        } else if (guess > ans){
            cout << "guess lower" << endl;
        } else {
            cout << "guess higher" << endl;
        }
    }

    /*
    correct ans -> break -> exit loop
    now print the user's previous guesses
    */
    print_arr(guesses, guess_count);
    
}


int main()
{
    //this seeds the rand()
    //the stuff put into srand() is the "seed" and changes each time we run the application
    srand(time(NULL));


    /*game that keeps presenting player with menu*/
    /*do while loop*/
    /*switch to present/process choices*/
    /*in the game, player will have to guess a random number*/
    /*infinite while loop to check guesses*/
    /*if statement to break out of loop*/
    /*eventually I want to store past guesses in an array*/


    do
    {
        cout << "0. Quit" << endl << "1. play game\n";
        int choice;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "thanks for nothin\n";
            return 0; //unlike break, this will exit main()
        case 1:
            cout << "yo lets play\n";
            break;
        }

        //break will lead here.
        //flow of control moves to the outside of switch statement
        play_game();

    }
    while(true);
}