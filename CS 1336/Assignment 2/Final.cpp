/*
Module Name: Arithmetics String 
Date Written: 9/5/2020
Author: Xiaoyao Li
Module Design Description: Converting int to other various variables, as well as combining and performing basic math calculations. 
Inputs:
	intergers, decimals, words.
Outputs:
	Multiple types of results
Modification List:
9/2/2020 - Finished multiple parts of the code. (Very janky, and a total mess) Xiaoyao Li 
9/3/2020 - Fixed part 7 where float result isn't displaying properly. Tidied up  the code. Xiaoyao Li
9/4/2020 - Added Bool part. Fixed Float isn't displaying .0000. Xiaoyao Li
9/5/2020 - Finished. 
*/
#include<string>
#include<iostream>
#include <iomanip> 
#include <math.h>
using namespace std;

int main()
{
	int num, num2;
	float num3, num4;
	string word1, word2; 
	
	//part 1 converting int into octal, hex, dec 
	cout << "Please enter an integer to convert: "; 
	cin >> num;
	cout << "Use iomanips to condition the stream"                        << endl;
	cout << "The entered integer in octal        form is: " << oct << num << endl;
	cout << "The entered integer in hexadecimal  form is: " << hex << num << endl;
	cout << "The entered integer in decimal      form is: " << dec << num << endl;
	cout << endl << endl;
	cout << "Use iomanips setbase to condition the stream"                        << endl;
	cout << "The entered integer in octal        form is: " << setbase(8)  << num << endl;
	cout << "The entered integer in hexadecimal  form is: " << setbase(16) << num << endl;
	cout << "The entered integer in decimal      form is: " << setbase(10) << num << endl; 
	cout << endl << endl;


	//part 2 multiplication and division w/ binary operator
	cout << "Please enter an integer to shift to multiply by 4 : "; cin >> num;        
	cout << "This integer multiplied by 4 with left  shift binary operator is: " << (num << 2) << endl;
	cout << "This integer divided    by 4 with right shift binary operator is: " << (num >> 2) << endl;
	cout << endl << endl;


	//part 3 display all byte sizes 
	cout << "All sized are in Bytes : " << endl;
	cout << "char size:      " << sizeof(char)      << endl;
	cout << "short size:     " << sizeof(short)     << endl;
	cout << "int size:       " << sizeof(int)       << endl;
	cout << "unsigned size:  " << sizeof(unsigned)  << endl;
	cout << "long size:      " << sizeof(long)      << endl;
	cout << "long long size: " << sizeof(long long) << endl;
	cout << "bool size:      " << sizeof(bool)      << endl;
	cout << "float size:     " << sizeof(float)     << endl;
	cout << "double size:    " << sizeof(double)    << endl; 
	cout << endl << endl; 


	//part 4 convert an int to a character (letter)
	cout << "Please enter a number for a char ((Number 65 - 90 for A - Z) & (Number 97 - 122 for a - z)): "; cin >> num; 
	cout << "Character for int c is                                                                     : " << (char(num)) << endl;
	cout << endl << endl;


	//part 5 display unsigned value of an unsigned int 
	cout << "Please enter a negative number: "; cin >> num; 
	cout << "The unsigned int is           : " << unsigned(num) << endl; 
	cout << endl << endl;


	//part 6 math... 
	int i; 
	cout << "i = "; cin >> i;
	cout << "int i = " << i << "; i = i / i++;" << endl;
	i /= i++;
	cout << "i is " << i; 
	cout << endl << endl;
	
	cout << "i = "; cin >> i;
	cout << "int i = " << i << "; i = i * ++i;" << endl;
	i *= ++i;
	cout << "The value for i is " << i;
	cout << endl << endl;

	cout << "i = "; cin >> i;
	cout << "int i = " << i << "; i = (i += 1) + (i += 2);" << endl;
	i = (i += 1) + (i += 2);
	cout << "The value for i is : " << i; 
	cout << endl << endl;
	
	//part 7 boolean stuff 
	bool a = true, b = false;
	a = (b = false) && (b++); 
	cout << "bool a = true, b = false;" << endl;
	cout << "a = (b = false) && (b++);" << endl;
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << endl << endl; 
	
	
	//part 8  More math with integers and real numbers 
	cout << "Please enter a 1st integer : "; cin >> num;
	cout << "Please enter a 2nd integer : "; cin >> num2;
	cout << endl;
	cout << "The entered 1st integer is : " << num  << endl;
	cout << "The entered 2nd integer is : " << num2 << endl;
	cout << endl;
	cout << "The sum of the two integer is           : " << (num + num2)			     << endl;
	cout << "The product of the two integer is       : " << (num * num2)			     << endl;
	cout << "The whole numer quotient 1st/2nd is     : " << (num / num2)				 << endl; 
    cout << "The remainder of 1st/2nd is             : " << (num % num2)				 << endl;
	cout << "The float result of 1st/2nd is          : " << ((float)num / (float)num2)   << endl;
	cout << "The 1st to the power of the 2nd is      : " << (pow(num,num2))		     	 << endl;
	cout << endl << endl;

	cout << "Please enter the 1st real number :"; cin >> num3; 
	cout << "Please enter the 2nd real number :"; cin >> num4;
	cout << endl;

	cout << "The entered 1st real number is :" << num3 << endl;
	cout << "The entered 2nd real number is :" << num4 << endl;
	cout << endl;

	cout << "The sum of the two real number is           :" << (num3 + num4)	  << endl;
	cout << "The product of the two real number is       :" << (num3 * num4)	  << endl;
	cout << "The quotient of the two real number is      :" << (num3 / num4)      << endl;
	cout << "The whole number part of 1st real number is :" << (int(num3))		  << endl;
	cout << "The whole number part of 2nd real number is :" << (int(num4))		  << endl;
	cout << "The fractional part of the 1st number is    :" << (num3 - int(num3)) << endl; 
	cout << "The fractional part of the 2nd number is    :" << (num4 - int(num4)) << endl;
	cout << endl << endl; 
	
 
	//part 9 conver int to float and vise versa 
	cout << "Please enter an Integer to convert to a float :"; cin >> num;
	cout << "The integer as a float is                     :" << showpoint << float(num) << endl; 
	cout << endl;

	cout << "Please enter an Float to convert to a integer :"; cin >> num3;
	cout << "The float as a integer is                     :" << int(num3) << endl; 
	cout << endl << endl; 


	//part 10 words and combine words 
	cout << "please enter 1st string :"; cin >> word1;
	cout << endl;
	cout << "The 1st strinbg is                 :" << word1                << endl << endl;
	cout << "The length of this string is       :" << word1.length()			   << endl; 
	cout << "The first letter of this string is :" << word1.at(0)				   << endl;
	cout << "The last letter of this string is  :" << word1.at(word1.length() - 1) << endl;
	cout << endl << endl; 

	cout << "Please enter 2nd string :"; cin >> word2;
	cout << endl;
	cout << "The first string concatendated with the 2nd string                         :" << word1 + word2         << endl; 
	cout << "The first string concatendated with the 2nd string with a space in between :" << word1 << " " << word2 << endl;
	cout << endl << endl;


	system("pause");
	cout << endl << endl;


	return 0;
}




























/* (too ahead of the class so I couldn't use it) 
int conversionOctal(int num)
{
	int octal, remainder, l;
	octal = 0;
	l = 1;
	while (num != 0)
	{
		remainder = num % 8; //get the remainder of user input.
		num = num / 8; //input divide by 8.
		octal += remainder * l;//remainder is multplied by the place vaule. 
		l = l * 10;//change the place value.
	}
	return octal;
}*/





