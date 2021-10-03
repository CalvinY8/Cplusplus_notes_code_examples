/*
https://youtu.be/_bYFu9mBnr4?t=16187 //writing code part 1
https://youtu.be/_bYFu9mBnr4?t=16695 //writing code part 2
https://youtu.be/_bYFu9mBnr4?t=16887
*/
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::string;
using std::endl;



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
    int ans = rand() % 251;
    cout << ans << endl;

    int guess;

    //while loop to continually accept guess from user and give varied response
    //break when answer is correct
    cout << "enter a guess" << endl;

    while (true){
        
        cin >> guess;

        if(guess == ans){
            cout << "correct" << endl;
            break;
        } else if (guess > ans){
            cout << "guess lower" << endl;
        } else {
            cout << "guess higher" << endl;
        }
    }
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