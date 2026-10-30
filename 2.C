#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("2.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fp, "Hello, World!\n");

    fclose(fp);

    printf("Text written successfully.");

    return 0;
}

