#include <stdio.h>
#include <stdlib.h>
int vet[101];
int i;
void main()
{
    for (i=1;i<101;i++){
        vet[i]=i;
        //int x;
        //x= vet[i];
        if (vet[i]%2==0){
            printf("%d\n", vet[i]);
        }
    }
    //system("pause");
    //return 0;
}