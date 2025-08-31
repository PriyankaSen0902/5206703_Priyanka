#include <stdio.h>
#include <stdlib.h>

int* dynamicArray(int n, int queries_count, int queries[queries_count][3], int* result_count) {
    // Create an array of n pointers (each points to dynamic array)
    int** arr = (int**)malloc(n * sizeof(int*));
    int* sizes = (int*)calloc(n, sizeof(int));   // track current sizes
    int* capacity = (int*)calloc(n, sizeof(int)); // track capacity of each list
    
    for (int i = 0; i < n; i++) {
        arr[i] = NULL;  // initially empty
        sizes[i] = 0;
        capacity[i] = 0;
    }

    int lastAnswer = 0;
    int* answers = (int*)malloc(queries_count * sizeof(int));
    *result_count = 0;  // number of type 2 queries handled

    for (int i = 0; i < queries_count; i++) {
        int type = queries[i][0];
        int x = queries[i][1];
        int y = queries[i][2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            // append y to arr[idx]
            if (sizes[idx] == capacity[idx]) {
                capacity[idx] = capacity[idx] == 0 ? 2 : capacity[idx] * 2;
                arr[idx] = (int*)realloc(arr[idx], capacity[idx] * sizeof(int));
            }
            arr[idx][sizes[idx]++] = y;
        } 
        else if (type == 2) {
            int value = arr[idx][y % sizes[idx]];
            lastAnswer = value;
            answers[*result_count] = lastAnswer;
            (*result_count)++;
        }
    }

    return answers;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int queries[q][3];
    for (int i = 0; i < q; i++) {
        scanf("%d %d %d", &queries[i][0], &queries[i][1], &queries[i][2]);
    }

    int result_count;
    int* result = dynamicArray(n, q, queries, &result_count);

    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    // Free allocated memory
    free(result);

    return 0;
}

