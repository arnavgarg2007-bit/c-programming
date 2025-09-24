#include <stdio.h>
int main() {
    char str[200];
    int i, alphabets = 0, digits = 0, special = 0;
    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);
    for(i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) alphabets++;
        else if(isdigit(str[i])) digits++;
        else special++;
    }
    printf("Alphabets = %d\nDigits = %d\nSpecial characters = %d\n", alphabets, digits, special);
    return 0;
}




