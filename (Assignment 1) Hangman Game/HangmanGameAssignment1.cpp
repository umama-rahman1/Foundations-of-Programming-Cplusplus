// Umama Rahman; ID: 202000915; T3 Computer Engineering

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string HangmanWord;

    std::cin >> HangmanWord; //entering the word

    char guessLetter;

    while (true) {

        cin >> guessLetter;

        //making sure only capital letters go through
        if ((guessLetter < 'A') || (guessLetter > 'Z'))
        {
            break;
        }

        //removing the letters that have been guessed
        if (HangmanWord.find(guessLetter) != std::string::npos) {
            HangmanWord.erase(std::remove(HangmanWord.begin(), HangmanWord.end(), guessLetter), HangmanWord.end());
        }

        //to exit the program
        if (HangmanWord.length() == 0) {
            std::cout << "HANGMAN!\n";
            break;
        }

    }
}