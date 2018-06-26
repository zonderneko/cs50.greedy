#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a = 0;
    int err = 0, change = 0, buffer = 0, summ = 0;
    do
    {
        printf("How much change is owed?\n");
        err = scanf("%f", &a);
        fflush(stdin);
    }
    while (a <= 0 || err != 1);
    change = round(a * 100);
    while (change > 0)
    {
        buffer = change / 25;
        change = change % 25;
        summ = summ + buffer;
        buffer = change / 10;
        change = change % 10;
        summ = summ + buffer;
        buffer = change / 5;
        change = change % 5;
        summ = summ + buffer;
        buffer = change / 1;
        change = change % 1;
        summ = summ + buffer;
    }
    printf("%d\n", summ);
    return 0;
}
