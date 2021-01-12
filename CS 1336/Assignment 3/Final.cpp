/*
Module Name: Time Calculation 
Date Written: 9/13/2020
Author: Xiaoyao Li
Module Purpose: Being able to perform math calculations as well as use various function like cin efficiently. 
Module Design Description: Converting second into other measurement for time. 
Inputs:
	seconds 
Outputs:
	number of day, hour, minute. 
Modification List:
9/16/2020 scratched the original code and went with the way pRoFfSoR wants us to go with >.>. 
*/
#include<string>
#include<iostream>
#include <iomanip> 
#include <math.h>
using namespace std;

/*int main()
{
	int seconds = 0, minutes = 0, hours = 0, days = 0; // Main measurements. 
	const unsigned secDay = 86400; // amount of sec in 1 day. 
	const unsigned secHr = 3600; // amount of sec in 1 min. 
	const unsigned secMin = 60; // amount of sec in 1 hr.
	cout << "Enter number of total seconds (>= 0) : "; cin >> seconds; 
	cout << endl << endl; 


	if (seconds >= secDay ) // cal. amount of day.
	{
		days = (seconds / secDay);
	}
	
	if ((seconds >= secHr) && ( days >= 1)) // cal. amount of hr if theres more than 1 day.
	{
		hours = ((seconds % secDay) / secHr);
	}
	
	if ((seconds >= secHr) && (days <= 0)) // cal. amount of hr if no day. 
	{
		hours = (seconds / secHr);
	}
   
	if ((seconds >= secMin) && ( hours >= 1)) // cal. amount of min if hour 
	{
		minutes = ((seconds % secHr) / secMin);
	}
	
	if  ((seconds >= secMin) && (days <= 0)) // cal. amount of min if no hour 
	{
		minutes = (seconds / secMin);
	}
	
	if ((minutes >= 1)) 
	{
		seconds = (seconds % secMin);
	}
	
	if (seconds <= 59)
	{
		seconds = seconds; 
	} 
	cout << " The no of days is :    " << setw(10) << days    << endl;
	cout << " The no of hours is :   " << setw(10) << hours   << endl;
	cout << " The no of minutes is : " << setw(10) << minutes << endl;
	cout << " The no of seconds is : " << setw(10) << seconds << endl;
	cout << "Press the enter key to end..." << endl; cin.ignore(); cin.get();



	cout << endl << endl << endl; 
	return 0; 
}*/

int main()
{
	 unsigned sec; // user input of seconds
	const unsigned secDay = 86400; // amount of sec in 1 day. 
	const unsigned secHr = 3600; // amount of sec in 1 min. 
	const unsigned secMin = 60; // amount of sec in 1 hr.
	cout << "Enter number of total seconds (>= 0) : "; cin >> sec;
	cout << endl << endl;

	unsigned days = sec / secDay;
	if (days)
	{
		sec -= (days * secDay);
	}

	unsigned hours = sec / secHr;
	if (hours)
	{
		sec -= (hours * secHr);
	}

	unsigned minutes = sec / secMin;
	if (minutes)
	{
		sec -= (minutes * secMin);
	}
	cout << " The no of days is :    " << setw(10) << days << endl;
	cout << " The no of hours is :   " << setw(10) << hours << endl;
	cout << " The no of minutes is : " << setw(10) << minutes << endl;
	cout << " The no of seconds is : " << setw(10) << sec << endl;
	cout << "Press the enter key to end..." << endl; cin.ignore(); cin.get();



	cout << endl << endl << endl;
	return 0;
}
