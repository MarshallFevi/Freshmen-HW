//above 70 = passing
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;



void handleFileOpenFailure(string filename) {

	ifstream inputFile(filename);

	if (!inputFile.is_open()) {
		cerr << "File" << filename << "could not be opened !" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
}
void ReadInStudentNamesTo(string studentNames[], string studentNamesFilename, unsigned &noStudents) {

	ifstream inputFile;
	unsigned i = 1;

	inputFile.open(studentNamesFilename);

	if (!inputFile.is_open()) {
		handleFileOpenFailure(studentNamesFilename);
	}

	while (!inputFile.eof()) {

		getline(inputFile, studentNames[i]);
		i++;
		
	}
	noStudents = i;
	
	
}

void ReadInFileLinesTo(char dataArray[], string filenameStr) {

	ifstream inputFile;
	unsigned i = 0;
	inputFile.open(filenameStr);

	if (!inputFile.is_open()) {
		handleFileOpenFailure(filenameStr);
	}

	while (!inputFile.eof()) {

		inputFile >> dataArray[i];
		i++;
	}
}

int main() {
	const string STUDENT_NAMES_FILENAME = "StudentNames.txt";
	const string CORRECT_ANSWERS_FILENAME = "CorrectAnswers.txt";
	const string STUDENT_ANSWERS_FILENAME = "StudentAnswers.txt";
	const string STUDENT_REPORT_FILENAME = "StudentReport.txt";

	const unsigned MAXIMUM_NUMBER_OF_STUDENTS = 10;
	string   studentNames[MAXIMUM_NUMBER_OF_STUDENTS];
	unsigned noStudents;

	const unsigned MAXIMUM_NUMBER_OF_QUESTIONS = 10;
	char     correctAnswers[MAXIMUM_NUMBER_OF_STUDENTS];
	char     studentAnswers[MAXIMUM_NUMBER_OF_STUDENTS * MAXIMUM_NUMBER_OF_QUESTIONS];
	ofstream reportFileStream(STUDENT_REPORT_FILENAME);
	if (reportFileStream.fail())
		handleFileOpenFailure(STUDENT_REPORT_FILENAME);

	ReadInStudentNamesTo(studentNames, STUDENT_NAMES_FILENAME, noStudents);
	ReadInFileLinesTo(correctAnswers, CORRECT_ANSWERS_FILENAME);
	ReadInFileLinesTo(studentAnswers, STUDENT_ANSWERS_FILENAME);
	 
	cout << noStudents;
}
