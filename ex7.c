#include<stdio.h>
int main(){
    int vetorN[10]={0};
    int valor, i;
    scanf("%d", &valor);
    vetorN[0] = valor;
    for (i = 1; i < 10; i++)
    {
        valor = valor*2;
        vetorN[i] = valor;
    }
    for (i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, vetorN[i]);
    }
    return 0;
}