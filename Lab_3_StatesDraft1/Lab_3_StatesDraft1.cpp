// Lab_3_StatesDraft1.cpp : Defines the entry point for the console application.
//Author: Jamil Saliiba
//Date: 9/15/16
//Description: Console Application that displays a State when entering a value between 1-50. Each input corresponds to one state in alphabetical order from 1-50.

//Write a program where the user will enter a number between 1 and 50 representing a state. The program should display the full name of that state.
//Assume the states are in alphabetical order, that is 1 = "Alaska", 2 = "Alabama", etc.
//If an invalid state is entered, then an error message should be displayed.

#include "stdafx.h"


int main()
{
	//Variable Declaration
	int iNumber;
	char iState;
		switch ((int)(iNumber)) {
	case 1:
		iState = "Alaska";
		break;
	case 2:
		iState = "Arizona";
		break;
	default:
		iState = "Invalid value";
	}
	
	//Input
	printf("Enter a value from 1-50>\n");
	scanf("%d", &iState);

	
	return 0;
}

