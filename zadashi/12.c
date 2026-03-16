#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copy(char *s) {
    char *d = malloc(strlen(s) + 1);
    if (d) strcpy(d, s);
    return d;
}

int main() {
    char *s = copy("Здравствуйте я сделал эту работу");
    puts(s);
    free(s);
}