#include<stdio.h>
int main(){
    int A, B, C, MAIORAB, MAIORABC;
    scanf("%d %d %d", &A, &B, &C);
    MAIORAB = (A + B + abs(A - B)) / 2;
    MAIORABC = (MAIORAB + C + abs(MAIORAB - C)) /2; 
    printf("%d eh o maior\n", MAIORABC);
    return 0;
}