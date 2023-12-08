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

	printf("추가할 단어를 입력해주세요.(영어만)\n-> ");
	scanf_s("%s", add_word, 40);

	printf("뜻을 입력해주세요.\n-> ");
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

	printf("수정할 단어를 입력해주세요.\n-> ");
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
					printf("수정할 한글을 입력해주세요.\n-> ");
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
		printf("수정되었습니다.\n");
	else if (cnt == 0)
		printf("존재하지 않는 단어입니다.\n");
}

void word_find(char word[40][40])
{
	char find_word[40] = { ' ' };
	printf("찾을 단어를 입력해주세요\n-> ");
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
		"flower", "꽃",
		"apple", "사과",
		"english", "영어",
		"music", "음악",
		"korean", "국어",
		"history", "역사",
		"math", "수학",
		"tree", "나무",
		"desk", "책상",
		"bug", "벌레",
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
		printf("1.출력 2.단어추가 3.단어수정 4.단어검색 5.화면지우기 6.종료 \n-> ");
		scanf_s("%d", &i);

		if (i == 1)
		{
			printf("===========================================================\n");
			word_print(word); //출력
		}

		else if (i == 2)
		{
			printf("===========================================================\n");
			word_add(word); //단어추가
		}

		else if (i == 3)
		{
			printf("===========================================================\n");
			word_edit(word); //단어수정
		}

		else if (i == 4)
		{
			printf("===========================================================\n");
			word_find(word); //단어검색
		}

		else if (i == 5)
		{
			printf("===========================================================\n");
			win_clr(word); //화면지우기
		}

		else if (i == 6)
		{
			break;
		}

		else
		{
			printf("===========================================================\n");
			printf("잘못 입력하셨습니다. 다시 입력해주세요.\n\n");
			break;
		}
	}
}