#include <stdio.h>
int main()
{
    int cod, q;
    double valor;

    scanf("%d %d", &cod, &q);

    if (cod == 1){
        valor = 4.00;
    }
    if (cod == 2){
        valor = 4.50;
    }
    if (cod == 3){
        valor = 5.00;
    }
    if (cod == 4){
        valor = 2.00;
    }
    if (cod == 5){
        valor = 1.50;
    }

    printf("Total: R$ %.2lf\n", valor*q);

    return 0;
}