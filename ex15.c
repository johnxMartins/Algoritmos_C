#include<stdio.h>
int main(){
    int km;
    float gas, result;
    scanf("%d %f", &km, &gas);
    result = km / gas;
    printf("%.3f km/l\n", result);
    return 0;
}