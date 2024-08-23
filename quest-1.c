#include <stdio.h>

int main() {
    int var1, var2;

    int *p1 = &var1;
    int *p2 = &var2;

    if (p1 > p2) {
        printf("O maior endereço é o var1: %p\n", (void *)p1);
    } else {
        printf("O maior endereço é o var2: %p\n", (void *)p2);
    }

    return 0;
}
