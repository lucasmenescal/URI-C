#include <stdio.h>
#include <stdlib.h>

int main(){
    double n;

    scanf("%lf", &n);

    if (n >= 0 && n <= 25.0000){
        printf("Intervalo [0,25]\n");

    }
    if (n >= 25.00001 && n <= 50.0000000){
        printf("Intervalo (25,50]\n");

    }
    if (n >= 50.00001 && n <= 75.0000000){
        printf("Intervalo (25,50]\n");

    }
    if (n >= 75.00001 && n <= 100.0000000){
        printf("Intervalo (75,100]\n");

    }
    if (n <0 || n > 100){
        printf("Fora de intervalo\n");

    }
    return 0;
}