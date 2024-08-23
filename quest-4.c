#include <stdio.h>

int main() {
    float matriz[3][3]; 
    float *p;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = (float)(i * 3 + j) * 1.5f; 
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            p = &matriz[i][j];
            printf("Endereço da posição (%d, %d): %p\n", i, j, (void *)p);
        }
    }

    return 0;
}
