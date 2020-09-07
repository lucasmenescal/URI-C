#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio, area, r= 3.14159;
    scanf("%lf", &raio);
    area=(raio*raio)*r;
    printf("A=%.4f\n", area);
    return 0;
}
