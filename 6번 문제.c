//6�� ����
#include <stdio.h>
void main()
{
	int i, dan, sum;
	printf("�� ���� ����Ͻðڽ��ϱ�? : ");
	scanf_s("%d", &dan);

	printf("\n\n----%d��----\n\n", dan);

	for (i = 1; i <= 9; i++)
	{
		sum = dan * i;
		printf("%d X %d = %d\n", dan, i, sum);
	}
}