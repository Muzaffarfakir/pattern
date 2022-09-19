#include <stdio.h>
#include <conio.h>
int square()
{
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("-*");
        }
        printf("\n");
    }
}
int traingle()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int traingleLeft()
{
    int i, j, k;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
        for (k = 1; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int rectangle()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("-");
        }
        printf("\n");
    }
}
int main()
{
    for (int i = 0; i < 50; i++)
    {
        int a;
        int index1 = 1;
        int index2 = 2;
        printf("pattern (1) for Square (2) for traingle (3) for rectangle  ");
        scanf("%d ", &a);
        if (a == index1)
        {
            square();
        }
        if (a == index2)
        {
            traingle();
        }
        if (a == 3)
        {
            rectangle();
        }
        if (a == 4)
        {
            traingleLeft();
        }
    }
}
