//6번 문제
#include <stdio.h>
void main()
{
	int i, dan, sum;
	printf("몇 단을 출력하시겠습니까? : ");
	scanf_s("%d", &dan);

	printf("\n\n----%d단----\n\n", dan);

	for (i = 1; i <= 9; i++)
	{
		sum = dan * i;
		printf("%d X %d = %d\n", dan, i, sum);
	}
}