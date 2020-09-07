#include <stdio.h>
#include <stdlib.h>

int main(){

    double valor;

    scanf("%lf", &valor);
    int teste;
    printf("NOTAS:\n");
    teste=(int)(valor/100);
    printf("%d nota(s) de R$ 100.00\n", teste);
    valor=(double)(valor-(teste*100));

    teste=(int)(valor/50);
    printf("%d nota(s) de R$ 50.00\n", teste);
    valor=(double)(valor-(teste*50));

    teste=(int)(valor/20);
    printf("%d nota(s) de R$ 20.00\n", teste);
    valor=(double)(valor-(teste*20));

    teste=(int)(valor/10);
    printf("%d nota(s) de R$ 10.00\n", teste);
    valor=(double)(valor-(teste*10));

    teste=(int)(valor/5);
    printf("%d nota(s) de R$ 5.00\n", teste);
    valor=(double)(valor-(teste*5));

    teste=(int)(valor/2);
    printf("%d nota(s) de R$ 2.00\n", teste);
    valor=(double)(valor-(teste*2));

    printf("MOEDAS:\n");
    valor=valor*100;
    teste=(int)(valor/100);
    printf("%d moeda(s) de R$ 1.00\n", teste);
    valor=(double)(valor-(teste*100));

    teste=(int)(valor/50);
    printf("%d moeda(s) de R$ 0.50\n", teste);
    valor=(double)(valor-(teste*50));

    teste=(int)(valor/25);
    printf("%d moeda(s) de R$ 0.25\n", teste);
    valor=(double)(valor-(teste*25));

    teste=(int)(valor/10);
    printf("%d moeda(s) de R$ 0.10\n", teste);
    valor=(double)(valor-(teste*10));

    teste=(int)(valor/5);
    printf("%d moeda(s) de R$ 0.05\n", teste);
    valor=(double)(valor-(teste*5));

    teste=(int)(valor/1);
    printf("%d moeda(s) de R$ 0.01\n", teste);
    valor=(double)(valor-(teste*1));

}