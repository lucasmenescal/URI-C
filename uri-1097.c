#include <stdio.h>
#include <stdlib.h>

void main(){
    int i=1;
    int j=7;
    int x=4;
    while (i<10){
        while (j>x){
            printf("I=%d",i);
            printf(" J=%d",j);
            printf("\n");
            j--;
        }
        i=i+2;
        j=j+5;
        x=j-3;
}

}