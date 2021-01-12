#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
	long long int sec; // user input of seconds
	long long int secDay = 86400; // amount of sec in 1 day. 
	long long int secHr = 3600; // amount of sec in 1 min. 
	long long int secMin = 60; // amount of sec in 1 hr.
	cout << "Enter seconds" << endl;
	cin  >> sec;
	cout << "Total seconds: " << sec << endl << endl;
	
	if (sec > 0)
	{
		long long int days = sec / secDay;
		if (days)
		{
			sec -= (days * secDay);
		}

		long long int hours = sec / secHr;
		if (hours)
		{
			sec -= (hours * secHr);
		}

		long long int minutes = sec / secMin;
		if (minutes)
		{
			sec -= (minutes * secMin);
		}
		if (days >= 1)
		{
			cout << days << " day(s)" << endl;
		}
		if (hours >= 1)
		{
			cout << hours << " hour(s)" << endl;
		}
		if (minutes >= 1)
		{
			cout << minutes << " minute(s)" << endl;
		}
		if (sec >= 1)
		{
			cout << sec << " second(s)" << endl;
		}
	}
	else
	{
		cout << "Total seconds must be greater than zero" << endl; 
	}
	
	return 0;
}
