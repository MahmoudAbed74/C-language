#include <stdio.h>

int main() {
    int arr[3][4];
    int sum[4] = {0};


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Enter number at index %d,%d: ", i, j);
            scanf("%i", &arr[i][j]);
        }
    }


    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            sum[j] += arr[i][j];
        }
    }


    for (int j = 0; j < 4; j++) {
        printf("Sum of column %d: %d\n", j + 1, sum[j]);
    }

    return 0;
}
