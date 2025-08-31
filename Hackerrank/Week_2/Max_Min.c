#include <stdio.h>
#include <stdlib.h>

// Comparator for qsort
int cmp(const void *a, const void *b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Efficient sort
    qsort(arr, n, sizeof(int), cmp);

    int mini = arr[k - 1] - arr[0];

    for (int i = 1; i <= n - k; i++) {
        int diff = arr[i + k - 1] - arr[i];
        if (diff < mini) {
            mini = diff;
        }
    }

    printf("%d\n", mini);

    free(arr);
    return 0;
}
