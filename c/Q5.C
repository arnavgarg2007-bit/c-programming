#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  
    }

    
    avg = sum / n;

    printf("The average of %d numbers is: %.2f\n", n, avg);

    return 0;
}
