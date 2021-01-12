//Quiz grading, from given student answer and given answer key.
#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//get answer from file
bool read(ifstream& file, string file_Name, char answer_log[]) {

	char answers;
	int i = 0;
	ifstream inputFile;
	inputFile.open(file_Name);

    if (inputFile.is_open()) {
		while (file >> answers) {

			answer_log[i] = answers;
			i++;
		}
	}
	return true;
}

//get the numbers of answer from file, if greater than 30, return 30.
int readNumbers(string file_Name) {

	char answers;
	int count = 0;
	ifstream inputFile;
	inputFile.open(file_Name);

	if (inputFile.is_open()){

		while (inputFile >> answers) {
			count++;
		}
}
	if (count > 30) {
		count = 30;
		return count;
	}
	else {
		return count;
	}
}

//display the result, as well as calculating the result. 
void display(char student_Answers[], char correct_Answers[], int correct_number) {

	int count = 0;
	double grade;
	
	for (int i = 0; i < correct_number; i++) {

		if (student_Answers[i] != correct_Answers[i]) {
			cout << "Question " << i + 1 << " has incorrect answer '" << student_Answers[i] 
				 << "', the correct answer is '" << correct_Answers[i] << "'" << endl;
		}
		else {
			count++;
		}
	}

	if (count != correct_number) {
		
		cout << (correct_number - count) << " questions were missed out of " << correct_number << endl;
	}
	else {

		cout << (correct_number - count) << " questions were missed out of " << correct_number << endl;
	}
	
	grade = (((double)count) / correct_number) * 100;
	cout << "The student grade is " << fixed << setprecision(1) << grade << "%" << endl;

	if (grade >= 70) {

		cout << "The student passed" << endl;
	}
	else {

		cout << "The student failed" << endl;
	}
}

int main() {
	//declaring values.
	const int max_Questions = 30;
	char student_Answer[max_Questions], correct_Answer[max_Questions];
	int student_number, correct_number;
	string student_Answer_Filename, correct_Answer_Filename;
	ifstream studentfile, correctfile;
	
	//get number of answer in student file, and checking if the file exists.
	cout << "Enter student answers file name" << endl;
	cin >> student_Answer_Filename;
	studentfile.open(student_Answer_Filename);
	if (studentfile.fail()) {
		cout << "File \"" << student_Answer_Filename << "\" could not be opened" << endl;
		return -1;
	}
	student_number = readNumbers(student_Answer_Filename);

	//get number of answer in correct answer file, and checking if the file exists.
	cout << "Enter correct answer file name" << endl; 
	cin >> correct_Answer_Filename;
	correctfile.open(correct_Answer_Filename);
	if (correctfile.fail()) {
		cout << "File \"" << correct_Answer_Filename << "\" could not be opened" << endl;
		return -1;
	}
	correct_number = readNumbers(correct_Answer_Filename);

	// conditions to compare the number of answer in the two file. 
	// if both answer is 0
	if ((student_number == 0) && (correct_number == 0)) {

		cout << "The number of student answers and correct answers are both 0" << endl;
		cout << "No grade can be calculated" << endl;
	}
	//if the two number of answers are different.
	else if (!(student_number == correct_number) && (student_number != -1) && (correct_number != -1)) {

		cout << "The student answers file has " << student_number << " entries and the correct answers file has "
		   	 << correct_number << " entries" << endl;
		cout << "Grading cannot be done if they are not the same" << endl;
	}
	//if  the two number of answers are same... call the function to display the result. 
	else if (read(studentfile, student_Answer_Filename, student_Answer)){

			if (read(correctfile, correct_Answer_Filename, correct_Answer)) {

				display(student_Answer, correct_Answer, correct_number);
			}
		}
	return 0;
}
