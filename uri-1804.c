#include <stdio.h>

int potencia (int n)
{
    while (n > 1) {
        if (n % 2 != 0) {
            return -1;
        }
        else {
            n /= 2;
        }
    }
    return 1;
}

int main()
{
    int N, i, buggy, totalPessoas = 0, posicao, aux, j;
    char opcao[2];
    scanf("%d", &N);
    int buggies[N], vetorsoma[N], arvore[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &buggies[i]);
        totalPessoas += buggies[i];
        vetorsoma[i] = totalPessoas;
        arvore[i] = 0;
    }
    for (i = 0; i < N; i += 2) {
        arvore[i] = buggies[i];
    }
    for (i = 2; i < N; i *= 2) {
        arvore[i - 1] = vetorsoma[i - 1];
    }
    for (i = 5; i < N; i += 2) {
        posicao = i + 1;
        if (potencia(posicao) == -1) {
            posicao -= (posicao & -posicao);
            for (j = posicao; j < i + 1; j++) {
                arvore[i] += buggies[j];
            }
        }
    }
    while (scanf("%s %d", opcao, &buggy) != EOF) {
        if (opcao[0] == '?') {
            totalPessoas = 0;
            buggy--;
            while (buggy > 0) {
                totalPessoas += arvore[buggy - 1];
                buggy -= (buggy & -buggy);
            }
        printf("%d\n", totalPessoas);
        }
        else {
            if (opcao[0] == 'a') {
                aux = buggies[buggy - 1];
                while (buggy < N) {
                    arvore[buggy - 1] -= aux;
                    buggy += (buggy & -buggy);
                }
            }
        }
    }
    return 0;
}