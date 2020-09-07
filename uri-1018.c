#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, teste;
    scanf("%d",&valor);
    printf("%d\n", valor);
//teste 100----------------------------------------------------------------------------
    teste=((double)valor)/100;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 100,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 100,00\n", teste);
    }
    valor=valor-((int)teste*100);
//teste 50-----------------------------------------------------------------------------
    teste=((double)valor)/50;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 50,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 50,00\n", teste);
    }
    valor=valor-((int)teste*50);
//teste 20-----------------------------------------------------------------------------
    teste=((double)valor)/20;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 20,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 20,00\n", teste);
    }
    valor=valor-((int)teste*20);
//teste 10-----------------------------------------------------------------------------
    teste=((double)valor)/10;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 10,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 10,00\n", teste);
    }
    valor=valor-((int)teste*10);
//teste 5-----------------------------------------------------------------------------
    teste=((double)valor)/5;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 5,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 5,00\n", teste);
    }
    valor=valor-((int)teste*5);
//teste 2-----------------------------------------------------------------------------
    teste=((double)valor)/2;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 2,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 2,00\n", teste);
    }
    valor=valor-((int)teste*2);
//teste 1-----------------------------------------------------------------------------
    teste=((double)valor)/1;
    if ((int)teste<=0){
        printf("%d nota(s) de R$ 1,00\n", teste);
    }
    if((int)teste>0){
        printf("%d nota(s) de R$ 1,00\n", teste);
    }
    valor=valor-((int)teste*1);
}