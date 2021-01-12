/*
Module Name: Assign_ArraySearch
Date Written: 11/22/2020
Author: Xiaoyao Li
Module Design Description: search a set of numbers in an array 
Inputs:
	set of numbers to be searched in, and numbers to be searched for
Outputs:
	whether the number is in the set of arrays and where it is. 
*/

#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

bool SearchList(int stdList[], unsigned numElems, int searchValue, unsigned& foundIndex);

const string LS_STANDARD_FILENAME = "LSStandard.txt";
const string LS_TEST_FILENAME     = "LSTEST.txt";

const unsigned LS_STANDAD_ARRAY_SIZE = 100;
const unsigned LS_TEST_ARRAY_SIZE    = 50;

int main() {

	int LSStandardArray[LS_STANDAD_ARRAY_SIZE],
		LSTestArray[LS_TEST_ARRAY_SIZE];
	ifstream lsStandardFile(LS_STANDARD_FILENAME);
	if (lsStandardFile.fail()) {

		cout << "File " << LS_STANDARD_FILENAME << " could not be opened!" << endl;
		cout << "Press enter key to continue...";
		cin.ignore(); cin.get();
		exit(EXIT_FAILURE);
	}

	ifstream lsTestFile(LS_TEST_FILENAME);
	if (lsStandardFile.fail()) {

		cout << "File " << LS_TEST_FILENAME << " could not be opened!" << endl;
		cout << "Press enter key to continue...";
		cin.ignore(); cin.get();
		exit(EXIT_FAILURE);
	}

	unsigned lsStandardElementNumber = 0;
	for (; lsStandardFile >> LSStandardArray[lsStandardElementNumber]; ++lsStandardElementNumber);
	unsigned lsTestElementNumber = 0;
	for (; lsTestFile >> LSTestArray[lsTestElementNumber]; ++lsTestElementNumber);

	lsStandardFile.close();
	lsTestFile.close();

	for (unsigned lsTestSearchIndex = 0, foundIndex; lsTestSearchIndex < lsTestElementNumber; ++lsTestSearchIndex) {

		cout << "Number " << setw(2) << lsTestSearchIndex + 1 << " (" << setw(3) << LSTestArray[lsTestSearchIndex] << ") ";
		if (SearchList(LSStandardArray, lsStandardElementNumber, LSTestArray[lsTestSearchIndex], foundIndex)) {

			cout << "was located at index " << foundIndex << "." << endl;
		}
		else {
			cout << "was not in the file." << endl;
		}
	}
	return EXIT_SUCCESS;
}

bool SearchList(int stdList[], unsigned numElems, int searchValue, unsigned& foundIndex) {

	for (foundIndex = 0; foundIndex < numElems; ++foundIndex) {
		if (stdList[foundIndex] == searchValue) {
			//foundIndex += 1; dont add one for some god fucking reason although the number is on the number of line + 1 ? I dont fucking udnerstand why I would get points deducted becasue of this e but O fucking well do I not care about this bull crap. 
			return true;
		}
	}
	return false; 
}



