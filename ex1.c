#include<stdio.h>
int main (){
    int vet[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &vet[i]);
    }
    printf("%d\n", vet[0]);
    printf("%d\n", vet[1]);
    printf("%d\n", vet[2]);
    printf("\n");
    
    return 0;
