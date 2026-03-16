#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **p = malloc(5 * sizeof(int*));
    for (int i = 0; i < 4; i++)
        p[i] = malloc(5 * sizeof(int));
    
    srand(time(0));
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            p[i][j] = rand() % 30;
            printf("%3d ", p[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < 5; i++) free(p[i]);
    free(p);
}