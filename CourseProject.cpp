#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <conio.h>


int aG, bG, cG, sumG; // global variables



int _tmain(int argc, _TCHAR* argv[])
{
	
	printf("Warning!\nThe calculator works only with integers!\n");
	printf("Enter all 3 competitors times: \n");
	scanf("%d" , &aG);
	scanf("%d" , &bG);
	scanf("%d" , &cG);

	sumG = aG + bG + cG;

	system("cls"); // clears the entered information


	// less or equal to a min
	if (sumG < 60)
	{
		printf("0:%d\n" , sumG);
	}
	else if (sumG == 60)
	{
		printf("1:00\n");
	}


	// less than 2 min
	else if (sumG < 120)
	{
		printf("1:%d\n" , (sumG - 60));
	}
	else if (sumG == 120)
	{
		printf("2:00\n");
	}

	// less than 3 min
	else if (sumG < 180)
	{
		printf("2:%\n" , (sumG - 120));
	}
	else if (sumG == 180)
	{
		printf("3:00\n");
	}
	else 
	{
		// Max seconds per competitor

		printf("Maximal time per competitor is 60 seconds\n");
	}


	return 0;
}

