//5번 문제
#include <stdio.h>

int main() {
    int sum = 0;
    int cnt = 0;
    int maxCells = 361; // 바둑판의 최대 셀 개수
    int i = 1;
    int ii;
    int j;

    while (cnt < maxCells)
    {
        ii = i;

        if (ii / 500 != 0)
        {
            int temp = ii / 500;
            for (j = 1; j <= temp && cnt < maxCells; j++) {
                cnt += 1;
                ii -= 500;
                sum += 500;
            }
        }

        if (ii / 100 != 0)
        {
            int temp = ii / 100;
            for (j = 1; j <= temp && cnt < maxCells; j++) {
                cnt += 1;
                ii -= 100;
                sum += 100;
            }
        }

        if (ii / 50 != 0)
        {
            int temp = ii / 50;
            for (j = 1; j <= temp && cnt < maxCells; j++) {
                cnt += 1;
                ii -= 50;
                sum += 50;
            }
        }

        if (ii / 10 != 0)
        {
            int temp = ii / 10;
            for (j = 1; j <= temp && cnt < maxCells; j++) {
                cnt += 1;
                ii -= 10;
                sum += 10;
            }
        }

        int temp = ii;
        for (j = 1; j <= temp && cnt < maxCells; j++)
        {
            cnt += 1;
            ii -= 1;
            sum += 1;
        }

        i = i * 2;
    }

    printf("sum : %d, cnt = %d", sum, cnt);

}
