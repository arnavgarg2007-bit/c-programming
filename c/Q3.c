#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist.\n");
        return 0;
    }

    printf("\nContents of the file are:\n\n");

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);
    return 0;
}
