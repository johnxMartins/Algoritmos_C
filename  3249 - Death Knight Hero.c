#include <stdio.h>
#include <string.h>

int main() {
    
    int n, i, contador = 0;
    char word[1010];
    
    scanf("%d ", &n);
    for (i = 0; i < n; i++) {
        scanf("%s", word);
        if (strstr(word,"CD") != NULL)
            contador++;
    }
    
    printf("%d\n", n-contador);

    return 0;
}