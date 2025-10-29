#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char ch;
    int words = 0, characters = 0, inWord = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("File does not exist.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (isspace(ch))
            inWord = 0;
        else if (inWord == 0) {
            inWord = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);

    return 0;
}
