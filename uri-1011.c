#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R;
    scanf("%lf", &R);
    printf("VOLUME = %.3f\n", (4.0/3)*3.14159*(R*R*R));
}