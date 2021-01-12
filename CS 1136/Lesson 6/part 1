#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() {
	unsigned int lower_Value, upper_Value;
	char ascii_integer;
	int count = 0;

	cout << "Enter lower and upper values" << endl; 
	cin >> lower_Value >> upper_Value;

	while (lower_Value < 32 || upper_Value > 126 || lower_Value > upper_Value) {
		cout << "Values must be in range 32 to 126 inclusive" << endl;
		cout << "Enter lower and upper values" << endl;
		cin >> lower_Value >> upper_Value;
	}
	
	if (lower_Value >= 32 && upper_Value <= 126 && lower_Value <= upper_Value)
	{
		cout << "Characters for ASCII values between " << lower_Value << " and " << upper_Value << endl;
		cout << "----+----+----+----+" << endl;
		while (lower_Value <= upper_Value)
		{
			ascii_integer = lower_Value;
			cout << ascii_integer;
			lower_Value++;
			count++;
			if (count % 20 == 0)
				cout << endl;
		}
		if (count % 20 != 0)
		{
			cout << endl << "----+----+----+----+" << endl;
		}
		else
		{
			cout << "----+----+----+----+" << endl;
		}
	}
	
}

