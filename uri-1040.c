#include <stdio.h>
#include <stdlib.h>

int main(){
    float N1, N2, N3, N4, media, remedia;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);

    media = ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;

    if (media>=7.0){
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        exit(0);
    }
    if (media>=5.0 && media<=6.9){
        printf("Media: %.1f\n", media);
        printf("Aluno em exame.\n");
        scanf("%f", &remedia);
        media=(media+remedia)/2;
        if (media>=5.0){
            printf("Nota do exame: %.1f\n", remedia);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", media);
            exit(0);
        }
            if (media<5.0){
            printf("Nota do exame: %.1f\n", remedia);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", media);
            exit(0);
        }
    }
    if (media<5.0){
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
    }
    return 0;
}