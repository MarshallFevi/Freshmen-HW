#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;





int main()
{
    long num, num2;
    long num_Sales,
        count = 0;

    string filename;
    ifstream inputFile;
    string outputfile_Name = "saleschart.txt";
    ofstream outputFile(outputfile_Name);

    cout << "Enter input file name";
    cin >> filename;
    cout << endl;
    inputFile.open(filename);


    if (inputFile)
    {
        // the file opened successfully
        outputFile << "SALES BAR CHART" << endl;
        outputFile << "(Each * equals 5,000 dollars)" << endl;
        while (inputFile >> num >> num2)
        {
            // process the num value
            num_Sales = (num2 / 5000) - 1;
            if (num >= 1 && num < 100)
            {
                if (num2 >= 0)
                {
                    outputFile << "Store " << setw(2) << num << ": ";
                    for (count = 0; count <= num_Sales; count++)
                    {
                        outputFile << "*";
                    }
                    outputFile << endl;
                }
                else
                {
                    if (num2 < 0)
                    {
                        cout << "The sales value for store " << num << " is negative" << endl;
                    }
                }
            }
            else
            {
                if (num < 1 || num > 100)
                {
                    cout << "The store number " << num << " is not valid" << endl;
                }
            }
        }
        inputFile.close();
        outputFile.close();
    }
    else
    {
        cout << "File \"" << filename << "\" could not be opened" << endl;
    }

}
    /*if (inputFile)
    {
        // the file opened successfully
        
        while (inputFile >> num >> num2)
        {
            // process the num value
            num_Sales = (num2 / 5000) - 1;
            if (num >= 1 && num < 100)
            {
                if (i < 1)
                {

                    cout << "SALES BAR CHART" << endl;
                    cout << "(Each * equals 5,000 dollars)" << endl;
                    outputFile << "SALES BAR CHART" << endl;
                    outputFile << "(Each * equals 5,000 dollars)" << endl;
                    i++;
                }
                if (num2 >= 0)
                {
                    cout << "Store " << setw(2) << num << ": ";
                    outputFile << "Store " << setw(2) << num << ": ";
                    for (count = 0; count <= num_Sales; count++)
                    {
                        cout << "*";
                        outputFile << "*";
                    }
                    cout << endl;
                    outputFile << endl;
                }
                else
                {
                    if (num2 < 0)
                    {
                        cout << "The sales value for store " << num << " is negative" << endl;
                    }
                }
            }
            else
            {
                if (num < 1 || num > 100)
                {
                    cout << "The store number " << num << " is not valid" << endl;
                }
            }
        }
        inputFile.close();
        outputFile.close();
    }
    else
    {
        cout << "File \"" << filename << "\" could not be opened" << endl;
    }

}*/
