#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;


int main()
{
	unsigned int air        = 1,
				 water		= 2,
				 steel		= 3,
				 menu = 0;
				 

	double airS       = 1100,
		   waterS     = 4900,
		   steelS     = 16400,
		   distance = 0;
		   

	cout << "Select the medium that sound is traveling through:\n1 Air\n2 Water\n3 Steel" << endl;
	cin >> menu;
	switch (menu)
	{
	default:
		if (menu <= 0 || menu > 3)
			cout << "The menu value is invalid. Please run the program again." << endl;
		break;
	case 1:
		cout << "Enter distance (in feet)" << endl;
		cin >> distance; 
		if (distance <= 0)
			{
				cout << "The distance must be greater than zero" << endl;
			}
		else
			{
				cout << "Air: "			<< fixed << setprecision(4) << distance << " ft" << endl;
				cout << "Traveled for " << fixed << setprecision(4) << (distance / airS) << " seconds" << endl;
			}
		break;
	case 2:
		cout << "Enter distance (in feet)" << endl;
		cin >> distance;
		if (distance <= 0)
		{
			cout << "The distance must be greater than zero" << endl;
		}
		else
		{
			cout << "Water: "		<< fixed << setprecision(4) << distance << " ft" << endl;
			cout << "Traveled for " << fixed << setprecision(4) << (distance / waterS) << " seconds" << endl;
		}
		break;
	case 3:
		cout << "Enter distance (in feet)" << endl;
		cin >> distance;
		if (distance <= 0)
		{
			cout << "The distance must be greater than zero" << endl;
		}
		else
		{
			cout << "Steel: "		<< fixed << setprecision(4) << distance << " ft" << endl;
			cout << "Traveled for " << fixed << setprecision(4) << (distance / steelS) << " seconds" << endl;
		}
		break;
	}
}
