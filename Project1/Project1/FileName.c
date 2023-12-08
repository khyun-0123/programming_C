#include <stdio.h>
#include <Windows.h>

void word_print(char word[40][40])
{
	for (int i = 0; i < 40; i++)
	{
		if (word[i][0] == '\0')
			break;
		printf("%s | %s", word[i], word[i + 1]);
		i++;
		printf("\n");
	}
}

void word_add(char word[40][40])
{
	char add_word[40] = { " " };
	char mean[40] = { " " };

	printf("�߰��� �ܾ �Է����ּ���.(���)\n-> ");
	scanf_s("%s", add_word, 40);

	printf("���� �Է����ּ���.\n-> ");
	scanf_s("%s", mean, 40);

	for (int i = 0; i < 40; i++)
	{
		if (word[i][0] == '\0')
		{
			for (int j = 0; j < 40; j++)
			{
				if (add_word[j] == '\0' && mean[j] == '\0')
				{
					break;
				}

				word[i][j] = add_word[j];
				word[i+1][j] = mean[j];
			}
			break;
		}
	}
}

void word_edit(char word[40][40])
{
	int cnt = 0;

	char find_word[40] = { ' ' };
	char edit_word[40] = { ' ' };

	printf("������ �ܾ �Է����ּ���.\n-> ");
	scanf_s("%s", find_word, 40);
	printf("===========================================================\n");

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (find_word[j] == word[i][j])
			{
				if (find_word[j] == '\0')
				{
					printf("%s | %s\n", word[i], word[i + 1]);
					printf("===========================================================\n");
					printf("������ �ѱ��� �Է����ּ���.\n-> ");
					scanf_s("%s", edit_word, 40);

					for (int t = 0; t < 40; t++)
					{
						if (edit_word[t] == '\0' && word[i + 1][t])
							break;
						word[i + 1][t] = edit_word[t];
					}
					cnt = 1;

					break;
					break;
				}
			}

			else
			{
				break;
			}
		}
	}

	if (cnt == 1)
		printf("�����Ǿ����ϴ�.\n");
	else if (cnt == 0)
		printf("�������� �ʴ� �ܾ��Դϴ�.\n");
}

void word_find(char word[40][40])
{
	char find_word[40] = { ' ' };
	printf("ã�� �ܾ �Է����ּ���\n-> ");
	scanf_s("%s", find_word, 40);

	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (find_word[j] == word[i][j])
			{
				if (find_word[j] == '\0')
				{
					printf("%s | %s\n", word[i], word[i + 1]);
					break;
					break;
				}
			}

			else
				break;
		}
	}
}

void win_clr()
{
	system("cls");
}


void main()
{
	int i;
	char word[40][40] = {
		"flower", "��",
		"apple", "���",
		"english", "����",
		"music", "����",
		"korean", "����",
		"history", "����",
		"math", "����",
		"tree", "����",
		"desk", "å��",
		"bug", "����",
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
		'\0', '\0',
	};

	while (1)
	{
		printf("===========================================================\n");
		printf("1.��� 2.�ܾ��߰� 3.�ܾ���� 4.�ܾ�˻� 5.ȭ������� 6.���� \n-> ");
		scanf_s("%d", &i);

		if (i == 1)
		{
			printf("===========================================================\n");
			word_print(word); //���
		}

		else if (i == 2)
		{
			printf("===========================================================\n");
			word_add(word); //�ܾ��߰�
		}

		else if (i == 3)
		{
			printf("===========================================================\n");
			word_edit(word); //�ܾ����
		}

		else if (i == 4)
		{
			printf("===========================================================\n");
			word_find(word); //�ܾ�˻�
		}

		else if (i == 5)
		{
			printf("===========================================================\n");
			win_clr(word); //ȭ�������
		}

		else if (i == 6)
		{
			break;
		}

		else
		{
			printf("===========================================================\n");
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n\n");
			break;
		}
	}
}