#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp1, *fp2;
    int ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        fputc(toupper(ch), fp2);
    }

    printf("File contents converted to uppercase successfully.");

    fclose(fp1);
    fclose(fp2);

    return 0;
}

