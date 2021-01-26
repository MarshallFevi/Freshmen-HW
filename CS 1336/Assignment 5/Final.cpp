/*
Module Name: Prime Number
Date: 2020-10-26
Author:

Module Purpose
    outputting all the prime number up to the user input
Module Design Description
    Enter an int, prime numbers will be outputted along with a text files formatted the same as the output.
Inputs:
    Integer between 1 and 100 
Outputs:
    Prime number
    .txt file of the output
Modification:
    N/A
*/
#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;

//Check for if an integer is a prime number or not. 
bool isPrime(unsigned number)
{
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0) //if number not a prime return false
        {
            return false;
        }
    }
    return true;
}

int main() 
{
    
    int user_input,//user input of int
        count = 0,//output per line
        incre_num = 2;//number used to check for if is prime, and being outputted. 
    const string filename = "PrimeOut.txt";//open file, set name to PrimeOut
    ofstream primefile(filename); //file.

    if (primefile.fail()) //check if the file is created and opened successfully 
    {
        cout << "File " << filename << " could not be opened!" << endl;
        cout << "Press enter key to continue..."; cin.ignore(); cin.get();
        exit(EXIT_FAILURE);
    }

    do//loop until the input is between 1 and 100
    { 
        cout << "Enter an integer between 1 and 100" << endl; 
        cin >> user_input;
        if ((user_input >= 1) && (user_input <= 100))
        {
            cout << "The prime that are <= " << user_input << " are:" << endl;
            primefile << "The prime that are <= " << user_input << " are:" << endl;
        }
        else
        {
            cout << "Entry error, please enter a number between 1 and 100 inclusive." << endl;
        }
    } while ((user_input < 1) || (user_input > 100));


    while (incre_num < user_input) 
    {
        if (isPrime(incre_num)) // checkig if is prime
        {
            if ((count % 10) == 0) //break a line after every 10 outputs
            {
                cout << endl;
                primefile << endl;
            }
            cout << setw(5) << incre_num;
            primefile << setw(5) << incre_num;
            count++;
        }
        incre_num++; //add to the number
    }
    cout << endl;
    primefile.close();
    return EXIT_SUCCESS;
}
