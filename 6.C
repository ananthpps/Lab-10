#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    int n, ch;
    long size, start;

    printf("Enter file name: ");
    scanf("%99s", filename);

    printf("Enter n value: ");
    scanf("%d", &n);

    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    size = ftell(fp);

    if (n > size)
        n = size;

    start = size - n;

    fseek(fp, start, SEEK_SET);

    printf("\nLast %d characters of the file:\n", n);

    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
