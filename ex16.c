#include<stdio.h>
int main(){
    float N1, N2, N3, N4, MEDIA, EXAME, MEDIAFINAL;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    MEDIA = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;

    if (MEDIA >= 7.0){
        printf("Media: %.1f\n", MEDIA);
        printf("Aluno aprovado.\n");
    } else{
        if (MEDIA >= 5.0){
            scanf("%f", &EXAME);
            MEDIAFINAL = (EXAME + MEDIA) / 2;
            if (EXAME >= 5.0){
                printf("Media: %.1f\n", MEDIA);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", EXAME);
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", MEDIAFINAL);
            } else{
                printf("Media: %.1f\n", MEDIA);
                printf("Aluno em exame.\n");
                printf("Nota do exame: %.1f\n", EXAME);
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", MEDIAFINAL);
            }
        } else {
            printf("Media: %.1f\n", MEDIA);
            printf("Aluno reprovado.\n");
        }
    }
    return 0;
}