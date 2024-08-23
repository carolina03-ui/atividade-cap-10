#include <stdio.h>

int main() {
    float array[10]; 
    float *p; 

    for (int i = 0; i < 10; i++) {
        array[i] = (float)i * 1.1f; 
    }

    for (int i = 0; i < 10; i++) {
        p = &array[i]; 
        printf("Endereço do elemento %d: %p\n", i, (void *)p);
    }

    return 0;
}

