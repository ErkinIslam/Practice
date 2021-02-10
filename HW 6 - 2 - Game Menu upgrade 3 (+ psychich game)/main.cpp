#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;

string loveLife ();
string schoolLife ();
string financialSituation ();

int main()
{
    int exit = 0;

    while (exit != 1)
    {
    //Game menu
    cout << "**********************************************************" << endl;
    cout << "*                      Welcome!                          *" << endl;
    cout << "*                                                        *" << endl;
    cout << "* Please choose a number from the following options:     *" << endl;
    cout << "*                                                        *" << endl;
    cout << "* 1.  Play the MATH game!                                *" << endl;
    cout << "* 2.  Play the MADLIBS game!                             *" << endl;
    cout << "* 3.  Play the GUESS THE SECRET NUMBER game!             *" << endl;
    cout << "* 4.  Play the CHOOSE YOUR OWN ADVENTURE game!           *" << endl;
    cout << "* 5.  Play the FIND THE TREASURE game!                   *" << endl;
    cout << "* 6.  Play the PSYCHIC game!                             *" << endl;
    cout << "* 7.  Exit                                               *" << endl;
    cout << "**********************************************************" << endl;

    //Declaring variables
    double num;

    //Getting Input
    cout << "Please enter the number of the game that you wish to play." << endl;
    cin >> num;
    cout << endl;
    cout << endl;

    //Game selection
    if (num == 1)   // MATH game
    {
            // Variable Declaration
        double firstNum, secondNum, thirdNum, fourthNum, fifthNum, sum;

        // Game introduction
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
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << "Let's play again. If you don't want to play press 6." << endl;
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
        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << "Let's play again. If you don't want to play press 6." << endl;
        cout << endl;

    }
    else if (num == 3)  // GUESS THE SECRET NUMBER game
    {
           //Declaring variables
        int secretNum, guess, guessCount = 0, guessLimit = 5;

        //Secret Number
        secretNum = rand() % 100 + 1;

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

        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << "Let's play again. If you don't want to play press 6." << endl;
        cout << endl;
    }
    else if (num == 4)   //  CHOOSE YOUR OWN ADVENTURE game
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

        cout << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
        cout << "-----------------------------------------------------" << endl;
        cout << endl;
        cout << "Let's play again. If you don't want to play press 6." << endl;
        cout << endl;
    }
    else if (num == 5)   //  FIND THE TREASURE game
    {
            //Declaring variables
    double explorerPosition_x, explorerPosition_y, treasurePosition_x,treasurePosition_y;
    int steps, move = 1, moveCount = 0;
    string direction;

    //Initial locations
    srand(time(0));
    treasurePosition_x = rand() % 30 + 1;
    treasurePosition_y = rand() % 30 + 1;
    explorerPosition_x = 15;
    explorerPosition_y = 15;

    //Instructions
    cout << "       Welcome to FIND THE TREASRE game" << endl;
    cout << endl;
    cout << " In this game you are the explorer, and your " << endl;
    cout << "       goal is to find the treasure" << endl;
    cout << "                Movement:" << endl;
    cout << " You will decide which direction and how many" << endl;
    cout << "     steps you want to move by typing in:" << endl;
    cout << "        North, South, West or East" << endl;
    cout << "!!!   Initial letter must be CAPIITAL   !!!" << endl;
    cout << "                   and" << endl;
    cout << "               1,2,3,4 or 5" << endl;
    cout << "_____________________________________________" << endl;
    cout << endl;
    cout << "Initial explorer location is (x,y) = (" << explorerPosition_x << "," << explorerPosition_y << ")" << endl;
    cout << endl;
    cout << endl;

    //Output
    do
    {

        cout << "Move "<< move << ":" << endl;
        do
        {
        cout << "Which direction would you like to move towards?     ";
        cin >> direction;
        moveCount++;
        } while (moveCount < 1);
        cout << "How many steps would you like to take?              ";
        cin >> steps;

        if (direction == "North" && steps == 1)
        {
            explorerPosition_y = explorerPosition_y + 1;
        }
        else if (direction == "North" && steps == 2)
        {
            explorerPosition_y = explorerPosition_y + 2;
        }
        else if (direction == "North" && steps == 3)
        {
            explorerPosition_y = explorerPosition_y + 3;
        }
        else if (direction == "North" && steps == 4)
        {
            explorerPosition_y = explorerPosition_y + 4;
        }
        else if (direction == "North" && steps == 5)
        {
            explorerPosition_y = explorerPosition_y + 5;
        }
        else if (direction == "South" && steps == 1)
        {
            explorerPosition_y = explorerPosition_y - 1;
        }
        else if (direction == "South" && steps == 2)
        {
            explorerPosition_y = explorerPosition_y - 2;
        }
        else if (direction == "South" && steps == 3)
        {
            explorerPosition_y = explorerPosition_y - 3;
        }
        else if (direction == "South" && steps == 4)
        {
            explorerPosition_y = explorerPosition_y - 4;
        }
        else if (direction == "South" && steps == 5)
        {
            explorerPosition_y = explorerPosition_y - 5;
        }
        else if (direction == "East" && steps == 1)
        {
            explorerPosition_x = explorerPosition_x + 1;
        }
        else if (direction == "East" && steps == 2)
        {
            explorerPosition_x = explorerPosition_x + 2;
        }
        else if (direction == "East" && steps == 3)
        {
            explorerPosition_x = explorerPosition_x + 3;
        }
        else if (direction == "East" && steps == 4)
        {
            explorerPosition_x = explorerPosition_x + 4;
        }
        else if (direction == "East" && steps == 5)
        {
            explorerPosition_x = explorerPosition_x + 5;
        }
        else if (direction == "West" && steps == 1)
        {
            explorerPosition_x = explorerPosition_x - 1;
        }
        else if (direction == "West" && steps == 2)
        {
            explorerPosition_x = explorerPosition_x - 2;
        }
        else if (direction == "West" && steps == 3)
        {
            explorerPosition_x = explorerPosition_x - 3;
        }
        else if (direction == "West" && steps == 4)
        {
            explorerPosition_x = explorerPosition_x - 4;
        }
        else if (direction == "West" && steps == 5)
        {
            explorerPosition_x = explorerPosition_x - 5;
        }

        cout << "Your location: (x,y) = (" << explorerPosition_x << "," << explorerPosition_y << ")" << endl;
        cout << "Distance from treasure: " << sqrt(pow((treasurePosition_x - explorerPosition_x),2)+pow((treasurePosition_y - explorerPosition_y),2)) << endl;
        cout << endl;
        move ++;
        cout << "";

    } while (explorerPosition_x != treasurePosition_x || explorerPosition_y != treasurePosition_y);

    cout << endl;
    cout << "Congratulations! You found the treasure." << endl;
    cout << "It took you " << moveCount << " moves to find the treasure" << endl;
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << endl;
    cout << "Let's play again. If you don't want to play press 6." << endl;
    cout << endl;
    }
    else if (num == 6)  // PSYCHIC game
    {
        //DEclearing variables
        int keepGoing = 1;
        double luckyNum;
        char predictionChoice, y_n;

        //Intro
        cout << "welcome to the Psychic Computer Network" << endl;
        cout << "My name is The Predictor, and I will be your psychic computer guide" << endl;
        cout << endl;
        cout << "Please enter your luck number: ";
        cin >> luckyNum;
        cout << endl;
        cout << endl;

        for (int i = 1; i !=0; i + 0)
        {
        //Getting input
        cout << "Please enter an 'L' for my predictions on your love life." << endl;
        cout << "Enter the letter 'S' for my predictions on your school life." << endl;
        cout << "Enter the letter 'M' for my predictions on your financial situation." << endl;
        cin >> predictionChoice;
        cout << endl;

        //Output
        cout << "I am looking into my crystal ball" << endl;
        cout << endl;

  /*  make a blinking character
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << "/\n";
    }
    cout << endl;
 */
        if (predictionChoice == 'L' || predictionChoice == 'l')
        {
            cout << loveLife();
        }
        else if (predictionChoice == 'S' || predictionChoice == 's')
        {
            cout << schoolLife();
        }
        else if (predictionChoice == 'M' || predictionChoice == 'm')
        {
            cout << financialSituation();
        }
        cout << endl;
        cout << endl;
        cout << "Thank you for using the psychic computer network" << endl;
        cout << "Would you like to make another prediction?  y/n" << endl;
        cin >> y_n;
        if (y_n == 'Y' or y_n == 'y')
        {
            i++;
        }
        else if(y_n == 'N' or y_n == 'n')
        {
           i = 0;
        }
        else
        {
            cout << "Invalid selection" << endl;
        }
        cout << endl;
        }
    }
    else if (num == 7)   //Exit
    {
        exit = 1;
        return 0;
    }
    else
        cout << "Incorrect selection" << endl;
    }

    return 0;
}
// Functions of PSYCHIC game(else if 6)
// --------------------------------------
string loveLife ()
{
    int num;
    string prediction;

    num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        prediction = "I see that marriage will lead to happiness";
        break;
    case 2:
        prediction = "I see that you will find your dream spouse";
        break;
    case 3:
        prediction = "I see that you will break up";
        break;
    case 4:
        prediction = "I see that you will get married";
        break;
    case 5:
        prediction = "I see that you will have a cute baby";
        break;

    return prediction;
    }
}

string schoolLife()
{
    int num;
    string prediction;

    num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        prediction = "I see that will earn your college diploma";
        break;
    case 2:
        prediction = "I see that you will gradate with 4.0 GPA";
        break;
    case 3:
        prediction = "I see that you will fail your classes this year";
        break;
    case 4:
        prediction = "I see that you will earn an honors diploma";
        break;
    case 5:
        prediction = "I see that you will not get a college diploma";
        break;

    return prediction;
    }
}

string financialSituation()
{
    int num;
    string prediction;

    num = rand() % 5 + 1;

    switch (num)
    {
    case 1:
        prediction = "I see that you will get your dream job";
        break;
    case 2:
        prediction = "I see that you will your own business";
        break;
    case 3:
        prediction = "I see that you will become a millionaire";
        break;
    case 4:
        prediction = "I see that you will go broke in 2 years";
        break;
    case 5:
        prediction = "I see that you will be financially independent";
        break;

    return prediction;
    }
}
//---------------------------------------




