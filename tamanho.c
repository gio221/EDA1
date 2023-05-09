#include <stdio.h>
#include <string.h>

int main() {
    char string[1001];
    int tamanho;

    scanf("%s", string); 
    tamanho = strlen(string); 

    printf("%d\n", tamanho); 

    return 0;
}