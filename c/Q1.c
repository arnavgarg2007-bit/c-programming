#include <stdio.h>
int main() {
    int a[3][3], i, j, rowSum, colSum;

    printf("Enter elements of 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nSum of each row:\n");
    for(i = 0; i < 3; i++) {
        rowSum = 0;
        for(j = 0; j < 3; j++) {
            rowSum += a[i][j];
        }
        printf("Row %d = %d\n", i+1, rowSum);
    }

    printf("\nSum of each column:\n");
    for(j = 0; j < 3; j++) {
        colSum = 0;
        for(i = 0; i < 3; i++) {
            colSum += a[i][j];
        }
        printf("Column %d = %d\n", j+1, colSum);
    }

    return 0;
}
