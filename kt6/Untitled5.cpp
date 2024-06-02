#include <stdio.h>
#include <string.h>

int main()
{
    char *filename = "pilet.txt";
    FILE *fp = fopen(filename, "r");

    if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }

    // reading line by line, max 256 bytes
    const unsigned MAX_LENGTH = 256;
    char buffer[MAX_LENGTH];

    while (fgets(buffer, MAX_LENGTH, fp)){
    char *token = strtok(buffer, " ");
    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s", token);
        token = strtok(NULL, " ");
    }
}
      //  printf("%s", buffer);

    // close the file
    fclose(fp);

    return 0;
}
