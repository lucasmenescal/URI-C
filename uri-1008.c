#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horast, number;
    double valorph;
    scanf("%d", &number);
    scanf("%d", &horast);
    scanf("%lf", &valorph);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", valorph*horast);
}