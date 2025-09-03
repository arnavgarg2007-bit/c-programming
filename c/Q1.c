#include <stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a % 2 == 0) {
        printf("\n%d", a * a);
    } else {
        printf("\n%d", a * a * a);
    }

    if (b % 2 == 0) {
        printf("\n%d", b * b);
    } else {
        printf("\n%d", b * b * b);
    }

    return 0;
}



     


    
    
    
