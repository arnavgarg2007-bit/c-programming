#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];
    long size;

    printf("Enter file name: ");
    scanf("%s", name);

    fp = fopen(name, "r");

    if (fp == NULL) {
        printf("File does not exist.\n");
        return 0;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    if (size == 0)
        printf("File is empty.\n");
    else
        printf("File has some text.\n");

    fclose(fp);
    return 0;
}
