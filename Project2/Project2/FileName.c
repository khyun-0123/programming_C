//#include <stdio.h>
//
//struct LIST
//{
//	char name[20];
//	float height;
//	float weight;
//};
//
//void main() {
//	struct LIST list[3];
//	struct LIST* p;
//	p = list;
//	
//	list[0].height = 0;
//	list[0].weight = 0;
//
//	scanf_s("%s", list[0].name, 20);
//	scanf_s("%f", &list[0].height);
//	scanf_s("%f", &list[0].weight);
//
//	printf("====================\n");
//	printf("�̸� : %s\n", p->name);
//	printf("Ű : %.2f\n", p->height);
//	printf("������ : %.2f\n", p->weight);
//	printf("BMI : %.2f\n", (p->weight) / ((p->height / 100.0) * (p->height / 100.0)));
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//struct MY
//{
//	char* name;
//	float h, w, bmi;
//};
//
//void main()
//{
//	struct MY my;
//	my.name = (char*)malloc(20);
//
//	printf("�Է�\n");
//	scanf_s("%s %f %f", my.name, 20, &my.h, &my.w);
//	my.bmi = (my.w / (my.h * my.h)*100);
//
//	printf("%f", my.bmi);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct MY
//{
//	char* name;
//	float h, w, bmi;
//};
//
//void main()
//{
//	struct MY my[5];
//
//	for (int i = 0; i < 5; i++)
//	{
//		my[i].name = (char*)malloc(20);
//
//		printf("�Է�\n");
//
//		scanf_s("%s %f %f", my[i].name, 20, &my[i].h, &my[i].w);
//		my[i].bmi = (my[i].w / (my[i].h * my[i].h) * 100);
//	}
//
//	for (int j = 0; j < 5; j++)
//	{
//		printf("%f\n", my[j].bmi);
//	}
//
//}

//#include <stdio.h>
//struct student {
//	int no;
//	char name[20];
//	float score;
//	int rank;
//};
//
//void main()
//{
//	struct student s[4] = {
//		{200312001, "����  ", 90.2, 3},
//		{200312003, "�ڳ���", 80.8, 2},
//		{200312005, "�ֺҾ�", 85.5, 4},
//		{200312008, "����", 91.9, 1}
//	};
//
//	printf("\n �й�    �̸�    ����    ����");
//	printf("\n================================");
//	for (int i = 0; i < 4; i++)
//		printf("\n%d  %s  %f  %d", s[i].no, s[i].name, s[i].score, s[i].rank);
//}

//#include <string.h>
//#include <stdio.h>
//struct student {
//	int no;
//	char name[20];
//	float score;
//	int rank;
//};
//
//void main()
//{
//	struct student s;
//	s.no = 200312001;
//	strcpy_s(s.name, 20, "�ڳ���");
//	s.score = 85.5;
//	s.rank = 1;
//
//	printf("�й� : %d");
//}


//#include <string.h>
//#include <stdio.h>
//struct student {
//	int no;
//	char name[20];
//	float score;
//	int rank;
//};
//
//void main()
//{
//	struct student s;
//	struct student* sp = &s;
//
//	sp->no = 200312001;
//	strcpy_s((*sp).name, 20, "����");
//	sp->score = 85.5;
//	sp->rank = 1;
//
//	printf("�й� : %d\n", sp->no);
//	printf("�̸� : %s\n", sp-> name);
//	printf("���� : %f\n", sp->score);
//	printf("���� : %d\n", sp->rank);
//	printf("\n");
//}

//#include <stdio.h>
//#include <string.h>
//
//struct LIST {
//	char name[20];
//	int kor;
//	int eng;
//	int math;
//	int total;
//	int avg;
//};
//
//void main()
//{
//	struct LIST list[5];
//	struct LIST* p;
//	p = list;
//
//	for (int i = 0; i < 5; i++)
//	{
//		list[i].kor = 0;
//		list[i].eng = 0;
//		list[i].math = 0;
//		list[i].total = 0;
//		list[i].avg = 0;
//	}
//
//	for (int j = 0; j < 5; j++)
//	{
//		scanf_s("%s", list[j].name, 20);
//		scanf_s("%d", &list[j].kor);
//		scanf_s("%d", &list[j].eng);
//		scanf_s("%d", &list[j].math);
//		list[j].total = list[j].kor + list[j].eng + list[j].math;
//		list[j].avg = list[j].total/3;
//	}
//
//	for (int t = 0; t < 5; t++)
//	{
//		printf("�̸� : %s\t", p->name);
//		printf("���� : %d\t", p->kor);
//		printf("���� : %d\t", p->eng);
//		printf("���� : %d\t", p->math);
//		printf("���� : %d\t", p->total);
//		printf("��� : %d\n\n", p->avg);
//		
//		p++;
//	}
//}

//#include <stdio.h>
//#include <string.h>
//
//struct LIST {
//	char name[20];
//	int kor;
//	int eng;
//	int math;
//	int total;
//	int avg;
//};
//
//void ipryuk(struct LIST* p) {
//	for (int j = 0; j < 5; j++)
//	{
//		scanf_s("%s", p[j].name, 20);
//		scanf_s("%d", &p[j].kor);
//		scanf_s("%d", &p[j].eng);
//		scanf_s("%d", &p[j].math);
//		p[j].total = p[j].kor + p[j].eng + p[j].math;
//		p[j].avg = p[j].total / 3;
//	}
//}
//
//void chullyuk(struct LIST* p) {
//	for (int t = 0; t < 5; t++)
//	{
//		printf("�̸� : %s\t", p->name);
//		printf("���� : %d\t", p->kor);
//		printf("���� : %d\t", p->eng);
//		printf("���� : %d\t", p->math);
//		printf("���� : %d\t", p->total);
//		printf("��� : %d\n\n", p->avg);
//
//		p++;
//	}
//}
//
//void main()
//{
//	struct LIST list[5];
//	struct LIST* p;
//	p = list;
//
//	for (int i = 0; i < 5; i++)
//	{
//		list[i].kor = 0;
//		list[i].eng = 0;
//		list[i].math = 0;
//		list[i].total = 0;
//		list[i].avg = 0;
//	}
//
//	ipryuk(list);
//	chullyuk(list);
//}

//#include <stdio.h>
//
//struct LIST
//{
//	char name[20];
//	int kor;
//	int math;
//};
//
//void main()
//{
//	struct LIST list[5];
//	char temp_name[20];
//
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%s", list[i].name, 20);
//		scanf_s("%d", &list[i].kor);
//		scanf_s("%d", &list[i].math);
//	}
//
//	for (int j = 0; j<5; j++)
//		printf("�̸�: %s, ����: %d, ����: %d\n", list[j].name, list[j].kor, list[j].math);
//}

//#include <stdio.h>
//
//struct LIST
//{
//	char name[20];
//	int kor;
//	int eng;
//	int math;
//	int sum;
//	int avg;
//};
//
//void ipryuk(struct LIST list[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%s", list[i].name, 20);
//		scanf_s("%d", &list[i].kor);
//		scanf_s("%d", &list[i].eng);
//		scanf_s("%d", &list[i].math);
//	}
//}
//
//void chullyuk(struct LIST *list)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		//printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d, ���: %d\n", list[j].name, list[j].kor, list[j].eng, list[j].math, list[j].sum, list[j].avg);
//		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d, ���: %d\n", list->name, list->kor, list->eng, list->math, list->sum, list->avg);
//		list++;
//	}
//}
//
//void cal(struct LIST list[5]) //struct LIST�� list[5]�� Ÿ��, *list �ص� �ǰ�, list[5]�ص� ��
//{
//	for (int i = 0; i < 5; i++)
//	{
//		list[i].sum = list[i].kor + list[i].eng + list[i].math;
//		list[i].avg = list[i].sum / 3;
//	}
//}
//
//void main()
//{
//	struct LIST list[5];
//
//	ipryuk(&list[0]);
//	cal(&list[0]); //&list[0]�ص� �ǰ�, list�ص� ��
//	chullyuk(list);
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct LIST
//{
//	char *name;
//	int kor;
//	int eng;
//	int math;
//	int sum;
//	int avg;
//};
//
//void ipryuk(struct LIST list[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		scanf_s("%s", list[i].name, 20);
//		scanf_s("%d", &list[i].kor);
//		scanf_s("%d", &list[i].eng);
//		scanf_s("%d", &list[i].math);
//	}
//}
//
//void chullyuk(struct LIST* list)
//{
//	for (int j = 0; j < 5; j++)
//	{
//		//printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d, ���: %d\n", list[j].name, list[j].kor, list[j].eng, list[j].math, list[j].sum, list[j].avg);
//		printf("�̸�: %s, ����: %d, ����: %d, ����: %d, ����: %d, ���: %d\n", list->name, list->kor, list->eng, list->math, list->sum, list->avg);
//		list++;
//	}
//}
//
//void cal(struct LIST list[5]) //struct LIST�� list[5]�� Ÿ��, *list �ص� �ǰ�, list[5]�ص� ��
//{
//	for (int i = 0; i < 5; i++)
//	{
//		list[i].sum = list[i].kor + list[i].eng + list[i].math;
//		list[i].avg = list[i].sum / 3;
//	}
//}
//
//void main()
//{
//	struct LIST list[5];
//
//	for (int i = 0; i < 5; i++)
//		list[i].name = (char*)malloc(20);
//
//	ipryuk(&list[0]);
//
//	for (int j = 0; j < 5; j++)
//		free(list[j].name);
//
//	cal(&list[0]); //&list[0]�ص� �ǰ�, list�ص� ��
//	chullyuk(list);
//}



//#include <stdio.h>
//
//struct student {
//	int no;
//	char name[20];
//	float score;
//	int rank;
//};
//
//void main()
//{
//	struct student s;
//	struct student* sp;
//	sp = &s;
//	sp->no = 200312001;
//	strcpy_s((*sp).name, 20, "����");
//	sp->score = 85.5;
//	sp->rank = 1;
//
//	printf("�й� : %d\n", sp->no);
//	printf("�̸� : %s\n", sp->name);
//	printf("���� : %f\n", sp->score);
//	printf("���� : %d\n", sp->rank);
//}



//#include <stdio.h>
//struct LIST {
//	char name[10];
//	int kor;
//	int eng;
//	int math;
//	int tot;
//	int avg;
//};
//
//void main()
//{
//	struct LIST list[3];
//	struct LIST* p;
//	p = list;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("�̸� ��, ��, �� ������� �Է��ϼ���\n");
//
//		scanf_s("%s", p->name, 10);
//		scanf_s("%d%d%d", &p->kor, &p->eng, &p->math);
//		p->tot = p->kor + p->eng + p->math;
//		p->avg = p->tot / 3;
//		p++;
//	}
//
//	printf("�̸�  ��  ��  ��  ����  ���\n");
//	printf("===============================\n");
//
//	p--; p--; p--;
//
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%-13s %5d %5d %5d %5d %5d\n", p->name, p->kor, p->eng, p->math, p->tot, p->avg);
// 
//		p++;
//	}
//}


#include <stdio.h>
#include <string.h>

struct LIST {
	char name[20];
	char num[20];
	char space[20];
	int money;
};

void chullyuk(struct LIST *list) //1�� ��� ��� ���
{
	for (int i = 0; i < 4; i++)
	{
		printf("%s\n", list[i].name);
	}
	printf("====================================\n");
}

void search(struct LIST *list) //2�� ��� ��� �˻�
{
	char search[20];
	int result;

	printf("�˻��� ����� �Է����ּ���\n-> ");
	scanf_s("%s", search, 20);
	printf("====================================\n");
	for (int i = 0; i < 4; i++)
	{
		result = strcmp(search, list[i].name);
		if (result == 0)
		{
			printf("| %s |", list[i].name);
			printf(" %s |", list[i].num);
			printf(" %s |", list[i].space);
			printf(" %d |\n", list[i].money);
			printf("====================================\n");
		}
	}
}

void space(struct LIST *list) //3�� ��� �μ��� ���
{
	char search[20];
	int result;

	printf("�˻��� �μ��� �Է����ּ���\n-> ");
	scanf_s("%s", search, 20);
	printf("====================================\n");
	for (int i = 0; i < 4; i++)
	{
		result = strcmp(search, list[i].space);
		if (result == 0)
		{
			printf("| %s |", list[i].name);
			printf(" %s |", list[i].num);
			printf(" %s |", list[i].space);
			printf(" %d |\n", list[i].money);
		}
	}
	printf("====================================\n");
}

void totalfee(struct LIST *list) //4�� ��� �ѱ޿�
{
	for (int i = 0; i < 4; i++)
	{
		printf("| %s |", list[i].name);
		printf(" %d |\n", list[i].money);
	}
	printf("====================================\n");
}

void main()
{
	struct LIST list[4] = {
	{"������", "010-0000-0000", "����1", 1000000},
	{"������", "010-1111-1111", "����1", 2000000},
	{"������", "010-2222-2222", "ȸ��1", 3000000},
	{"�̽���", "010-0000-0000", "ȸ��1", 4000000}
	};

	int select_num;

	while (1)
	{
		printf("������ ����� �������ּ���.\n");
		printf("------------------------------------");
		printf("\n1.������(���) \n2.��� �˻� \n3.�μ��� ��� \n4.�ѱ޿�\n");
		printf("====================================\n-> ");

		scanf_s("%d", &select_num);

		if (select_num == 1)
		{
			printf("====================================\n");
			chullyuk(list);
		}

		else if (select_num == 2)
		{
			printf("====================================\n");
			search(list);
		}

		else if (select_num == 3)
		{
			printf("====================================\n");
			space(list);
		}
		else if (select_num == 4)
		{
			printf("====================================\n");
			totalfee(list);
		}
		else
		{
			printf("====================================\n");
			printf("�߸� �Է��ϼ̽��ϴ�.");
		}
	}
}