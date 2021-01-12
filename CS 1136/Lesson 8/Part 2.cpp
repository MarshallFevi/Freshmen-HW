//calculate how much money one has to deposite to get x amount ofm oney in y amount of year
#include <fstream>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

//calculate for present value
double presentValue(double futureValue, double interestRate, int numberYears)
{
	double present_Val = futureValue / (pow((1 + interestRate), numberYears));
	return present_Val;
}

//get the proper future value
double futureValue()
{
	double future_Val;
	cout << "Enter future value" << endl;
	cin >> future_Val;

	while (future_Val <= 0)
	{
		cout << "The future value must be greater than zero" << endl;
		cout << "Enter future value" << endl;
		cin >> future_Val;
	}
	return future_Val;
}

//get the proper interest value 
double annualInterest()
{
	double annual_Int;
	cout << "Enter annual interest rate" << endl;
	cin >> annual_Int;

	while (annual_Int <= 0)
	{
		cout << "The annual interest rate must be greater than zero" << endl;
		cout << "Enter annual interest rate" << endl;
		cin >> annual_Int;
	}
	return annual_Int;
}

//get the proper number year
int year()
{
	int years;
	cout << "Enter number of years" << endl;
	cin >> years;

	while (years <= 0)
	{
		cout << "The number of years must be greater than zero" << endl;
		cout << "Enter number of years" << endl;
		cin >> years;
	}
	return years;
}

//displaying the result 
void displayOutput(double present_Val, double futureValue, double interestRate, int numberYears)
{
	//displaying the result 
	cout << fixed << setprecision(2) << "Present value: $" << present_Val << endl;
	cout << fixed << setprecision(2) << "Future value: $" << futureValue  << endl;
	cout << fixed << setprecision(3) << "Annual interest rate: " << (interestRate * 100) << "%" << endl;
	cout << "Years: " << numberYears << endl;

}

int main()
{
	// declaring the values
	double future_Value, 
		   annual_Intereset,
		   present_Value;
	int number_of_years;

	//get the user input
	future_Value = futureValue();
	annual_Intereset = annualInterest();
	number_of_years = year();
	annual_Intereset = annual_Intereset / 100; 

	//calculating the result and displaying everything 
	present_Value = presentValue(future_Value, annual_Intereset, number_of_years);
	displayOutput(present_Value, future_Value, annual_Intereset, number_of_years);

	return 0;

}
