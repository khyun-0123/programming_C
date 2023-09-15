#include <stdio.h>
void main()
{
	int kor, eng, mat, sum;
	float ave;

	scanf_s("%d %d %d", &kor, &eng, &mat);

	sum = kor + eng + mat;
	ave = sum / 3.0;
	printf("국어 점수 = %d\n", kor);
	printf("영어 점수 = %d\n", eng);
	printf("수학 점수 = %d\n", mat);
	printf("%d\n", ave);

	return 0;
}
