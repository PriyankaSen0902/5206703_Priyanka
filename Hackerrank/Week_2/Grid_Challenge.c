#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// comparison function for qsort
int cmpfunc(const void *a, const void *b) {
    return (*(char*)a - *(char*)b);
}

const char* gridChallenge(int n, char grid[n][n+1]) {
    // Step 1: Sort each row
    for (int i = 0; i < n; i++) {
        qsort(grid[i], n, sizeof(char), cmpfunc);
    }

    // Step 2: Check columns
    for (int col = 0; col < n; col++) {
        for (int row = 0; row < n - 1; row++) {
            if (grid[row][col] > grid[row + 1][col]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        char grid[n][n+1];  // each string has n chars + '\0'

        for (int i = 0; i < n; i++) {
            scanf("%s", grid[i]);
        }

        printf("%s\n", gridChallenge(n, grid));
    }
    return 0;
}
