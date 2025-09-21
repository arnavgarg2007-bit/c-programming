#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int a[n][n];
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int sum = 0;
    int product = 1;

    for(int i = 0; i < n; i++) {
        sum += a[i][n - 1 - i];
        product *= a[i][n - 1 - i];
    }

    printf("Sum of anti-diagonal elements = %d\n", sum);
    printf("Product of anti-diagonal elements = %d\n", product);

    return 0;
}
