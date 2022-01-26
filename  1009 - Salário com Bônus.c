#include <stdio.h>
int main(){
    double salario, montante, total;
    char nome;
    scanf("%s %lf %lf", &nome,&salario, &montante);
    total = (montante * 15) / 100 + salario;
    printf("TOTAL = R$ %.2lf\n", total);
    return 0;

}