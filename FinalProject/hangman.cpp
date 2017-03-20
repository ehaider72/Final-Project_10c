//note: this game is hangman in progress

#include <iostream>
#include <string>
#include <cstdlib>
#include <cctype>

using namespace std;
string phrase;
string unsolved;
string x;      //UNSOLVED WORD
string over;   //GAME OVER FLAG
int cnt;       //COUNTS INCORRECT ANSWERS
//bool isalpha(char);

//FUNCTION: Replaces alphabetic characters in the phrase with dashes
//PARAMETERS: phrase the phrase to be solved
//RETURNS: the phrase with all alphabetic characters converted to dashes

string setupUnsolved(string phrase)
{
    for (int i = 1; i <= phrase.size(); i++)
    {

        if (isalpha(phrase[i - 1]))
        {
            phrase.at((i - 1)) = '-';
        }
        else
        {

        }
    }
    return phrase;
}

//FUNCTION: Replaces the dashes with the (correctly) guessed character.
//PARAMETERS: phrase - the phrase to be solved; unsolved -the phrase with dashes for all unsolved characters; guess - the char containing the current guessed character
//RETURNS: the new unsolved string with dashes replaced by new guess
string updateUnsolved(string phrase, string unsolved, char guess)
{
    std::string::size_type n;
    for (int i = 1; i <= phrase.size(); i++)
    {
        if (phrase[i - 1] == guess)
        {
            unsolved.at((i - 1)) = guess;
        }
        else
        {

        }
    }


    n = unsolved.find('-');                                //SEARCH FOR ANY REMAINING DASHES
    if (n == std::string::npos)
    {
        //cout << "Contratulations!" << " \n";
        over = "true";
    }
    else
    {
        //cout << "Contratulations!";
        //over = "true";
    }


    return unsolved;
}

//FUNCTION: Validates guess
//
// A guess is taken as input as a character. It is valid if
// 1) it is an alphabetic character; and
// 2) the character has not already been guessed
//
//PARAMETERS: prevGuesses the string containing all characters guessed so far
//RETURNS: a valid guess and only a valid guess as a character
char getGuess(string prevGuesses)
{
    char guess;


    cout << "Enter a guess: ";
reenter:
    cin >> guess;
    cout << "\n";


    //	if (isalpha(guess))

    if (isalpha(guess))                                                         //IF GUESS IS ALPHABETIC
    {
        if (prevGuesses.find(guess) != std::string::npos)           //IF ALREADY GUESSED
        {
            cout << "Invalid guess! Please re-enter a guess: ";
            goto reenter;
        }
        else if (phrase.find(guess) != std::string::npos)           //IF GUESS IN STRING (CORRECT)
        {

            x = updateUnsolved(phrase, unsolved, guess);
            unsolved = x;
            cout << "Phrase: " << x << "\n\n";
            //cnt2 = cnt2 + 1;

        }

        else                                                                       //IF GUESS NOT IN STRING (INCORRECT)
        {
            cnt = cnt + 1;
            if (x.size() == 0)
            {
                cout << "Phrase: " << unsolved << "\n\n";
            }
            else
            {
                cout << "Phrase: " << x << "\n\n";
            }


        }

        if (over == "true")                                                                                      //PUZZLE SUCCESSFULLY SOLVED
        {
            cout << "Guessed so far: " << prevGuesses + guess << " \n";
            cout << "Wrong guesses left: " << 7 - cnt << " \n\n";
            cout << "Congratulations!!" << " \n";

            return 0;
        }
        else
        {
            cout << "Guessed so far: " << prevGuesses + guess << " \n";
            cout << "Wrong guesses left: " << 7 - cnt << " \n\n";
            if (7 - cnt == 0)
            {
                cout << "You lost!" << " \n";
            }
        }
    }
    else                                                                                                        //IF GUESS NOT ALPHABETIC
    {
        //cnt = cnt + 1;
        cout << "Invalid guess! Please re-enter a guess: ";
        goto reenter;
        //cout << "Wrong guesses left: " << 7 - cnt << " \n";
        /*if (7 - cnt == 0)
        {
        cout << "You lost!" << " \n";
        }*/
    }
    return guess;

}


int main()
{

    string prevGuesses;

    cout << "Enter phrase: ";
    getline(cin, phrase);
    unsolved = setupUnsolved(phrase);

    cout << " \n";
    cout << "Phrase: " << unsolved << " \n";
    cout << " \n";

    do
    {
        prevGuesses = prevGuesses + getGuess(prevGuesses);
        if (over == "true")
        {
            goto exit;
        }
    } while (cnt != 7);

exit:
    cin.get();
    cin.get();
    return 0;
}

//note: buggy for characters & need to implement number of guesses = number of letters in phrase (its only fair)
