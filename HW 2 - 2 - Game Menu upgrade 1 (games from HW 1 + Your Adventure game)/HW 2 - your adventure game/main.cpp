#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    //Declaring variables
    int secretNum, guess, guessCount = 0, guessLimit = 5;
    bool outOfGuess = false;

    //Secret Number
    secretNum = rand() % 101;

    //Getting input
    cout << "Guess my secret number" << endl;
    cout << endl;
    cout << "You have 7 tries" << endl;
    cout << "It is between 0 and 100" << endl;
    cout << endl;

    cout << "Enter your guess: ";
    cin >> guess;



    while (guess != secretNum && guessCount <= guessLimit)
    {

        if (guess < secretNum)
        {
            cout << "Your guess is too low, try again: ";
            cin >> guess;
            guessCount ++;
        }
        else
        {
            cout << "Your guess is too high, try again: ";
            cin >> guess;
            guessCount ++;
        }
    }

    if (guess == secretNum)
    {
        cout << "Congratulations! You win! The secret number is : " << guess;
    }
    else
    {
        cout << "You lose! You ran out of guesses";
    }

    return 0;
}
