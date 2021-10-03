
#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
int main()
{

    /*https://youtu.be/_bYFu9mBnr4?t=15615*/
    std::string sentence = "hello my name is caleb";
    for (int i = 0; i < sentence.size(); i++){
        

        //uncomment EITHER demo A or B

        //---demo A
        // if(sentence[i] == 'o'){
        //     cout << "found o!\n";
        //     break;//stop loop when found o in sentence
        // }

        //---demo B
        if(sentence[i] == ' '){
            continue; //skip this loop, resulting in printing only non-space characters
        }

        cout << sentence[i] << endl;
    }
    cout << "Done!\n";

}

//continue will skip current loop when a condition is met