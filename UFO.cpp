//
// Created by qqknn on 6/13/2023.
//
#include<iostream>
#include <string>
#include "UFO_functions.h"
#include "UFO_functions.cpp"
#include <vector>
void display_miss(int nummber){
    cout << "current misses: " << nummber << endl;
}

using namespace std;


int main(){
    UFO_functions ufoFunctions;
    ufoFunctions.greet();
    int misses = 0;
    string codeword = "beam me up";
    string answer = "____ __ __";
    vector<char> incorrect;
    char letter;
    bool guess = false; // if the player guessed a correct letter
    while (answer != codeword && misses < 7){
        cout << "                                         _____________               \n"
                "                                       __/_|_|_|_|_|_|_\\__               \n"
                "                                      /                   \\    .           \n"
                "                 .       ____________/  ____               \\   :            \n"
                "                 :    __/_|_|_|_|_|_(  |    |               )  |           \n"
                "                 |   /               \\ | () |()  ()  ()  ()/   *          \n"
                "                 *  /  ____           \\|____|_____________/            \n"
                "    .              (  |    |            \\_______________/\n"
                "    :               \\ | () |()  ()  ()    \\___________/\n"
                "    |                \\|____|____________ /   \\______/     .\n"
                "    *                  \\_______________/       \\  /       :\n"
                "          3         .    \\___________/         (__)       |    .\n"
                "            3       :       \\______/           /  \\       *    :\n"
                "             3      |         \\  /            /    \\           |\n"
                "              3     *         (__)           /      \\          *\n"
                "        ,,     3              /  \\          /        \\\n"
                "      w`\\v',___n___          /    \\        /          \\\n"
                "      v\\`|Y/      /\\        /      \\      /            \\\n"
                "      `-Y/-'_____/  \\      /        \\    /              \\\n"
                "       `|-'      |  |     /          \\  /                \\\n"
                "________|_|______|__|____/____________\\/__________________\\__" << endl;
        display_miss(misses);
        cout << "Incorrect guesses: ";
        ufoFunctions.display_status(incorrect, answer);
        // player input section
        cout << "Please enter your guess letter: ";
        cin >> letter;
        for(int i = 0; i < codeword.length(); i++){
            if (codeword[i] == letter){
                answer[i] = letter;
                guess = true;
            }
        }
        if(guess){
            cout << endl << "Correct!" << endl;
        } else {
            cout << endl << "Incorrect! The tractor beam pulls the person in further." << endl;
            incorrect.push_back(letter);
            misses++;
        }
        guess = false;
    }
    ufoFunctions.end_game(codeword, answer);


    return 0;
}