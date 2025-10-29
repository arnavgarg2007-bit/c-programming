#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == ' ')
            count++;
    }

    printf("Number of spaces in the file: %d\n", count);

    fclose(fp);
    return 0;
}
