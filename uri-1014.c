#include <stdio.h>
#include <stdlib.h>

int main()
{
    int distancia;
    double litros;

    scanf("%d %lf", &distancia, &litros);
    printf("%.3f km/l\n", distancia/litros);
}
