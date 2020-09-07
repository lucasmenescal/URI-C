#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, cod;
    double res;
    scanf("%d %d", &cod, &n);

    switch (cod)
    {
        case 1:
            res = 4.00*n;
            printf("Total: R$ %.2lf\n", res);
        break;
        case 2:
            res = 4.50*n;
            printf("Total: R$ %.2lf\n", res);
        break;
        case 3:
            res = 5.00*n;
            printf("Total: R$ %.2lf\n", res);
        break;
        case 4:
            res = 2.00*n;
            printf("Total: R$ %.2lf\n", res);
        break;
        case 5:
            res = 1.50*n;
            printf("Total: R$ %.2lf\n", res);
        break;
    }
    return 0;
}