// 3¹ø ¹®Á¦
// 1+1+2+1+2+3+1+2+3+4+...+1+2+3+4+5+6+7+8+9+10

#include <stdio.h>
void main()
{
	int i, j, sum;

	sum = 0;

	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d", j);
			sum += j;

			if (j == 10)
				break;

			printf("+");
		}
	}
	printf(" = %d", sum);
}