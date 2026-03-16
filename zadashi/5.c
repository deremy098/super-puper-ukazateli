#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[10], *b = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        a[i] = i;
        b[i] = a[i];
        printf("%d ", b[i]);
    }
    free(b);
}