#include <stdio.h>

int main() {
    int array[5]; 
    int *p = array; 

    
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para o elemento %d: ", i);
        scanf("%d", p + i); 
    }

    
    for (int i = 0; i < 5; i++) {
        printf("O dobro do valor do elemento %d é: %d\n", i, 2 * *(p + i)); 
    }

    return 0;
}
