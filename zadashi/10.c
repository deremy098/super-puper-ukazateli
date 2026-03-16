#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *create(int n) {
    int *a = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        a[i] = rand() % 52;
    return a;
}
int main() {
    srand(time(0));
    int *arr = create(10);
    for (int i = 0; i < 6; i++)
        printf("%d ", arr[i]);
    free(arr);
}