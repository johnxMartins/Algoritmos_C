#include<stdio.h>
int main(){
    int vetorN[20];
    int i, j;
    for (i = 0; i < 20; i++)
    {
        scanf("%d", &vetorN[i]);
    }
    j = 20;
    for (i = 20  -1; i >= 0; i--){
        j = j - 1;
        printf("N[%d] = %d\n", j, vetorN[i]);
    }   
    return 0;
}