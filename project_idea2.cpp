// project_idea2.cpp : Defines the entry point for the console application.
//
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	
	int scanNum, i, tries, correctNum, choice;
	tries = 5;
	

	
	correctNum = 5;


	printf("Guess the number game\n"); //Header

	
	printf("Enter a number inbetween 1 and 10");
	printf("\t| Note: You only have 5 tries |\n");
	scanf("%d" , &scanNum);

	for (i = 1; i <= tries; i++)
	{
		tries--;
		printf("Enter a number inbetween 1 and 10");
		printf("\t| Note: You only have %d tries |\n" , tries);
		scanf("%d" , &scanNum);
		

		if (scanNum == correctNum)
		{
			printf("Correct number!");
			printf("Would you like to continue? | 1-yes | 2-no |\n");
			scanf("%d" , &choice);

			if (choice == 1)
			{
				
				
			}
			else if (choice == 2)
			{
				break;
			}
		

		}
		else 
		{
			i = 1;
			continue;
		}
	}	

	printf("End of the game: ");
	return 0;
}

