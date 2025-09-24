#include <stdio.h>
int main() {
    char str[200];
    int i, len, flag = 1;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
