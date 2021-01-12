#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main()
{
	unsigned int carbonD  = 1, 
				 air	  = 2,
				 helium   = 3,
				 hydrogen = 4,
				 menu     = 0;

	double time      = 0,
		   carbonS   = 258.0, 
		   airS      = 331.5,
		   heliumS   = 972.0,
		   hydrogenS = 1270.0;

	cout << "Select the medium that sound is traveling through:\n1 Carbon Dioxide\n2 Air\n3 Helium\n4 Hydrogen" << endl;
	cin >> menu; 
	if (menu >= 1 && menu <= 4)
	{
		cout << "Enter time (in seconds)" << endl;
		cin >> time;
		if (time >= 0.000 && time < 30.000)
		{
			if (menu == 1)
			{
				cout << "Carbon Dioxide: " << fixed << setprecision(3) << time << " seconds" << endl;
				cout << "Traveled "		   << fixed << setprecision(4) << (time * carbonS) << " meters" << endl;
			}
			if (menu == 2)
			{
				cout << "Air: "		<< fixed << setprecision(3) << time << " seconds" << endl;
				cout << "Traveled " << fixed << setprecision(4) << (time * airS) << " meters" << endl;
			}
			if (menu == 3)
			{
				cout << "Helium: "  << fixed << setprecision(3) << time << " seconds" << endl;
				cout << "Traveled " << fixed << setprecision(4) << (time * heliumS) << " meters" << endl;
			}
			if (menu == 4)
			{
				cout << "Hydrogen: " << fixed << setprecision(3) << time << " seconds" << endl;
				cout << "Traveled "  << fixed << setprecision(4) << (time * hydrogenS) << " meters" << endl;
			}
		}
		else
		{
			cout << "The time must be between 0.000 and 30.000 (inclusive)" << endl;
		}
	}
	else
	{
		cout << "The menu value is invalid. Please run the program again." << endl;
	}


}
