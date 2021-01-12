#include <fstream>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

//reading seconds from user
double readSeconds()
{
	//declare vrariable seconds, prompting user to enter seconds, reading seconds from user, returning the value.
	double seconds;
	cout << "Enter the time (in seconds)" << endl;
	cin >> seconds;
	return seconds;
}

//calculating distance travelled by the object on Earth
double calculateEarthDistance(double seconds)
{
	//declare value of gravity, calculate the distance, return the distance
	const double earth_gravity = 9.8;
	double earth_distance;
	earth_distance = 0.5 * earth_gravity * pow(seconds, 2);
	return earth_distance;
}

//calculate distance travelled by the object on Moon
double calculateMoonDistance(double seconds)
{
	const double moon_gravity = 1.6;
	double moon_distance;
	moon_distance = 0.5 * moon_gravity * pow(seconds, 2);
	return moon_distance;
}

//display everything, if other parts functioned as intended 
void displayResults(double seconds, double earthDistance, double moonDistance)
{
	cout << "The object traveled " << fixed << setprecision(4) << earthDistance << " meters in " << fixed << setprecision(2) << seconds << " seconds on Earth" << endl;
	cout << "The object traveled " << fixed << setprecision(4) << moonDistance  << " meters in " << fixed << setprecision(2) << seconds << " seconds on the Moon"  << endl;
}

//main function, calling everything 
int main()
{
	//reading the seconds 
	double time = readSeconds();

	//keep asking user for the correct format of time 
	while (time != 0)
	{
		if (time < 0)
		{
			cout << "The time must be zero or more" << endl;
		}

		else
		{
			double earth_distance = calculateEarthDistance(time);
			double moon_distance = calculateMoonDistance(time);
			displayResults(time, earth_distance, moon_distance);
		}

		//continue to read time 
		time = readSeconds();
	}
	return 0;
}
