#define _CRT_SECURE_NO_WARNINGS 1
//ӡ�á�* ����ɵġ����ġ�������ͼ����
#include <stdio.h>

int main()
{
    int a, i, j, b;
    while (scanf("%d", &a) != EOF)
    {
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < a; j++)
            {
                if (j == 0 || j == i || i == a - 1)
                {
                    printf("* ");
                }
                else {
                    printf("  ");
                }


            }

            printf("\n");
        }
    }
    return 0;
}