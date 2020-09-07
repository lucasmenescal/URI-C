#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome;
    double salary, vendas;
    scanf("%s %lf %lf", &nome, &salary, &vendas);
    printf("TOTAL = R$ %.2f\n", (salary+(vendas*0.15)));
}