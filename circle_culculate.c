#include <stdio.h>
void main()
{
	#define PI 3.14;
	int ban;
	float dul, nurb;
	printf("반지름을 입력해 주세요.");
	scanf_s("%d", &ban);
	dul = ban * 2 * PI;
	nurb = ban * ban * PI;
	printf("둘레는 : %f, 넓이는 : %f", dul, nurb);

}
