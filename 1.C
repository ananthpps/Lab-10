#include <stdio.h>

int main()
{
    FILE *fp;
    char sentence[200];

    fp = fopen("1.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open the file.");
        return 1;
    }

    fgets(sentence, sizeof(sentence), fp);

    printf("Sentence from file:\n");
    printf("%s", sentence);

    fclose(fp);

    return 0;
}
