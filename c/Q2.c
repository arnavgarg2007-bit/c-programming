#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Unique elements are:\n");
    for(i = 0; i < n; i++) {
        count = 0;

        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j] && i != j) {
                count++;
                break;  
            }
        }

        if(count == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}

    