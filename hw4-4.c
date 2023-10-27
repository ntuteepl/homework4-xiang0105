#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h> 

#define MAX_N 10

typedef struct {
    int boy;
    int girl;
    int score;
} Couple;

int compare(const void *a, const void *b) {
    return ((Couple *)b)->score - ((Couple *)a)->score;
}

int main() {
    int n;
    scanf("%d", &n);

    int scores[MAX_N][MAX_N];
    Couple couples[MAX_N * MAX_N];

    // Read input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &scores[i][j]);
            couples[i * n + j].boy = i + 1;
            couples[i * n + j].girl = j + 1;
            couples[i * n + j].score = scores[i][j];
        }
    }

    // Sort the couples by score
    qsort(couples, n * n, sizeof(Couple), compare);

    bool boys_paired[MAX_N] = {false};
    bool girls_paired[MAX_N] = {false};

    // Pair boys with girls
    for (int i = 0; i < n * n; i++) {
        int boy = couples[i].boy - 1;
        int girl = couples[i].girl - 1;
        if (!boys_paired[boy] && !girls_paired[girl]) {
            boys_paired[boy] = true;
            girls_paired[girl] = true;
            printf("boy %d pair with girl %d\n", boy + 1, girl + 1);
        }
    }

    return 0;
}
