#include <stdio.h>
#include <stdlib.h>

int main(){
    int segundos, minutos, horas;
    scanf("%d", &segundos);
    minutos=segundos/60;
    horas=minutos/60;
//teste segundos---------------------------------------------------------
    if (segundos>60){
        minutos=(int)(segundos/60);
        segundos=segundos-(minutos*60);
    }
//teste minutos----------------------------------------------------------
    if (minutos>60){
        horas=(int)(minutos/60);
        minutos=minutos-(horas*60);
    }
    printf("%d:%d:%d\n", horas,minutos,segundos);
}
