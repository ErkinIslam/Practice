#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    //Game menu
    cout << "******************************************************" << endl;
    cout << "*                      Welcome!                          *" << endl;
    cout << "*                                                        *" << endl;
    cout << "* Please choose a number from the following options:     *" << endl;
    cout << "*                                                        *" << endl;
    cout << "* 1.  Play the MATH game!                                *" << endl;
    cout << "* 2.  Play the MADLIBS game!                             *" << endl;
    cout << "* 3.  Play the GUESS THE SECRET NUMBER game!             *" << endl;
    cout << "* 4.  Play the CHOOSE YOUR OWN ADVENTURE game!           *" << endl;
    cout << "* 5.  Exit                                               *" << endl;
    cout << "******************************************************" << endl;

    //Declaring variables
    double num;

    //Getting Input
    cout << "Please enter the number of the game that you wish to play." << endl;
    cin >> num;

    //Game selection
    if (num == 1)   // MATH game
    {
            // Variable Declaration
        double firstNum, secondNum, thirdNum, fourthNum, fifthNum, sum;

        // Game introduction
        cout << endl;
        cout << "                  Hello!" << endl;
        cout << endl;
        cout << "         Welcome to Mind Reading!!!" << endl;
        cout << endl;
        cout << endl;
        cout << " We are going to play a mind reading game." << endl;
        cout << " We are both going to tell 5 digit numbers" << endl;
        cout << " and I will tell you the sum of all five" << endl;
        cout << " number after you tell me only the first" << endl;
        cout << " number." << endl;
        cout << endl;

        // User input
        cout << endl;
        cout << endl;
        cout << "Tell me your first 5 digit number: ", cin >> firstNum;

        // Reading the mind
        sum = firstNum  + (2 * 99999);

        // Guessing
        cout << endl;
        cout << "------------------------------------------" << endl;
        cout << "The sum of five 5 digit numbers is: " << sum << endl;
        cout << "------------------------------------------" << endl;
        cout << endl;

        // Mutual input
        cout << endl;
        cout << "Tell me your second 5 digit number:  ";
        cin >> secondNum;
        thirdNum = 99999 - secondNum;
        cout << "I am saying:                         " << thirdNum << endl;
        cout << endl;
        cout << "Tell me your third 5 digit number:   ";
        cin >> fourthNum;
        fifthNum = 99999 - fourthNum;
        cout << "I am saying:                         " << fifthNum << endl;
        cout << endl;

        // Asking for checking
        cout << endl;
        cout << "Take out your calculator and check if I am correct!" << endl;

        // Exiting
        cout << endl;

    }

    else if (num == 2)   // MAD LIBS game
    {
        // Declaring variables
        string adjective, consumerProduct, individual, nameOfCompany, readingMaterial, verb1, verb2, verb3;

        // Getting input
        cout << "           Welcome to the Mad Libs Game" << endl;
        cout << endl;
        cout << "Give me the following information" << endl;
        cout << "";
        getline(cin, adjective);
        cout << "Adjective: ";
        getline(cin, adjective);
        cout << "Consumer Product: ";
        getline(cin, consumerProduct);
        cout << "Individual: ";
        getline(cin, individual);
        cout << "Name Of Company: ";
        getline(cin, nameOfCompany);
        cout << "Reading Material: ";
        getline(cin, readingMaterial);
        cout << "Verb ending with -ing: ";
        getline(cin, verb1);
        cout << "Verb ending with -ing: ";
        getline(cin, verb2);
        cout << "Verb ending with -ing: ";
        getline(cin, verb3);

        //Output
        cout << endl;
        cout << endl;
        cout << "This Harried User License Agreement (HULA) is for " << adjective << " purposes only." << endl;
        cout << "There is no " << consumerProduct << " accompanying the HULA." << endl;
        cout << "IMPORTANT-READ CAREFULLY: This Harried User License Agreement HULA is" << endl;
        cout << "a legal agreement between " << individual << endl;
        cout << "and " << nameOfCompany << " for the software that accompanies this HULA, which" << endl;
        cout << "includes " << consumerProduct << " and may include associated media, printed materials," << endl;
        cout << "online or electronic " << readingMaterial << ", and Internet-based services." << endl;
        cout << "You agree to be bound by the terms of this HULA by" << endl;
        cout << verb1 << ", " << verb2 << ", or otherwise" << endl;
        cout << verb3 << " the software." << endl;

    }

    else if (num == 3)  // GUESS THE SECRET NUMBER game
    {
           //Declaring variables
        int secretNum, guess, guessCount = 0, guessLimit = 5;

        //Secret Number
        secretNum = rand() % 101;

        //Getting input
        cout << endl;
        cout << "                  Hello!" << endl;
        cout << endl;
        cout << "   Welcome to Guess the Secret Number!!!" << endl;
        cout << endl;
        cout << "             You have 7 tries" << endl;
        cout << "          It is between 0 and 100" << endl;
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
            cout << endl;
            cout << "Congratulations! You win! The secret number is : " << guess;
            cout << endl;
        }
        else
        {
            cout << endl;
            cout << "You lose! You ran out of guesses";
            cout << endl;
        }

    }
    else if (num == 4)   //  CHOOSE YOUR OWN ADVENTURE
    {
        // Declaring variables
        char train;
        int num;
        string activity;
        double money;

        //Storyline
        cout << "Hello! You are at Atlantic Ave in Brooklyn! Please let me know if you are taking the F, Q or B train!" << endl;
        cin >> train;

        if (train == 'B')
        {
            cout << "Great! Enter 1 to go to Manhattan or 2 to go to Coney Island" << endl;
            cin >> num;

            if(num == 2)
            {
                cout << "Wow! You are looking toward a terrific adventure!" << endl;
                cout << "You are off the train now! Do you want to go jogging on the beach or to the amusement park (enter 'jogging' or 'amusement')?" << endl;
                cin >> activity;

                if (activity == "amusement")
                {
                    cout << "Have fun! How much money do you want to spend? Once I know that, I will give you a choice of rides! Then you will be on your own!"<< endl;
                    cin >> money;

                    if (money > 15 && money < 30)
                    {
                        cout << "OK! Choose the Bumper Cars or the Rolling Thunder Roller Coaster!" << endl;
                    }
                    else if (money == 0 && money < 15)
                    {
                        cout << "OK! Choose the Rolling Thunder Roller Coaster, and you can get an ice-cream" << endl;
                    }
                    else if (money > 30)
                    {
                        cout << "OK! Great! You can go to any two ride that you want" << endl;
                    }
                }
                else if (activity == "jogging")
                {
                    cout << "Broad Walk is great at Conny Island, you can walk on th sand too. The view is great." << endl;
                }
            }
            else if (num == 1)
            {
                cout << "WOW! Great choice. Do you want to go jogging on the beach or to the sky (enter 'jogging' or 'sky'?" << endl;
                cin >> activity;

                if (activity == "jogging")
                {
                    cout << "Central Park is the perfect place. You can get some fresh air and relax" << endl;
                }
                else if (activity == "sky")
                {
                    cout << "Let's go to the Empire State building. You can see the entire Manhattan from there" << endl;
                }
            }
        }
        else if (train == 'F')
        {
            cout << "Time to go to the campus" << endl;
        }
        else if (train == 'Q')
        {
            cout << "Let's take a trip to home. It would be great to see the family" << endl;
        }

    }

    else if (num == 5)   //Exit
    {
        return 0;
    }

    else
        cout << "Incorrect selection" << endl;


    return 0;
}
