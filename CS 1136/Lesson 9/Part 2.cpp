#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

//prototype functions
void readData(string file_Name, double& presentValue, double& interestRate, int& months);
void check_File(string filename);
void display(double presentValue, double interestRate, int months);
double futureValue(double presentValue, double interestRate, int months);

//check if the file is valid
void check_File(string filename) {

	ifstream inputFile(filename);
	if (!inputFile.is_open()) {
		cerr << "File" << filename << " could not be opened" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
}
 
//read  data from file 
void readData(string file_Name, double& presentValue, double& interestRate, int& months) {

	int var_Month;
	double var_PresentValue,
		   var_InterestRate;
	ifstream inputFile;
	inputFile.open(file_Name);

	if (!inputFile.is_open()) {

		check_File(file_Name);
	}

	while (!inputFile.eof()) {

		do {

			if (inputFile >> var_PresentValue >> var_InterestRate >> var_Month) {

				if ((var_PresentValue > 0.0) && (var_InterestRate > 0.0) && (var_Month > 0)) {

					presentValue = var_PresentValue;
					interestRate = var_InterestRate;
					months		 = var_Month;
				}
				else {

					cout << var_PresentValue << " " << var_InterestRate << " " << var_Month << endl;
					cout << "One or more of the above values are not greater than zero" << endl;
				}
			}
			else {

				continue;
			}
		} while ((presentValue > 0) && (interestRate > 0) && (months > 0));
	}
	inputFile.close();
}

//calculate the furture value
double futureValue(double presentValue, double interestRate, int months) {

	double furuteValue = 0.0;
	furuteValue = presentValue * pow((1 + interestRate), months); 
	return furuteValue;
}

//display
void display(double presentValue, double interestRate, int months) {

	double future_value = futureValue(presentValue, interestRate, months);
	
}





