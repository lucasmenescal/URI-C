#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias, meses, anos;
    scanf("%d", &dias);
    anos=dias/365;
    meses=dias/30;


    dias=dias-(anos*365);
    meses=dias/30;
    if (dias<30){
        meses=0;
    }
    if (meses>=1){
        dias=dias-(meses*30);
    }

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
