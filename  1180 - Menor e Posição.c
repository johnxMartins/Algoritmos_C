#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X[N];
    int i;
    int menor, pos;

    scanf("%d", &X[0]);
    menor = X[0];
    pos = 0;

    for(i = 1; i < N; i++){
        scanf("%d", &X[i]);
        if (X[i] < menor){
            menor = X[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", pos);
    return 0;
}