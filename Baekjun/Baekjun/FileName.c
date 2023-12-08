#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//int main()
//{
//	int num, max=-1000000, min=1000000;
//	int list[1000000];
//
//	scanf("%d", &num);
//	
//	for (int i = 0; i < num; i++)
//		scanf("%d", &list[i]);
//
//	for (int j = 0; j < num; j++)
//	{
//		if (list[j] < min)
//			min = list[j];
//
//		if (list[j] > max)
//			max = list[j];
//	}
//
//	printf("%d %d", min, max);
//	
//	return 0;
//}



//#include <stdio.h>
//int main()
//{
//	int i, num[9], cnt, max=0;
//
//	for (i = 0; i < 9; i++)
//	{
//		scanf("%d", &num[i]);
//	}
//
//	for (i = 0; i < 9; i++)
//	{
//		if (max < num[i])
//		{
//			max = num[i];
//			cnt = i;
//		}
//	}
//
//	printf("%d\n", max);
//	printf("%d", cnt+1);
//
//
//	return 0;
//}


#include <stdio.h>
#include <stdlib.h>
int main()
{
	int cnt, * num, *num2, temp;

	scanf("%d", &cnt);

	num = (int*)malloc(cnt+10);
	num2 = (int*)malloc(cnt + 10);


	for (int i = 0; i < cnt; i++)
	{
		scanf("%d", &temp);
		num[i] = temp;
	}

	for (int i = 0; i < cnt; i++)
	{
		num2
	}


	return 0;
}