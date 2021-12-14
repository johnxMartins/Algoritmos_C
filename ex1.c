#include <stdio.h>
int main (){
    int input[3],sorting[3], i, j, temp;
    for(i = 0; < 3; i++){
        scanf("%d", &input[i]);
        sorting[i] = input[i];
    }
    for(i = 0; i < 2; i++){
        for(j = i+1; j < 3; j++){
            if(sorting[i] > sorting[j]){
                temp = sorting[j];
                sorting[j] = sorting[i];
                sorting[i] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
        printf("%d\n",sorting[i]);
    
    printf("\n");
    
    for (i = 0; i < 3; i++)
        printf("%d\n",input[i]);
    
    return 0;
}