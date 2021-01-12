#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() 
{
	double starting_temp, ending_temp, increment_temp, 
		   celsius, kelvin;

	cin >> starting_temp >> ending_temp >> increment_temp;

	while (starting_temp > ending_temp || increment_temp <= 0)
	{
		cout << "Starting temperature must be <= ending temperature and increment must be > 0.0" << endl;
		cin >> starting_temp >> ending_temp >> increment_temp;
	}

	
	if (starting_temp <= ending_temp)
	{
		cout << setw(18) << "Fahrenheit" << setw(18) << "Celsius" << setw(18) << "Kelvin" << endl;
		while (starting_temp <= ending_temp)
		{
			celsius = (starting_temp - 32) / 1.8;
			kelvin = (celsius + 273.15);
			cout << fixed << setprecision(4) << setw(18) << starting_temp << setw(18) << celsius << setw(18) << kelvin << endl;
			starting_temp = starting_temp + increment_temp; 
		}
	}
}
