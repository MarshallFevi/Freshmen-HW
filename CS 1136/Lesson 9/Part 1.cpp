#include <iostream>
#include <iomanip>
using namespace std;

//prototype functions 
void readData (int& number_Spool_Ordered, int& number_Spool_Stock, double& shipping_Handling);
void display(int number_Spool_Ordered, int number_Spool_Stock, double shipping_Handling);


// function to read the data 
void readData(int& number_Spool_Ordered, int& number_Spool_Stock, double& shipping_Handling) {

	do { //get number of spools to be ordered

		cout << "Spools to be ordered" << endl;
		cin >> number_Spool_Ordered;
		if (number_Spool_Ordered < 1) {

			cout << "Spools order must be 1 or more" << endl;
		}

	} while (number_Spool_Ordered < 1);

	do { //get number off spools in stock

		cout << "Spools in stock" << endl;
		cin >> number_Spool_Stock;
		if (number_Spool_Stock < 0) {

			cout << "Spools in stock must be 0 or more" << endl;
		}

	} while (number_Spool_Stock < 0);

	//ask for special shipping and handling 

	char if_special_shippingAndhandling;
	cout << "Special shipping and handling (y or n)" << endl;
	cin >> if_special_shippingAndhandling;

	if (if_special_shippingAndhandling == 'y') { // if customer requested special ....

		do { // ask for special shipping and handling
			
			cout << "Shipping and handling amount" << endl;
			cin >> shipping_Handling;
			if (shipping_Handling < 0) {

				cout << "The spool shipping and handling charge must be 0.0 or more" << endl;
			}
			else {

				break;
			} 
		} while (shipping_Handling < 0);

	}

	else {

		shipping_Handling = 12.99;
	}
}

// output 
void display(int number_Spool_Ordered, int number_Spool_Stock, double shipping_Handling) {

	//set output prscision
	cout << fixed << setprecision(2);

	//declare final calculation 
	double subtotal,
		   total,
		   shipping;
	int placeholder;

	//compare spool ordered vs spool in stock 
	if (number_Spool_Stock < number_Spool_Ordered) {

		cout << "Spools ready to ship: " << number_Spool_Stock << endl;
		placeholder = number_Spool_Stock;
	}
	else {

		cout << "Spools ready to ship: " << number_Spool_Ordered << endl;
		placeholder = number_Spool_Ordered;
	}

	//display back-order amount 
	if (number_Spool_Stock >= number_Spool_Ordered) {

		cout << "Spools on back-order: 0" << endl;
	}
	else {
		
		cout << "Spools on back-order: " << (number_Spool_Ordered - number_Spool_Stock) << endl;

	}

	//calculations 
	subtotal = ( (double) placeholder * 104); 
	shipping = ((double)placeholder * shipping_Handling);
	total = subtotal + shipping;

	//display 
	cout << "Subtotal ready to ship: $" << setw(10) << subtotal << endl;
	cout << "Shipping and handling:  $" << setw(10) << shipping << endl;
	cout << "Total shipping charges: $" << setw(10) << total << endl;

}

int main() {

	int spools_Ordered, spools_inStock;
	double shipping;

	//calling the function 
	readData(spools_Ordered, spools_inStock, shipping);
	display(spools_Ordered, spools_inStock, shipping);

	return 0;

}
