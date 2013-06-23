/*
*Alfonso Vazquez
*Unix and C
*Input 10 grades (0 to 10 each) and output:
*Average
*High Grade
*Low Grade
*
*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
	//initialize the needed variables 
	//including an array of 9 to hold input
	float inputArray[9];
	float avSummation;
	float avAnswer;
	float highGrade;
	float lowGrade;
	int i; //i is to keep the for loop

	//assume that the low and high are the first variable
	highGrade = inputArray[0];
	lowGrade = inputArray[0];
	for(i = 0; i < 10; i ++)
	{
		printf("\nEnter the Number: ");
		//scan the user input 
		scanf ("%f", &inputArray[i]);
		//add all the numbers passed in by user
		avSummation = avSummation + inputArray[i];
		//case for high grade
		if(highGrade < inputArray[i])
		{
			highGrade = inputArray[i];
		}
		//case for low grade
		if(inputArray[i] <lowGrade)
		{
			lowGrade = inputArray[i];
		}
	}
	//calculate average in float notation
	avAnswer = avSummation / 10;
	//print answers.
	printf("%f is the average ||", avAnswer);
	printf("%f is the highGrade ||",highGrade);
	printf("%f is the lowGrade ||",lowGrade );
}

/**
*Input : 0-1-2-3-4-5-6-7-8-9
*Output
Enter the Number: 0

Enter the Number: 1

Enter the Number: 2

Enter the Number: 3

Enter the Number: 4

Enter the Number: 5

Enter the Number: 6

Enter the Number: 7

Enter the Number: 8

Enter the Number: 9
4.500000 is the average ||9.000000 is the highGrade 
||0.000000 is the lowGrade ||
*/