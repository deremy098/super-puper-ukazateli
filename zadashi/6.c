#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int v, r;
    scanf("%d%d", &v, &r);
    
    int **mat = malloc(v * sizeof(int*));
    for (int i = 0; i < v; i++)
        mat[i] = malloc(r * sizeof(int));
    
    srand(time(0));
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < r; j++) {
            mat[i][j] = rand() % 100;
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < v; i++) free(mat[i]);
    free(mat);
}