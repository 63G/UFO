//
// Created by qqknn on 6/13/2023.
//
#include <iostream>
#include <string>
#include <vector>
#ifndef COURSE_UFO_FUNCTIONS_H
#define COURSE_UFO_FUNCTIONS_H


using namespace std;

class UFO_functions {
private:




public:
    void greet(){
        cout << "=============\n"
                "UFO: The Game\n"
                "=============\n"
                "Instructions: save your friend from alien abduction by guessing the letters in the codeword." << endl << endl;
    }
    static void end_game(const string& codeword, const string& answer){
        if (answer == codeword){
            cout << "Hooray! You saved the person and earned a medal of honor!" << endl;

        } else{
            cout << "Oh no! The UFO just flew away with another person! " << endl;

        }
        cout << "The codeword is: " << codeword;
}
    static void display_status(vector<char> incorrect, string answer){
        for(char letter : incorrect){
            cout << letter << " ";
        }
        cout << "\nCodeword: ";
        for(char letter : answer){
            cout << letter << " ";
        }
        cout << endl;
}
};


#endif //COURSE_UFO_FUNCTIONS_H
