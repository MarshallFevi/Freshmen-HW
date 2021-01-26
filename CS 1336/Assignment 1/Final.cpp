/*
Module Name: Hello World Diamond
Date Written: 8/27/2020 - Date Finish: 8/30/2020
Author: 
Module Design Description:
	Create a diamond with the text" Hello Comet" in the middle.
Inputs:
	Height of the first half(middle to top) of the diamond.
Outputs:
	Diamond with the height of ((user input*2)-1) and "Hello Comet" in the middle.
Modification List:
8/27/2020		Finished Coding the diamond.		
8/28/2020		Start Working on printing "Hello Comet".		
8/28/2020		Fixed bug where "Hello Comet" would print on the first row of the diamond more than once.		
8/30/2020		Fixed all bugs, code works as intended.			
*/
#include<string>
#include<iostream>
using namespace std;

int main()
{
	int height; //height of the diamond from the midpoint to the top. Also the location of the starting star
	int length; //length of each row on the diamond
	string diamond = ""; //text for the diamond
	int m = -1; //sapce between the first star and the second star.
	cout << "Height of the first half of the diamond (number greater than 7):"; cin >> height; //ask for the (height/2) of the diamond. 
	length = height * 2 - 1;
	cout << endl << endl << endl;
	cout << "Temoc, Enrac and Scorcher say:" << endl << endl;
	int sw; //change to 1 when building the bottom half. 
	sw = 0;

	for (int i = height; ((i >= 1) & (sw == 0)) || ((i <= height) & (sw == 1)); )  //for loop for building multiple rows 
	{
		for (int b = 1; b <= length; b++) //for loop for building each line/row
		{
			if (b < i) 
			{
				diamond += " ";
			}
			else if (b == i) //first star
			{
				diamond += "*";
			}
			else if ((b < i + abs(m)) & (m > 0) & (i != 1))//space between stars. 
			{
				diamond += " ";
			}
			else if ((b == (height - 5)) & (m>0) & (i == 1)) //middle row display Hello Comet
			{
				diamond += "Hello Comet";
				b += 10;
			}
			else if ((b == i + abs(m) + 1) & (m > 0)) //second star
			{
				diamond += "*";
			}
			else if (b <= length)//space after second star.
			{
				diamond += " ";
			}
		}
		diamond += "\n";
		if (sw == 0) //if statement to bifurcate building top/bottom half of the diamond
		{
			m += 2;
			i--;
		}
		else if (sw == 1)
		{
			m -= 2;
			i++;
		}
		if ((i == 1) & (sw == 0)) //flipping the switch
		{
			sw = 1;
		}
	}
		
	cout << diamond << endl; 
}





