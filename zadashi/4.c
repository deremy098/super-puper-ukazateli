#include <stdio.h>
#include <stdlib.h>

int main() {
    float *arr = calloc(5, sizeof(float));
    for (int i = 2; i < 5; i++)
        printf("%.1f ", arr[i]);
    free(arr);
}