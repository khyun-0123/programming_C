//달력
//연습문제 3, 5, 6

#include <stdio.h>
void main()
{
	int i, j, l, place, space, t;

	place = 0;
	
	printf(" _____________\n");
	printf("|             |\n");
	printf("| 2023년 달력 |\n");
	printf("|_____________|\n\n");
	
	for (i = 1; i <= 12; i++)
	{

		printf("_____%02d월_____\n", i);
		printf("일월화수목금토\n");

		space = place % 7;

		for (t = 1; t <= space; t++)
			printf("  ");

		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) // 31일로 끝나는 경우
		{
			for (j = 1; j <= 31; j++)
			{
				printf("%2d", j);
				place += 1;
				if (place % 7 == 0)
					printf("\n");
			}
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) // 30일로 끝나는 경우
		{
			for (j = 1; j <= 30; j++)
			{
				printf("%2d", j);
				place += 1;
				if (place % 7 == 0)
					printf("\n");
			}
		}

		else if (i == 2) //28일로 끝나는 경우
		{
			for (j = 1; j <= 28; j++)
			{
				printf("%2d", j);
				place += 1;
				if (place % 7 == 0)
					printf("\n");
			}
		}
		printf("\n\n");
	}
}