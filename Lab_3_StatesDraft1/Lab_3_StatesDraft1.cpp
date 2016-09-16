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
	
	//Input and Output
	printf("Choose a value from 1-50, this value corresponds with one of the 50 States alphabetically.>\n");
	scanf("%d", &iNumber);
	
	switch ((int)(iNumber)) {
	case 1 : printf("Alabama");
		break;
	case 2 : printf("Alaska");
		break;
	case 3 : printf("Arizona");
		break;
	case 4 : printf("Arkansas");
		break;
	case 5 : printf("California");
		break;
	case 6: printf("Colorado");
		break;
	case 7: printf("Connecticut");
		break;
	case 8: printf("Delaware");
		break;
	case 9: printf("Florida");
		break;
	case 10: printf("Georgia");
		break;
	case 11: printf("Hawaii");
		break;
	case 12 : printf("Idaho");
		break;
	case 13 : printf("Illinois");
		break;
	case 14 : printf("Indiana");
		break;
	case 15 : printf("Iowa");
		break;
	case 16 : printf("Kansas");
		break;
	case 17 : printf("Kentucky");
		break;
	case 18 : printf("Louisiana");
		break;
	case 19 : printf("Maine");
		break;
	case 20 : printf("Maryland");
		break;
	case 21 : printf("Massachusetts");
		break;
	case 22 : printf("Michigan");
		break;
	case 23 : printf("Minnesota");
		break;
	case 24 : printf("Mississippi");
		break;
	case 25 : printf("Missouri");
		break;
	case 26 : printf("Montana");
		break;
	case 27 : printf("Nebraska");
		break;
	case 28: printf("Nevada");
		break;
	case 29 : printf("New Hampshire");
		break;
	case 30 : printf("New Jersey");
		break;
	case 31 : printf("New Mexico");
		break;
	case 32 : printf("New York");
		break;
	case 33 : printf("North Carolina");
		break;
	case 34 : printf("North Dakota");
		break;
	case 35 : printf("Ohio");
		break;
	case 36 : printf("Oklahoma");
		break;
	case 37 : printf("Oregon");
		break;
	case 38 : printf("Pennsylvania");
		break;
	case 39 : printf("Rhode Island");
		break;
	case 40 : printf("South Carolina");
		break;
	case 41 : printf("South Dakota");
		break;
	case 42 : printf("Tennessee");
		break;
	case 43 : printf("Texas");
		break;
	case 44 : printf("Utah");
		break;
	case 45 : printf("Vermont");
		break;
	case 46 : printf("Virginia");
		break;
	case 47 : printf("Washington");
		break;
	case 48 : printf("West Virginia");
		break;
	case 49 : printf("Wisconsin");
		break;
	case 50 : printf("Wyoming"); 
		break;
	default: printf("Invalid value");
	}
		
	return 0;
}

