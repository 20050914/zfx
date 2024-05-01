#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int a, i, j;
    while (scanf("%d", &a) != EOF)
    {
        for (i = 0; i < a; i++)
        {
            if (i == 0 || i == a - 1)
            {
                for (j = 0; j < a; j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            else
            {
                for (j = 0; j < a; j++)
                {
                    if (j == 0 || j == a - 1)
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
    }
    return 0;
}
