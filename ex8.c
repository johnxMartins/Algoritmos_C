#include<stdio.h>
int main(){
    double vetorA[100];
    int i;
    for (i = 0; i <= 99; i++)
    {
        scanf("%lf", &vetorA[i]);
    }
    for (i = 0; i <= 99; i++)
    {
        if (vetorA[i] <= 10.0)
        {
            printf("A[%d] = %.1lf\n", i, vetorA[i]);
        }
    }
    return 0;
}