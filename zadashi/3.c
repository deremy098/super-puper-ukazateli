#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *a = malloc(50);
    fgets(a, 50, stdin);
    a[strcspn(a, "\n")] = 0;
    puts(a);
    free(a);
}