/*refactoring ex28*/
/*
modifying the guessing game from ex21 to save best score to file
    best score meaning fewest required guesses to correctly guess a number
https://youtu.be/_bYFu9mBnr4?t=24668
*/
#include <string>
#include <vector> //need it
#include <iostream>//for cin/cout
#include <fstream>//filestream to deal with files
#include <string>
using std::ifstream;
using std::ofstream;
using std::cout;
using std::cin;
using std::string;
using std::vector; //need it
using std::endl;


void save_score(int guesses_made){
    ifstream input_file("ex27_best_score.txt");

    //return to main if file not accessible
    if(!input_file.is_open()){
        cout << "cannot open file\n";
        return;
    }

    //get best score from file
    int best_score;
    input_file >> best_score;


    ofstream output_file("ex27_best_score.txt");

    //return to main if file not accessible
    if(!output_file.is_open()){
        cout << "cannot open file\n";
        return;
    }

    if(guesses_made < best_score){
        output_file << guesses_made;
    } else {
        output_file << best_score;
    }
    /*
    recall if you don't put optional 2nd param "std::ios::app" to ofstream
    opening the file will delete whatever is in your txt

        so, that above condition will only overwrite to txt..
        ..if you required fewer guesses than the previous best score

        if you did not get a better score,
        put the existing score back where you found it.
        that is the purpose of the else statement. 
    */
}


void print_arr(vector<int> data){
    cout << "previous guesses:" << endl;
    for(int i = 0; i<data.size(); i++){
       cout << data[i] << "\t";
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
    vector<int> guesses;//init arr of size 250

    //randomly generate an answer for user to guess
    int ans = rand() % 251;

    //print the answer to make coding easier.
    cout << ans << endl;

    //to store user's guess for evaluation
    int guess = 0;

    //ask user for guess
    cout << "enter a guess" << endl;

    //track how many guesses user needed
    int guesses_made = 0;

    //while loop to continually accept guess from user and give varied response
    //break when answer is correct
    while (true){
        
        //accept guess from user
        cin >> guess;

        //user has made one additional guess
        guesses_made++;

        /*
        enter each guess into array.
        */
        guesses.push_back(guess);
    

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
    user guesses correctly -> break -> exit loop
        eval high score
        print the user's previous guesses
    */
    save_score(guesses_made);
    print_arr(guesses);
    
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