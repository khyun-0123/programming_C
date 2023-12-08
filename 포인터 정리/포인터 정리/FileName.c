// 포인터 기본

//추가 이론
//포인터는 무조건 4byte (int, char, long 무관)

//#include <stdio.h>
//void main()
//{
//	int a = 4;
//	int *pt;
//	pt = &a;
//
//	printf("a = %d\n", *pt);
//
//	int **ppt;
//	ppt = &pt;
//
//	printf("a = %d\n", *ppt);
//	printf("a = %d\n", **ppt);
//}

//#include <stdio.h>
//void main()
//{
//	int* p;
//	p = 10;
//
//	printf("p = %d", p);
//}

//#include <stdio.h>
//void main()
//{
//	int* pt[5] = { 4, 5, 7, 10, 3 };	//4의 주소값, 5의 주소값..
//	char* ppt[5] = { "str", "abc", "c", "d", "e" };		//str의 주소값, abc의 주소값..
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	char* p; //char 타입 포인터 변수 선언
//	int size; //문자 길이 변수 선언
//
//	printf("입력할 문자의 길이(bytes)를 입력하고 Enter :");
//	scanf_s("%s", p);
//	p = (char*)malloc(size + 1); //size byte 만큼의 메모리 할당
//
//	printf("%d 개의 문자열을 공백없이 입력하고 Enter :", size);
//	scanf_s("%s", p);
//	printf("%입력된 문자열 : s\n", p);
//	free(p); //동적으로 할당된 메모리 해제
//}


//========================================================

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//    char* p;        /* char 타입 포인터 변수 선언 */
//    int size;         /* 문자 길이 변수 선언 */
//
//    printf("입력할 문자의 길이(bytes)를 입력하고 Enter :");
//    scanf("%d", &size);
//    p = (char*)malloc(size + 1);   /* size byte 만큼의 메모리 할당 */
//
//    printf("%d 개의 문자열을 공백없이 입력하고 Enter :", size);
//    scanf("%s", p);
//    printf("입력된 문자열 : %s\n", p);
//    free(p);               /* 동적으로 할당된 메모리 해제 */
//}

//===========================================================

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct person
//{
//	char* name;
//	int hak;
//	char* phone;
//};
//
//void main()
//{
//	struct person p;
//	p.name = (char*)malloc(sizeof(char) * 20);
//	p.hak = (int*)malloc(sizeof(int) * 10);
//	p.phone = (char*)malloc(sizeof(char) * 14);
//	printf("이름 => ");
//	scanf("%s", p.name);
//	printf("학번 => ");
//	scanf("%d", &p.hak);
//	printf("전화번호 => ");
//	scanf("%s", p.phone);
// 
//	printf("이름 : %s\n", p.name);
//	printf("학번 : %d\n", p.hak);
//	printf("전화번호 : %s\n", p.phone);
//}

//#include <stdio.h>
//void main()
//{
//	char c;
//
//	printf("문자 하나를 입력해주세요\n");
//	c = getch();
//	printf("입력 완료\n");
//	putch(c);
//	printf("\n");
//}

////==========================
////구조체
//#include <stdio.h>
//
//struct LIST
//{
//	char name[10];
//	int kor;
//	int eng;
//	int mat;
//	int tot;
//	int avg;
//};
//
//void main()
//{
//	struct LIST list[3];
//	struct LIST	*p;
//	p = list;
//
//    // 예시 값으로 초기화
//    list[0].kor = 90;
//    list[0].eng = 80;
//    list[0].mat = 70;
//    list[0].tot = list[0].kor + list[0].eng + list[0].mat;
//    list[0].avg = list[0].tot / 3;
//
//    // 예시 값 출력
//    printf("Kor: %d\n", p->kor);
//    printf("Eng: %d\n", p->eng);
//    printf("Mat: %d\n", p->mat);
//    printf("Tot: %d\n", p->tot);
//    printf("Avg: %d\n", p->avg);
//}

