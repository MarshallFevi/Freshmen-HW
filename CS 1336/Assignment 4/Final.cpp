/*
Module Name: Rock Paper Scissors 
Date: 2020-9-27
Author:
Xiaoyao Li
Module Purpose
    To play rock paper scissors versus the computer.
Module Design Description
    Enter choice of weapon and the result and a scorboard will be oputut.
Inputs:
    Weapons
Outputs:
    Results of game with a working scoreboard and the chosen weapon of both party.
Modification:
    2020-9-30 Wrote the code with the Professor's way and changed someparts to fit with the hw. document. XL
*/


#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

//Alternative way 
/*
int main()
{
    //user input
    unsigned short userChoice = 0;
    //scoreboard
    unsigned int ties     = 0,
                 player   = 0,
                 computer = 0;

    //string output for user and computer
    string a, b;


    while (userChoice != 4)
    {
        //random starting value
        srand(clock());

        //computer
        unsigned short computerChoice;
        computerChoice = (rand() % 3) + 1;
        int difference;

        cout << "1.> Rock"     << endl
             << "2.> Paper"    << endl
             << "3.> Scissors" << endl
             << "4.> End Game" << endl << endl;

        cout << "Weapon Choice :"; cin >> userChoice;
        cout << endl;
        difference = userChoice - computerChoice;

        //ends the loop and invalid choice
        if ( (userChoice >= 4) || (userChoice == 0) )
        {
            if (userChoice == 4)
            {
                return 0;
            }

            else
            {
                cout << "Invalid menu choice, please try again" << endl << endl;
                system("pause");
                system("cls");
            }
        }

        //change int to the 3 weapons
        if ( (userChoice <= 3) )
        {
            if ((userChoice == 1))
            {
                a = "Rock";
            }
            else if ((userChoice == 2))
            {
                a = "Paper";
            }
            else
            {
                a = "Sicissors";
            }
        }

        if ( (computerChoice <= 3) )
        {
            if ((computerChoice == 1))
            {
                b = "Rock";
            }
            else if ((computerChoice == 2))
            {
                b = "Paper";
            }
            else
            {
                b = "Sicissors";
            }
        }

        //determin the result
        if (userChoice <= 3 && (userChoice != 0) )
        {
            if ( (difference == 0) )
            {
                ties++;
                cout << "Player weapon is : " << a << endl << endl;
                cout << "Computer weapon is : " << b << endl << endl << endl;
                cout << "Its a tie!" << endl << endl << endl;

                cout << "Number of : " << endl;
                cout << "Ties           : " << ties << endl;
                cout << "Player   Wins  : " << player << endl;
                cout << "Computer Wins  : " << computer << endl;
                cout << endl;
                system("pause");
                system("cls");
            }

            else if ( (difference == 1) || (difference == -2) )
            {
                player++;
                cout << "Player weapon is : " << a << endl << endl;
                cout << "Computer weapon is : " << b << endl << endl;
                cout << "Player Win!" << endl << endl << endl;

                cout << "Number of : " << endl;
                cout << "Ties           : " << ties << endl;
                cout << "Player   Wins  : " << player << endl;
                cout << "Computer Wins  : " << computer << endl;
                cout << endl;
                system("pause");
                system("cls");
            }

            else
            {
                computer++;
                cout << "Player weapon is : " << a << endl << endl;
                cout << "Computer weapon is : " << b << endl << endl;
                cout << "Player Lose" << endl << endl << endl;

                cout << "Number of : " << endl;
                cout << "Ties           : " << ties << endl;
                cout << "Player   Wins  : " << player << endl;
                cout << "Computer Wins  : " << computer << endl;
                cout << endl;
                system("pause");
                system("cls");
            }
        }
    }

}
*/

//Prof's way
int main() 
{
    unsigned //scores
        ties     = 0,
        player   = 0,
        computer = 0;

    const unsigned short //weapons
        rock    = 1,
        paper   = 2,
        scissor = 3,
        endGame = 4;

    unsigned short computerWeaponChoice,
                   playerWeaponChoice;

    do 
    {
        cout << "Please choose a weapon from the menu below: " << endl << endl;
        cout << "1.> Rock"     << endl;
        cout << "2.> Paper"    << endl;
        cout << "3.> Scissors" << endl;
        cout << "4.> End Game" << endl << endl;
        cout << "Weapon Choice : "; cin >> playerWeaponChoice;
        cout << endl;

        if ((rock <= playerWeaponChoice) && (playerWeaponChoice <= scissor)) 
        {
            cout << "Player weapon is : ";
            switch (playerWeaponChoice) 
            {
            case rock   : cout << "Rock";     break;
            case paper  : cout << "Paper";    break;
            case scissor: cout << "Scissors"; break;
            }
        }

        else if (playerWeaponChoice == endGame)
        {
            break;
        }

        //invalid input
        else 
        { 
            cout << endl << "Invalid menu choice, please try again" << endl << endl;
            system("pause");
            system("cls");
            continue;
        }

        ties++;
        cout << endl << endl;

        //random start
        srand(clock()); 
        computerWeaponChoice = (rand() % scissor + 1);

        cout << "Computer Weapon is : ";
        switch (computerWeaponChoice) 
        {
        case rock:     cout << "Rock";     break;
        case paper:    cout << "Paper";    break;
        case scissor: cout  << "Scissors";  break;
        }
        cout << endl << endl << endl;

        //results
        if (computerWeaponChoice == playerWeaponChoice)
        {
            cout << "Its a tie" << endl;
        }
        else 
        {
            switch (computerWeaponChoice) 
            {
            case rock:
                switch (playerWeaponChoice) 
                {
                case paper:
                    cout << "Player Win"   << endl;
                    player++;
                    break;
                case scissor:
                    cout << "Computer Win" << endl;
                    computer++;
                    break;
                }
                break;
            case paper:
                switch (playerWeaponChoice) 
                {
                case rock:
                    cout << "Compiter Win" << endl;
                    computer++;
                    break;
                case scissor:
                    cout << "Player Win"   << endl;
                    player++;
                    break;
                }
                break;
            case scissor:
                switch (playerWeaponChoice) 
                {
                case rock:
                    cout << "Player Win"   << endl;
                    player++;
                    break;
                case paper:
                    cout << "Computer Win" << endl;
                    computer++;
                    break;
                }
                break;
            }
        }

        //scoreboard
        cout << endl;
        cout << "Number of :      " << endl;
        cout << "Ties           : " << ties - player - computer << endl;
        cout << "Player   Wins  : " << player << endl;
        cout << "Computer Wins  : " << computer << endl << endl;

        system("pause");
        system("cls");
    }   while (true);

    return 0;
}

