#include <stdio.h>
#include <stdlib.h>

int main()
{
    double MEDIA, A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA=((A*2)+(B*3)+(C*5))/10;
    printf("MEDIA = %.1f\n", MEDIA);
}