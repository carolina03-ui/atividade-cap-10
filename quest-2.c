#include <stdio.h>

int main() {
    int var1, var2;
    int *p1 = &var1; 
    int *p2 = &var2; 

    printf("Digite o valor de var1: ");
    scanf("%d", &var1);

    printf("Digite o valor de var2: ");
    scanf("%d", &var2);

    if (p1 > p2) {
        printf("O conteúdo do maior endereço é: %d\n", *p1);
    } else {
        printf("O conteúdo do maior endereço é: %d\n", *p2);
    }

    return 0;
}

