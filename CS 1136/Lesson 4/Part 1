//Was being a lazy ass, didn't write what the code do >.>. 
#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std; //don't flame plz. 

int main()
{
	double massKG;
	const double earthG = 9.81,
				       moonG  = 1.62,
				       venusG = 8.87;

	double weightE,
		     weightM,
		     weightV;
         
	cout << "Enter the mass in kg" << endl;
	cin >> massKG;
  
	weightE = massKG * earthG;
	weightM = massKG * moonG;
	weightV = massKG * venusG;
	cout << fixed   << setprecision(4)    << "The mass is "    << massKG << " kg" << endl; 
  
	if (massKG > 0)
	{
		cout << setw(8) << left << "Location" << setw(14) << right << "Weight (N)" << endl;
		cout << setw(8) << left << "Earth" << setw(14) << right << weightE << endl;
		cout << setw(8) << left << "Moon" << setw(14) << right << weightM << endl;
		cout << setw(8) << left << "Venus" << setw(14) << right << weightV << endl;
		if (weightE >= 1500)
		{
			cout << "The object is heavy" << endl;
		}
		else if (weightE <= 5)
		{
			cout << "The object is light" << endl;
		}
	}
	else
	{
		cout << "The mass must be greater than zero" << endl;
	}
}
