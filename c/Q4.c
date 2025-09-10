#include <stdio.h>

int main() {
    int n, i, num, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++) {
        if(arr[i] == num) {
            printf("Element %d found at position %d\n", num, i+1);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Element %d not found in the array\n", num);
    }

    return 0;
}

