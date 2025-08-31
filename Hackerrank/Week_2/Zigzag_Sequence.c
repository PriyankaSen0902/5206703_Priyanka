#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int x = *(const int*)a;
    int y = *(const int*)b;
    if (x < y) return -1;
    if (x > y) return 1;
    return 0;
}

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T--) {
        int n;
        if (scanf("%d", &n) != 1) return 0;

        int *a = (int*)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i) scanf("%d", &a[i]);

        qsort(a, n, sizeof(int), cmp);

        int mid = (n - 1) / 2;

        // swap mid with last element
        int tmp = a[mid];
        a[mid] = a[n - 1];
        a[n - 1] = tmp;

        // reverse from mid+1 to n-2
        int i = mid + 1, j = n - 2;
        while (i < j) {
            tmp = a[i]; a[i] = a[j]; a[j] = tmp;
            i++; j--;
        }

        for (int k = 0; k < n; ++k) {
            if (k) printf(" ");
            printf("%d", a[k]);
        }
        printf("\n");

        free(a);
    }
    return 0;
}
