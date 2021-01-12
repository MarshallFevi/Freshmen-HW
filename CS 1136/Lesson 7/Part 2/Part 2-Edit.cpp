#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{


   // Setting the precision
   cout << fixed << setprecision(4) << showpoint;


   // defines an input stream for the data file
   ifstream dataIn;

   // Defines an output stream for the data file
   ofstream dataOut;

   // Declaring variables
   double total = 0.0, average = 0.0, number;
   string filename;
   int count = 0, valid = 0, notvalid = 0;

   // Getting the filename entered by the user
   cout << "Enter input file name\n";
   cin >> filename;

   // Opening the input file
   dataIn.open(filename);
   // checking whether the file name is valid or not

   if (dataIn)
   {
       // creating and Opening the output file
       dataOut.open("invalid-numbers.txt");
       cout << "Reading from file \"" << filename << "\"" << endl;

       // Reading the numbers from the input file
       while (dataIn >> number)
       {
           // counting the total numbers in the file


           // checking the number in valid or not
           if (number >= 0 && number <= 110)
           {
               // calculating the valid numbers total
               total = total + number;
               // counting valid numbers
               valid++;
               count++;
           }
           if (number < 0 || number > 110)
           {
               // counting invalid numbers
               notvalid++;
               // writing the invalid numbers to the outfile
               dataOut << number << endl;
               count++;

           }

          
       }

       // displaying the output
       cout << "Total values: " << count << endl;
       cout << "Invalid values: " << notvalid << endl;
       cout << "Valid values: " << valid << endl;

       if (valid == 0)
       {
           cout << "An average cannot be calculated" << endl;
       }
       else
       {
           average = total / valid;
           cout << "Average of valid values: " << average << endl;
       }
       // Closing the intput file
       dataIn.close();


       // Closing the output file.
       dataOut.close();
   }

   else
   {
       cout << "File \"badfile.txt\" could not be opened" << endl;
       return 1;
   }
      return 0;
}
