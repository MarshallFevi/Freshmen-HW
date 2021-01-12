#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <fstream>
using namespace std;

int main()
{
    double num_total = 0,
           num_Total_Count = 0,
           num_Invalid_Count = 0,
           num_Valid_Count = 0, 
           num_Incre,
           num_Avg;

    string filename;
    ifstream inputFile;
    string outputfile_Name = "invalid-values.txt";
    ofstream outputFile(outputfile_Name);

    cout << "Enter input file name";
    cin >> filename;
    cout << endl;
    inputFile.open(filename);


    if (inputFile)
    {
        // the file opened successfully
        cout << "Reading from file \"" << filename << "\"" << endl;
        while (inputFile >> num_Incre)
        {
            if ((num_Incre >= 0) && (num_Incre <= 105))
            {
                num_Total_Count++;
                num_Valid_Count++;
                num_total = num_total + num_Incre;
            }

            if ((num_Incre < 0) || (num_Incre > 105))
            {
                num_Total_Count++;
                num_Invalid_Count++;
                outputFile << fixed << setprecision(5) << num_Incre << endl;
            }
        }
        num_Avg = (num_total / num_Valid_Count);
        cout << "Total values: " << num_Total_Count << endl;
        cout << "Invalid values: " << num_Invalid_Count << endl;
        cout << "Valid values: " << num_Valid_Count << endl;
        if (num_Valid_Count >= 1)
        {
            cout << "Average of valid values: " << fixed << setprecision(4) << num_Avg << endl;
        }
        else
        {
            cout << "An average cannot be calculated" << endl;
        }
        inputFile.close();
        outputFile.close();
    }
    else
    {
        cout << "File \"" << filename << "\" could not be opened" << endl;
    }
}
