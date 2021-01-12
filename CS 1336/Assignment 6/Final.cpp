//Forgot about commenting. 
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

void handleFileOpenFailure(string filename) {
	
	ifstream inputFile(filename);
	
	if (!inputFile.is_open()) {
		cerr << "File" << filename << " could not be opened !" << endl;
		system("pause");
		exit(EXIT_FAILURE);
	}
}

void ReadInStudentNamesTo(string studentNames[], string studentNamesFilename, unsigned &noStudents) {
	
	
	ifstream inputFile;
	unsigned i = 0;
	inputFile.open(studentNamesFilename);

	if (!inputFile.is_open()) {
		handleFileOpenFailure(studentNamesFilename);
	}
	
	while (!inputFile.eof()) {

		while (getline(inputFile, studentNames[i])) {
			if (studentNames[i].empty()) {
				continue;
			}
			else {
				i++;
			}
		}
		
	}
	noStudents = i;
	inputFile.close();
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
	inputFile.close();
}

string ProcessCreateReportStringFor(unsigned studentNo, unsigned maximumNoQuestions, unsigned studentQuestionNo,
	string   studentNames[], char     studentAnswers[], char correctAnswers[]) {
	string incorrectStr = "";
	int total_correct_questions = 0;
	int question = 0;

	studentQuestionNo = (studentNo * maximumNoQuestions);

	for (int key_increment = 0; key_increment < maximumNoQuestions; studentQuestionNo++, key_increment++) {

		question++;
		if (studentAnswers[studentQuestionNo] == correctAnswers[key_increment]) {
			total_correct_questions++;
		}
		else if (studentAnswers[studentQuestionNo] != correctAnswers[key_increment]) {
			incorrectStr += to_string(question) + "(" + string(1, studentAnswers[studentQuestionNo]) + "/" + string(1, correctAnswers[key_increment]) + ") ";
		}
	}

	if (incorrectStr == "") {
		incorrectStr = "None";
	}

	int percent = (int)((((float)(total_correct_questions)) / maximumNoQuestions) * 100);
	
	string reportStr =
		"Student Number    : " + to_string(studentNo + 1) + "\n" +
		"Student Name      : " + studentNames[studentNo] + "\n" +
		"Amount Correct    : " + to_string(total_correct_questions) + "\n" +
		"Percent Score     : " + to_string(percent) + "\n" +
		"Incorrect Answers : " + incorrectStr + "\n";
	
	reportStr = reportStr + "Student " + ((percent > 69) ? "passed" : "not passed") + "\n\n";
	
	
	return(reportStr);
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

	string studentReportStr;
	for (unsigned studentNo = 0, studentQuestionNo = 0;
		studentNo < noStudents;
		++studentNo, studentQuestionNo = studentQuestionNo + MAXIMUM_NUMBER_OF_QUESTIONS) {
		studentReportStr = ProcessCreateReportStringFor(studentNo, MAXIMUM_NUMBER_OF_QUESTIONS, studentQuestionNo,
			studentNames, studentAnswers, correctAnswers);
		cout << studentReportStr << endl;
		reportFileStream << studentReportStr << endl;
	}

	reportFileStream.close();
}
