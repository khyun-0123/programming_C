// ������ �⺻

//�߰� �̷�
//�����ʹ� ������ 4byte (int, char, long ����)

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
//	int* pt[5] = { 4, 5, 7, 10, 3 };	//4�� �ּҰ�, 5�� �ּҰ�..
//	char* ppt[5] = { "str", "abc", "c", "d", "e" };		//str�� �ּҰ�, abc�� �ּҰ�..
//
//}

//#include <stdio.h>
//#include <stdlib.h>
//void main()
//{
//	char* p; //char Ÿ�� ������ ���� ����
//	int size; //���� ���� ���� ����
//
//	printf("�Է��� ������ ����(bytes)�� �Է��ϰ� Enter :");
//	scanf_s("%s", p);
//	p = (char*)malloc(size + 1); //size byte ��ŭ�� �޸� �Ҵ�
//
//	printf("%d ���� ���ڿ��� ������� �Է��ϰ� Enter :", size);
//	scanf_s("%s", p);
//	printf("%�Էµ� ���ڿ� : s\n", p);
//	free(p); //�������� �Ҵ�� �޸� ����
//}


//========================================================

//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//#include <stdlib.h>
//
//void main()
//{
//    char* p;        /* char Ÿ�� ������ ���� ���� */
//    int size;         /* ���� ���� ���� ���� */
//
//    printf("�Է��� ������ ����(bytes)�� �Է��ϰ� Enter :");
//    scanf("%d", &size);
//    p = (char*)malloc(size + 1);   /* size byte ��ŭ�� �޸� �Ҵ� */
//
//    printf("%d ���� ���ڿ��� ������� �Է��ϰ� Enter :", size);
//    scanf("%s", p);
//    printf("�Էµ� ���ڿ� : %s\n", p);
//    free(p);               /* �������� �Ҵ�� �޸� ���� */
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
//	printf("�̸� => ");
//	scanf("%s", p.name);
//	printf("�й� => ");
//	scanf("%d", &p.hak);
//	printf("��ȭ��ȣ => ");
//	scanf("%s", p.phone);
// 
//	printf("�̸� : %s\n", p.name);
//	printf("�й� : %d\n", p.hak);
//	printf("��ȭ��ȣ : %s\n", p.phone);
//}

//#include <stdio.h>
//void main()
//{
//	char c;
//
//	printf("���� �ϳ��� �Է����ּ���\n");
//	c = getch();
//	printf("�Է� �Ϸ�\n");
//	putch(c);
//	printf("\n");
//}

////==========================
////����ü
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
//    // ���� ������ �ʱ�ȭ
//    list[0].kor = 90;
//    list[0].eng = 80;
//    list[0].mat = 70;
//    list[0].tot = list[0].kor + list[0].eng + list[0].mat;
//    list[0].avg = list[0].tot / 3;
//
//    // ���� �� ���
//    printf("Kor: %d\n", p->kor);
//    printf("Eng: %d\n", p->eng);
//    printf("Mat: %d\n", p->mat);
//    printf("Tot: %d\n", p->tot);
//    printf("Avg: %d\n", p->avg);
//}

