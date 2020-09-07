#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, velocidade;
    scanf("%d %d", &tempo, &velocidade);
    printf("%.3f\n",((((double)tempo)*((double)velocidade))/12));
}
